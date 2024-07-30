// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_pkg:msg/FromArduinoMsg.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG__MSG__DETAIL__FROM_ARDUINO_MSG__STRUCT_HPP_
#define MSG_PKG__MSG__DETAIL__FROM_ARDUINO_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__msg_pkg__msg__FromArduinoMsg __attribute__((deprecated))
#else
# define DEPRECATED__msg_pkg__msg__FromArduinoMsg __declspec(deprecated)
#endif

namespace msg_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FromArduinoMsg_
{
  using Type = FromArduinoMsg_<ContainerAllocator>;

  explicit FromArduinoMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ax = 0.0f;
      this->ay = 0.0f;
      this->az = 0.0f;
      this->gx = 0.0f;
      this->gy = 0.0f;
      this->gz = 0.0f;
      this->mx = 0.0f;
      this->my = 0.0f;
      this->mz = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->encoder1 = 0l;
      this->encoder2 = 0l;
    }
  }

  explicit FromArduinoMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ax = 0.0f;
      this->ay = 0.0f;
      this->az = 0.0f;
      this->gx = 0.0f;
      this->gy = 0.0f;
      this->gz = 0.0f;
      this->mx = 0.0f;
      this->my = 0.0f;
      this->mz = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->encoder1 = 0l;
      this->encoder2 = 0l;
    }
  }

  // field types and members
  using _ax_type =
    float;
  _ax_type ax;
  using _ay_type =
    float;
  _ay_type ay;
  using _az_type =
    float;
  _az_type az;
  using _gx_type =
    float;
  _gx_type gx;
  using _gy_type =
    float;
  _gy_type gy;
  using _gz_type =
    float;
  _gz_type gz;
  using _mx_type =
    float;
  _mx_type mx;
  using _my_type =
    float;
  _my_type my;
  using _mz_type =
    float;
  _mz_type mz;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _encoder1_type =
    int32_t;
  _encoder1_type encoder1;
  using _encoder2_type =
    int32_t;
  _encoder2_type encoder2;

  // setters for named parameter idiom
  Type & set__ax(
    const float & _arg)
  {
    this->ax = _arg;
    return *this;
  }
  Type & set__ay(
    const float & _arg)
  {
    this->ay = _arg;
    return *this;
  }
  Type & set__az(
    const float & _arg)
  {
    this->az = _arg;
    return *this;
  }
  Type & set__gx(
    const float & _arg)
  {
    this->gx = _arg;
    return *this;
  }
  Type & set__gy(
    const float & _arg)
  {
    this->gy = _arg;
    return *this;
  }
  Type & set__gz(
    const float & _arg)
  {
    this->gz = _arg;
    return *this;
  }
  Type & set__mx(
    const float & _arg)
  {
    this->mx = _arg;
    return *this;
  }
  Type & set__my(
    const float & _arg)
  {
    this->my = _arg;
    return *this;
  }
  Type & set__mz(
    const float & _arg)
  {
    this->mz = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__encoder1(
    const int32_t & _arg)
  {
    this->encoder1 = _arg;
    return *this;
  }
  Type & set__encoder2(
    const int32_t & _arg)
  {
    this->encoder2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_pkg::msg::FromArduinoMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_pkg::msg::FromArduinoMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_pkg::msg::FromArduinoMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_pkg::msg::FromArduinoMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_pkg::msg::FromArduinoMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_pkg::msg::FromArduinoMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_pkg::msg::FromArduinoMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_pkg::msg::FromArduinoMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_pkg::msg::FromArduinoMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_pkg::msg::FromArduinoMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_pkg__msg__FromArduinoMsg
    std::shared_ptr<msg_pkg::msg::FromArduinoMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_pkg__msg__FromArduinoMsg
    std::shared_ptr<msg_pkg::msg::FromArduinoMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FromArduinoMsg_ & other) const
  {
    if (this->ax != other.ax) {
      return false;
    }
    if (this->ay != other.ay) {
      return false;
    }
    if (this->az != other.az) {
      return false;
    }
    if (this->gx != other.gx) {
      return false;
    }
    if (this->gy != other.gy) {
      return false;
    }
    if (this->gz != other.gz) {
      return false;
    }
    if (this->mx != other.mx) {
      return false;
    }
    if (this->my != other.my) {
      return false;
    }
    if (this->mz != other.mz) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->encoder1 != other.encoder1) {
      return false;
    }
    if (this->encoder2 != other.encoder2) {
      return false;
    }
    return true;
  }
  bool operator!=(const FromArduinoMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FromArduinoMsg_

// alias to use template instance with default allocator
using FromArduinoMsg =
  msg_pkg::msg::FromArduinoMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_pkg

#endif  // MSG_PKG__MSG__DETAIL__FROM_ARDUINO_MSG__STRUCT_HPP_
