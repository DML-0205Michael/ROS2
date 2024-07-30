// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msg_pkg:msg/FromArduinoMsg.idl
// generated code does not contain a copyright notice
#include "msg_pkg/msg/detail/from_arduino_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msg_pkg/msg/detail/from_arduino_msg__struct.hpp"

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
  const msg_pkg::msg::FromArduinoMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ax
  cdr << ros_message.ax;
  // Member: ay
  cdr << ros_message.ay;
  // Member: az
  cdr << ros_message.az;
  // Member: gx
  cdr << ros_message.gx;
  // Member: gy
  cdr << ros_message.gy;
  // Member: gz
  cdr << ros_message.gz;
  // Member: mx
  cdr << ros_message.mx;
  // Member: my
  cdr << ros_message.my;
  // Member: mz
  cdr << ros_message.mz;
  // Member: roll
  cdr << ros_message.roll;
  // Member: pitch
  cdr << ros_message.pitch;
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: encoder1
  cdr << ros_message.encoder1;
  // Member: encoder2
  cdr << ros_message.encoder2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_pkg::msg::FromArduinoMsg & ros_message)
{
  // Member: ax
  cdr >> ros_message.ax;

  // Member: ay
  cdr >> ros_message.ay;

  // Member: az
  cdr >> ros_message.az;

  // Member: gx
  cdr >> ros_message.gx;

  // Member: gy
  cdr >> ros_message.gy;

  // Member: gz
  cdr >> ros_message.gz;

  // Member: mx
  cdr >> ros_message.mx;

  // Member: my
  cdr >> ros_message.my;

  // Member: mz
  cdr >> ros_message.mz;

  // Member: roll
  cdr >> ros_message.roll;

  // Member: pitch
  cdr >> ros_message.pitch;

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: encoder1
  cdr >> ros_message.encoder1;

  // Member: encoder2
  cdr >> ros_message.encoder2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg
get_serialized_size(
  const msg_pkg::msg::FromArduinoMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ax
  {
    size_t item_size = sizeof(ros_message.ax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ay
  {
    size_t item_size = sizeof(ros_message.ay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: az
  {
    size_t item_size = sizeof(ros_message.az);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gx
  {
    size_t item_size = sizeof(ros_message.gx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gy
  {
    size_t item_size = sizeof(ros_message.gy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gz
  {
    size_t item_size = sizeof(ros_message.gz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mx
  {
    size_t item_size = sizeof(ros_message.mx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: my
  {
    size_t item_size = sizeof(ros_message.my);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mz
  {
    size_t item_size = sizeof(ros_message.mz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll
  {
    size_t item_size = sizeof(ros_message.roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch
  {
    size_t item_size = sizeof(ros_message.pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: encoder1
  {
    size_t item_size = sizeof(ros_message.encoder1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: encoder2
  {
    size_t item_size = sizeof(ros_message.encoder2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg
max_serialized_size_FromArduinoMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: az
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: my
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: encoder1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: encoder2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _FromArduinoMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_pkg::msg::FromArduinoMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FromArduinoMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_pkg::msg::FromArduinoMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FromArduinoMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_pkg::msg::FromArduinoMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FromArduinoMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FromArduinoMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _FromArduinoMsg__callbacks = {
  "msg_pkg::msg",
  "FromArduinoMsg",
  _FromArduinoMsg__cdr_serialize,
  _FromArduinoMsg__cdr_deserialize,
  _FromArduinoMsg__get_serialized_size,
  _FromArduinoMsg__max_serialized_size
};

static rosidl_message_type_support_t _FromArduinoMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FromArduinoMsg__callbacks,
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
get_message_type_support_handle<msg_pkg::msg::FromArduinoMsg>()
{
  return &msg_pkg::msg::typesupport_fastrtps_cpp::_FromArduinoMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_pkg, msg, FromArduinoMsg)() {
  return &msg_pkg::msg::typesupport_fastrtps_cpp::_FromArduinoMsg__handle;
}

#ifdef __cplusplus
}
#endif
