#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"          // ROS2 C++接口库
#include "std_msgs/msg/string.hpp"    // 字符串消息类型

#include "std_msgs/msg/u_int32.hpp"

using namespace std::chrono_literals;

using std::placeholders::_1;

class PublisherNode : public rclcpp::Node{
public:
    PublisherNode() : Node("pub_node_name") // ROS2节点父类初始化
    {
        // 创建发布者对象（消息类型、话题名、队列长度）
        pub = this->create_publisher<std_msgs::msg::String>("topic_name", 10); 
        // 创建一个定时器,定时执行回调函数
        timer_ = this->create_wall_timer(
            500ms, std::bind(&PublisherNode::timer_callback, this));   

        sub = this->create_subscription<std_msgs::msg::UInt32>(
            "pub_topic_money", 10, 
            std::bind(&PublisherNode::topic_callback, this, _1));         
        
    }

private:
    rclcpp::TimerBase::SharedPtr timer_;                       // 定时器指针
    
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub;  // 发布者指针

    // declear a subscriber
    rclcpp::Subscription<std_msgs::msg::UInt32>::SharedPtr sub;

    // 创建定时器周期执行的回调函数
    void timer_callback()                                                       
    {
        // 创建一个String类型的消息对象
        auto msg = std_msgs::msg::String();   
        // 填充消息对象中的消息数据                                    
        msg.data = "From pub.cpp";
        // 发布话题消息                                                 
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", msg.data.c_str()); 
        // 输出日志信息，提示已经完成话题发布   
        pub->publish(msg);                                                
    }

    // callback fn 
    void topic_callback(const std_msgs::msg::UInt32::SharedPtr msg){
        // std_msgs::msg::UInt32 money;
        int temp=msg->data;
        RCLCPP_INFO(this->get_logger(),"Pub got money %d", temp);
    };
};

// ROS2节点主入口main函数
int main(int argc, char * argv[])                      
{
    // ROS2 C++接口初始化
    rclcpp::init(argc, argv);                
    
    // 创建ROS2节点对象并进行初始化          
    rclcpp::spin(std::make_shared<PublisherNode>());   
    
    // 关闭ROS2 C++接口
    rclcpp::shutdown();                                

    return 0;
}