// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_pkg:srv/Test.idl
// generated code does not contain a copyright notice
#include "msg_pkg/srv/detail/test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
msg_pkg__srv__Test_Request__init(msg_pkg__srv__Test_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
msg_pkg__srv__Test_Request__fini(msg_pkg__srv__Test_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
msg_pkg__srv__Test_Request__are_equal(const msg_pkg__srv__Test_Request * lhs, const msg_pkg__srv__Test_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
msg_pkg__srv__Test_Request__copy(
  const msg_pkg__srv__Test_Request * input,
  msg_pkg__srv__Test_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

msg_pkg__srv__Test_Request *
msg_pkg__srv__Test_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__srv__Test_Request * msg = (msg_pkg__srv__Test_Request *)allocator.allocate(sizeof(msg_pkg__srv__Test_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_pkg__srv__Test_Request));
  bool success = msg_pkg__srv__Test_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_pkg__srv__Test_Request__destroy(msg_pkg__srv__Test_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_pkg__srv__Test_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_pkg__srv__Test_Request__Sequence__init(msg_pkg__srv__Test_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__srv__Test_Request * data = NULL;

  if (size) {
    data = (msg_pkg__srv__Test_Request *)allocator.zero_allocate(size, sizeof(msg_pkg__srv__Test_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_pkg__srv__Test_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_pkg__srv__Test_Request__fini(&data[i - 1]);
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
msg_pkg__srv__Test_Request__Sequence__fini(msg_pkg__srv__Test_Request__Sequence * array)
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
      msg_pkg__srv__Test_Request__fini(&array->data[i]);
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

msg_pkg__srv__Test_Request__Sequence *
msg_pkg__srv__Test_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__srv__Test_Request__Sequence * array = (msg_pkg__srv__Test_Request__Sequence *)allocator.allocate(sizeof(msg_pkg__srv__Test_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_pkg__srv__Test_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_pkg__srv__Test_Request__Sequence__destroy(msg_pkg__srv__Test_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_pkg__srv__Test_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_pkg__srv__Test_Request__Sequence__are_equal(const msg_pkg__srv__Test_Request__Sequence * lhs, const msg_pkg__srv__Test_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_pkg__srv__Test_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_pkg__srv__Test_Request__Sequence__copy(
  const msg_pkg__srv__Test_Request__Sequence * input,
  msg_pkg__srv__Test_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_pkg__srv__Test_Request);
    msg_pkg__srv__Test_Request * data =
      (msg_pkg__srv__Test_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_pkg__srv__Test_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_pkg__srv__Test_Request__fini(&data[i]);
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
    if (!msg_pkg__srv__Test_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
msg_pkg__srv__Test_Response__init(msg_pkg__srv__Test_Response * msg)
{
  if (!msg) {
    return false;
  }
  // c
  // result
  return true;
}

void
msg_pkg__srv__Test_Response__fini(msg_pkg__srv__Test_Response * msg)
{
  if (!msg) {
    return;
  }
  // c
  // result
}

bool
msg_pkg__srv__Test_Response__are_equal(const msg_pkg__srv__Test_Response * lhs, const msg_pkg__srv__Test_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
msg_pkg__srv__Test_Response__copy(
  const msg_pkg__srv__Test_Response * input,
  msg_pkg__srv__Test_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // c
  output->c = input->c;
  // result
  output->result = input->result;
  return true;
}

msg_pkg__srv__Test_Response *
msg_pkg__srv__Test_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__srv__Test_Response * msg = (msg_pkg__srv__Test_Response *)allocator.allocate(sizeof(msg_pkg__srv__Test_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_pkg__srv__Test_Response));
  bool success = msg_pkg__srv__Test_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_pkg__srv__Test_Response__destroy(msg_pkg__srv__Test_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_pkg__srv__Test_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_pkg__srv__Test_Response__Sequence__init(msg_pkg__srv__Test_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__srv__Test_Response * data = NULL;

  if (size) {
    data = (msg_pkg__srv__Test_Response *)allocator.zero_allocate(size, sizeof(msg_pkg__srv__Test_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_pkg__srv__Test_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_pkg__srv__Test_Response__fini(&data[i - 1]);
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
msg_pkg__srv__Test_Response__Sequence__fini(msg_pkg__srv__Test_Response__Sequence * array)
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
      msg_pkg__srv__Test_Response__fini(&array->data[i]);
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

msg_pkg__srv__Test_Response__Sequence *
msg_pkg__srv__Test_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg__srv__Test_Response__Sequence * array = (msg_pkg__srv__Test_Response__Sequence *)allocator.allocate(sizeof(msg_pkg__srv__Test_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_pkg__srv__Test_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_pkg__srv__Test_Response__Sequence__destroy(msg_pkg__srv__Test_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_pkg__srv__Test_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_pkg__srv__Test_Response__Sequence__are_equal(const msg_pkg__srv__Test_Response__Sequence * lhs, const msg_pkg__srv__Test_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_pkg__srv__Test_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_pkg__srv__Test_Response__Sequence__copy(
  const msg_pkg__srv__Test_Response__Sequence * input,
  msg_pkg__srv__Test_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_pkg__srv__Test_Response);
    msg_pkg__srv__Test_Response * data =
      (msg_pkg__srv__Test_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_pkg__srv__Test_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_pkg__srv__Test_Response__fini(&data[i]);
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
    if (!msg_pkg__srv__Test_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
