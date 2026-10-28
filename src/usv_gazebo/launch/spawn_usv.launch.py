import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import xacro


def generate_launch_description():
    pkg_usv_description = get_package_share_directory('usv_description')
    pkg_ros_gz_sim = get_package_share_directory('ros_gz_sim')

    xacro_file = os.path.join(pkg_usv_description, 'urdf', 'usv.urdf.xacro')
    robot_description_config = xacro.process_file(xacro_file)
    robot_description = {'robot_description': robot_description_config.toxml()}

    # Set to True to launch the waypoint follower together with the simulation.
    start_waypoint_follower = True

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[robot_description]
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_ros_gz_sim, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': '-r empty.sdf'}.items(),
    )

    spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-name', 'usv', '-topic', 'robot_description', '-x', '0', '-y', '0', '-z', '0.2'],
        output='screen',
    )

    # Single bridge node for every topic used by the stack.
    #   /cmd_vel  ROS -> GZ   (velocity control)
    #   /odom     GZ  -> ROS  (ground-truth odometry from OdometryPublisher)
    #   /model/usv/pose GZ -> ROS (model pose, used for TF/debugging)
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist',
            '/odom@nav_msgs/msg/Odometry[gz.msgs.Odometry',
            '/model/usv/pose@geometry_msgs/msg/Pose[gz.msgs.Pose',
        ],
        output='screen',
    )

    waypoint_follower = Node(
        package='usv_control',
        executable='waypoint_follower',
        name='waypoint_follower',
        output='screen',
    )

    ld = LaunchDescription([
        robot_state_publisher,
        gazebo,
        spawn_entity,
        bridge,
    ])

    if start_waypoint_follower:
        # Give Gazebo/bridge a moment to come up before driving the boat.
        ld.add_action(TimerAction(period=3.0, actions=[waypoint_follower]))

    return ld
