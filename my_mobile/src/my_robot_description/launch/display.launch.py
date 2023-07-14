import launch
from launch.substitutions import Command, LaunchConfiguration
import launch_ros
import os
from launch_ros.parameter_descriptions import ParameterValue
def generate_launch_description():
	pkg_share = launch_ros.substitutions.FindPackageShare(package='my_robot_description').find('my_robot_description')
	default_model_path = os.path.join(pkg_share, 'urdf/robot_core.xacro')
	default_rviz_config_path = os.path.join(pkg_share, 'rviz/urdf_config.rviz')
	
	robot_state_publisher_node = launch_ros.actions.Node(
		package='robot_state_publisher',
		executable='robot_state_publisher',
		parameters=[{'robot_description': ParameterValue(Command(['xacro ', LaunchConfiguration('model')]),value_type=str)}]
	)
	
	joint_state_publisher_node = launch_ros.actions.Node(
		package='joint_state_publisher',
		executable='joint_state_publisher',
		name='joint_state_publisher',
		condition=launch.conditions.UnlessCondition(LaunchConfiguration('gui'))
	)
	
	joint_state_publisher_gui_node = launch_ros.actions.Node(
		package='joint_state_publisher_gui',
		executable='joint_state_publisher_gui',
		name='joint_state_publisher_gui',
		condition=launch.conditions.IfCondition(LaunchConfiguration('gui'))
	)
	
	rviz_node = launch_ros.actions.Node(
		package='rviz2',
		executable='rviz2',
		name='rviz2',
		output='screen',
		arguments=['-d', LaunchConfiguration('rvizconfig')],
	)
	
	return launch.LaunchDescription([
		launch.actions.DeclareLaunchArgument(name='gui', default_value='True', description='Flag to enablejoint_state_publisher_gui'),
		launch.actions.DeclareLaunchArgument(name='model', default_value=default_model_path, description='Absolute path to robot urdffile'),
		launch.actions.DeclareLaunchArgument(name='rvizconfig', default_value=default_rviz_config_path, description='Absolute path to rviz configfile'),
		joint_state_publisher_node,
		joint_state_publisher_gui_node,
		robot_state_publisher_node,
		rviz_node
	])