// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from geometry_msgs:msg/AccelWithCovariance.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/accel_with_covariance__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.h"
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/accel__functions.h"  // accel

// forward declare type support functions
size_t get_serialized_size_geometry_msgs__msg__Accel(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__Accel(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Accel)();


typedef geometry_msgs__msg__AccelWithCovariance _AccelWithCovariance__ros_msg_type;

static bool _AccelWithCovariance__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _AccelWithCovariance__ros_msg_type * ros_message = (_AccelWithCovariance__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: accel
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Accel
      )()->data))->cdr_serialize(&ros_message->accel, cdr);
  // Member: covariance
  {
    const size_t size = 36;
    rv = ucdr_serialize_array_double(cdr, ros_message->covariance, size);
  }

  return rv;
}

static bool _AccelWithCovariance__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _AccelWithCovariance__ros_msg_type * ros_message = (_AccelWithCovariance__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: accel
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Accel
      )()->data))->cdr_deserialize(cdr, &ros_message->accel);
  // Field name: covariance
  {
    const size_t size = 36;
    rv = ucdr_deserialize_array_double(cdr, ros_message->covariance, size);
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__AccelWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _AccelWithCovariance__ros_msg_type * ros_message = (const _AccelWithCovariance__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: accel
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Accel(&ros_message->accel, current_alignment);
  // Member: covariance
  {
    const size_t array_size = 36;
    const size_t item_size = sizeof(ros_message->covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AccelWithCovariance__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_geometry_msgs__msg__AccelWithCovariance(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__AccelWithCovariance(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: accel
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Accel(full_bounded, current_alignment);
  // Member: covariance
  {
    const size_t array_size = 36;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }

  return current_alignment - initial_alignment;
}

static size_t _AccelWithCovariance__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_geometry_msgs__msg__AccelWithCovariance(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_AccelWithCovariance = {
  "geometry_msgs::msg",
  "AccelWithCovariance",
  _AccelWithCovariance__cdr_serialize,
  _AccelWithCovariance__cdr_deserialize,
  _AccelWithCovariance__get_serialized_size,
  get_serialized_size_geometry_msgs__msg__AccelWithCovariance,
  _AccelWithCovariance__max_serialized_size
};

static rosidl_message_type_support_t _AccelWithCovariance__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_AccelWithCovariance,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, AccelWithCovariance)() {
  return &_AccelWithCovariance__type_support;
}

#if defined(__cplusplus)
}
#endif
