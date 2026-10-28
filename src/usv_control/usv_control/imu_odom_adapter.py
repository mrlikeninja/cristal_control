#!/usr/bin/env python3
"""Adapt the Xsens MTi-670 driver output to what robot_localization needs.

The driver publishes /odometry as a *sensor measurement*, not as vehicle
odometry:

  header.frame_id = local_enu     (fixed ENU frame, origin = first fix)
  child_frame_id  = imu_link
  pose            = position + attitude in that local ENU frame
  twist.linear    = velocity in BODY axes
  twist.angular   = gyro in body axes

robot_localization wants (a) continuous odom -> base_link with world-frame
velocity, and (b) an absolute map-frame position from GNSS. This node produces:

  /odom              odom -> base_link, world-frame twist   (continuous)
  /gnss/velocity_enu TwistStamped, world-frame velocity     (optional input)
  /gnss/odometry_map Odometry in the map frame              (absolute pin)

Design notes:
  * local_enu and odom are treated as coincident at startup. Both originate at
    the first valid fix, so this is a pure rename of the frame, which is honest
    for a local-fix frame. map is the global frame owned by the map EKF.
  * The IMU is not at the vehicle origin. EKF inputs must refer to base_link,
    so the measured position is shifted by -R * lever_arm. The velocity is
    rotated from body to world axes at the same time.
"""
import math

import rclpy
from geometry_msgs.msg import TwistStamped
from nav_msgs.msg import Odometry
from rclpy.node import Node
from rclpy.qos import QoSHistoryPolicy, QoSProfile, QoSReliabilityPolicy
from transforms3d.euler import quat2euler
from transforms3d.quaternions import quat2mat, mat2quat, qmult


def rotate(q, v):
    """Rotate vector v by quaternion q ([w, x, y, z])."""
    m = quat2mat(q)
    return (
        m[0][0] * v[0] + m[0][1] * v[1] + m[0][2] * v[2],
        m[1][0] * v[0] + m[1][1] * v[1] + m[1][2] * v[2],
        m[2][0] * v[0] + m[2][1] * v[1] + m[2][2] * v[2],
    )


def yaw_only(q):
    """Reduce a quaternion to its yaw, returning a planar quaternion."""
    yaw = quat2euler(q)[2]
    return (math.cos(yaw / 2.0), 0.0, 0.0, math.sin(yaw / 2.0))


