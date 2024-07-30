# Step 1
from launch import LaunchDescription
from launch_ros.actions import Node

# Step 2
def generate_launch_description():
    # Step 3
    pub_node = Node(
        package="learning_node",
        executable="pub_test"
    )

    sub_node=Node(
        package="learning_node",
        executable="sub_test"
    )

# Step 4
launch_d = LaunchDescription(pub_node, sub_node)
return launch_d