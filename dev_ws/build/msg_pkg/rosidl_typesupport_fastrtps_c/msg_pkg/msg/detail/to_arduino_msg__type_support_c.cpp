// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from msg_pkg:msg/ToArduinoMsg.idl
// generated code does not contain a copyright notice
#include "msg_pkg/msg/detail/to_arduino_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "msg_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msg_pkg/msg/detail/to_arduino_msg__struct.h"
#include "msg_pkg/msg/detail/to_arduino_msg__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ToArduinoMsg__ros_msg_type = msg_pkg__msg__ToArduinoMsg;

static bool _ToArduinoMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ToArduinoMsg__ros_msg_type * ros_message = static_cast<const _ToArduinoMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: m1_speed
  {
    cdr << ros_message->m1_speed;
  }

  // Field name: m2_speed
  {
    cdr << ros_message->m2_speed;
  }

  // Field name: m1_encoder_speed
  {
    cdr << ros_message->m1_encoder_speed;
  }

  // Field name: m2_encoder_speed
  {
    cdr << ros_message->m2_encoder_speed;
  }

  return true;
}

static bool _ToArduinoMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ToArduinoMsg__ros_msg_type * ros_message = static_cast<_ToArduinoMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: m1_speed
  {
    cdr >> ros_message->m1_speed;
  }

  // Field name: m2_speed
  {
    cdr >> ros_message->m2_speed;
  }

  // Field name: m1_encoder_speed
  {
    cdr >> ros_message->m1_encoder_speed;
  }

  // Field name: m2_encoder_speed
  {
    cdr >> ros_message->m2_encoder_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_pkg
size_t get_serialized_size_msg_pkg__msg__ToArduinoMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ToArduinoMsg__ros_msg_type * ros_message = static_cast<const _ToArduinoMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name m1_speed
  {
    size_t item_size = sizeof(ros_message->m1_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m2_speed
  {
    size_t item_size = sizeof(ros_message->m2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m1_encoder_speed
  {
    size_t item_size = sizeof(ros_message->m1_encoder_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m2_encoder_speed
  {
    size_t item_size = sizeof(ros_message->m2_encoder_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ToArduinoMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_msg_pkg__msg__ToArduinoMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_pkg
size_t max_serialized_size_msg_pkg__msg__ToArduinoMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: m1_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m2_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m1_encoder_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m2_encoder_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ToArduinoMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_msg_pkg__msg__ToArduinoMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ToArduinoMsg = {
  "msg_pkg::msg",
  "ToArduinoMsg",
  _ToArduinoMsg__cdr_serialize,
  _ToArduinoMsg__cdr_deserialize,
  _ToArduinoMsg__get_serialized_size,
  _ToArduinoMsg__max_serialized_size
};

static rosidl_message_type_support_t _ToArduinoMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ToArduinoMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_pkg, msg, ToArduinoMsg)() {
  return &_ToArduinoMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
