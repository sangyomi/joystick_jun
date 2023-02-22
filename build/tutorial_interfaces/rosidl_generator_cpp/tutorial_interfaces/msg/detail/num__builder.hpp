// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include "tutorial_interfaces/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_rb
{
public:
  explicit Init_Num_rb(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::Num rb(::tutorial_interfaces::msg::Num::_rb_type arg)
  {
    msg_.rb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_lb
{
public:
  explicit Init_Num_lb(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_rb lb(::tutorial_interfaces::msg::Num::_lb_type arg)
  {
    msg_.lb = std::move(arg);
    return Init_Num_rb(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_y
{
public:
  explicit Init_Num_y(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_lb y(::tutorial_interfaces::msg::Num::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Num_lb(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_x
{
public:
  explicit Init_Num_x(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_y x(::tutorial_interfaces::msg::Num::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Num_y(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_b
{
public:
  explicit Init_Num_b(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_x b(::tutorial_interfaces::msg::Num::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Num_x(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_a
{
public:
  explicit Init_Num_a(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_b a(::tutorial_interfaces::msg::Num::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Num_b(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_righttrigger
{
public:
  explicit Init_Num_righttrigger(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_a righttrigger(::tutorial_interfaces::msg::Num::_righttrigger_type arg)
  {
    msg_.righttrigger = std::move(arg);
    return Init_Num_a(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_lefttrigger
{
public:
  explicit Init_Num_lefttrigger(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_righttrigger lefttrigger(::tutorial_interfaces::msg::Num::_lefttrigger_type arg)
  {
    msg_.lefttrigger = std::move(arg);
    return Init_Num_righttrigger(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_dpadangle
{
public:
  explicit Init_Num_dpadangle(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_lefttrigger dpadangle(::tutorial_interfaces::msg::Num::_dpadangle_type arg)
  {
    msg_.dpadangle = std::move(arg);
    return Init_Num_lefttrigger(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_rightstickangle
{
public:
  explicit Init_Num_rightstickangle(::tutorial_interfaces::msg::Num & msg)
  : msg_(msg)
  {}
  Init_Num_dpadangle rightstickangle(::tutorial_interfaces::msg::Num::_rightstickangle_type arg)
  {
    msg_.rightstickangle = std::move(arg);
    return Init_Num_dpadangle(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

class Init_Num_leftstickangle
{
public:
  Init_Num_leftstickangle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_rightstickangle leftstickangle(::tutorial_interfaces::msg::Num::_leftstickangle_type arg)
  {
    msg_.leftstickangle = std::move(arg);
    return Init_Num_rightstickangle(msg_);
  }

private:
  ::tutorial_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::Num>()
{
  return tutorial_interfaces::msg::builder::Init_Num_leftstickangle();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
