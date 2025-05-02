// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auto_aim_interfaces:msg/Lights.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auto_aim_interfaces/msg/detail/lights__rosidl_typesupport_introspection_c.h"
#include "auto_aim_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auto_aim_interfaces/msg/detail/lights__functions.h"
#include "auto_aim_interfaces/msg/detail/lights__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `lights`
#include "auto_aim_interfaces/msg/light.h"
// Member `lights`
#include "auto_aim_interfaces/msg/detail/light__rosidl_typesupport_introspection_c.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auto_aim_interfaces__msg__Lights__init(message_memory);
}

void auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_fini_function(void * message_memory)
{
  auto_aim_interfaces__msg__Lights__fini(message_memory);
}

size_t auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__size_function__Lights__lights(
  const void * untyped_member)
{
  const auto_aim_interfaces__msg__Light__Sequence * member =
    (const auto_aim_interfaces__msg__Light__Sequence *)(untyped_member);
  return member->size;
}

const void * auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__get_const_function__Lights__lights(
  const void * untyped_member, size_t index)
{
  const auto_aim_interfaces__msg__Light__Sequence * member =
    (const auto_aim_interfaces__msg__Light__Sequence *)(untyped_member);
  return &member->data[index];
}

void * auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__get_function__Lights__lights(
  void * untyped_member, size_t index)
{
  auto_aim_interfaces__msg__Light__Sequence * member =
    (auto_aim_interfaces__msg__Light__Sequence *)(untyped_member);
  return &member->data[index];
}

void auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__fetch_function__Lights__lights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto_aim_interfaces__msg__Light * item =
    ((const auto_aim_interfaces__msg__Light *)
    auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__get_const_function__Lights__lights(untyped_member, index));
  auto_aim_interfaces__msg__Light * value =
    (auto_aim_interfaces__msg__Light *)(untyped_value);
  *value = *item;
}

void auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__assign_function__Lights__lights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto_aim_interfaces__msg__Light * item =
    ((auto_aim_interfaces__msg__Light *)
    auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__get_function__Lights__lights(untyped_member, index));
  const auto_aim_interfaces__msg__Light * value =
    (const auto_aim_interfaces__msg__Light *)(untyped_value);
  *item = *value;
}

bool auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__resize_function__Lights__lights(
  void * untyped_member, size_t size)
{
  auto_aim_interfaces__msg__Light__Sequence * member =
    (auto_aim_interfaces__msg__Light__Sequence *)(untyped_member);
  auto_aim_interfaces__msg__Light__Sequence__fini(member);
  return auto_aim_interfaces__msg__Light__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auto_aim_interfaces__msg__Lights, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auto_aim_interfaces__msg__Lights, lights),  // bytes offset in struct
    NULL,  // default value
    auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__size_function__Lights__lights,  // size() function pointer
    auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__get_const_function__Lights__lights,  // get_const(index) function pointer
    auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__get_function__Lights__lights,  // get(index) function pointer
    auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__fetch_function__Lights__lights,  // fetch(index, &value) function pointer
    auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__assign_function__Lights__lights,  // assign(index, value) function pointer
    auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__resize_function__Lights__lights  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auto_aim_interfaces__msg__Lights, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_members = {
  "auto_aim_interfaces__msg",  // message namespace
  "Lights",  // message name
  3,  // number of fields
  sizeof(auto_aim_interfaces__msg__Lights),
  auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_member_array,  // message members
  auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_init_function,  // function to initialize message memory (memory has to be allocated)
  auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_type_support_handle = {
  0,
  &auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auto_aim_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auto_aim_interfaces, msg, Lights)() {
  auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auto_aim_interfaces, msg, Light)();
  auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_type_support_handle.typesupport_identifier) {
    auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &auto_aim_interfaces__msg__Lights__rosidl_typesupport_introspection_c__Lights_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
