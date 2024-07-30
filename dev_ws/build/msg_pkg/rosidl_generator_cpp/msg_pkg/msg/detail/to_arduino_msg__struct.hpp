// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_pkg:msg/ToArduinoMsg.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__MSG__DETAIL__TO_ARDUINO_MSG__STRUCT_HPP_
#define MSG_PKG__MSG__DETAIL__TO_ARDUINO_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__msg_pkg__msg__ToArduinoMsg __attribute__((deprecated))
#else
# define DEPRECATED__msg_pkg__msg__ToArduinoMsg __declspec(deprecated)
#endif

namespace msg_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ToArduinoMsg_
{
  using Type = ToArduinoMsg_<ContainerAllocator>;

  explicit ToArduinoMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1_speed = 0.0f;
      this->m2_speed = 0.0f;
      this->m1_encoder_speed = 0l;
      this->m2_encoder_speed = 0l;
    }
  }

  explicit ToArduinoMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1_speed = 0.0f;
      this->m2_speed = 0.0f;
      this->m1_encoder_speed = 0l;
      this->m2_encoder_speed = 0l;
    }
  }

  // field types and members
  using _m1_speed_type =
    float;
  _m1_speed_type m1_speed;
  using _m2_speed_type =
    float;
  _m2_speed_type m2_speed;
  using _m1_encoder_speed_type =
    int32_t;
  _m1_encoder_speed_type m1_encoder_speed;
  using _m2_encoder_speed_type =
    int32_t;
  _m2_encoder_speed_type m2_encoder_speed;

  // setters for named parameter idiom
  Type & set__m1_speed(
    const float & _arg)
  {
    this->m1_speed = _arg;
    return *this;
  }
  Type & set__m2_speed(
    const float & _arg)
  {
    this->m2_speed = _arg;
    return *this;
  }
  Type & set__m1_encoder_speed(
    const int32_t & _arg)
  {
    this->m1_encoder_speed = _arg;
    return *this;
  }
  Type & set__m2_encoder_speed(
    const int32_t & _arg)
  {
    this->m2_encoder_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_pkg::msg::ToArduinoMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_pkg::msg::ToArduinoMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_pkg::msg::ToArduinoMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_pkg::msg::ToArduinoMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_pkg::msg::ToArduinoMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_pkg::msg::ToArduinoMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_pkg::msg::ToArduinoMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_pkg::msg::ToArduinoMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_pkg::msg::ToArduinoMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_pkg::msg::ToArduinoMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_pkg__msg__ToArduinoMsg
    std::shared_ptr<msg_pkg::msg::ToArduinoMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_pkg__msg__ToArduinoMsg
    std::shared_ptr<msg_pkg::msg::ToArduinoMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToArduinoMsg_ & other) const
  {
    if (this->m1_speed != other.m1_speed) {
      return false;
    }
    if (this->m2_speed != other.m2_speed) {
      return false;
    }
    if (this->m1_encoder_speed != other.m1_encoder_speed) {
      return false;
    }
    if (this->m2_encoder_speed != other.m2_encoder_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToArduinoMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToArduinoMsg_

// alias to use template instance with default allocator
using ToArduinoMsg =
  msg_pkg::msg::ToArduinoMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_pkg

#endif  // MSG_PKG__MSG__DETAIL__TO_ARDUINO_MSG__STRUCT_HPP_
