// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_controller_pkg:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_H_
#define DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorSpeeds in the package dynamixel_controller_pkg.
typedef struct dynamixel_controller_pkg__msg__MotorSpeeds
{
  int64_t motor_speed1;
  int64_t motor_speed2;
} dynamixel_controller_pkg__msg__MotorSpeeds;

// Struct for a sequence of dynamixel_controller_pkg__msg__MotorSpeeds.
typedef struct dynamixel_controller_pkg__msg__MotorSpeeds__Sequence
{
  dynamixel_controller_pkg__msg__MotorSpeeds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_controller_pkg__msg__MotorSpeeds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_H_
