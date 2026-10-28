#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class CmdVelTest(Node):
    def __init__(self):
        super().__init__('cmd_vel_test')
        # Publish to /cmd_vel. This is the same topic your micro-ros FC subscribes to
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        # Run at 10Hz
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.time = 0.0
        self.get_logger().info('CmdVelTest node started. Publishing to /cmd_vel')

    def timer_callback(self):
        msg = Twist()
        # Simple test: go forward for a bit, then turn in an arc
        if self.time < 5.0:
            # Drive straight
            msg.linear.x = 0.4  # m/s
            msg.angular.z = 0.0
        elif self.time < 10.0:
            # Turn while going forward
            msg.linear.x = 0.3  # m/s
            msg.angular.z = 0.2 # rad/s
        else:
            # Stop
            msg.linear.x = 0.0
            msg.angular.z = 0.0

        self.publisher_.publish(msg)
        self.get_logger().info(f'lin.x={msg.linear.x:.2f} ang.z={msg.angular.z:.2f}')
        self.time += 0.1

def main(args=None):
    rclpy.init(args=args)
    node = CmdVelTest()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()