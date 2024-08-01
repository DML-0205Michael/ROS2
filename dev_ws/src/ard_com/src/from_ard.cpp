// this node subscribe topics from arduino, publish odom, and broadcast tf

#include <functional>
#include <memory>
#include <sstream>
#include <string>

#include "rclcpp/rclcpp.hpp"                       // ROS2 C++接口库

// for tf
#include "tf2/LinearMath/Quaternion.h"             // 四元数运算库
#include "tf2_ros/transform_broadcaster.h"         // TF坐标变换广播器
#include "geometry_msgs/msg/transform_stamped.hpp" // 坐标变换消息

// for msg from arduino
#include "sensor_msgs/msg/imu.hpp" // ends with ".hpp", not ".h"

// for odom
#include "nav_msgs/msg/odometry.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h" // tf2::toMsg(q)

class OdomTFBroadcaster : public rclcpp::Node
{
    public:
        OdomTFBroadcaster()
        : Node("from_arduino_node")  // ROS2节点父类初始化
        {   
            // create a tf broadcaster
            tf_broadcaster_ =
                std::make_unique<tf2_ros::TransformBroadcaster>(*this);

            std::string topic_name = "/micro_ros_arduino_node_publisher";

            // create a sub from arduino
            subscription_ = this->create_subscription<sensor_msgs::msg::Imu>(
                topic_name, 10,
                std::bind(&OdomTFBroadcaster::robot_pose_callback, this, std::placeholders::_1));
            last_time=this->get_clock()->now();

            // create a odom pub
            odom_pub = this->create_publisher<nav_msgs::msg::Odometry>("/odom", 10); 
        }

    private:
        rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr subscription_;
        std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
        rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub; 

        void robot_pose_callback(const sensor_msgs::msg::Imu::SharedPtr msg)
        {
            /*
            // DON'T ASK ME WHY IM USING ANGULAR V TO GET ENCODER READING
            // ANGULAR_VELOCITY.X OR Y DON'T MEAN THE ACTUAL ANGULAR VELOCITY
            enc1=msg->angular_velocity.x; // right speed, count per 20ms (Left if facing bot)
            enc2=msg->angular_velocity.y; // speed, count per 20ms
            vth=(msg->angular_velocity.z+15)/131/180*M_PI; // rad/s

            double R_speed=enc1*meter_per_count_R*50; // meters per s
            double L_speed=enc2*meter_per_count_L*50;
            vx=(L_speed+R_speed)/2; // meters per s

            if (enc1==0 && enc2 ==0){vth=0;} 

            
            rclcpp::Time current_time=this->get_clock()->now();

            double dt = (current_time - last_time).seconds();
            RCLCPP_INFO(this->get_logger(),"dt: %.5f", dt);
            last_time=current_time;

            double delta_x = vx * cos(th) * dt;
            double delta_y = vx * sin(th) * dt;
            double delta_th = vth * dt;

            x += delta_x;
            y += delta_y;
            th += delta_th;
            */

            // 1. tf broadcast
            geometry_msgs::msg::TransformStamped odom_trans;

            odom_trans.header.stamp = this->get_clock()->now();
            odom_trans.header.frame_id = "odom";
            odom_trans.child_frame_id = "base_link";

            // odom_trans.transform.translation.x = x;
            // odom_trans.transform.translation.y = y;
            odom_trans.transform.translation.x = msg->angular_velocity.x;
            odom_trans.transform.translation.y = msg->angular_velocity.y;
            odom_trans.transform.translation.z = 0.0;

            tf2::Quaternion q;
            // q.setRPY(0, 0, th);
            q.setRPY(0, 0, msg->angular_velocity.z);

            odom_trans.transform.rotation.x = q.x();
            odom_trans.transform.rotation.y = q.y();
            odom_trans.transform.rotation.z = q.z();
            odom_trans.transform.rotation.w = q.w();

            tf_broadcaster_->sendTransform(odom_trans);

            // 2. publish odom
            /*
            geometry_msgs::msg::Quaternion odom_quat=tf2::toMsg(q);
            auto odom=std::make_unique<nav_msgs::msg::Odometry>();
            odom->header.stamp=this->get_clock()->now();
            odom->header.frame_id="odom";
            odom->child_frame_id="base_link";
            odom->pose.pose.position.x=x;
            odom->pose.pose.position.y=y;
            odom->pose.pose.position.z=0.0;
            odom->pose.pose.orientation=odom_quat;

            odom->twist.twist.linear.x=vx; // m/s
            // odom->twist.twist.linear.y=0;
            odom->twist.twist.angular.z=vth; // rad/s
            odom_pub->publish(std::move(odom));
            */
        }

        rclcpp::Time last_time;

        float enc1, enc2, vth;
        const double meter_per_count_L=0.000294310812850564; 
        const double meter_per_count_R=0.000294132201307244;
        double x = 0.0;
        double y = 0.0;
        double th = 0.0;
        double vx = 0;
};

int main(int argc, char * argv[])
{
  // ROS2 Python接口初始化
  rclcpp::init(argc, argv);
  // 创建ROS2节点对象并进行初始化,循环等待ROS2退出
  rclcpp::spin(std::make_shared<OdomTFBroadcaster>());


  // 关闭ROS2 C++接口
  rclcpp::shutdown();
  return 0;
}