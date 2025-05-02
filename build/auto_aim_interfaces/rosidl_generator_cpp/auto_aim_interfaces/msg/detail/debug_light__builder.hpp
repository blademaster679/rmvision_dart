// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/DebugLight.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__DEBUG_LIGHT__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__DEBUG_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/debug_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_DebugLight_is_light
{
public:
  explicit Init_DebugLight_is_light(::auto_aim_interfaces::msg::DebugLight & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::DebugLight is_light(::auto_aim_interfaces::msg::DebugLight::_is_light_type arg)
  {
    msg_.is_light = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::DebugLight msg_;
};

class Init_DebugLight_radius
{
public:
  explicit Init_DebugLight_radius(::auto_aim_interfaces::msg::DebugLight & msg)
  : msg_(msg)
  {}
  Init_DebugLight_is_light radius(::auto_aim_interfaces::msg::DebugLight::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_DebugLight_is_light(msg_);
  }

private:
  ::auto_aim_interfaces::msg::DebugLight msg_;
};

class Init_DebugLight_center_x
{
public:
  Init_DebugLight_center_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugLight_radius center_x(::auto_aim_interfaces::msg::DebugLight::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_DebugLight_radius(msg_);
  }

private:
  ::auto_aim_interfaces::msg::DebugLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::DebugLight>()
{
  return auto_aim_interfaces::msg::builder::Init_DebugLight_center_x();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__DEBUG_LIGHT__BUILDER_HPP_
