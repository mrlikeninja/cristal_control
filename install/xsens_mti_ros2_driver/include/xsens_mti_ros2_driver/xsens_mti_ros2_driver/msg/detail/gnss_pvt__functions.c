// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xsens_mti_ros2_driver:msg/GnssPvt.idl
// generated code does not contain a copyright notice
#include "xsens_mti_ros2_driver/msg/detail/gnss_pvt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
xsens_mti_ros2_driver__msg__GnssPvt__init(xsens_mti_ros2_driver__msg__GnssPvt * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    xsens_mti_ros2_driver__msg__GnssPvt__fini(msg);
    return false;
  }
  // i_tow
  // year
  // month
  // day
  // hour
  // min
  // sec
  // valid
  // t_acc
  // nano
  // fix_type
  // flags
  // flags2
  // num_sv
  // lon
  // lat
  // height
  // h_msl
  // h_acc
  // v_acc
  // vel_n
  // vel_e
  // vel_d
  // g_speed
  // heading
  // s_acc
  // head_acc
  // p_dop
  // reserved1
  // head_veh
  // mag_dec
  // mag_acc
  return true;
}

void
xsens_mti_ros2_driver__msg__GnssPvt__fini(xsens_mti_ros2_driver__msg__GnssPvt * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // i_tow
  // year
  // month
  // day
  // hour
  // min
  // sec
  // valid
  // t_acc
  // nano
  // fix_type
  // flags
  // flags2
  // num_sv
  // lon
  // lat
  // height
  // h_msl
  // h_acc
  // v_acc
  // vel_n
  // vel_e
  // vel_d
  // g_speed
  // heading
  // s_acc
  // head_acc
  // p_dop
  // reserved1
  // head_veh
  // mag_dec
  // mag_acc
}

bool
xsens_mti_ros2_driver__msg__GnssPvt__are_equal(const xsens_mti_ros2_driver__msg__GnssPvt * lhs, const xsens_mti_ros2_driver__msg__GnssPvt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // i_tow
  if (lhs->i_tow != rhs->i_tow) {
    return false;
  }
  // year
  if (lhs->year != rhs->year) {
    return false;
  }
  // month
  if (lhs->month != rhs->month) {
    return false;
  }
  // day
  if (lhs->day != rhs->day) {
    return false;
  }
  // hour
  if (lhs->hour != rhs->hour) {
    return false;
  }
  // min
  if (lhs->min != rhs->min) {
    return false;
  }
  // sec
  if (lhs->sec != rhs->sec) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // t_acc
  if (lhs->t_acc != rhs->t_acc) {
    return false;
  }
  // nano
  if (lhs->nano != rhs->nano) {
    return false;
  }
  // fix_type
  if (lhs->fix_type != rhs->fix_type) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // flags2
  if (lhs->flags2 != rhs->flags2) {
    return false;
  }
  // num_sv
  if (lhs->num_sv != rhs->num_sv) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // h_msl
  if (lhs->h_msl != rhs->h_msl) {
    return false;
  }
  // h_acc
  if (lhs->h_acc != rhs->h_acc) {
    return false;
  }
  // v_acc
  if (lhs->v_acc != rhs->v_acc) {
    return false;
  }
  // vel_n
  if (lhs->vel_n != rhs->vel_n) {
    return false;
  }
  // vel_e
  if (lhs->vel_e != rhs->vel_e) {
    return false;
  }
  // vel_d
  if (lhs->vel_d != rhs->vel_d) {
    return false;
  }
  // g_speed
  if (lhs->g_speed != rhs->g_speed) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // s_acc
  if (lhs->s_acc != rhs->s_acc) {
    return false;
  }
  // head_acc
  if (lhs->head_acc != rhs->head_acc) {
    return false;
  }
  // p_dop
  if (lhs->p_dop != rhs->p_dop) {
    return false;
  }
  // reserved1
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->reserved1[i] != rhs->reserved1[i]) {
      return false;
    }
  }
  // head_veh
  if (lhs->head_veh != rhs->head_veh) {
    return false;
  }
  // mag_dec
  if (lhs->mag_dec != rhs->mag_dec) {
    return false;
  }
  // mag_acc
  if (lhs->mag_acc != rhs->mag_acc) {
    return false;
  }
  return true;
}

