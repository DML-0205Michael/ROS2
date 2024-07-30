#include "rclcpp/rclcpp.hpp"                         // ROS2 C++接口库
#include "std_msgs/msg/float32.hpp"
#include "msg_pkg/srv/test.hpp"   // 自定义的服务接口
// test.hpp must be lower case even it's Test.msg

#include <memory>

// 创建回调函数，执行收到请求后对数据的处理
void server_test(const std::shared_ptr<msg_pkg::srv::Test::Request> request, 
          std::shared_ptr<msg_pkg::srv::Test::Response>      response)
{
    // 完成加法求和计算，将结果放到反馈的数据中
    float side1=request->a;
    float side2=request->b;
    if (side1 >0 && side2>0){
        response->c = sqrt(side1*side1+side2*side2);
        response->result =1;
    } else {
        response->c =0;
        response->result =0;
    }
     
    // 输出日志信息，提示已经完成加法求和计算                                                    
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request: a: %.2f" " b: %.2f",             
                request->a, request->b);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: %.2f. Success? %d",
                response->c,response->result);
}

// ROS2节点主入口main函数
int main(int argc, char **argv)                                                                 
{
    // ROS2 C++接口初始化
    rclcpp::init(argc, argv);
    // 创建ROS2节点对象并进行初始化                                                                   
    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("service_test_server");   
    // 创建服务器对象（接口类型、服务名、服务器回调函数）  
    rclcpp::Service<msg_pkg::srv::Test>::SharedPtr service =
        node->create_service<msg_pkg::srv::Test>("cal_two_floats", &server_test);  
          
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to calculate two floats.");
    
    // 循环等待ROS2退出
    rclcpp::spin(node);    
    // 关闭ROS2 C++接口                                                                     
    rclcpp::shutdown();                                                                         
}