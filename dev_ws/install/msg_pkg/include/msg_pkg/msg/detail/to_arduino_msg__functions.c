// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_pkg:msg/ToArduinoMsg.idl
// generated code does not contain a copyright notice
#include "msg_pkg/msg/detail/to_arduino_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msg_pkg__msg__ToArduinoMsg__init(msg_pkg__msg__ToArduinoMsg * msg)
{
  if (!msg) {
    return false;
  }
  // m1_speed
  // m2_speed
  // m1_encoder_speed
  // m2_encoder_speed
  return true;
}

void
msg_pkg__msg__ToArduinoMsg__fini(msg_pkg__msg__ToArduinoMsg * msg)
{
  if (!msg) {
    return;
  }
  // m1_speed
  // m2_speed
  // m1_encoder_speed
  // m2_encoder_speed
}

bool
msg_pkg__msg__ToArduinoMsg__are_equal(const msg_pkg__msg__ToArduinoMsg * lhs, const msg_pkg__msg__ToArduinoMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // m1_speed
  if (lhs->m1_speed != rhs->m1_speed) {
    return false;
  }
  // m2_speed
  if (lhs->m2_speed != rhs->m2_speed) {
    return false;
  }
  // m1_encoder_speed
  if (lhs->m1_encoder_speed != rhs->m1_encoder_speed) {
    return false;
  }
  // m2_encoder_speed
  if (lhs->m2_encoder_speed != rhs->m2_encoder_speed) {
    return false;
  }
  return true;
}

bool
msg_pkg__msg__ToArduinoMsg__copy(
  const msg_pkg__msg__ToArduinoMsg * input,
  msg_pkg__msg__ToArduinoMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // m1_speed
  output->m1_speed = input->m1_speed;
  // m2_speed
  output->m2_speed = input->m2_speed;
  // m1_encoder_speed
  output->m1_encoder_speed = input->m1_encoder_speed;
  // m2_encoder_speed
  output->m2_encoder_speed = input->m2_encoder_speed;
  return true;
}

msg_pkg__msg__ToArduinoMsg *
msg_pkg__msg__ToArduinoMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__msg__ToArduinoMsg * msg = (msg_pkg__msg__ToArduinoMsg *)allocator.allocate(sizeof(msg_pkg__msg__ToArduinoMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_pkg__msg__ToArduinoMsg));
  bool success = msg_pkg__msg__ToArduinoMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_pkg__msg__ToArduinoMsg__destroy(msg_pkg__msg__ToArduinoMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_pkg__msg__ToArduinoMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_pkg__msg__ToArduinoMsg__Sequence__init(msg_pkg__msg__ToArduinoMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__msg__ToArduinoMsg * data = NULL;

  if (size) {
    data = (msg_pkg__msg__ToArduinoMsg *)allocator.zero_allocate(size, sizeof(msg_pkg__msg__ToArduinoMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_pkg__msg__ToArduinoMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_pkg__msg__ToArduinoMsg__fini(&data[i - 1]);
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
msg_pkg__msg__ToArduinoMsg__Sequence__fini(msg_pkg__msg__ToArduinoMsg__Sequence * array)
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
      msg_pkg__msg__ToArduinoMsg__fini(&array->data[i]);
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

msg_pkg__msg__ToArduinoMsg__Sequence *
msg_pkg__msg__ToArduinoMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__msg__ToArduinoMsg__Sequence * array = (msg_pkg__msg__ToArduinoMsg__Sequence *)allocator.allocate(sizeof(msg_pkg__msg__ToArduinoMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_pkg__msg__ToArduinoMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_pkg__msg__ToArduinoMsg__Sequence__destroy(msg_pkg__msg__ToArduinoMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_pkg__msg__ToArduinoMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_pkg__msg__ToArduinoMsg__Sequence__are_equal(const msg_pkg__msg__ToArduinoMsg__Sequence * lhs, const msg_pkg__msg__ToArduinoMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_pkg__msg__ToArduinoMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_pkg__msg__ToArduinoMsg__Sequence__copy(
  const msg_pkg__msg__ToArduinoMsg__Sequence * input,
  msg_pkg__msg__ToArduinoMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_pkg__msg__ToArduinoMsg);
    msg_pkg__msg__ToArduinoMsg * data =
      (msg_pkg__msg__ToArduinoMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_pkg__msg__ToArduinoMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_pkg__msg__ToArduinoMsg__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_pkg__msg__ToArduinoMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
