// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/Send.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__SEND__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__SEND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/send__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_Send_angle
{
public:
  explicit Init_Send_angle(::auto_aim_interfaces::msg::Send & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::Send angle(::auto_aim_interfaces::msg::Send::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Send msg_;
};

class Init_Send_distance
{
public:
  explicit Init_Send_distance(::auto_aim_interfaces::msg::Send & msg)
  : msg_(msg)
  {}
  Init_Send_angle distance(::auto_aim_interfaces::msg::Send::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Send_angle(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Send msg_;
};

class Init_Send_header
{
public:
  Init_Send_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Send_distance header(::auto_aim_interfaces::msg::Send::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Send_distance(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Send msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::Send>()
{
  return auto_aim_interfaces::msg::builder::Init_Send_header();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__SEND__BUILDER_HPP_
