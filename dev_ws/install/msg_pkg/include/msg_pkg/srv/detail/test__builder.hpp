// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_pkg:srv/Test.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__SRV__DETAIL__TEST__BUILDER_HPP_
#define MSG_PKG__SRV__DETAIL__TEST__BUILDER_HPP_

#include "msg_pkg/srv/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_pkg
{

namespace srv
{

namespace builder
{

class Init_Test_Request_b
{
public:
  explicit Init_Test_Request_b(::msg_pkg::srv::Test_Request & msg)
  : msg_(msg)
  {}
  ::msg_pkg::srv::Test_Request b(::msg_pkg::srv::Test_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg::srv::Test_Request msg_;
};

class Init_Test_Request_a
{
public:
  Init_Test_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_Request_b a(::msg_pkg::srv::Test_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Test_Request_b(msg_);
  }

private:
  ::msg_pkg::srv::Test_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg::srv::Test_Request>()
{
  return msg_pkg::srv::builder::Init_Test_Request_a();
}

}  // namespace msg_pkg


namespace msg_pkg
{

namespace srv
{

namespace builder
{

class Init_Test_Response_result
{
public:
  explicit Init_Test_Response_result(::msg_pkg::srv::Test_Response & msg)
  : msg_(msg)
  {}
  ::msg_pkg::srv::Test_Response result(::msg_pkg::srv::Test_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg::srv::Test_Response msg_;
};

class Init_Test_Response_c
{
public:
  Init_Test_Response_c()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_Response_result c(::msg_pkg::srv::Test_Response::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_Test_Response_result(msg_);
  }

private:
  ::msg_pkg::srv::Test_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg::srv::Test_Response>()
{
  return msg_pkg::srv::builder::Init_Test_Response_c();
}

}  // namespace msg_pkg

#endif  // MSG_PKG__SRV__DETAIL__TEST__BUILDER_HPP_
