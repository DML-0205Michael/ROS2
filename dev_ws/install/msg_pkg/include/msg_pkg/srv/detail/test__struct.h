// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_pkg:srv/Test.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__SRV__DETAIL__TEST__STRUCT_H_
#define MSG_PKG__SRV__DETAIL__TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Test in the package msg_pkg.
typedef struct msg_pkg__srv__Test_Request
{
  float a;
  float b;
} msg_pkg__srv__Test_Request;

// Struct for a sequence of msg_pkg__srv__Test_Request.
typedef struct msg_pkg__srv__Test_Request__Sequence
{
  msg_pkg__srv__Test_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg__srv__Test_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Test in the package msg_pkg.
typedef struct msg_pkg__srv__Test_Response
{
  float c;
  bool result;
} msg_pkg__srv__Test_Response;

// Struct for a sequence of msg_pkg__srv__Test_Response.
typedef struct msg_pkg__srv__Test_Response__Sequence
{
  msg_pkg__srv__Test_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg__srv__Test_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_PKG__SRV__DETAIL__TEST__STRUCT_H_
