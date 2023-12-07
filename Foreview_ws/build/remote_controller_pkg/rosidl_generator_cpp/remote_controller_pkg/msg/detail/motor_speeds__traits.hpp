// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from remote_controller_pkg:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef REMOTE_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__TRAITS_HPP_
#define REMOTE_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "remote_controller_pkg/msg/detail/motor_speeds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace remote_controller_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorSpeeds & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_speed1
  {
    out << "motor_speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_speed1, out);
    out << ", ";
  }

  // member: motor_speed2
  {
    out << "motor_speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_speed2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorSpeeds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_speed1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_speed1, out);
    out << "\n";
  }

  // member: motor_speed2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_speed2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorSpeeds & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace remote_controller_pkg

namespace rosidl_generator_traits
{

[[deprecated("use remote_controller_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const remote_controller_pkg::msg::MotorSpeeds & msg,
  std::ostream & out, size_t indentation = 0)
{
  remote_controller_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use remote_controller_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const remote_controller_pkg::msg::MotorSpeeds & msg)
{
  return remote_controller_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<remote_controller_pkg::msg::MotorSpeeds>()
{
  return "remote_controller_pkg::msg::MotorSpeeds";
}

template<>
inline const char * name<remote_controller_pkg::msg::MotorSpeeds>()
{
  return "remote_controller_pkg/msg/MotorSpeeds";
}

template<>
struct has_fixed_size<remote_controller_pkg::msg::MotorSpeeds>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<remote_controller_pkg::msg::MotorSpeeds>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<remote_controller_pkg::msg::MotorSpeeds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // REMOTE_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__TRAITS_HPP_
