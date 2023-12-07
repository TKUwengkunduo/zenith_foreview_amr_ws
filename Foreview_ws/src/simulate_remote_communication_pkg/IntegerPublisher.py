import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import time

class IntegerPublisher(Node):
    def __init__(self):
        super().__init__('integer_publisher')
        self.publisher_ = self.create_publisher(Int32, 'rough_angle', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.count = 1

    def timer_callback(self):
        msg = Int32()
        msg.data = self.count
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: {self.count}')
        self.count += 1

def main(args=None):
    rclpy.init(args=args)
    integer_publisher = IntegerPublisher()

    try:
        rclpy.spin(integer_publisher)
    except KeyboardInterrupt:
        pass

    integer_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