bool
xsens_mti_ros2_driver__msg__GnssPvt__copy(
  const xsens_mti_ros2_driver__msg__GnssPvt * input,
  xsens_mti_ros2_driver__msg__GnssPvt * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // i_tow
  output->i_tow = input->i_tow;
  // year
  output->year = input->year;
  // month
  output->month = input->month;
  // day
  output->day = input->day;
  // hour
  output->hour = input->hour;
  // min
  output->min = input->min;
  // sec
  output->sec = input->sec;
  // valid
  output->valid = input->valid;
  // t_acc
  output->t_acc = input->t_acc;
  // nano
  output->nano = input->nano;
  // fix_type
  output->fix_type = input->fix_type;
  // flags
  output->flags = input->flags;
  // flags2
  output->flags2 = input->flags2;
  // num_sv
  output->num_sv = input->num_sv;
  // lon
  output->lon = input->lon;
  // lat
  output->lat = input->lat;
  // height
  output->height = input->height;
  // h_msl
  output->h_msl = input->h_msl;
  // h_acc
  output->h_acc = input->h_acc;
  // v_acc
  output->v_acc = input->v_acc;
  // vel_n
  output->vel_n = input->vel_n;
  // vel_e
  output->vel_e = input->vel_e;
  // vel_d
  output->vel_d = input->vel_d;
  // g_speed
  output->g_speed = input->g_speed;
  // heading
  output->heading = input->heading;
  // s_acc
  output->s_acc = input->s_acc;
  // head_acc
  output->head_acc = input->head_acc;
  // p_dop
  output->p_dop = input->p_dop;
  // reserved1
  for (size_t i = 0; i < 6; ++i) {
    output->reserved1[i] = input->reserved1[i];
  }
  // head_veh
  output->head_veh = input->head_veh;
  // mag_dec
  output->mag_dec = input->mag_dec;
  // mag_acc
  output->mag_acc = input->mag_acc;
  return true;
}

xsens_mti_ros2_driver__msg__GnssPvt *
xsens_mti_ros2_driver__msg__GnssPvt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xsens_mti_ros2_driver__msg__GnssPvt * msg = (xsens_mti_ros2_driver__msg__GnssPvt *)allocator.allocate(sizeof(xsens_mti_ros2_driver__msg__GnssPvt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xsens_mti_ros2_driver__msg__GnssPvt));
  bool success = xsens_mti_ros2_driver__msg__GnssPvt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xsens_mti_ros2_driver__msg__GnssPvt__destroy(xsens_mti_ros2_driver__msg__GnssPvt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xsens_mti_ros2_driver__msg__GnssPvt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__init(xsens_mti_ros2_driver__msg__GnssPvt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xsens_mti_ros2_driver__msg__GnssPvt * data = NULL;

  if (size) {
    data = (xsens_mti_ros2_driver__msg__GnssPvt *)allocator.zero_allocate(size, sizeof(xsens_mti_ros2_driver__msg__GnssPvt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xsens_mti_ros2_driver__msg__GnssPvt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xsens_mti_ros2_driver__msg__GnssPvt__fini(&data[i - 1]);
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
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__fini(xsens_mti_ros2_driver__msg__GnssPvt__Sequence * array)
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
      xsens_mti_ros2_driver__msg__GnssPvt__fini(&array->data[i]);
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

xsens_mti_ros2_driver__msg__GnssPvt__Sequence *
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xsens_mti_ros2_driver__msg__GnssPvt__Sequence * array = (xsens_mti_ros2_driver__msg__GnssPvt__Sequence *)allocator.allocate(sizeof(xsens_mti_ros2_driver__msg__GnssPvt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xsens_mti_ros2_driver__msg__GnssPvt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__destroy(xsens_mti_ros2_driver__msg__GnssPvt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xsens_mti_ros2_driver__msg__GnssPvt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__are_equal(const xsens_mti_ros2_driver__msg__GnssPvt__Sequence * lhs, const xsens_mti_ros2_driver__msg__GnssPvt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xsens_mti_ros2_driver__msg__GnssPvt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__copy(
  const xsens_mti_ros2_driver__msg__GnssPvt__Sequence * input,
  xsens_mti_ros2_driver__msg__GnssPvt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xsens_mti_ros2_driver__msg__GnssPvt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xsens_mti_ros2_driver__msg__GnssPvt * data =
      (xsens_mti_ros2_driver__msg__GnssPvt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xsens_mti_ros2_driver__msg__GnssPvt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xsens_mti_ros2_driver__msg__GnssPvt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xsens_mti_ros2_driver__msg__GnssPvt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
