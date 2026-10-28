#!/usr/bin/env python3
import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from transforms3d.euler import quat2euler


class WaypointFollower(Node):
    def __init__(self):
        super().__init__('waypoint_follower')

        # Publisher to drive the boat
        self.cmd_pub = self.create_publisher(Twist, 'cmd_vel', 10)

        # Subscriber to get current pose
        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10
        )

        # Waypoints in odom frame (meters)
        self.waypoints = [(6.0, 0.0), (6.0, 6.0), (0.0, 6.0), (0.0, 0.0)]
        self.current_waypoint_index = 0

        # Control gains (start conservative)
        self.k_linear = 0.4   # m/s per meter of distance
        self.k_angular = 0.7  # rad/s per radian of heading error

        # Limits
        self.max_linear = 0.3
        self.max_angular = 0.4

        # Tolerances
        self.dist_threshold = 0.2  # meters to consider "reached"

        # Current state
        self.current_x = 0.0
        self.current_y = 0.0
        self.current_yaw = 0.0
        self.have_pose = False

        # Run at 10Hz
        self.timer = self.create_timer(0.1, self.control_loop)
        self.get_logger().info('WaypointFollower started. Heading to (3.0, 0.0)')

    def odom_callback(self, msg: Odometry):
        # Get position
        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y

        # Get yaw from quaternion
        q = msg.pose.pose.orientation
        quat = [q.w, q.x, q.y, q.z]
        (_, _, yaw) = quat2euler(quat)
        self.current_yaw = yaw
        self.have_pose = True

    def control_loop(self):
        if not self.have_pose:
            return

        if self.current_waypoint_index >= len(self.waypoints):
            # All waypoints done, stop
            cmd = Twist()
            cmd.linear.x = 0.0
            cmd.angular.z = 0.0
            self.cmd_pub.publish(cmd)
            self.get_logger().info('All waypoints reached! Stopping.', throttle_duration_sec=2.0)
            return

        goal_x, goal_y = self.waypoints[self.current_waypoint_index]

        # Vector to goal
        dx = goal_x - self.current_x
        dy = goal_y - self.current_y

        # Distance to goal
        dist = math.sqrt(dx*dx + dy*dy)

        if dist < self.dist_threshold:
            self.get_logger().info(f'Reached waypoint {self.current_waypoint_index} at ({goal_x}, {goal_y})')
            self.current_waypoint_index += 1
            return

        # Angle to goal (in world frame)
        angle_to_goal = math.atan2(dy, dx)

        # Heading error (normalize to [-pi, pi])
        heading_error = angle_to_goal - self.current_yaw
        heading_error = math.atan2(math.sin(heading_error), math.cos(heading_error))

        cmd = Twist()

        # If we're facing roughly towards goal, drive forward. Otherwise prioritize turning
        if abs(heading_error) > 0.4:  # ~23 degrees
            cmd.linear.x = 0.0
            cmd.angular.z = max(-self.max_angular, min(self.max_angular, self.k_angular * heading_error))
        else:
            # Drive and correct heading slightly
            cmd.linear.x = max(0.0, min(self.max_linear, self.k_linear * dist))
            cmd.angular.z = max(-self.max_angular, min(self.max_angular, self.k_angular * heading_error))

        self.cmd_pub.publish(cmd)
        self.get_logger().info(
            f'Dist: {dist:.2f}m | HeadingErr: {heading_error:.2f}rad | lin:{cmd.linear.x:.2f} ang:{cmd.angular.z:.2f}',
            throttle_duration_sec=1.0
        )


def main(args=None):
    rclpy.init(args=args)
    node = WaypointFollower()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()