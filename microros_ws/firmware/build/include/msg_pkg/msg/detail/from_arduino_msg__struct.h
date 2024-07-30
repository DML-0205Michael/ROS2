// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_pkg:msg/FromArduinoMsg.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__MSG__DETAIL__FROM_ARDUINO_MSG__STRUCT_H_
#define MSG_PKG__MSG__DETAIL__FROM_ARDUINO_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/FromArduinoMsg in the package msg_pkg.
typedef struct msg_pkg__msg__FromArduinoMsg
{
  float ax;
  float ay;
  float az;
  float gx;
  float gy;
  float gz;
  float mx;
  float my;
  float mz;
  float roll;
  float pitch;
  float yaw;
  int32_t encoder1;
  int32_t encoder2;
} msg_pkg__msg__FromArduinoMsg;

// Struct for a sequence of msg_pkg__msg__FromArduinoMsg.
typedef struct msg_pkg__msg__FromArduinoMsg__Sequence
{
  msg_pkg__msg__FromArduinoMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg__msg__FromArduinoMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_PKG__MSG__DETAIL__FROM_ARDUINO_MSG__STRUCT_H_
