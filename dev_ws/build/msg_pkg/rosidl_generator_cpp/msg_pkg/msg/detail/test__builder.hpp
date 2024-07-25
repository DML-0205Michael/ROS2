// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_pkg:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__MSG__DETAIL__TEST__BUILDER_HPP_
#define MSG_PKG__MSG__DETAIL__TEST__BUILDER_HPP_

#include "msg_pkg/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_pkg
{

namespace msg
{

namespace builder
{

class Init_Test_encoder2
{
public:
  explicit Init_Test_encoder2(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  ::msg_pkg::msg::Test encoder2(::msg_pkg::msg::Test::_encoder2_type arg)
  {
    msg_.encoder2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_encoder1
{
public:
  explicit Init_Test_encoder1(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_encoder2 encoder1(::msg_pkg::msg::Test::_encoder1_type arg)
  {
    msg_.encoder1 = std::move(arg);
    return Init_Test_encoder2(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_yaw
{
public:
  explicit Init_Test_yaw(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_encoder1 yaw(::msg_pkg::msg::Test::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Test_encoder1(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_pitch
{
public:
  explicit Init_Test_pitch(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_yaw pitch(::msg_pkg::msg::Test::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Test_yaw(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_roll
{
public:
  explicit Init_Test_roll(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_pitch roll(::msg_pkg::msg::Test::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Test_pitch(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_mz
{
public:
  explicit Init_Test_mz(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_roll mz(::msg_pkg::msg::Test::_mz_type arg)
  {
    msg_.mz = std::move(arg);
    return Init_Test_roll(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_my
{
public:
  explicit Init_Test_my(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_mz my(::msg_pkg::msg::Test::_my_type arg)
  {
    msg_.my = std::move(arg);
    return Init_Test_mz(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_mx
{
public:
  explicit Init_Test_mx(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_my mx(::msg_pkg::msg::Test::_mx_type arg)
  {
    msg_.mx = std::move(arg);
    return Init_Test_my(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_gz
{
public:
  explicit Init_Test_gz(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_mx gz(::msg_pkg::msg::Test::_gz_type arg)
  {
    msg_.gz = std::move(arg);
    return Init_Test_mx(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_gy
{
public:
  explicit Init_Test_gy(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_gz gy(::msg_pkg::msg::Test::_gy_type arg)
  {
    msg_.gy = std::move(arg);
    return Init_Test_gz(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_gx
{
public:
  explicit Init_Test_gx(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_gy gx(::msg_pkg::msg::Test::_gx_type arg)
  {
    msg_.gx = std::move(arg);
    return Init_Test_gy(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_az
{
public:
  explicit Init_Test_az(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_gx az(::msg_pkg::msg::Test::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_Test_gx(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_ay
{
public:
  explicit Init_Test_ay(::msg_pkg::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_az ay(::msg_pkg::msg::Test::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_Test_az(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

class Init_Test_ax
{
public:
  Init_Test_ax()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_ay ax(::msg_pkg::msg::Test::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_Test_ay(msg_);
  }

private:
  ::msg_pkg::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg::msg::Test>()
{
  return msg_pkg::msg::builder::Init_Test_ax();
}

}  // namespace msg_pkg

#endif  // MSG_PKG__MSG__DETAIL__TEST__BUILDER_HPP_
