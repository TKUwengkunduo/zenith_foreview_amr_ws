###### Create a docker environment
```js
cd zenith_foreview_amr_ws/ubuntu_docker/jetson_ros2/
./build.sh
./run.sh
```

###### Interpretation Workspace
```js
cd Foreview_ws/
colcon build
source install/setup.bash
```

###### Privilege Settings
```js
sudo chmod 777 /dev/ttyUSB0
sudo chmod 777 /dev/ttyUSB1
```

###### Start motor node
```js
source install/setup.bash
python3 src/dynamixel_controller_pkg/DYNAMIXEL_Controller_v1.py
```

###### Activate remote control node
```js
source install/setup.bash
python3 src/remote_controller_pkg/fs_i6.py
```
