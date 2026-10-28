// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xsens_mti_ros2_driver:msg/GnssSatInfo.idl
// generated code does not contain a copyright notice
#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xsens_mti_ros2_driver__msg__GnssSatInfo__init(xsens_mti_ros2_driver__msg__GnssSatInfo * msg)
{
  if (!msg) {
    return false;
  }
  // itow
  // num_svs
  // res1
  // res2
  // res3
  // gnss_id
  // sv_id
  // cno
  // flags
  return true;
}

void
xsens_mti_ros2_driver__msg__GnssSatInfo__fini(xsens_mti_ros2_driver__msg__GnssSatInfo * msg)
{
  if (!msg) {
    return;
  }
  // itow
  // num_svs
  // res1
  // res2
  // res3
  // gnss_id
  // sv_id
  // cno
  // flags
}

bool
xsens_mti_ros2_driver__msg__GnssSatInfo__are_equal(const xsens_mti_ros2_driver__msg__GnssSatInfo * lhs, const xsens_mti_ros2_driver__msg__GnssSatInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // itow
  if (lhs->itow != rhs->itow) {
    return false;
  }
  // num_svs
  if (lhs->num_svs != rhs->num_svs) {
    return false;
  }
  // res1
  if (lhs->res1 != rhs->res1) {
    return false;
  }
  // res2
  if (lhs->res2 != rhs->res2) {
    return false;
  }
  // res3
  if (lhs->res3 != rhs->res3) {
    return false;
  }
  // gnss_id
  for (size_t i = 0; i < 60; ++i) {
    if (lhs->gnss_id[i] != rhs->gnss_id[i]) {
      return false;
    }
  }
  // sv_id
  for (size_t i = 0; i < 60; ++i) {
    if (lhs->sv_id[i] != rhs->sv_id[i]) {
      return false;
    }
  }
  // cno
  for (size_t i = 0; i < 60; ++i) {
    if (lhs->cno[i] != rhs->cno[i]) {
      return false;
    }
  }
  // flags
  for (size_t i = 0; i < 60; ++i) {
    if (lhs->flags[i] != rhs->flags[i]) {
      return false;
    }
  }
  return true;
}

bool
xsens_mti_ros2_driver__msg__GnssSatInfo__copy(
  const xsens_mti_ros2_driver__msg__GnssSatInfo * input,
  xsens_mti_ros2_driver__msg__GnssSatInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // itow
  output->itow = input->itow;
  // num_svs
  output->num_svs = input->num_svs;
  // res1
  output->res1 = input->res1;
  // res2
  output->res2 = input->res2;
  // res3
  output->res3 = input->res3;
  // gnss_id
  for (size_t i = 0; i < 60; ++i) {
    output->gnss_id[i] = input->gnss_id[i];
  }
  // sv_id
  for (size_t i = 0; i < 60; ++i) {
    output->sv_id[i] = input->sv_id[i];
  }
  // cno
  for (size_t i = 0; i < 60; ++i) {
    output->cno[i] = input->cno[i];
  }
  // flags
  for (size_t i = 0; i < 60; ++i) {
    output->flags[i] = input->flags[i];
  }
  return true;
}

xsens_mti_ros2_driver__msg__GnssSatInfo *
xsens_mti_ros2_driver__msg__GnssSatInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xsens_mti_ros2_driver__msg__GnssSatInfo * msg = (xsens_mti_ros2_driver__msg__GnssSatInfo *)allocator.allocate(sizeof(xsens_mti_ros2_driver__msg__GnssSatInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xsens_mti_ros2_driver__msg__GnssSatInfo));
  bool success = xsens_mti_ros2_driver__msg__GnssSatInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xsens_mti_ros2_driver__msg__GnssSatInfo__destroy(xsens_mti_ros2_driver__msg__GnssSatInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xsens_mti_ros2_driver__msg__GnssSatInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence__init(xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xsens_mti_ros2_driver__msg__GnssSatInfo * data = NULL;

  if (size) {
    data = (xsens_mti_ros2_driver__msg__GnssSatInfo *)allocator.zero_allocate(size, sizeof(xsens_mti_ros2_driver__msg__GnssSatInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xsens_mti_ros2_driver__msg__GnssSatInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xsens_mti_ros2_driver__msg__GnssSatInfo__fini(&data[i - 1]);
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
xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence__fini(xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence * array)
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
      xsens_mti_ros2_driver__msg__GnssSatInfo__fini(&array->data[i]);
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

xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence *
xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence * array = (xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence *)allocator.allocate(sizeof(xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence__destroy(xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence__are_equal(const xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence * lhs, const xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xsens_mti_ros2_driver__msg__GnssSatInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence__copy(
  const xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence * input,
  xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xsens_mti_ros2_driver__msg__GnssSatInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xsens_mti_ros2_driver__msg__GnssSatInfo * data =
      (xsens_mti_ros2_driver__msg__GnssSatInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xsens_mti_ros2_driver__msg__GnssSatInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xsens_mti_ros2_driver__msg__GnssSatInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xsens_mti_ros2_driver__msg__GnssSatInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
