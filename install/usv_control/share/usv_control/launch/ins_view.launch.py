"""Visualise the real MTi-680G on screen with RViz.

Purpose: tilt/move the physical INS and watch the boat model follow on screen.

This is a *live sensor view*, not a simulation. Gazebo cannot do this: it owns
the boat's pose through its physics engine and ignores external odometry. RViz
renders the TF tree directly, so the model tracks the real sensor exactly.

Chain: xsens_mti_node -> /odometry (local_enu -> imu_link)
       imu_odom_adapter -> /odom (odom -> base_link)
       robot_state_publisher -> base_link -> imu_link
       rviz2 -> renders odom -> base_link -> imu_link

Note the pose you see is a LOCAL ENU frame anchored at the first fix, and the
GNSS carries ~1 m of noise, so small position wobble on screen is expected and
is not a fault. Orientation (attitude) is the trustworthy part: the MTi-680G is
a fused GNSS/INS, so yaw is properly north-referenced while it has a fix.
"""
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (DeclareLaunchArgument, ExecuteProcess,
                            IncludeLaunchDescription, TimerAction)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

import xacro


def generate_launch_description():
    pkg_usv_description = get_package_share_directory('usv_description')
    pkg_usv_control = get_package_share_directory('usv_control')
    pkg_xsens = get_package_share_directory('xsens_mti_ros2_driver')

    port = LaunchConfiguration('port')
    baudrate = LaunchConfiguration('baudrate')

    xacro_file = os.path.join(pkg_usv_description, 'urdf', 'usv.urdf.xacro')
    robot_description = {
        'robot_description': xacro.process_file(xacro_file).toxml()
    }

    rviz_config = os.path.join(pkg_usv_control, 'config', 'ins_view.rviz')

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[robot_description],
    )

    xsens_driver = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_xsens, 'launch', 'xsens_mti_node.launch.py')
        ),
        launch_arguments={
            'port': port,
            'baudrate': baudrate,
        }.items(),
    )

    imu_odom_adapter = Node(
        package='usv_control',
        executable='imu_odom_adapter',
        name='imu_odom_adapter',
        output='screen',
        parameters=[{
            'input_odom_topic': '/odometry',
            'odom_frame': 'odom',
            'base_link_frame': 'base_link',
            'map_frame': 'map',
            'lever_arm_x': 0.0,
            'lever_arm_y': 0.0,
            'lever_arm_z': 0.15,
        }],
    )

    # Fixed-frame /odom keeps rviz anchored to the local ENU origin.
    # The GNSS jitter then shows up as small model movement rather than the
    # camera chasing the origin.
    rviz = ExecuteProcess(
        cmd=['rviz2', '-d', rviz_config, '--ros-args', '-p', 'use_sim_time:=false'],
        name='rviz2',
        output='screen',
    )

    return LaunchDescription([
        DeclareLaunchArgument('port', default_value='/dev/ttyUSB0'),
        DeclareLaunchArgument('baudrate', default_value='921600'),
        robot_state_publisher,
        xsens_driver,
        imu_odom_adapter,
        TimerAction(period=3.0, actions=[rviz]),
    ])
