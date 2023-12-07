#!/bin/bash


# 在新標籤中執行第一個 ROS2 命令
gnome-terminal --tab -- bash -c "source install/setup.bash; python3 src/dynamixel_controller_pkg/DYNAMIXEL_Controller_v1.py; exec bash"

# 在新標籤中執行第二個 ROS2 命令
# gnome-terminal --tab -- bash -c "source install/setup.bash; ros2 run package2 node2; exec bash"

# 在新標籤中執行第三個 ROS2 命令
# gnome-terminal --tab -- bash -c "source install/setup.bash; ros2 run package3 node3; exec bash"

