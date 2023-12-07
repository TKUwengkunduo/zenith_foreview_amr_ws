// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_controller_pkg:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__BUILDER_HPP_
#define DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_controller_pkg/msg/detail/motor_speeds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_controller_pkg
{

namespace msg
{

namespace builder
{

class Init_MotorSpeeds_motor_speed2
{
public:
  explicit Init_MotorSpeeds_motor_speed2(::dynamixel_controller_pkg::msg::MotorSpeeds & msg)
  : msg_(msg)
  {}
  ::dynamixel_controller_pkg::msg::MotorSpeeds motor_speed2(::dynamixel_controller_pkg::msg::MotorSpeeds::_motor_speed2_type arg)
  {
    msg_.motor_speed2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_controller_pkg::msg::MotorSpeeds msg_;
};

class Init_MotorSpeeds_motor_speed1
{
public:
  Init_MotorSpeeds_motor_speed1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorSpeeds_motor_speed2 motor_speed1(::dynamixel_controller_pkg::msg::MotorSpeeds::_motor_speed1_type arg)
  {
    msg_.motor_speed1 = std::move(arg);
    return Init_MotorSpeeds_motor_speed2(msg_);
  }

private:
  ::dynamixel_controller_pkg::msg::MotorSpeeds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_controller_pkg::msg::MotorSpeeds>()
{
  return dynamixel_controller_pkg::msg::builder::Init_MotorSpeeds_motor_speed1();
}

}  // namespace dynamixel_controller_pkg

#endif  // DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__BUILDER_HPP_
