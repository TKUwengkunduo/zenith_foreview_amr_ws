import os
import time
import cv2
import json
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
from sensor_msgs.msg import Image  # Import for image messages
from cv_bridge import CvBridge    # Import to convert ROS Image messages to OpenCV images
from rclpy.qos import QoSProfile, QoSHistoryPolicy, QoSReliabilityPolicy
import threading

class DataCollector(Node):
    def __init__(self):
        super().__init__('data_collector')
        qos_profile = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=1,
            reliability=QoSReliabilityPolicy.BEST_EFFORT
        )
        self.subscription = self.create_subscription(
            Int32,
            'rough_angle',
            self.listener_callback,
            qos_profile)
        self.latest_data = -1
        self.lock = threading.Lock()

        # New subscription for the /camera/color/image_raw topic
        self.color_image_subscription = self.create_subscription(
            Image,
            '/camera/color/image_raw',
            self.color_image_callback,
            qos_profile)
        self.latest_color_image = None
        self.cv_bridge = CvBridge()

    def listener_callback(self, msg):
        with self.lock:
            self.latest_data = msg.data

    def color_image_callback(self, msg):
        with self.lock:
            self.latest_color_image = self.cv_bridge.imgmsg_to_cv2(msg, "bgr8")

def create_directory():
    folder_name = time.strftime("%Y%m%d_%H%M")
    if not os.path.exists(folder_name):
        os.makedirs(folder_name)
    return folder_name

def find_camera():
    index = 0
    while True:
        cap = cv2.VideoCapture(index)
        if cap is None or not cap.isOpened():
            print(f"No camera found at index {index}")
            index += 1
        else:
            print(f"Camera found at index {index}")
            return cap

def capture_and_save(data_collector, cap, folder_name):
    data_list = []  # List to hold all data entries
    while True:
        ret, frame = cap.read()
        if ret:
            timestamp = time.strftime("%Y%m%d_%H%M%S")
            filename = f"{folder_name}/{timestamp}.png"
            cv2.imwrite(filename, frame)
            print(f"Captured {filename}")

            with data_collector.lock:
                data_to_save = data_collector.latest_data if data_collector.latest_data is not None else -1
                color_image = data_collector.latest_color_image

            # Save the color image from the ROS topic
            if color_image is not None:
                color_image_filename = f"{folder_name}/zenith_{timestamp}.png"
                cv2.imwrite(color_image_filename, color_image)
                print(f"Captured color image {color_image_filename}")

            # Create a dictionary for the current data
            filename = f"{timestamp}.png"
            color_image_filename = f"zenith_{timestamp}.png"
            data_entry = {
                "image": filename,
                "color_image": color_image_filename if color_image is not None else None,
                "input_direction": data_to_save,
                "output_direction": 9999
            }
            data_list.append(data_entry)

            # Write the JSON data to file
            with open(f"{folder_name}/data.json", "w") as json_file:
                json.dump(data_list, json_file, indent=4)

        time.sleep(1)

def main():
    rclpy.init(args=None)
    data_collector = DataCollector()
    cap = find_camera()
    folder_name = create_directory()

    capture_thread = threading.Thread(target=capture_and_save, args=(data_collector, cap, folder_name), daemon=True)
    capture_thread.start()

    try:
        rclpy.spin(data_collector)
    except KeyboardInterrupt:
        print("Program interrupted, releasing resources...")
    finally:
        cap.release()
        rclpy.shutdown()
        print("Resources released and ROS node shut down.")

if __name__ == "__main__":
    main()
