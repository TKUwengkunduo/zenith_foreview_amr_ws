// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from remote_controller_pkg:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef REMOTE_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define REMOTE_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "remote_controller_pkg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "remote_controller_pkg/msg/detail/motor_speeds__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace remote_controller_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_remote_controller_pkg
cdr_serialize(
  const remote_controller_pkg::msg::MotorSpeeds & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_remote_controller_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  remote_controller_pkg::msg::MotorSpeeds & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_remote_controller_pkg
get_serialized_size(
  const remote_controller_pkg::msg::MotorSpeeds & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_remote_controller_pkg
max_serialized_size_MotorSpeeds(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace remote_controller_pkg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_remote_controller_pkg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, remote_controller_pkg, msg, MotorSpeeds)();

#ifdef __cplusplus
}
#endif

#endif  // REMOTE_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
