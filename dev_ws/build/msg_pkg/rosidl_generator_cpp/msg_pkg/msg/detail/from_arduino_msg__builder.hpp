// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_pkg:msg/FromArduinoMsg.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__MSG__DETAIL__FROM_ARDUINO_MSG__BUILDER_HPP_
#define MSG_PKG__MSG__DETAIL__FROM_ARDUINO_MSG__BUILDER_HPP_

#include "msg_pkg/msg/detail/from_arduino_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_pkg
{

namespace msg
{

namespace builder
{

class Init_FromArduinoMsg_encoder2
{
public:
  explicit Init_FromArduinoMsg_encoder2(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  ::msg_pkg::msg::FromArduinoMsg encoder2(::msg_pkg::msg::FromArduinoMsg::_encoder2_type arg)
  {
    msg_.encoder2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_encoder1
{
public:
  explicit Init_FromArduinoMsg_encoder1(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_encoder2 encoder1(::msg_pkg::msg::FromArduinoMsg::_encoder1_type arg)
  {
    msg_.encoder1 = std::move(arg);
    return Init_FromArduinoMsg_encoder2(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_yaw
{
public:
  explicit Init_FromArduinoMsg_yaw(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_encoder1 yaw(::msg_pkg::msg::FromArduinoMsg::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_FromArduinoMsg_encoder1(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_pitch
{
public:
  explicit Init_FromArduinoMsg_pitch(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_yaw pitch(::msg_pkg::msg::FromArduinoMsg::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_FromArduinoMsg_yaw(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_roll
{
public:
  explicit Init_FromArduinoMsg_roll(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_pitch roll(::msg_pkg::msg::FromArduinoMsg::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_FromArduinoMsg_pitch(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_mz
{
public:
  explicit Init_FromArduinoMsg_mz(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_roll mz(::msg_pkg::msg::FromArduinoMsg::_mz_type arg)
  {
    msg_.mz = std::move(arg);
    return Init_FromArduinoMsg_roll(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_my
{
public:
  explicit Init_FromArduinoMsg_my(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_mz my(::msg_pkg::msg::FromArduinoMsg::_my_type arg)
  {
    msg_.my = std::move(arg);
    return Init_FromArduinoMsg_mz(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_mx
{
public:
  explicit Init_FromArduinoMsg_mx(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_my mx(::msg_pkg::msg::FromArduinoMsg::_mx_type arg)
  {
    msg_.mx = std::move(arg);
    return Init_FromArduinoMsg_my(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_gz
{
public:
  explicit Init_FromArduinoMsg_gz(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_mx gz(::msg_pkg::msg::FromArduinoMsg::_gz_type arg)
  {
    msg_.gz = std::move(arg);
    return Init_FromArduinoMsg_mx(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_gy
{
public:
  explicit Init_FromArduinoMsg_gy(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_gz gy(::msg_pkg::msg::FromArduinoMsg::_gy_type arg)
  {
    msg_.gy = std::move(arg);
    return Init_FromArduinoMsg_gz(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_gx
{
public:
  explicit Init_FromArduinoMsg_gx(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_gy gx(::msg_pkg::msg::FromArduinoMsg::_gx_type arg)
  {
    msg_.gx = std::move(arg);
    return Init_FromArduinoMsg_gy(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_az
{
public:
  explicit Init_FromArduinoMsg_az(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_gx az(::msg_pkg::msg::FromArduinoMsg::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_FromArduinoMsg_gx(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_ay
{
public:
  explicit Init_FromArduinoMsg_ay(::msg_pkg::msg::FromArduinoMsg & msg)
  : msg_(msg)
  {}
  Init_FromArduinoMsg_az ay(::msg_pkg::msg::FromArduinoMsg::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_FromArduinoMsg_az(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

class Init_FromArduinoMsg_ax
{
public:
  Init_FromArduinoMsg_ax()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FromArduinoMsg_ay ax(::msg_pkg::msg::FromArduinoMsg::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_FromArduinoMsg_ay(msg_);
  }

private:
  ::msg_pkg::msg::FromArduinoMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg::msg::FromArduinoMsg>()
{
  return msg_pkg::msg::builder::Init_FromArduinoMsg_ax();
}

}  // namespace msg_pkg

#endif  // MSG_PKG__MSG__DETAIL__FROM_ARDUINO_MSG__BUILDER_HPP_
