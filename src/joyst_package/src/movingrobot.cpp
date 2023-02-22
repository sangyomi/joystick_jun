//
// Created by sangjun on 23. 2. 22.
//
#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/msg/num.hpp"
#include <memory>
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include <bits/stdc++.h>
#define PI 3.14159265358979

using Num = tutorial_interfaces::msg::Num;
using Twist = geometry_msgs::msg::Twist;
using Odometry = nav_msgs::msg::Odometry;

class Movingrobot : public rclcpp::Node
{
private:
    rclcpp::Subscription<Num>::SharedPtr j_sub;
    rclcpp::Publisher<Twist>::SharedPtr j_pub;
    rclcpp::Subscription<Odometry>::SharedPtr j_sub_odom;
    Twist m_twist_msg;
    float heading;
    float last_heading;
public:
    Movingrobot():Node("movingrobot")
    {
        j_sub = create_subscription<Num>(
                "/num", 10,
                std::bind(&Movingrobot::sub_callback, this, std::placeholders::_1));
        j_pub = create_publisher<Twist>("diffbot/cmd_vel",10);
        j_sub_odom = create_subscription<Odometry>(
                "/diffbot/odom", 10,
                std::bind(&Movingrobot::odom_callback, this, std::placeholders::_1) );
    }

    void sub_callback(const Num::SharedPtr msg)
    {
        if(msg->leftstickangle >= 0)
        {
            float value = msg->leftstickangle*(PI/180) - heading;
            if (value > 3.14) {value = value - 2*PI;}
            else if (value < -3.14) {value = value + 2*PI;}
            float turn_offset = 0.7 * (value);
            last_heading = turn_offset;
            if (abs(turn_offset) > 0.01) {
                m_twist_msg.angular.z = turn_offset;
                j_pub->publish(m_twist_msg);
            }
            RCLCPP_INFO(get_logger(),"robot rotates:%f",m_twist_msg.angular.z);
        }
        else
        {
            m_twist_msg.angular.z = 0;
            j_pub->publish(m_twist_msg);
        }
        if(msg->righttrigger != 1)
        {
            m_twist_msg.linear.x = (msg->righttrigger*-0.2 + 0.2);
            j_pub->publish(m_twist_msg);
            RCLCPP_INFO(get_logger(),"robot goes straight:%f",m_twist_msg.linear.x);
        }
        if(msg->lefttrigger != 1)
        {
            m_twist_msg.linear.x = (msg->righttrigger*0.1 - 0.1);
            std::cout<<m_twist_msg.linear.x<<std::endl;
            j_pub->publish(m_twist_msg);
            RCLCPP_INFO(get_logger(),"robot stop:%f",m_twist_msg.linear.x);
        }
    }

    void odom_callback(const Odometry::SharedPtr msg)
    {
        double x = msg->pose.pose.orientation.x;
        double y = msg->pose.pose.orientation.y;
        double z = msg->pose.pose.orientation.z;
        double w = msg->pose.pose.orientation.w;
        double siny_cosp = 2 * (w * z + x * y);
        double cosy_cosp = 1 - 2 * (y * y + z * z);
        double yaw = atan2(siny_cosp,cosy_cosp);
        heading = yaw;
    }

};

int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);

    auto moverobot_node = std::make_shared<Movingrobot>();
    rclcpp::spin(moverobot_node);
    rclcpp::shutdown();

    return 0;
}