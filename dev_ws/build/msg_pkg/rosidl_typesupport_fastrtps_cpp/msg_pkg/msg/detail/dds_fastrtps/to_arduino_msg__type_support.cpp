// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msg_pkg:msg/ToArduinoMsg.idl
// generated code does not contain a copyright notice
#include "msg_pkg/msg/detail/to_arduino_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msg_pkg/msg/detail/to_arduino_msg__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace msg_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg
cdr_serialize(
  const msg_pkg::msg::ToArduinoMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: m1_speed
  cdr << ros_message.m1_speed;
  // Member: m2_speed
  cdr << ros_message.m2_speed;
  // Member: m1_encoder_speed
  cdr << ros_message.m1_encoder_speed;
  // Member: m2_encoder_speed
  cdr << ros_message.m2_encoder_speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_pkg::msg::ToArduinoMsg & ros_message)
{
  // Member: m1_speed
  cdr >> ros_message.m1_speed;

  // Member: m2_speed
  cdr >> ros_message.m2_speed;

  // Member: m1_encoder_speed
  cdr >> ros_message.m1_encoder_speed;

  // Member: m2_encoder_speed
  cdr >> ros_message.m2_encoder_speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg
get_serialized_size(
  const msg_pkg::msg::ToArduinoMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: m1_speed
  {
    size_t item_size = sizeof(ros_message.m1_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m2_speed
  {
    size_t item_size = sizeof(ros_message.m2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m1_encoder_speed
  {
    size_t item_size = sizeof(ros_message.m1_encoder_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m2_encoder_speed
  {
    size_t item_size = sizeof(ros_message.m2_encoder_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg
max_serialized_size_ToArduinoMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: m1_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m2_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m1_encoder_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m2_encoder_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ToArduinoMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_pkg::msg::ToArduinoMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ToArduinoMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_pkg::msg::ToArduinoMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ToArduinoMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_pkg::msg::ToArduinoMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ToArduinoMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ToArduinoMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _ToArduinoMsg__callbacks = {
  "msg_pkg::msg",
  "ToArduinoMsg",
  _ToArduinoMsg__cdr_serialize,
  _ToArduinoMsg__cdr_deserialize,
  _ToArduinoMsg__get_serialized_size,
  _ToArduinoMsg__max_serialized_size
};

static rosidl_message_type_support_t _ToArduinoMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ToArduinoMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_pkg::msg::ToArduinoMsg>()
{
  return &msg_pkg::msg::typesupport_fastrtps_cpp::_ToArduinoMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_pkg, msg, ToArduinoMsg)() {
  return &msg_pkg::msg::typesupport_fastrtps_cpp::_ToArduinoMsg__handle;
}

#ifdef __cplusplus
}
#endif
