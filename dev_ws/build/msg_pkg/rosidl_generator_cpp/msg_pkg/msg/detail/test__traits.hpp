// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_pkg:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__MSG__DETAIL__TEST__TRAITS_HPP_
#define MSG_PKG__MSG__DETAIL__TEST__TRAITS_HPP_

#include "msg_pkg/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_pkg::msg::Test>()
{
  return "msg_pkg::msg::Test";
}

template<>
inline const char * name<msg_pkg::msg::Test>()
{
  return "msg_pkg/msg/Test";
}

template<>
struct has_fixed_size<msg_pkg::msg::Test>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_pkg::msg::Test>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_pkg::msg::Test>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_PKG__MSG__DETAIL__TEST__TRAITS_HPP_
