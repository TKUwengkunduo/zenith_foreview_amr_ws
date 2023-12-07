// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from remote_controller_pkg:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice
#include "remote_controller_pkg/msg/detail/motor_speeds__rosidl_typesupport_fastrtps_cpp.hpp"
#include "remote_controller_pkg/msg/detail/motor_speeds__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor_speed1
  cdr << ros_message.motor_speed1;
  // Member: motor_speed2
  cdr << ros_message.motor_speed2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_remote_controller_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  remote_controller_pkg::msg::MotorSpeeds & ros_message)
{
  // Member: motor_speed1
  cdr >> ros_message.motor_speed1;

  // Member: motor_speed2
  cdr >> ros_message.motor_speed2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_remote_controller_pkg
get_serialized_size(
  const remote_controller_pkg::msg::MotorSpeeds & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor_speed1
  {
    size_t item_size = sizeof(ros_message.motor_speed1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_speed2
  {
    size_t item_size = sizeof(ros_message.motor_speed2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_remote_controller_pkg
max_serialized_size_MotorSpeeds(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: motor_speed1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: motor_speed2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MotorSpeeds__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const remote_controller_pkg::msg::MotorSpeeds *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorSpeeds__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<remote_controller_pkg::msg::MotorSpeeds *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorSpeeds__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const remote_controller_pkg::msg::MotorSpeeds *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorSpeeds__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorSpeeds(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorSpeeds__callbacks = {
  "remote_controller_pkg::msg",
  "MotorSpeeds",
  _MotorSpeeds__cdr_serialize,
  _MotorSpeeds__cdr_deserialize,
  _MotorSpeeds__get_serialized_size,
  _MotorSpeeds__max_serialized_size
};

static rosidl_message_type_support_t _MotorSpeeds__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorSpeeds__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace remote_controller_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_remote_controller_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<remote_controller_pkg::msg::MotorSpeeds>()
{
  return &remote_controller_pkg::msg::typesupport_fastrtps_cpp::_MotorSpeeds__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, remote_controller_pkg, msg, MotorSpeeds)() {
  return &remote_controller_pkg::msg::typesupport_fastrtps_cpp::_MotorSpeeds__handle;
}

#ifdef __cplusplus
}
#endif
