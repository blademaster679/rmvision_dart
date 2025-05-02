// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/Lights.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__LIGHTS__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__LIGHTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/lights__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_Lights_image
{
public:
  explicit Init_Lights_image(::auto_aim_interfaces::msg::Lights & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::Lights image(::auto_aim_interfaces::msg::Lights::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Lights msg_;
};

class Init_Lights_lights
{
public:
  explicit Init_Lights_lights(::auto_aim_interfaces::msg::Lights & msg)
  : msg_(msg)
  {}
  Init_Lights_image lights(::auto_aim_interfaces::msg::Lights::_lights_type arg)
  {
    msg_.lights = std::move(arg);
    return Init_Lights_image(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Lights msg_;
};

class Init_Lights_header
{
public:
  Init_Lights_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lights_lights header(::auto_aim_interfaces::msg::Lights::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Lights_lights(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Lights msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::Lights>()
{
  return auto_aim_interfaces::msg::builder::Init_Lights_header();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__LIGHTS__BUILDER_HPP_
