#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "std_msgs/msg/u_int32.hpp"

using std::placeholders::_1;

class SubscriberNode : public rclcpp::Node{
public:
    SubscriberNode() : Node("sub_node_name")        // ROS2节点父类初始化
    {
        sub = this->create_subscription<std_msgs::msg::String>(       
            "topic_name", 10, std::bind(&SubscriberNode::topic_callback, this, _1));   
        // 创建订阅者对象（消息类型、话题名、订阅者回调函数、队列长度）
        
        pub = this->create_publisher<std_msgs::msg::UInt32>("pub_topic_money",10);
    }

private:
    // declear a publisher
    rclcpp::Publisher<std_msgs::msg::UInt32>::SharedPtr pub;

    // declear a subscriber
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub;

    // 创建回调函数，执行收到话题消息后对数据的处理
    void topic_callback(const std_msgs::msg::String::SharedPtr msg) const                  
    {

        // RCLCPP_INFO(this->get_logger(), "Sub got: '%s'", msg->data.c_str());       
        // 输出日志信息，提示订阅收到的话题消息
        // std_msgs::msg::UInt32 money;
        auto money=std_msgs::msg::UInt32();
        money.data=233;

        pub->publish(money);

        RCLCPP_INFO(this->get_logger(),"I got it: '%s', give money %d", msg->data.c_str(), money.data);
    }
        
    // rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;         
    // 订阅者指针
};

// ROS2节点主入口main函数
int main(int argc, char * argv[])                         
{
    // ROS2 C++接口初始化
    rclcpp::init(argc, argv);                 
    
    // 创建ROS2节点对象并进行初始化            
    rclcpp::spin(std::make_shared<SubscriberNode>());     
    
    // 关闭ROS2 C++接口
    rclcpp::shutdown();                                  
    
    return 0;
}