// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_controller_pkg:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_HPP_
#define DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_controller_pkg__msg__MotorSpeeds __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_controller_pkg__msg__MotorSpeeds __declspec(deprecated)
#endif

namespace dynamixel_controller_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorSpeeds_
{
  using Type = MotorSpeeds_<ContainerAllocator>;

  explicit MotorSpeeds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_speed1 = 0ll;
      this->motor_speed2 = 0ll;
    }
  }

  explicit MotorSpeeds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_speed1 = 0ll;
      this->motor_speed2 = 0ll;
    }
  }

  // field types and members
  using _motor_speed1_type =
    int64_t;
  _motor_speed1_type motor_speed1;
  using _motor_speed2_type =
    int64_t;
  _motor_speed2_type motor_speed2;

  // setters for named parameter idiom
  Type & set__motor_speed1(
    const int64_t & _arg)
  {
    this->motor_speed1 = _arg;
    return *this;
  }
  Type & set__motor_speed2(
    const int64_t & _arg)
  {
    this->motor_speed2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_controller_pkg__msg__MotorSpeeds
    std::shared_ptr<dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_controller_pkg__msg__MotorSpeeds
    std::shared_ptr<dynamixel_controller_pkg::msg::MotorSpeeds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorSpeeds_ & other) const
  {
    if (this->motor_speed1 != other.motor_speed1) {
      return false;
    }
    if (this->motor_speed2 != other.motor_speed2) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorSpeeds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorSpeeds_

// alias to use template instance with default allocator
using MotorSpeeds =
  dynamixel_controller_pkg::msg::MotorSpeeds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_controller_pkg

#endif  // DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_HPP_
