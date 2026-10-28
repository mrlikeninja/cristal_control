// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from xsens_mti_ros2_driver:msg/GnssSatInfo.idl
// generated code does not contain a copyright notice
#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace xsens_mti_ros2_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xsens_mti_ros2_driver
cdr_serialize(
  const xsens_mti_ros2_driver::msg::GnssSatInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: itow
  cdr << ros_message.itow;
  // Member: num_svs
  cdr << ros_message.num_svs;
  // Member: res1
  cdr << ros_message.res1;
  // Member: res2
  cdr << ros_message.res2;
  // Member: res3
  cdr << ros_message.res3;
  // Member: gnss_id
  {
    cdr << ros_message.gnss_id;
  }
  // Member: sv_id
  {
    cdr << ros_message.sv_id;
  }
  // Member: cno
  {
    cdr << ros_message.cno;
  }
  // Member: flags
  {
    cdr << ros_message.flags;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xsens_mti_ros2_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xsens_mti_ros2_driver::msg::GnssSatInfo & ros_message)
{
  // Member: itow
  cdr >> ros_message.itow;

  // Member: num_svs
  cdr >> ros_message.num_svs;

  // Member: res1
  cdr >> ros_message.res1;

  // Member: res2
  cdr >> ros_message.res2;

  // Member: res3
  cdr >> ros_message.res3;

  // Member: gnss_id
  {
    cdr >> ros_message.gnss_id;
  }

  // Member: sv_id
  {
    cdr >> ros_message.sv_id;
  }

  // Member: cno
  {
    cdr >> ros_message.cno;
  }

  // Member: flags
  {
    cdr >> ros_message.flags;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xsens_mti_ros2_driver
get_serialized_size(
  const xsens_mti_ros2_driver::msg::GnssSatInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: itow
  {
    size_t item_size = sizeof(ros_message.itow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_svs
  {
    size_t item_size = sizeof(ros_message.num_svs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: res1
  {
    size_t item_size = sizeof(ros_message.res1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: res2
  {
    size_t item_size = sizeof(ros_message.res2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: res3
  {
    size_t item_size = sizeof(ros_message.res3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_id
  {
    size_t array_size = 60;
    size_t item_size = sizeof(ros_message.gnss_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sv_id
  {
    size_t array_size = 60;
    size_t item_size = sizeof(ros_message.sv_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cno
  {
    size_t array_size = 60;
    size_t item_size = sizeof(ros_message.cno[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flags
  {
    size_t array_size = 60;
    size_t item_size = sizeof(ros_message.flags[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xsens_mti_ros2_driver
max_serialized_size_GnssSatInfo(
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


  // Member: itow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_svs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: res1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: res2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: res3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_id
  {
    size_t array_size = 60;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sv_id
  {
    size_t array_size = 60;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cno
  {
    size_t array_size = 60;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flags
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
    using DataType = xsens_mti_ros2_driver::msg::GnssSatInfo;
    is_plain =
      (
      offsetof(DataType, flags) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GnssSatInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xsens_mti_ros2_driver::msg::GnssSatInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GnssSatInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xsens_mti_ros2_driver::msg::GnssSatInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GnssSatInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xsens_mti_ros2_driver::msg::GnssSatInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GnssSatInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GnssSatInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GnssSatInfo__callbacks = {
  "xsens_mti_ros2_driver::msg",
  "GnssSatInfo",
  _GnssSatInfo__cdr_serialize,
  _GnssSatInfo__cdr_deserialize,
  _GnssSatInfo__get_serialized_size,
  _GnssSatInfo__max_serialized_size
};

static rosidl_message_type_support_t _GnssSatInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GnssSatInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace xsens_mti_ros2_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_xsens_mti_ros2_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<xsens_mti_ros2_driver::msg::GnssSatInfo>()
{
  return &xsens_mti_ros2_driver::msg::typesupport_fastrtps_cpp::_GnssSatInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xsens_mti_ros2_driver, msg, GnssSatInfo)() {
  return &xsens_mti_ros2_driver::msg::typesupport_fastrtps_cpp::_GnssSatInfo__handle;
}

#ifdef __cplusplus
}
#endif
