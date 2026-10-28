// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xsens_mti_ros2_driver:msg/GnssPvt.idl
// generated code does not contain a copyright notice

#ifndef XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_PVT__STRUCT_H_
#define XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_PVT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLASS_ID'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__CLASS_ID = 1
};

/// Constant 'MESSAGE_ID'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__MESSAGE_ID = 7
};

/// Constant 'VALID_DATE'.
/**
  * Valid UTC Date
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__VALID_DATE = 1
};

/// Constant 'VALID_TIME'.
/**
  * Valid
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__VALID_TIME = 2
};

/// Constant 'VALID_FULLY_RESOLVED'.
/**
  * UTC time of day has been fully resolved
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__VALID_FULLY_RESOLVED = 4
};

/// Constant 'VALID_MAG'.
/**
  * Valid Magnetic Declination
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__VALID_MAG = 8
};

/// Constant 'FIX_TYPE_NO_FIX'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FIX_TYPE_NO_FIX = 0
};

/// Constant 'FIX_TYPE_DEAD_RECKONING_ONLY'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FIX_TYPE_DEAD_RECKONING_ONLY = 1
};

/// Constant 'FIX_TYPE_2D'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FIX_TYPE_2D = 2
};

/// Constant 'FIX_TYPE_3D'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FIX_TYPE_3D = 3
};

/// Constant 'FIX_TYPE_GNSS_DEAD_RECKONING_COMBINED'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FIX_TYPE_GNSS_DEAD_RECKONING_COMBINED = 4
};

/// Constant 'FIX_TYPE_TIME_ONLY'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FIX_TYPE_TIME_ONLY = 5
};

/// Constant 'FLAGS_GNSS_FIX_OK'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FLAGS_GNSS_FIX_OK = 1
};

/// Constant 'FLAGS_DIFF_SOLN'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FLAGS_DIFF_SOLN = 2
};

/// Constant 'FLAGS_PSM_MASK'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FLAGS_PSM_MASK = 28
};

/// Constant 'PSM_OFF'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__PSM_OFF = 0
};

/// Constant 'PSM_ENABLED'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__PSM_ENABLED = 4
};

/// Constant 'PSM_ACQUIRED'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__PSM_ACQUIRED = 8
};

/// Constant 'PSM_TRACKING'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__PSM_TRACKING = 12
};

/// Constant 'PSM_POWER_OPTIMIZED_TRACKING'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__PSM_POWER_OPTIMIZED_TRACKING = 16
};

/// Constant 'PSM_INACTIVE'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__PSM_INACTIVE = 20
};

/// Constant 'FLAGS_HEAD_VEH_VALID'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FLAGS_HEAD_VEH_VALID = 32
};

/// Constant 'FLAGS_CARRIER_PHASE_MASK'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FLAGS_CARRIER_PHASE_MASK = 192
};

/// Constant 'CARRIER_PHASE_NO_SOLUTION'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__CARRIER_PHASE_NO_SOLUTION = 0
};

/// Constant 'CARRIER_PHASE_FLOAT'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__CARRIER_PHASE_FLOAT = 64
};

/// Constant 'CARRIER_PHASE_FIXED'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__CARRIER_PHASE_FIXED = 128
};

/// Constant 'FLAGS2_CONFIRMED_AVAILABLE'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FLAGS2_CONFIRMED_AVAILABLE = 32
};

/// Constant 'FLAGS2_CONFIRMED_DATE'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FLAGS2_CONFIRMED_DATE = 64
};

/// Constant 'FLAGS2_CONFIRMED_TIME'.
enum
{
  xsens_mti_ros2_driver__msg__GnssPvt__FLAGS2_CONFIRMED_TIME = 128
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/GnssPvt in the package xsens_mti_ros2_driver.
/**
  * NAV-PVT (0x01 0x07)
  * Navigation Position Velocity Time Solution
  *
  * Note that during a leap second there may be more (or less) than 60 seconds in
  * a minute; see the description of leap seconds for details.
  *
  * This message combines Position, velocity and time solution in LLH,
  * including accuracy figures
  *
  * Field names mirror ublox_msgs/NavPVT for interoperability.
  * Fixed output rate from Xsens GNSS/INS devices is 4 Hz.
  * Supported models: MTi-7, MTi-8, MTi-670(G), MTi-680(G), MTi-G-710
 */
typedef struct xsens_mti_ros2_driver__msg__GnssPvt
{
  std_msgs__msg__Header header;
  /// GPS Millisecond time of week
  uint32_t i_tow;
  /// Year (UTC)
  uint16_t year;
  /// Month, range 1..12 (UTC)
  uint8_t month;
  /// Day of month, range 1..31 (UTC)
  uint8_t day;
  /// Hour of day, range 0..23 (UTC)
  uint8_t hour;
  /// Minute of hour, range 0..59 (UTC)
  uint8_t min;
  /// Seconds of minute, range 0..60 (UTC)
  uint8_t sec;
  /// Validity flags
  uint8_t valid;
  /// time accuracy estimate (UTC)
  uint32_t t_acc;
  /// fraction of a second, range -1e9 .. 1e9 (UTC)
  int32_t nano;
  /// GNSS fix Type, range 0..5
  uint8_t fix_type;
  /// Fix Status Flags
  uint8_t flags;
  /// Additional Flags
  uint8_t flags2;
  /// Number of SVs used in Nav Solution
  uint8_t num_sv;
  /// Longitude
  int32_t lon;
  /// Latitude
  int32_t lat;
  /// Height above Ellipsoid
  int32_t height;
  /// Height above mean sea level
  int32_t h_msl;
  /// Horizontal Accuracy Estimate
  uint32_t h_acc;
  /// Vertical Accuracy Estimate
  uint32_t v_acc;
  /// NED north velocity
  int32_t vel_n;
  /// NED east velocity
  int32_t vel_e;
  /// NED down velocity
  int32_t vel_d;
  /// Ground Speed (2-D)
  int32_t g_speed;
  /// Heading of motion 2-D
  int32_t heading;
  /// Speed Accuracy Estimate
  uint32_t s_acc;
  /// Heading Accuracy Estimate
  uint32_t head_acc;
  /// Position DOP
  uint16_t p_dop;
  /// Reserved
  uint8_t reserved1[6];
  /// Heading of vehicle (2-D)
  int32_t head_veh;
  /// Magnetic declination
  int16_t mag_dec;
  /// Magnetic declination accuracy
  uint16_t mag_acc;
} xsens_mti_ros2_driver__msg__GnssPvt;

// Struct for a sequence of xsens_mti_ros2_driver__msg__GnssPvt.
typedef struct xsens_mti_ros2_driver__msg__GnssPvt__Sequence
{
  xsens_mti_ros2_driver__msg__GnssPvt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xsens_mti_ros2_driver__msg__GnssPvt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_PVT__STRUCT_H_
