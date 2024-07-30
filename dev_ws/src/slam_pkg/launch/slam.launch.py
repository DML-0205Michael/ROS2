import os

from ament_index_python.packages import get_package_share_directory # 查询功能包路径的方法

from launch import LaunchDescription           # launch文件的描述类
from launch_ros.actions import Node            # 节点启动的描述类
from launch.actions import ExecuteProcess

def generate_launch_description():             # 自动生成launch文件的函数
    # rviz_config = os.path.join(          # 找到配置文件的完整路径
    #   get_package_src_directory('slam_pkg'),
    #   'rviz',
    #   'slam_rviz.rviz'
    #   )
    
    return LaunchDescription([                 # 返回launch文件的描述信息
        
        # start micro ros
        ExecuteProcess(
            cmd=['ros2','run','micro_ros_agent','micro_ros_agent','serial','--dev','/dev/ttyUSB0','-b','460800'],
            # output='screen'
        ),

        # start from_ard
        Node(                                  # 配置一个节点的启动
            package='ard_com',          # 节点所在的功能包
            executable='from_ard', # 节点的可执行文件
        ),

        # start LD19 Lidar
        ExecuteProcess(
            cmd=['ros2','launch','ldlidar_stl_ros2','ld19.launch.py'],
            # output='screen'
        ),
        
        # ExecuteProcess(
        #     cmd=['ros2','launch','ldlidar_stl_ros2','viewer_ld19.launch.py'],
        #     # output='screen'
        # ),

        # start slam-toolbox
        ExecuteProcess(
            cmd=['ros2','launch','nav2_bringup','navigation.launch.py'],
            # output='screen'
        ),

        # start slam-toolbox
        # ExecuteProcess(
        #     cmd=['ros2','launch','slam_toolbox','online_sync_launch.py'],
        #     # output='screen'
        # ),
        Node(                                  # 配置一个节点的启动
            package='slam_toolbox',          # 节点所在的功能包
            executable='async_slam_toolbox_node', # 节点的可执行文件
            name='slam_toolbox',
            parameters=[
                {'use_sim_time': False},
                {'slam_toolbox_params_file': '/home/ubuntu/ROS2/dev_ws/src/slam_pkg/config/online_async.yaml'}
            ]
            # remappings=[('odom','odom_combined')]
        ),

        # start rviz2
        ExecuteProcess(
            cmd=['rviz2','-d','/home/ubuntu/ROS2/dev_ws/src/slam_pkg/rviz/slam_rviz.rviz'],
            # output='screen'
        ),
    ])