import os

from ament_index_python.packages import get_package_share_directory # 查询功能包路径的方法

from launch import LaunchDescription           # launch文件的描述类
from launch_ros.actions import Node            # 节点启动的描述类
from launch.actions import ExecuteProcess, TimerAction

def generate_launch_description():             # 自动生成launch文件的函数
    
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
        
        # start nav2
        ExecuteProcess(
            cmd=['ros2','launch','nav2_bringup','bringup_launch.py','use_sim_time:=false',
                 'autostart:=true',
                 'map:=/home/ubuntu/ROS2/dev_ws/src/slam_pkg/map/NISW.yaml'
                 ],
            output='screen'
        ),

        # ExecuteProcess(
        #     cmd=['ros2','run','nav2_map_server','map_server','--ros-args',
        #          '--params-file',
        #          '/home/ubuntu/ROS2/dev_ws/src/nav_pkg/param/map_server_params.yaml'],
        # ),

        # TimerAction(
        #     period=5.0,
        #     actions=[
        #             ExecuteProcess(
        #             cmd=['ros2','lifecycle','set','/map_server','configure'],
        #             ),
        #     ]
        # ),
        
        # TimerAction(
        #     period=7.0,
        #     actions=[
        #             ExecuteProcess(
        #             cmd=['ros2','lifecycle','set','/map_server','activate'],
        #             ),
        #     ]
        # ),

        # start rviz2
        ExecuteProcess(
            cmd=['rviz2','-d','/home/ubuntu/ROS2/dev_ws/src/nav_pkg/rviz/nav_rviz.rviz'],
            output='screen'
        ),
    ])