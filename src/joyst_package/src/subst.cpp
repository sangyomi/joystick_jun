#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/msg/num.hpp"

using Num = tutorial_interfaces::msg::Num;

class Joystsub : public rclcpp::Node
{
private:
    rclcpp::Subscription<Num>::SharedPtr j_sub;
public:
    Joystsub() : Node("subst_node")
    {
    j_sub = create_subscription<Num>(
            "/num", 10,
            std::bind(&Joystsub::sub_callback, this, std::placeholders::_1));
    }
    void sub_callback(const Num::SharedPtr msg)
    {
        RCLCPP_INFO(get_logger(),"LeftStickAngle:%f",msg->leftstickangle);
        RCLCPP_INFO(get_logger(),"RightStickAngle:%f",msg->rightstickangle);
        RCLCPP_INFO(get_logger(),"DpadAngle:%f",msg->dpadangle);
        RCLCPP_INFO(get_logger(),"LeftTrigger:%f",msg->lefttrigger);
        RCLCPP_INFO(get_logger(),"RightTrigger:%f",msg->righttrigger);
        RCLCPP_INFO(get_logger(),"A:%f",msg->a);
        RCLCPP_INFO(get_logger(),"B:%f",msg->b);
        RCLCPP_INFO(get_logger(),"X:%f",msg->x);
        RCLCPP_INFO(get_logger(),"Y:%f",msg->y);
        RCLCPP_INFO(get_logger(),"LB:%f",msg->lb);
        RCLCPP_INFO(get_logger(),"RB:%f",msg->rb);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);

    auto subst_node = std::make_shared<Joystsub>();
    rclcpp::spin(subst_node);
    rclcpp::shutdown();

    return 0;
}