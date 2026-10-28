"""Real-hardware bring-up for the USV with an Xsens MTi-670 GNSS/INS.

Chain:

    xsens_mti_node        -> /odometry (local_enu -> imu_link, sensor measurement)
                             /imu/data, /gnss/*
    imu_odom_adapter      -> /odom (odom -> base_link), /gnss/velocity_enu,
                             /gnss/odometry_map
    ekf_filter_node_odom  -> odom -> base_link   (continuous local estimate)
    ekf_filter_node_map   -> map  -> odom        (GNSS-pinned global estimate)
    waypoint_follower     -> /cmd_vel

This publishes the same /odom contract as the Gazebo stack (frame ``odom``,
child ``base_link``), so waypoint_follower.py is unchanged between sim and boat.

IMPORTANT: the MTi-670 must have its *external* GNSS receiver connected. Without
it there is no referenced heading and yaw will drift.

Launch arguments:
  port      serial port of the MTi (default /dev/ttyUSB0)
  baudrate  serial baudrate (default 921600, the rate this unit uses)
  start_waypoint_follower  drive the boat (default false; verify topics first)
"""
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.conditions import IfCondition
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
    start_follower = LaunchConfiguration('start_waypoint_follower')

    ekf_params = os.path.join(pkg_usv_control, 'config', 'ekf.yaml')

    # robot_state_publisher owns base_link -> imu_link. The driver must not
    # publish that transform itself, hence pub_odometry_tf: false in its YAML.
    xacro_file = os.path.join(pkg_usv_description, 'urdf', 'usv.urdf.xacro')
    robot_description = {
        'robot_description': xacro.process_file(xacro_file).toxml()
    }

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[robot_description],
    )

    # Driver launch brings up xsens_mti_node with its own param file. We
    # override port/baudrate here so the YAML stays reusable across machines.
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
            'input_frame': 'local_enu',
            'input_child_frame': 'imu_link',
            'odom_frame': 'odom',
            'base_link_frame': 'base_link',
            'map_frame': 'map',
            # Physical IMU mounting offset relative to base_link, in base_link
            # axes. Matches the origin of imu_joint in usv.urdf.xacro.
            'lever_arm_x': 0.0,
            'lever_arm_y': 0.0,
            'lever_arm_z': 0.15,
        }],
    )

    # Both EKF instances read from the same param file; the node name selects
    # which parameter block applies.
    ekf_odom = Node(
        package='robot_localization',
        executable='ekf_node',
        name='ekf_filter_node_odom',
        output='screen',
        parameters=[ekf_params],
        remappings=[('odometry/filtered', 'odometry/local')],
    )

    ekf_map = Node(
        package='robot_localization',
        executable='ekf_node',
        name='ekf_filter_node_map',
        output='screen',
        parameters=[ekf_params],
        remappings=[('odometry/filtered', 'odometry/global')],
    )

    waypoint_follower = Node(
        package='usv_control',
        executable='waypoint_follower',
        name='waypoint_follower',
        output='screen',
        condition=IfCondition(start_follower),
    )

    ld = LaunchDescription([
        DeclareLaunchArgument('port', default_value='/dev/ttyUSB0'),
        DeclareLaunchArgument('baudrate', default_value='921600'),
        DeclareLaunchArgument(
            'start_waypoint_follower', default_value='false',
            description='Drive the boat. Keep false until topics are verified.'),
        robot_state_publisher,
        xsens_driver,
        imu_odom_adapter,
        ekf_odom,
        ekf_map,
    ])

    # Let the driver produce a valid first fix before the follower acts.
    ld.add_action(
        TimerAction(period=10.0, actions=[waypoint_follower])
    )

    return ld
