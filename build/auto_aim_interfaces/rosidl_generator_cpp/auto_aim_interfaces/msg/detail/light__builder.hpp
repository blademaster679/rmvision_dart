// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auto_aim_interfaces:msg/Light.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__LIGHT__BUILDER_HPP_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auto_aim_interfaces/msg/detail/light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auto_aim_interfaces
{

namespace msg
{

namespace builder
{

class Init_Light_pose
{
public:
  explicit Init_Light_pose(::auto_aim_interfaces::msg::Light & msg)
  : msg_(msg)
  {}
  ::auto_aim_interfaces::msg::Light pose(::auto_aim_interfaces::msg::Light::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Light msg_;
};

class Init_Light_distance_to_image_center
{
public:
  explicit Init_Light_distance_to_image_center(::auto_aim_interfaces::msg::Light & msg)
  : msg_(msg)
  {}
  Init_Light_pose distance_to_image_center(::auto_aim_interfaces::msg::Light::_distance_to_image_center_type arg)
  {
    msg_.distance_to_image_center = std::move(arg);
    return Init_Light_pose(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Light msg_;
};

class Init_Light_angle
{
public:
  explicit Init_Light_angle(::auto_aim_interfaces::msg::Light & msg)
  : msg_(msg)
  {}
  Init_Light_distance_to_image_center angle(::auto_aim_interfaces::msg::Light::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Light_distance_to_image_center(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Light msg_;
};

class Init_Light_distance
{
public:
  Init_Light_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Light_angle distance(::auto_aim_interfaces::msg::Light::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Light_angle(msg_);
  }

private:
  ::auto_aim_interfaces::msg::Light msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auto_aim_interfaces::msg::Light>()
{
  return auto_aim_interfaces::msg::builder::Init_Light_distance();
}

}  // namespace auto_aim_interfaces

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__LIGHT__BUILDER_HPP_
