// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_pkg:msg/ToArduinoMsg.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__MSG__DETAIL__TO_ARDUINO_MSG__BUILDER_HPP_
#define MSG_PKG__MSG__DETAIL__TO_ARDUINO_MSG__BUILDER_HPP_

#include "msg_pkg/msg/detail/to_arduino_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_pkg
{

namespace msg
{

namespace builder
{

class Init_ToArduinoMsg_m2_encoder_speed
{
public:
  explicit Init_ToArduinoMsg_m2_encoder_speed(::msg_pkg::msg::ToArduinoMsg & msg)
  : msg_(msg)
  {}
  ::msg_pkg::msg::ToArduinoMsg m2_encoder_speed(::msg_pkg::msg::ToArduinoMsg::_m2_encoder_speed_type arg)
  {
    msg_.m2_encoder_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg::msg::ToArduinoMsg msg_;
};

class Init_ToArduinoMsg_m1_encoder_speed
{
public:
  explicit Init_ToArduinoMsg_m1_encoder_speed(::msg_pkg::msg::ToArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_ToArduinoMsg_m2_encoder_speed m1_encoder_speed(::msg_pkg::msg::ToArduinoMsg::_m1_encoder_speed_type arg)
  {
    msg_.m1_encoder_speed = std::move(arg);
    return Init_ToArduinoMsg_m2_encoder_speed(msg_);
  }

private:
  ::msg_pkg::msg::ToArduinoMsg msg_;
};

class Init_ToArduinoMsg_m2_speed
{
public:
  explicit Init_ToArduinoMsg_m2_speed(::msg_pkg::msg::ToArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_ToArduinoMsg_m1_encoder_speed m2_speed(::msg_pkg::msg::ToArduinoMsg::_m2_speed_type arg)
  {
    msg_.m2_speed = std::move(arg);
    return Init_ToArduinoMsg_m1_encoder_speed(msg_);
  }

private:
  ::msg_pkg::msg::ToArduinoMsg msg_;
};

class Init_ToArduinoMsg_m1_speed
{
public:
  Init_ToArduinoMsg_m1_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToArduinoMsg_m2_speed m1_speed(::msg_pkg::msg::ToArduinoMsg::_m1_speed_type arg)
  {
    msg_.m1_speed = std::move(arg);
    return Init_ToArduinoMsg_m2_speed(msg_);
  }

private:
  ::msg_pkg::msg::ToArduinoMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg::msg::ToArduinoMsg>()
{
  return msg_pkg::msg::builder::Init_ToArduinoMsg_m1_speed();
}

}  // namespace msg_pkg

#endif  // MSG_PKG__MSG__DETAIL__TO_ARDUINO_MSG__BUILDER_HPP_
