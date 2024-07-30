// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_pkg:msg/ToArduinoMsg.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__MSG__DETAIL__TO_ARDUINO_MSG__STRUCT_H_
#define MSG_PKG__MSG__DETAIL__TO_ARDUINO_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ToArduinoMsg in the package msg_pkg.
typedef struct msg_pkg__msg__ToArduinoMsg
{
  float m1_speed;
  float m2_speed;
  int32_t m1_encoder_speed;
  int32_t m2_encoder_speed;
} msg_pkg__msg__ToArduinoMsg;

// Struct for a sequence of msg_pkg__msg__ToArduinoMsg.
typedef struct msg_pkg__msg__ToArduinoMsg__Sequence
{
  msg_pkg__msg__ToArduinoMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg__msg__ToArduinoMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_PKG__MSG__DETAIL__TO_ARDUINO_MSG__STRUCT_H_
