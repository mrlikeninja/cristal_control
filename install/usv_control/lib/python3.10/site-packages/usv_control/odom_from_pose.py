#!/usr/bin/env python3
import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose, TransformStamped
from nav_msgs.msg import Odometry
from tf2_ros import TransformBroadcaster


class OdomFromPose(Node):
    def __init__(self):
        super().__init__('odom_from_pose')
        self.odom_pub = self.create_publisher(Odometry, '/odom', 10)
        self.tf_broadcaster = TransformBroadcaster(self)
        self.sub = self.create_subscription(Pose, '/model/usv/pose', self.pose_callback, 10)
        self.get_logger().info('OdomFromPose started: /model/usv/pose -> /odom + odom->base_link TF')

    def pose_callback(self, msg: Pose):
        # Publish Odometry
        odom = Odometry()
        odom.header.stamp = self.get_clock().now().to_msg()
        odom.header.frame_id = 'odom'
        odom.child_frame_id = 'base_link'
        odom.pose.pose = msg
        # Zero velocity for now (ground truth pose only)
        odom.twist.twist.linear.x = 0.0
        odom.twist.twist.angular.z = 0.0
        self.odom_pub.publish(odom)

        # Publish TF odom -> base_link
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'odom'
        t.child_frame_id = 'base_link'
        t.transform.translation.x = msg.position.x
        t.transform.translation.y = msg.position.y
        t.transform.translation.z = msg.position.z
        t.transform.rotation = msg.orientation
        self.tf_broadcaster.sendTransform(t)


def main(args=None):
    rclpy.init(args=args)
    node = OdomFromPose()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()