// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_pkg:srv/Test.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__SRV__DETAIL__TEST__TRAITS_HPP_
#define MSG_PKG__SRV__DETAIL__TEST__TRAITS_HPP_

#include "msg_pkg/srv/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_pkg::srv::Test_Request>()
{
  return "msg_pkg::srv::Test_Request";
}

template<>
inline const char * name<msg_pkg::srv::Test_Request>()
{
  return "msg_pkg/srv/Test_Request";
}

template<>
struct has_fixed_size<msg_pkg::srv::Test_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_pkg::srv::Test_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_pkg::srv::Test_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_pkg::srv::Test_Response>()
{
  return "msg_pkg::srv::Test_Response";
}

template<>
inline const char * name<msg_pkg::srv::Test_Response>()
{
  return "msg_pkg/srv/Test_Response";
}

template<>
struct has_fixed_size<msg_pkg::srv::Test_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_pkg::srv::Test_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_pkg::srv::Test_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_pkg::srv::Test>()
{
  return "msg_pkg::srv::Test";
}

template<>
inline const char * name<msg_pkg::srv::Test>()
{
  return "msg_pkg/srv/Test";
}

template<>
struct has_fixed_size<msg_pkg::srv::Test>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_pkg::srv::Test_Request>::value &&
    has_fixed_size<msg_pkg::srv::Test_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_pkg::srv::Test>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_pkg::srv::Test_Request>::value &&
    has_bounded_size<msg_pkg::srv::Test_Response>::value
  >
{
};

template<>
struct is_service<msg_pkg::srv::Test>
  : std::true_type
{
};

template<>
struct is_service_request<msg_pkg::srv::Test_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_pkg::srv::Test_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MSG_PKG__SRV__DETAIL__TEST__TRAITS_HPP_
