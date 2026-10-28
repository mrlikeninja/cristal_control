// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xsens_mti_ros2_driver:msg/GnssSatInfo.idl
// generated code does not contain a copyright notice

#ifndef XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__STRUCT_HPP_
#define XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xsens_mti_ros2_driver__msg__GnssSatInfo __attribute__((deprecated))
#else
# define DEPRECATED__xsens_mti_ros2_driver__msg__GnssSatInfo __declspec(deprecated)
#endif

namespace xsens_mti_ros2_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GnssSatInfo_
{
  using Type = GnssSatInfo_<ContainerAllocator>;

  explicit GnssSatInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->itow = 0ul;
      this->num_svs = 0;
      this->res1 = 0;
      this->res2 = 0;
      this->res3 = 0;
      std::fill<typename std::array<uint8_t, 60>::iterator, uint8_t>(this->gnss_id.begin(), this->gnss_id.end(), 0);
      std::fill<typename std::array<uint8_t, 60>::iterator, uint8_t>(this->sv_id.begin(), this->sv_id.end(), 0);
      std::fill<typename std::array<uint8_t, 60>::iterator, uint8_t>(this->cno.begin(), this->cno.end(), 0);
      std::fill<typename std::array<uint8_t, 60>::iterator, uint8_t>(this->flags.begin(), this->flags.end(), 0);
    }
  }

  explicit GnssSatInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gnss_id(_alloc),
    sv_id(_alloc),
    cno(_alloc),
    flags(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->itow = 0ul;
      this->num_svs = 0;
      this->res1 = 0;
      this->res2 = 0;
      this->res3 = 0;
      std::fill<typename std::array<uint8_t, 60>::iterator, uint8_t>(this->gnss_id.begin(), this->gnss_id.end(), 0);
      std::fill<typename std::array<uint8_t, 60>::iterator, uint8_t>(this->sv_id.begin(), this->sv_id.end(), 0);
      std::fill<typename std::array<uint8_t, 60>::iterator, uint8_t>(this->cno.begin(), this->cno.end(), 0);
      std::fill<typename std::array<uint8_t, 60>::iterator, uint8_t>(this->flags.begin(), this->flags.end(), 0);
    }
  }

  // field types and members
  using _itow_type =
    uint32_t;
  _itow_type itow;
  using _num_svs_type =
    uint8_t;
  _num_svs_type num_svs;
  using _res1_type =
    uint8_t;
  _res1_type res1;
  using _res2_type =
    uint8_t;
  _res2_type res2;
  using _res3_type =
    uint8_t;
  _res3_type res3;
  using _gnss_id_type =
    std::array<uint8_t, 60>;
  _gnss_id_type gnss_id;
  using _sv_id_type =
    std::array<uint8_t, 60>;
  _sv_id_type sv_id;
  using _cno_type =
    std::array<uint8_t, 60>;
  _cno_type cno;
  using _flags_type =
    std::array<uint8_t, 60>;
  _flags_type flags;

  // setters for named parameter idiom
  Type & set__itow(
    const uint32_t & _arg)
  {
    this->itow = _arg;
    return *this;
  }
  Type & set__num_svs(
    const uint8_t & _arg)
  {
    this->num_svs = _arg;
    return *this;
  }
  Type & set__res1(
    const uint8_t & _arg)
  {
    this->res1 = _arg;
    return *this;
  }
  Type & set__res2(
    const uint8_t & _arg)
  {
    this->res2 = _arg;
    return *this;
  }
  Type & set__res3(
    const uint8_t & _arg)
  {
    this->res3 = _arg;
    return *this;
  }
  Type & set__gnss_id(
    const std::array<uint8_t, 60> & _arg)
  {
    this->gnss_id = _arg;
    return *this;
  }
  Type & set__sv_id(
    const std::array<uint8_t, 60> & _arg)
  {
    this->sv_id = _arg;
    return *this;
  }
  Type & set__cno(
    const std::array<uint8_t, 60> & _arg)
  {
    this->cno = _arg;
    return *this;
  }
  Type & set__flags(
    const std::array<uint8_t, 60> & _arg)
  {
    this->flags = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FLAGS_SIGNAL_QUALITY_MASK =
    7u;
  static constexpr uint8_t FLAGS_SIGNAL_QUALITY_NO_SIGNAL =
    0u;
  static constexpr uint8_t FLAGS_SIGNAL_QUALITY_SEARCHING =
    1u;
  static constexpr uint8_t FLAGS_SIGNAL_QUALITY_ACQUIRED =
    2u;
  static constexpr uint8_t FLAGS_SIGNAL_QUALITY_UNUSABLE =
    3u;
  static constexpr uint8_t FLAGS_SIGNAL_QUALITY_CODE_TIME_OK =
    4u;
  static constexpr uint8_t FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1 =
    5u;
  static constexpr uint8_t FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2 =
    6u;
  static constexpr uint8_t FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3 =
    7u;
  static constexpr uint8_t FLAGS_USED_FOR_NAVIGATION_MASK =
    8u;
  static constexpr uint8_t FLAGS_USED_FOR_NAVIGATION =
    8u;
  static constexpr uint8_t FLAGS_HEALTH_MASK =
    48u;
  static constexpr uint8_t FLAGS_HEALTH_UNKNOWN =
    0u;
  static constexpr uint8_t FLAGS_HEALTH_HEALTHY =
    16u;
  static constexpr uint8_t FLAGS_HEALTH_UNHEALTHY =
    32u;
  static constexpr uint8_t FLAGS_DIFFERENTIAL_MASK =
    64u;
  static constexpr uint8_t FLAGS_DIFFERENTIAL_AVAILABLE =
    64u;

  // pointer types
  using RawPtr =
    xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xsens_mti_ros2_driver__msg__GnssSatInfo
    std::shared_ptr<xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xsens_mti_ros2_driver__msg__GnssSatInfo
    std::shared_ptr<xsens_mti_ros2_driver::msg::GnssSatInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GnssSatInfo_ & other) const
  {
    if (this->itow != other.itow) {
      return false;
    }
    if (this->num_svs != other.num_svs) {
      return false;
    }
    if (this->res1 != other.res1) {
      return false;
    }
    if (this->res2 != other.res2) {
      return false;
    }
    if (this->res3 != other.res3) {
      return false;
    }
    if (this->gnss_id != other.gnss_id) {
      return false;
    }
    if (this->sv_id != other.sv_id) {
      return false;
    }
    if (this->cno != other.cno) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const GnssSatInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GnssSatInfo_

// alias to use template instance with default allocator
using GnssSatInfo =
  xsens_mti_ros2_driver::msg::GnssSatInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_SIGNAL_QUALITY_MASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_SIGNAL_QUALITY_NO_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_SIGNAL_QUALITY_SEARCHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_SIGNAL_QUALITY_ACQUIRED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_SIGNAL_QUALITY_UNUSABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_SIGNAL_QUALITY_CODE_TIME_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_USED_FOR_NAVIGATION_MASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_USED_FOR_NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_HEALTH_MASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_HEALTH_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_HEALTH_HEALTHY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_HEALTH_UNHEALTHY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_DIFFERENTIAL_MASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GnssSatInfo_<ContainerAllocator>::FLAGS_DIFFERENTIAL_AVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace xsens_mti_ros2_driver

#endif  // XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__STRUCT_HPP_
