// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_pkg:msg/FromArduinoMsg.idl
// generated code does not contain a copyright notice
#include "msg_pkg/msg/detail/from_arduino_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msg_pkg__msg__FromArduinoMsg__init(msg_pkg__msg__FromArduinoMsg * msg)
{
  if (!msg) {
    return false;
  }
  // ax
  // ay
  // az
  // gx
  // gy
  // gz
  // mx
  // my
  // mz
  // roll
  // pitch
  // yaw
  // encoder1
  // encoder2
  return true;
}

void
msg_pkg__msg__FromArduinoMsg__fini(msg_pkg__msg__FromArduinoMsg * msg)
{
  if (!msg) {
    return;
  }
  // ax
  // ay
  // az
  // gx
  // gy
  // gz
  // mx
  // my
  // mz
  // roll
  // pitch
  // yaw
  // encoder1
  // encoder2
}

bool
msg_pkg__msg__FromArduinoMsg__are_equal(const msg_pkg__msg__FromArduinoMsg * lhs, const msg_pkg__msg__FromArduinoMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ax
  if (lhs->ax != rhs->ax) {
    return false;
  }
  // ay
  if (lhs->ay != rhs->ay) {
    return false;
  }
  // az
  if (lhs->az != rhs->az) {
    return false;
  }
  // gx
  if (lhs->gx != rhs->gx) {
    return false;
  }
  // gy
  if (lhs->gy != rhs->gy) {
    return false;
  }
  // gz
  if (lhs->gz != rhs->gz) {
    return false;
  }
  // mx
  if (lhs->mx != rhs->mx) {
    return false;
  }
  // my
  if (lhs->my != rhs->my) {
    return false;
  }
  // mz
  if (lhs->mz != rhs->mz) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // encoder1
  if (lhs->encoder1 != rhs->encoder1) {
    return false;
  }
  // encoder2
  if (lhs->encoder2 != rhs->encoder2) {
    return false;
  }
  return true;
}

bool
msg_pkg__msg__FromArduinoMsg__copy(
  const msg_pkg__msg__FromArduinoMsg * input,
  msg_pkg__msg__FromArduinoMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // ax
  output->ax = input->ax;
  // ay
  output->ay = input->ay;
  // az
  output->az = input->az;
  // gx
  output->gx = input->gx;
  // gy
  output->gy = input->gy;
  // gz
  output->gz = input->gz;
  // mx
  output->mx = input->mx;
  // my
  output->my = input->my;
  // mz
  output->mz = input->mz;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // encoder1
  output->encoder1 = input->encoder1;
  // encoder2
  output->encoder2 = input->encoder2;
  return true;
}

msg_pkg__msg__FromArduinoMsg *
msg_pkg__msg__FromArduinoMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__msg__FromArduinoMsg * msg = (msg_pkg__msg__FromArduinoMsg *)allocator.allocate(sizeof(msg_pkg__msg__FromArduinoMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_pkg__msg__FromArduinoMsg));
  bool success = msg_pkg__msg__FromArduinoMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_pkg__msg__FromArduinoMsg__destroy(msg_pkg__msg__FromArduinoMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_pkg__msg__FromArduinoMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_pkg__msg__FromArduinoMsg__Sequence__init(msg_pkg__msg__FromArduinoMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__msg__FromArduinoMsg * data = NULL;

  if (size) {
    data = (msg_pkg__msg__FromArduinoMsg *)allocator.zero_allocate(size, sizeof(msg_pkg__msg__FromArduinoMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_pkg__msg__FromArduinoMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_pkg__msg__FromArduinoMsg__fini(&data[i - 1]);
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
msg_pkg__msg__FromArduinoMsg__Sequence__fini(msg_pkg__msg__FromArduinoMsg__Sequence * array)
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
      msg_pkg__msg__FromArduinoMsg__fini(&array->data[i]);
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

msg_pkg__msg__FromArduinoMsg__Sequence *
msg_pkg__msg__FromArduinoMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__msg__FromArduinoMsg__Sequence * array = (msg_pkg__msg__FromArduinoMsg__Sequence *)allocator.allocate(sizeof(msg_pkg__msg__FromArduinoMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_pkg__msg__FromArduinoMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_pkg__msg__FromArduinoMsg__Sequence__destroy(msg_pkg__msg__FromArduinoMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_pkg__msg__FromArduinoMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_pkg__msg__FromArduinoMsg__Sequence__are_equal(const msg_pkg__msg__FromArduinoMsg__Sequence * lhs, const msg_pkg__msg__FromArduinoMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_pkg__msg__FromArduinoMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_pkg__msg__FromArduinoMsg__Sequence__copy(
  const msg_pkg__msg__FromArduinoMsg__Sequence * input,
  msg_pkg__msg__FromArduinoMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_pkg__msg__FromArduinoMsg);
    msg_pkg__msg__FromArduinoMsg * data =
      (msg_pkg__msg__FromArduinoMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_pkg__msg__FromArduinoMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_pkg__msg__FromArduinoMsg__fini(&data[i]);
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
    if (!msg_pkg__msg__FromArduinoMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
