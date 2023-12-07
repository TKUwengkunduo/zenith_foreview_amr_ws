// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from remote_controller_pkg:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef REMOTE_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__BUILDER_HPP_
#define REMOTE_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "remote_controller_pkg/msg/detail/motor_speeds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace remote_controller_pkg
{

namespace msg
{

namespace builder
{

class Init_MotorSpeeds_motor_speed2
{
public:
  explicit Init_MotorSpeeds_motor_speed2(::remote_controller_pkg::msg::MotorSpeeds & msg)
  : msg_(msg)
  {}
  ::remote_controller_pkg::msg::MotorSpeeds motor_speed2(::remote_controller_pkg::msg::MotorSpeeds::_motor_speed2_type arg)
  {
    msg_.motor_speed2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::remote_controller_pkg::msg::MotorSpeeds msg_;
};

class Init_MotorSpeeds_motor_speed1
{
public:
  Init_MotorSpeeds_motor_speed1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorSpeeds_motor_speed2 motor_speed1(::remote_controller_pkg::msg::MotorSpeeds::_motor_speed1_type arg)
  {
    msg_.motor_speed1 = std::move(arg);
    return Init_MotorSpeeds_motor_speed2(msg_);
  }

private:
  ::remote_controller_pkg::msg::MotorSpeeds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::remote_controller_pkg::msg::MotorSpeeds>()
{
  return remote_controller_pkg::msg::builder::Init_MotorSpeeds_motor_speed1();
}

}  // namespace remote_controller_pkg

#endif  // REMOTE_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__BUILDER_HPP_
