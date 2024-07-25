/***
@作者: 古月居(www.guyuehome.com)
@说明: ROS2服务示例-发送两个加数，请求加法器计算
***/

#include "rclcpp/rclcpp.hpp"                          // ROS2 C++接口库  
#include "std_msgs/msg/float32.hpp"
#include "msg_pkg/srv/test.hpp" // 自定义的服务接口
// test.hpp must be lower case even it's Test.msg

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
    // ROS2 C++接口初始化
    rclcpp::init(argc, argv);                      

    if (argc != 3) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: service_test_client X Y");
        return 1;
    }

    // 创建ROS2节点对象并进行初始化
    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("service_test_client");  
    // 创建服务客户端对象（服务接口类型，服务名） 
    rclcpp::Client<msg_pkg::srv::Test>::SharedPtr client =
        node->create_client<msg_pkg::srv::Test>("add_two_ints");             

    // 创建服务接口数据
    auto request = std::make_shared<msg_pkg::srv::Test::Request>();          
    request->a = atoll(argv[1]);
    request->b = atoll(argv[2]);

    // 循环等待服务器端成功启动
    while (!client->wait_for_service(1s)) {                                                   
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
    }

    // 异步方式发送服务请求
    auto result = client->async_send_request(request);                                        
    
    // 接收服务器端的反馈数据
    if (rclcpp::spin_until_future_complete(node, result) ==
        rclcpp::FutureReturnCode::SUCCESS)                                                    
    {
        // 将收到的反馈信息打印输出
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Result: %ld, success? %d", 
            result.get()->c, result.get()->result);             
    } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service cal_two_floats");
    }

    // 关闭ROS2 C++接口
    rclcpp::shutdown();  
    return 0;
}