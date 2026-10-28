// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xsens_mti_ros2_driver:msg/GnssSatInfo.idl
// generated code does not contain a copyright notice
#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xsens_mti_ros2_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__struct.h"
#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GnssSatInfo__ros_msg_type = xsens_mti_ros2_driver__msg__GnssSatInfo;

static bool _GnssSatInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GnssSatInfo__ros_msg_type * ros_message = static_cast<const _GnssSatInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: itow
  {
    cdr << ros_message->itow;
  }

  // Field name: num_svs
  {
    cdr << ros_message->num_svs;
  }

  // Field name: res1
  {
    cdr << ros_message->res1;
  }

  // Field name: res2
  {
    cdr << ros_message->res2;
  }

  // Field name: res3
  {
    cdr << ros_message->res3;
  }

  // Field name: gnss_id
  {
    size_t size = 60;
    auto array_ptr = ros_message->gnss_id;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sv_id
  {
    size_t size = 60;
    auto array_ptr = ros_message->sv_id;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cno
  {
    size_t size = 60;
    auto array_ptr = ros_message->cno;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: flags
  {
    size_t size = 60;
    auto array_ptr = ros_message->flags;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GnssSatInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GnssSatInfo__ros_msg_type * ros_message = static_cast<_GnssSatInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: itow
  {
    cdr >> ros_message->itow;
  }

  // Field name: num_svs
  {
    cdr >> ros_message->num_svs;
  }

  // Field name: res1
  {
    cdr >> ros_message->res1;
  }

  // Field name: res2
  {
    cdr >> ros_message->res2;
  }

  // Field name: res3
  {
    cdr >> ros_message->res3;
  }

  // Field name: gnss_id
  {
    size_t size = 60;
    auto array_ptr = ros_message->gnss_id;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sv_id
  {
    size_t size = 60;
    auto array_ptr = ros_message->sv_id;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cno
  {
    size_t size = 60;
    auto array_ptr = ros_message->cno;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: flags
  {
    size_t size = 60;
    auto array_ptr = ros_message->flags;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xsens_mti_ros2_driver
size_t get_serialized_size_xsens_mti_ros2_driver__msg__GnssSatInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GnssSatInfo__ros_msg_type * ros_message = static_cast<const _GnssSatInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name itow
  {
    size_t item_size = sizeof(ros_message->itow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_svs
  {
    size_t item_size = sizeof(ros_message->num_svs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name res1
  {
    size_t item_size = sizeof(ros_message->res1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name res2
  {
    size_t item_size = sizeof(ros_message->res2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name res3
  {
    size_t item_size = sizeof(ros_message->res3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_id
  {
    size_t array_size = 60;
    auto array_ptr = ros_message->gnss_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sv_id
  {
    size_t array_size = 60;
    auto array_ptr = ros_message->sv_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cno
  {
    size_t array_size = 60;
    auto array_ptr = ros_message->cno;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t array_size = 60;
    auto array_ptr = ros_message->flags;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GnssSatInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xsens_mti_ros2_driver__msg__GnssSatInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xsens_mti_ros2_driver
size_t max_serialized_size_xsens_mti_ros2_driver__msg__GnssSatInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: itow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_svs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: res1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: res2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: res3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_id
  {
    size_t array_size = 60;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sv_id
  {
    size_t array_size = 60;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cno
  {
    size_t array_size = 60;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flags
  {
    size_t array_size = 60;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xsens_mti_ros2_driver__msg__GnssSatInfo;
    is_plain =
      (
      offsetof(DataType, flags) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GnssSatInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xsens_mti_ros2_driver__msg__GnssSatInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GnssSatInfo = {
  "xsens_mti_ros2_driver::msg",
  "GnssSatInfo",
  _GnssSatInfo__cdr_serialize,
  _GnssSatInfo__cdr_deserialize,
  _GnssSatInfo__get_serialized_size,
  _GnssSatInfo__max_serialized_size
};

static rosidl_message_type_support_t _GnssSatInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GnssSatInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xsens_mti_ros2_driver, msg, GnssSatInfo)() {
  return &_GnssSatInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
