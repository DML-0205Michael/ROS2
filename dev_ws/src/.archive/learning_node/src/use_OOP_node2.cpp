#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int32.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class learning_node : public rclcpp::Node{

public:
    learning_node(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(),"HI, my name is %s.",name.c_str());
        sub = this->create_subscription<std_msgs::msg::String>("topic1_name", 10, std::bind(&learning_node::topic_callback, this, _1));
        pub = this->create_publisher<std_msgs::msg::UInt32>("pub_topic_money",10);
    }

private:
    // declear a subscriber
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub;

    // declear a publisher
    rclcpp::Publisher<std_msgs::msg::UInt32>::SharedPtr pub;

    // callback fn 
    void topic_callback(const std_msgs::msg::String::SharedPtr msg){
        // create a new msg
        std_msgs::msg::UInt32 money;
        money.data=10;

        pub->publish(money);

        RCLCPP_INFO(this->get_logger(),"I got it: '%s', give money %d", msg->data.c_str(), money.data);
    };
};

int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<learning_node>("node2_name");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}