import os
import time
import cv2
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
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

    def listener_callback(self, msg):
        with self.lock:
            self.latest_data = msg.data

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
    while True:
        ret, frame = cap.read()
        if ret:
            timestamp = time.strftime("%Y%m%d_%H%M%S")
            filename = f"{folder_name}/{timestamp}.png"
            cv2.imwrite(filename, frame)
            print(f"Captured {filename}")

            with data_collector.lock:
                data_to_save = data_collector.latest_data if data_collector.latest_data is not None else -1

            with open(f"{folder_name}/data.txt", "a") as file:
                file.write(f"{filename}: {data_to_save}\n")
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
