from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import LaunchConfiguration
from pathlib import Path

def generate_launch_description():

    ld = LaunchDescription()

    # Allow overriding the serial port from a parent launch file without
    # duplicating the parameter YAML. Defaults match the file on disk.
    ld.add_action(DeclareLaunchArgument('port', default_value='/dev/ttyUSB0'))
    ld.add_action(DeclareLaunchArgument('baudrate', default_value='921600'))

    # Set environment variables to control logging behavior
    ld.add_action(SetEnvironmentVariable('RCUTILS_LOGGING_USE_STDOUT', '1'))
    ld.add_action(SetEnvironmentVariable('RCUTILS_LOGGING_BUFFERED_STREAM', '1'))

    parameters_file_path = Path(get_package_share_directory('xsens_mti_ros2_driver'), 'param', 'xsens_mti_node.yaml')
    xsens_mti_node = Node(
            package='xsens_mti_ros2_driver',
            executable='xsens_mti_node',
            name='xsens_mti_node',
            output='screen',
            parameters=[parameters_file_path,
                        {'port': LaunchConfiguration('port'),
                         'baudrate': LaunchConfiguration('baudrate')}],
            arguments=[]
            )
    ld.add_action(xsens_mti_node)

    return ld
