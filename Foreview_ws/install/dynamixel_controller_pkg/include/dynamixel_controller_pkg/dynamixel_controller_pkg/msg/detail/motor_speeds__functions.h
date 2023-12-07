// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dynamixel_controller_pkg:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__FUNCTIONS_H_
#define DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dynamixel_controller_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "dynamixel_controller_pkg/msg/detail/motor_speeds__struct.h"

/// Initialize msg/MotorSpeeds message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynamixel_controller_pkg__msg__MotorSpeeds
 * )) before or use
 * dynamixel_controller_pkg__msg__MotorSpeeds__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
bool
dynamixel_controller_pkg__msg__MotorSpeeds__init(dynamixel_controller_pkg__msg__MotorSpeeds * msg);

/// Finalize msg/MotorSpeeds message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
void
dynamixel_controller_pkg__msg__MotorSpeeds__fini(dynamixel_controller_pkg__msg__MotorSpeeds * msg);

/// Create msg/MotorSpeeds message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynamixel_controller_pkg__msg__MotorSpeeds__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
dynamixel_controller_pkg__msg__MotorSpeeds *
dynamixel_controller_pkg__msg__MotorSpeeds__create();

/// Destroy msg/MotorSpeeds message.
/**
 * It calls
 * dynamixel_controller_pkg__msg__MotorSpeeds__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
void
dynamixel_controller_pkg__msg__MotorSpeeds__destroy(dynamixel_controller_pkg__msg__MotorSpeeds * msg);

/// Check for msg/MotorSpeeds message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
bool
dynamixel_controller_pkg__msg__MotorSpeeds__are_equal(const dynamixel_controller_pkg__msg__MotorSpeeds * lhs, const dynamixel_controller_pkg__msg__MotorSpeeds * rhs);

/// Copy a msg/MotorSpeeds message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
bool
dynamixel_controller_pkg__msg__MotorSpeeds__copy(
  const dynamixel_controller_pkg__msg__MotorSpeeds * input,
  dynamixel_controller_pkg__msg__MotorSpeeds * output);

/// Initialize array of msg/MotorSpeeds messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynamixel_controller_pkg__msg__MotorSpeeds__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
bool
dynamixel_controller_pkg__msg__MotorSpeeds__Sequence__init(dynamixel_controller_pkg__msg__MotorSpeeds__Sequence * array, size_t size);

/// Finalize array of msg/MotorSpeeds messages.
/**
 * It calls
 * dynamixel_controller_pkg__msg__MotorSpeeds__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
void
dynamixel_controller_pkg__msg__MotorSpeeds__Sequence__fini(dynamixel_controller_pkg__msg__MotorSpeeds__Sequence * array);

/// Create array of msg/MotorSpeeds messages.
/**
 * It allocates the memory for the array and calls
 * dynamixel_controller_pkg__msg__MotorSpeeds__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
dynamixel_controller_pkg__msg__MotorSpeeds__Sequence *
dynamixel_controller_pkg__msg__MotorSpeeds__Sequence__create(size_t size);

/// Destroy array of msg/MotorSpeeds messages.
/**
 * It calls
 * dynamixel_controller_pkg__msg__MotorSpeeds__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
void
dynamixel_controller_pkg__msg__MotorSpeeds__Sequence__destroy(dynamixel_controller_pkg__msg__MotorSpeeds__Sequence * array);

/// Check for msg/MotorSpeeds message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
bool
dynamixel_controller_pkg__msg__MotorSpeeds__Sequence__are_equal(const dynamixel_controller_pkg__msg__MotorSpeeds__Sequence * lhs, const dynamixel_controller_pkg__msg__MotorSpeeds__Sequence * rhs);

/// Copy an array of msg/MotorSpeeds messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_controller_pkg
bool
dynamixel_controller_pkg__msg__MotorSpeeds__Sequence__copy(
  const dynamixel_controller_pkg__msg__MotorSpeeds__Sequence * input,
  dynamixel_controller_pkg__msg__MotorSpeeds__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_CONTROLLER_PKG__MSG__DETAIL__MOTOR_SPEEDS__FUNCTIONS_H_
