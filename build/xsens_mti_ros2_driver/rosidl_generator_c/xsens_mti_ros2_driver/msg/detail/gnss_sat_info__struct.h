// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xsens_mti_ros2_driver:msg/GnssSatInfo.idl
// generated code does not contain a copyright notice

#ifndef XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__STRUCT_H_
#define XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FLAGS_SIGNAL_QUALITY_MASK'.
/**
  * Flags bitmask (XsSatInfo.m_flags / XsSatInfoFlags)
  *
  * bits[0..2] Signal quality indicator (mask 0x07):
  *   0 = no signal
  *   1 = searching
  *   2 = acquired
  *   3 = detected but unusable
  *   4 = code locked and time synchronized
  *   5,6,7 = code and carrier locked and time synchronized
  * bit[3]     SV used for navigation         (mask 0x08)
  * bits[4..5] SV health flag                 (mask 0x30):
  *   0x00 = unknown, 0x10 = healthy, 0x20 = unhealthy
  * bit[6]     differential correction available (mask 0x40)
  * bit[7]     reserved
  * 0x07
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_SIGNAL_QUALITY_MASK = 7
};

/// Constant 'FLAGS_SIGNAL_QUALITY_NO_SIGNAL'.
/**
  * 0x00
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_SIGNAL_QUALITY_NO_SIGNAL = 0
};

/// Constant 'FLAGS_SIGNAL_QUALITY_SEARCHING'.
/**
  * 0x01
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_SIGNAL_QUALITY_SEARCHING = 1
};

/// Constant 'FLAGS_SIGNAL_QUALITY_ACQUIRED'.
/**
  * 0x02
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_SIGNAL_QUALITY_ACQUIRED = 2
};

/// Constant 'FLAGS_SIGNAL_QUALITY_UNUSABLE'.
/**
  * 0x03
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_SIGNAL_QUALITY_UNUSABLE = 3
};

/// Constant 'FLAGS_SIGNAL_QUALITY_CODE_TIME_OK'.
/**
  * 0x04
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_SIGNAL_QUALITY_CODE_TIME_OK = 4
};

/// Constant 'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1'.
/**
  * 0x05
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1 = 5
};

/// Constant 'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2'.
/**
  * 0x06
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2 = 6
};

/// Constant 'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3'.
/**
  * 0x07
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3 = 7
};

/// Constant 'FLAGS_USED_FOR_NAVIGATION_MASK'.
/**
  * 0x08
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_USED_FOR_NAVIGATION_MASK = 8
};

/// Constant 'FLAGS_USED_FOR_NAVIGATION'.
/**
  * 0x08
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_USED_FOR_NAVIGATION = 8
};

/// Constant 'FLAGS_HEALTH_MASK'.
/**
  * 0x30
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_HEALTH_MASK = 48
};

/// Constant 'FLAGS_HEALTH_UNKNOWN'.
/**
  * 0x00
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_HEALTH_UNKNOWN = 0
};

/// Constant 'FLAGS_HEALTH_HEALTHY'.
/**
  * 0x10
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_HEALTH_HEALTHY = 16
};

/// Constant 'FLAGS_HEALTH_UNHEALTHY'.
/**
  * 0x20
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_HEALTH_UNHEALTHY = 32
};

/// Constant 'FLAGS_DIFFERENTIAL_MASK'.
/**
  * 0x40
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_DIFFERENTIAL_MASK = 64
};

/// Constant 'FLAGS_DIFFERENTIAL_AVAILABLE'.
/**
  * 0x40
 */
enum
{
  xsens_mti_ros2_driver__msg__GnssSatInfo__FLAGS_DIFFERENTIAL_AVAILABLE = 64
};

/// Struct defined in msg/GnssSatInfo in the package xsens_mti_ros2_driver.
/**
  * XsRawGnssSatInfo.msg
  * Maps to XsRawGnssSatInfo / XsSatInfo structs from xsrawgnsssatinfo.h
  * Corresponds to Xsens XDI_GnssSatInfo
  *
  * Wire layout:
  *   [0..3]   itow    U4  GPS time of week [ms]
  *   [4]      num_svs U1  number of satellites (max 60)
  *   [5]      res1    U1  reserved
  *   [6]      res2    U1  reserved
  *   [7]      res3    U1  reserved
  *   [8+4*N]  gnss_id U1  GNSS identifier for satellite N
  *   [9+4*N]  sv_id   U1  satellite identifier for satellite N
  *   [10+4*N] cno     U1  carrier to noise ratio [dBHz] for satellite N
  *   [11+4*N] flags   U1  flags for satellite N
 */
typedef struct xsens_mti_ros2_driver__msg__GnssSatInfo
{
  /// --- Header ---
  /// GPS time of week
  uint32_t itow;
  /// Number of satellites reported (max 60)
  uint8_t num_svs;
  /// Reserved for future use
  uint8_t res1;
  uint8_t res2;
  uint8_t res3;
  /// --- Per-satellite data (repeated num_svs times, max 60) ---
  /// Stored as flat parallel arrays of length 60, preserving the
  /// 4-byte-per-satellite wire layout of XsSatInfo[60].
  /// Only indices [0..num_svs-1] contain valid data.
  /// GNSS identifier (XsSatInfo.m_gnssId)
  ///   0 = GPS, 1 = SBAS, 2 = Galileo, 3 = BeiDou, 4 = IMES, 5 = QZSS, 6 = GLONASS
  uint8_t gnss_id[60];
  /// Satellite identifier (XsSatInfo.m_svId)
  uint8_t sv_id[60];
  /// Carrier to noise ratio / signal strength (XsSatInfo.m_cno)
  uint8_t cno[60];
  uint8_t flags[60];
} xsens_mti_ros2_driver__msg__GnssSatInfo;

// Struct for a sequence of xsens_mti_ros2_driver__msg__GnssSatInfo.
typedef struct xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence
{
  xsens_mti_ros2_driver__msg__GnssSatInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xsens_mti_ros2_driver__msg__GnssSatInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__STRUCT_H_
