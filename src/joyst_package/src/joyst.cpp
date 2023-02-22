//
// Created by sangjun on 23. 2. 21.
//
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "tutorial_interfaces/msg/num.hpp"
#include <cmath>
#define PI 3.14159265358979

using Joy = sensor_msgs::msg::Joy;
using Num = tutorial_interfaces::msg::Num;

class Joypubsub : public rclcpp::Node
{
private:
    rclcpp::Subscription<Joy>::SharedPtr j_sub;
    rclcpp::Publisher<Num>::SharedPtr j_pub;
    Num controljoystick = Num();
public:
    Joypubsub() : Node("joy_node")
    {
        j_sub = create_subscription<Joy>(
                "/joy", 10,
                std::bind(&Joypubsub::sub_callback, this, std::placeholders::_1));
        j_pub = create_publisher<Num>("num", 10);
    }
    void sub_callback(const Joy::SharedPtr msg)
    {
        controljoystick.leftstickangle = joyangle(msg->axes[0],msg->axes[1]);
        controljoystick.rightstickangle = joyangle(msg->axes[3],msg->axes[4]);
        controljoystick.dpadangle = joyangle(msg->axes[6],msg->axes[7]);
        controljoystick.lefttrigger = msg->axes[2];
        controljoystick.righttrigger = msg->axes[5];
        controljoystick.a = msg->buttons[0];
        controljoystick.b = msg->buttons[1];
        controljoystick.x = msg->buttons[2];
        controljoystick.y = msg->buttons[3];
        controljoystick.lb = msg->buttons[4];
        controljoystick.rb = msg->buttons[5];
        j_pub->publish(controljoystick);
    }

    float joyangle(const float &sint, const float &cost)
    {
        if(sint == 0 && cost == 0)
        {
            return -1;
        }
        else if (sint >= 0 && cost > 0)
        {
            return ((asin(sint))*(180/PI));
        }
        else if (cost <= 0)
        {
            return (180 - (asin(sint))*(180/PI));
        }
        else if (sint < 0 && cost > 0)
        {
            return (360 + (asin(sint))*(180/PI));
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);

    auto joy_node = std::make_shared<Joypubsub>();
    rclcpp::spin(joy_node);
    rclcpp::shutdown();

    return 0;
}