// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__NUM__STRUCT_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__NUM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__msg__Num __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__msg__Num __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Num_
{
  using Type = Num_<ContainerAllocator>;

  explicit Num_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leftstickangle = 0.0f;
      this->rightstickangle = 0.0f;
      this->dpadangle = 0.0f;
      this->lefttrigger = 0.0f;
      this->righttrigger = 0.0f;
      this->a = 0.0f;
      this->b = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->lb = 0.0f;
      this->rb = 0.0f;
    }
  }

  explicit Num_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leftstickangle = 0.0f;
      this->rightstickangle = 0.0f;
      this->dpadangle = 0.0f;
      this->lefttrigger = 0.0f;
      this->righttrigger = 0.0f;
      this->a = 0.0f;
      this->b = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->lb = 0.0f;
      this->rb = 0.0f;
    }
  }

  // field types and members
  using _leftstickangle_type =
    float;
  _leftstickangle_type leftstickangle;
  using _rightstickangle_type =
    float;
  _rightstickangle_type rightstickangle;
  using _dpadangle_type =
    float;
  _dpadangle_type dpadangle;
  using _lefttrigger_type =
    float;
  _lefttrigger_type lefttrigger;
  using _righttrigger_type =
    float;
  _righttrigger_type righttrigger;
  using _a_type =
    float;
  _a_type a;
  using _b_type =
    float;
  _b_type b;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _lb_type =
    float;
  _lb_type lb;
  using _rb_type =
    float;
  _rb_type rb;

  // setters for named parameter idiom
  Type & set__leftstickangle(
    const float & _arg)
  {
    this->leftstickangle = _arg;
    return *this;
  }
  Type & set__rightstickangle(
    const float & _arg)
  {
    this->rightstickangle = _arg;
    return *this;
  }
  Type & set__dpadangle(
    const float & _arg)
  {
    this->dpadangle = _arg;
    return *this;
  }
  Type & set__lefttrigger(
    const float & _arg)
  {
    this->lefttrigger = _arg;
    return *this;
  }
  Type & set__righttrigger(
    const float & _arg)
  {
    this->righttrigger = _arg;
    return *this;
  }
  Type & set__a(
    const float & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const float & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__lb(
    const float & _arg)
  {
    this->lb = _arg;
    return *this;
  }
  Type & set__rb(
    const float & _arg)
  {
    this->rb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::msg::Num_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::msg::Num_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::Num_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::Num_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::Num_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::Num_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::Num_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::Num_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::Num_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::Num_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__msg__Num
    std::shared_ptr<tutorial_interfaces::msg::Num_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__msg__Num
    std::shared_ptr<tutorial_interfaces::msg::Num_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Num_ & other) const
  {
    if (this->leftstickangle != other.leftstickangle) {
      return false;
    }
    if (this->rightstickangle != other.rightstickangle) {
      return false;
    }
    if (this->dpadangle != other.dpadangle) {
      return false;
    }
    if (this->lefttrigger != other.lefttrigger) {
      return false;
    }
    if (this->righttrigger != other.righttrigger) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->lb != other.lb) {
      return false;
    }
    if (this->rb != other.rb) {
      return false;
    }
    return true;
  }
  bool operator!=(const Num_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Num_

// alias to use template instance with default allocator
using Num =
  tutorial_interfaces::msg::Num_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__NUM__STRUCT_HPP_
