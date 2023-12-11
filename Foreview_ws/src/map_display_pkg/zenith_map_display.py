import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import cv2.aruco as aruco

class ArucoDetector(Node):
    def __init__(self):
        super().__init__('aruco_detector')
        self.subscription = self.create_subscription(
            Image,
            '/camera/color/image_raw',
            self.image_callback,
            10)
        self.subscription  # 防止未使用的變量警告
        self.bridge = CvBridge()

    def image_callback(self, msg):
        # 將 ROS 的影像消息轉換為 OpenCV 的影像格式
        cv_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')

        # ArUco 標記識別代碼
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
        aruco_dict = aruco.Dictionary_get(aruco.DICT_7X7_250)
        aruco_params = aruco.DetectorParameters_create()
        corners, ids, rejected = aruco.detectMarkers(gray, aruco_dict, parameters=aruco_params)
        if len(corners) > 0:
            aruco.drawDetectedMarkers(cv_image, corners, ids)

        # 顯示結果
        cv2.imshow('ArUco Markers', cv_image)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    aruco_detector = ArucoDetector()
    rclpy.spin(aruco_detector)
    aruco_detector.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
