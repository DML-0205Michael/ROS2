#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv){
    rclcpp::init(argc,argv);

    auto node = std::make_shared<rclcpp::Node>("node1_name"); // node name: node1_name
    RCLCPP_INFO(node->get_logger(),"This is node 1.");
    rclcpp::spin(node);

    rclcpp::shutdown();
}
