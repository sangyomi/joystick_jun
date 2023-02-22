// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:msg/Num.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/msg/detail/num__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tutorial_interfaces__msg__Num__init(tutorial_interfaces__msg__Num * msg)
{
  if (!msg) {
    return false;
  }
  // leftstickangle
  // rightstickangle
  // dpadangle
  // lefttrigger
  // righttrigger
  // a
  // b
  // x
  // y
  // lb
  // rb
  return true;
}

void
tutorial_interfaces__msg__Num__fini(tutorial_interfaces__msg__Num * msg)
{
  if (!msg) {
    return;
  }
  // leftstickangle
  // rightstickangle
  // dpadangle
  // lefttrigger
  // righttrigger
  // a
  // b
  // x
  // y
  // lb
  // rb
}

bool
tutorial_interfaces__msg__Num__are_equal(const tutorial_interfaces__msg__Num * lhs, const tutorial_interfaces__msg__Num * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // leftstickangle
  if (lhs->leftstickangle != rhs->leftstickangle) {
    return false;
  }
  // rightstickangle
  if (lhs->rightstickangle != rhs->rightstickangle) {
    return false;
  }
  // dpadangle
  if (lhs->dpadangle != rhs->dpadangle) {
    return false;
  }
  // lefttrigger
  if (lhs->lefttrigger != rhs->lefttrigger) {
    return false;
  }
  // righttrigger
  if (lhs->righttrigger != rhs->righttrigger) {
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // lb
  if (lhs->lb != rhs->lb) {
    return false;
  }
  // rb
  if (lhs->rb != rhs->rb) {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__msg__Num__copy(
  const tutorial_interfaces__msg__Num * input,
  tutorial_interfaces__msg__Num * output)
{
  if (!input || !output) {
    return false;
  }
  // leftstickangle
  output->leftstickangle = input->leftstickangle;
  // rightstickangle
  output->rightstickangle = input->rightstickangle;
  // dpadangle
  output->dpadangle = input->dpadangle;
  // lefttrigger
  output->lefttrigger = input->lefttrigger;
  // righttrigger
  output->righttrigger = input->righttrigger;
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // lb
  output->lb = input->lb;
  // rb
  output->rb = input->rb;
  return true;
}

tutorial_interfaces__msg__Num *
tutorial_interfaces__msg__Num__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__Num * msg = (tutorial_interfaces__msg__Num *)allocator.allocate(sizeof(tutorial_interfaces__msg__Num), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__msg__Num));
  bool success = tutorial_interfaces__msg__Num__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__msg__Num__destroy(tutorial_interfaces__msg__Num * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__msg__Num__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__msg__Num__Sequence__init(tutorial_interfaces__msg__Num__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__Num * data = NULL;

  if (size) {
    data = (tutorial_interfaces__msg__Num *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__msg__Num), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__msg__Num__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__msg__Num__fini(&data[i - 1]);
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
tutorial_interfaces__msg__Num__Sequence__fini(tutorial_interfaces__msg__Num__Sequence * array)
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
      tutorial_interfaces__msg__Num__fini(&array->data[i]);
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

tutorial_interfaces__msg__Num__Sequence *
tutorial_interfaces__msg__Num__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__Num__Sequence * array = (tutorial_interfaces__msg__Num__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__msg__Num__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__msg__Num__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__msg__Num__Sequence__destroy(tutorial_interfaces__msg__Num__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__msg__Num__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__msg__Num__Sequence__are_equal(const tutorial_interfaces__msg__Num__Sequence * lhs, const tutorial_interfaces__msg__Num__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__msg__Num__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__msg__Num__Sequence__copy(
  const tutorial_interfaces__msg__Num__Sequence * input,
  tutorial_interfaces__msg__Num__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__msg__Num);
    tutorial_interfaces__msg__Num * data =
      (tutorial_interfaces__msg__Num *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__msg__Num__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__msg__Num__fini(&data[i]);
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
    if (!tutorial_interfaces__msg__Num__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