class ImuOdomAdapter(Node):
    def __init__(self):
        super().__init__('imu_odom_adapter')

        # Position of the IMU relative to base_link, in base_link axes.
        # [x, y, z] metres. Set these to your measured mounting offset.
        self.declare_parameter('lever_arm_x', 0.0)
        self.declare_parameter('lever_arm_y', 0.0)
        self.declare_parameter('lever_arm_z', 0.0)

        # The driver's frames.
        self.declare_parameter('input_odom_topic', '/odometry')
        self.declare_parameter('input_frame', 'local_enu')
        self.declare_parameter('input_child_frame', 'imu_link')

        # Output frame names matching the EKF configuration.
        self.declare_parameter('odom_frame', 'odom')
        self.declare_parameter('base_link_frame', 'base_link')
        self.declare_parameter('map_frame', 'map')

        # Reject absurd GNSS jumps rather than poisoning the filter.
        self.declare_parameter('max_position_jump', 5.0)

        self.lever = (
            self.get_parameter('lever_arm_x').value,
            self.get_parameter('lever_arm_y').value,
            self.get_parameter('lever_arm_z').value,
        )
        input_topic = self.get_parameter('input_odom_topic').value
        self.odom_frame = self.get_parameter('odom_frame').value
        self.base_frame = self.get_parameter('base_link_frame').value
        self.map_frame = self.get_parameter('map_frame').value
        self.max_jump = self.get_parameter('max_position_jump').value

        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10,
        )

        self.odom_pub = self.create_publisher(Odometry, '/odom', 10)
        self.vel_pub = self.create_publisher(TwistStamped, '/gnss/velocity_enu', 10)
        self.map_pub = self.create_publisher(Odometry, '/gnss/odometry_map', 10)

        self.sub = self.create_subscription(
            Odometry, input_topic, self.on_odom, qos)

        self.last_pos = None
        self.skipped = 0

        self.get_logger().info(
            f'imu_odom_adapter: {input_topic} -> /odom ({self.odom_frame} -> '
            f'{self.base_frame}), lever arm {self.lever}')

    def on_odom(self, msg: Odometry):
        p = msg.pose.pose.position
        q = msg.pose.pose.orientation
        quat = (q.w, q.x, q.y, q.z)

        # Guard against GNSS discontinuities reaching the filter.
        if self.last_pos is not None:
            d = math.dist((p.x, p.y, p.z), self.last_pos)
            if d > self.max_jump:
                self.skipped += 1
                self.get_logger().warn(
                    f'Rejected odometry jump of {d:.2f} m '
                    f'(total skipped: {self.skipped})',
                    throttle_duration_sec=2.0)
                return
        self.last_pos = (p.x, p.y, p.z)

        # Shift the measured point from the IMU to base_link:
        #   p_base = p_imu - R * lever_arm
        rl = rotate(quat, self.lever)
        base_x = p.x - rl[0]
        base_y = p.y - rl[1]
        base_z = p.z - rl[2]

        # Body-frame twist -> world frame, as robot_localization requires.
        v = msg.twist.twist.linear
        vw = rotate(quat, (v.x, v.y, v.z))
        w = msg.twist.twist.angular

        # The USV is planar; a yaw-only quaternion keeps roll/pitch from
        # coupling into the 2D filter through the TF chain.
        planar = yaw_only(quat)

        odom = Odometry()
        odom.header.stamp = msg.header.stamp
        odom.header.frame_id = self.odom_frame
        odom.child_frame_id = self.base_frame
        odom.pose.pose.position.x = base_x
        odom.pose.pose.position.y = base_y
        odom.pose.pose.position.z = base_z
        odom.pose.pose.orientation.w = planar[0]
        odom.pose.pose.orientation.x = planar[1]
        odom.pose.pose.orientation.y = planar[2]
        odom.pose.pose.orientation.z = planar[3]
        odom.twist.twist.linear.x = vw[0]
        odom.twist.twist.linear.y = vw[1]
        odom.twist.twist.linear.z = vw[2]
        odom.twist.twist.angular.z = w.z
        # Covariances: the driver fills these with zeros, which would tell the
        # EKF the measurement is perfect. Use modest values instead.
        for i in (0, 7, 14, 21, 28, 35):
            odom.pose.covariance[i] = 0.5
        for i in (0, 7, 14, 21, 28, 35):
            odom.twist.covariance[i] = 0.1
        self.odom_pub.publish(odom)

        # World-frame velocity as an explicit twist input.
        ts = TwistStamped()
        ts.header.stamp = msg.header.stamp
        ts.header.frame_id = self.odom_frame
        ts.twist.linear.x = vw[0]
        ts.twist.linear.y = vw[1]
        ts.twist.linear.z = vw[2]
        ts.twist.angular.z = w.z
        self.vel_pub.publish(ts)

        # Absolute position for the map-frame filter. Because local_enu and odom
        # share an origin, the same numbers are valid to report against map.
        gm = Odometry()
        gm.header.stamp = msg.header.stamp
        gm.header.frame_id = self.map_frame
        gm.child_frame_id = self.base_frame
        gm.pose.pose.position.x = base_x
        gm.pose.pose.position.y = base_y
        gm.pose.pose.position.z = base_z
        gm.pose.pose.orientation = odom.pose.pose.orientation
        for i in (0, 7, 14, 21, 28, 35):
            gm.pose.covariance[i] = 1.5
        self.map_pub.publish(gm)


def main(args=None):
    rclpy.init(args=args)
    node = ImuOdomAdapter()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
