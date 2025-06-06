// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auto_aim_interfaces:msg/Light.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__LIGHT__STRUCT_H_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Light in the package auto_aim_interfaces.
typedef struct auto_aim_interfaces__msg__Light
{
  float distance;
  float angle;
  float distance_to_image_center;
  geometry_msgs__msg__Pose pose;
} auto_aim_interfaces__msg__Light;

// Struct for a sequence of auto_aim_interfaces__msg__Light.
typedef struct auto_aim_interfaces__msg__Light__Sequence
{
  auto_aim_interfaces__msg__Light * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auto_aim_interfaces__msg__Light__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__LIGHT__STRUCT_H_
