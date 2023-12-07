// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from remote_controller_pkg:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice
#include "remote_controller_pkg/msg/detail/motor_speeds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
remote_controller_pkg__msg__MotorSpeeds__init(remote_controller_pkg__msg__MotorSpeeds * msg)
{
  if (!msg) {
    return false;
  }
  // motor_speed1
  // motor_speed2
  return true;
}

void
remote_controller_pkg__msg__MotorSpeeds__fini(remote_controller_pkg__msg__MotorSpeeds * msg)
{
  if (!msg) {
    return;
  }
  // motor_speed1
  // motor_speed2
}

bool
remote_controller_pkg__msg__MotorSpeeds__are_equal(const remote_controller_pkg__msg__MotorSpeeds * lhs, const remote_controller_pkg__msg__MotorSpeeds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_speed1
  if (lhs->motor_speed1 != rhs->motor_speed1) {
    return false;
  }
  // motor_speed2
  if (lhs->motor_speed2 != rhs->motor_speed2) {
    return false;
  }
  return true;
}

bool
remote_controller_pkg__msg__MotorSpeeds__copy(
  const remote_controller_pkg__msg__MotorSpeeds * input,
  remote_controller_pkg__msg__MotorSpeeds * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_speed1
  output->motor_speed1 = input->motor_speed1;
  // motor_speed2
  output->motor_speed2 = input->motor_speed2;
  return true;
}

remote_controller_pkg__msg__MotorSpeeds *
remote_controller_pkg__msg__MotorSpeeds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  remote_controller_pkg__msg__MotorSpeeds * msg = (remote_controller_pkg__msg__MotorSpeeds *)allocator.allocate(sizeof(remote_controller_pkg__msg__MotorSpeeds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(remote_controller_pkg__msg__MotorSpeeds));
  bool success = remote_controller_pkg__msg__MotorSpeeds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
remote_controller_pkg__msg__MotorSpeeds__destroy(remote_controller_pkg__msg__MotorSpeeds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    remote_controller_pkg__msg__MotorSpeeds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
remote_controller_pkg__msg__MotorSpeeds__Sequence__init(remote_controller_pkg__msg__MotorSpeeds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  remote_controller_pkg__msg__MotorSpeeds * data = NULL;

  if (size) {
    data = (remote_controller_pkg__msg__MotorSpeeds *)allocator.zero_allocate(size, sizeof(remote_controller_pkg__msg__MotorSpeeds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = remote_controller_pkg__msg__MotorSpeeds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        remote_controller_pkg__msg__MotorSpeeds__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
remote_controller_pkg__msg__MotorSpeeds__Sequence__fini(remote_controller_pkg__msg__MotorSpeeds__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      remote_controller_pkg__msg__MotorSpeeds__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

remote_controller_pkg__msg__MotorSpeeds__Sequence *
remote_controller_pkg__msg__MotorSpeeds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  remote_controller_pkg__msg__MotorSpeeds__Sequence * array = (remote_controller_pkg__msg__MotorSpeeds__Sequence *)allocator.allocate(sizeof(remote_controller_pkg__msg__MotorSpeeds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = remote_controller_pkg__msg__MotorSpeeds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
remote_controller_pkg__msg__MotorSpeeds__Sequence__destroy(remote_controller_pkg__msg__MotorSpeeds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    remote_controller_pkg__msg__MotorSpeeds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
remote_controller_pkg__msg__MotorSpeeds__Sequence__are_equal(const remote_controller_pkg__msg__MotorSpeeds__Sequence * lhs, const remote_controller_pkg__msg__MotorSpeeds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!remote_controller_pkg__msg__MotorSpeeds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
remote_controller_pkg__msg__MotorSpeeds__Sequence__copy(
  const remote_controller_pkg__msg__MotorSpeeds__Sequence * input,
  remote_controller_pkg__msg__MotorSpeeds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(remote_controller_pkg__msg__MotorSpeeds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    remote_controller_pkg__msg__MotorSpeeds * data =
      (remote_controller_pkg__msg__MotorSpeeds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!remote_controller_pkg__msg__MotorSpeeds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          remote_controller_pkg__msg__MotorSpeeds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!remote_controller_pkg__msg__MotorSpeeds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
