import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ubuntu/ROS2/microros_ws/firmware/dev_ws/install/ament_uncrustify'
