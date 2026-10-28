// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xsens_mti_ros2_driver:msg/GnssPvt.idl
// generated code does not contain a copyright notice
#include "xsens_mti_ros2_driver/msg/detail/gnss_pvt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xsens_mti_ros2_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xsens_mti_ros2_driver/msg/detail/gnss_pvt__struct.h"
#include "xsens_mti_ros2_driver/msg/detail/gnss_pvt__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xsens_mti_ros2_driver
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xsens_mti_ros2_driver
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xsens_mti_ros2_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _GnssPvt__ros_msg_type = xsens_mti_ros2_driver__msg__GnssPvt;

static bool _GnssPvt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GnssPvt__ros_msg_type * ros_message = static_cast<const _GnssPvt__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: i_tow
  {
    cdr << ros_message->i_tow;
  }

  // Field name: year
  {
    cdr << ros_message->year;
  }

  // Field name: month
  {
    cdr << ros_message->month;
  }

  // Field name: day
  {
    cdr << ros_message->day;
  }

  // Field name: hour
  {
    cdr << ros_message->hour;
  }

  // Field name: min
  {
    cdr << ros_message->min;
  }

  // Field name: sec
  {
    cdr << ros_message->sec;
  }

  // Field name: valid
  {
    cdr << ros_message->valid;
  }

  // Field name: t_acc
  {
    cdr << ros_message->t_acc;
  }

  // Field name: nano
  {
    cdr << ros_message->nano;
  }

  // Field name: fix_type
  {
    cdr << ros_message->fix_type;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  // Field name: flags2
  {
    cdr << ros_message->flags2;
  }

  // Field name: num_sv
  {
    cdr << ros_message->num_sv;
  }

  // Field name: lon
  {
    cdr << ros_message->lon;
  }

  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: h_msl
  {
    cdr << ros_message->h_msl;
  }

  // Field name: h_acc
  {
    cdr << ros_message->h_acc;
  }

  // Field name: v_acc
  {
    cdr << ros_message->v_acc;
  }

  // Field name: vel_n
  {
    cdr << ros_message->vel_n;
  }

  // Field name: vel_e
  {
    cdr << ros_message->vel_e;
  }

  // Field name: vel_d
  {
    cdr << ros_message->vel_d;
  }

  // Field name: g_speed
  {
    cdr << ros_message->g_speed;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: s_acc
  {
    cdr << ros_message->s_acc;
  }

  // Field name: head_acc
  {
    cdr << ros_message->head_acc;
  }

  // Field name: p_dop
  {
    cdr << ros_message->p_dop;
  }

  // Field name: reserved1
  {
    size_t size = 6;
    auto array_ptr = ros_message->reserved1;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: head_veh
  {
    cdr << ros_message->head_veh;
  }

  // Field name: mag_dec
  {
    cdr << ros_message->mag_dec;
  }

  // Field name: mag_acc
  {
    cdr << ros_message->mag_acc;
  }

  return true;
}

static bool _GnssPvt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GnssPvt__ros_msg_type * ros_message = static_cast<_GnssPvt__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: i_tow
  {
    cdr >> ros_message->i_tow;
  }

  // Field name: year
  {
    cdr >> ros_message->year;
  }

  // Field name: month
  {
    cdr >> ros_message->month;
  }

  // Field name: day
  {
    cdr >> ros_message->day;
  }

  // Field name: hour
  {
    cdr >> ros_message->hour;
  }

  // Field name: min
  {
    cdr >> ros_message->min;
  }

  // Field name: sec
  {
    cdr >> ros_message->sec;
  }

  // Field name: valid
  {
    cdr >> ros_message->valid;
  }

  // Field name: t_acc
  {
    cdr >> ros_message->t_acc;
  }

  // Field name: nano
  {
    cdr >> ros_message->nano;
  }

  // Field name: fix_type
  {
    cdr >> ros_message->fix_type;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  // Field name: flags2
  {
    cdr >> ros_message->flags2;
  }

  // Field name: num_sv
  {
    cdr >> ros_message->num_sv;
  }

  // Field name: lon
  {
    cdr >> ros_message->lon;
  }

  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: h_msl
  {
    cdr >> ros_message->h_msl;
  }

  // Field name: h_acc
  {
    cdr >> ros_message->h_acc;
  }

  // Field name: v_acc
  {
    cdr >> ros_message->v_acc;
  }

  // Field name: vel_n
  {
    cdr >> ros_message->vel_n;
  }

  // Field name: vel_e
  {
    cdr >> ros_message->vel_e;
  }

  // Field name: vel_d
  {
    cdr >> ros_message->vel_d;
  }

  // Field name: g_speed
  {
    cdr >> ros_message->g_speed;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: s_acc
  {
    cdr >> ros_message->s_acc;
  }

  // Field name: head_acc
  {
    cdr >> ros_message->head_acc;
  }

  // Field name: p_dop
  {
    cdr >> ros_message->p_dop;
  }

  // Field name: reserved1
  {
    size_t size = 6;
    auto array_ptr = ros_message->reserved1;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: head_veh
  {
    cdr >> ros_message->head_veh;
  }

  // Field name: mag_dec
  {
    cdr >> ros_message->mag_dec;
  }

  // Field name: mag_acc
  {
    cdr >> ros_message->mag_acc;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xsens_mti_ros2_driver
size_t get_serialized_size_xsens_mti_ros2_driver__msg__GnssPvt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GnssPvt__ros_msg_type * ros_message = static_cast<const _GnssPvt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name i_tow
  {
    size_t item_size = sizeof(ros_message->i_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name year
  {
    size_t item_size = sizeof(ros_message->year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name month
  {
    size_t item_size = sizeof(ros_message->month);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name day
  {
    size_t item_size = sizeof(ros_message->day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hour
  {
    size_t item_size = sizeof(ros_message->hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min
  {
    size_t item_size = sizeof(ros_message->min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sec
  {
    size_t item_size = sizeof(ros_message->sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valid
  {
    size_t item_size = sizeof(ros_message->valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_acc
  {
    size_t item_size = sizeof(ros_message->t_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nano
  {
    size_t item_size = sizeof(ros_message->nano);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fix_type
  {
    size_t item_size = sizeof(ros_message->fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags2
  {
    size_t item_size = sizeof(ros_message->flags2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sv
  {
    size_t item_size = sizeof(ros_message->num_sv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon
  {
    size_t item_size = sizeof(ros_message->lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name h_msl
  {
    size_t item_size = sizeof(ros_message->h_msl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name h_acc
  {
    size_t item_size = sizeof(ros_message->h_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_acc
  {
    size_t item_size = sizeof(ros_message->v_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_n
  {
    size_t item_size = sizeof(ros_message->vel_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_e
  {
    size_t item_size = sizeof(ros_message->vel_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_d
  {
    size_t item_size = sizeof(ros_message->vel_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name g_speed
  {
    size_t item_size = sizeof(ros_message->g_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s_acc
  {
    size_t item_size = sizeof(ros_message->s_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name head_acc
  {
    size_t item_size = sizeof(ros_message->head_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_dop
  {
    size_t item_size = sizeof(ros_message->p_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->reserved1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name head_veh
  {
    size_t item_size = sizeof(ros_message->head_veh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_dec
  {
    size_t item_size = sizeof(ros_message->mag_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_acc
  {
    size_t item_size = sizeof(ros_message->mag_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GnssPvt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xsens_mti_ros2_driver__msg__GnssPvt(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xsens_mti_ros2_driver
size_t max_serialized_size_xsens_mti_ros2_driver__msg__GnssPvt(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: i_tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: year
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: month
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: day
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hour
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: t_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: nano
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fix_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flags2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: h_msl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: h_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_n
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: g_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: s_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: head_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reserved1
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: head_veh
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_dec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mag_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xsens_mti_ros2_driver__msg__GnssPvt;
    is_plain =
      (
      offsetof(DataType, mag_acc) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GnssPvt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xsens_mti_ros2_driver__msg__GnssPvt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GnssPvt = {
  "xsens_mti_ros2_driver::msg",
  "GnssPvt",
  _GnssPvt__cdr_serialize,
  _GnssPvt__cdr_deserialize,
  _GnssPvt__get_serialized_size,
  _GnssPvt__max_serialized_size
};

static rosidl_message_type_support_t _GnssPvt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GnssPvt,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xsens_mti_ros2_driver, msg, GnssPvt)() {
  return &_GnssPvt__type_support;
}

#if defined(__cplusplus)
}
#endif
