// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xsens_mti_ros2_driver:msg/GnssSatInfo.idl
// generated code does not contain a copyright notice

#ifndef XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__BUILDER_HPP_
#define XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xsens_mti_ros2_driver
{

namespace msg
{

namespace builder
{

class Init_GnssSatInfo_flags
{
public:
  explicit Init_GnssSatInfo_flags(::xsens_mti_ros2_driver::msg::GnssSatInfo & msg)
  : msg_(msg)
  {}
  ::xsens_mti_ros2_driver::msg::GnssSatInfo flags(::xsens_mti_ros2_driver::msg::GnssSatInfo::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssSatInfo msg_;
};

class Init_GnssSatInfo_cno
{
public:
  explicit Init_GnssSatInfo_cno(::xsens_mti_ros2_driver::msg::GnssSatInfo & msg)
  : msg_(msg)
  {}
  Init_GnssSatInfo_flags cno(::xsens_mti_ros2_driver::msg::GnssSatInfo::_cno_type arg)
  {
    msg_.cno = std::move(arg);
    return Init_GnssSatInfo_flags(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssSatInfo msg_;
};

class Init_GnssSatInfo_sv_id
{
public:
  explicit Init_GnssSatInfo_sv_id(::xsens_mti_ros2_driver::msg::GnssSatInfo & msg)
  : msg_(msg)
  {}
  Init_GnssSatInfo_cno sv_id(::xsens_mti_ros2_driver::msg::GnssSatInfo::_sv_id_type arg)
  {
    msg_.sv_id = std::move(arg);
    return Init_GnssSatInfo_cno(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssSatInfo msg_;
};

class Init_GnssSatInfo_gnss_id
{
public:
  explicit Init_GnssSatInfo_gnss_id(::xsens_mti_ros2_driver::msg::GnssSatInfo & msg)
  : msg_(msg)
  {}
  Init_GnssSatInfo_sv_id gnss_id(::xsens_mti_ros2_driver::msg::GnssSatInfo::_gnss_id_type arg)
  {
    msg_.gnss_id = std::move(arg);
    return Init_GnssSatInfo_sv_id(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssSatInfo msg_;
};

class Init_GnssSatInfo_res3
{
public:
  explicit Init_GnssSatInfo_res3(::xsens_mti_ros2_driver::msg::GnssSatInfo & msg)
  : msg_(msg)
  {}
  Init_GnssSatInfo_gnss_id res3(::xsens_mti_ros2_driver::msg::GnssSatInfo::_res3_type arg)
  {
    msg_.res3 = std::move(arg);
    return Init_GnssSatInfo_gnss_id(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssSatInfo msg_;
};

class Init_GnssSatInfo_res2
{
public:
  explicit Init_GnssSatInfo_res2(::xsens_mti_ros2_driver::msg::GnssSatInfo & msg)
  : msg_(msg)
  {}
  Init_GnssSatInfo_res3 res2(::xsens_mti_ros2_driver::msg::GnssSatInfo::_res2_type arg)
  {
    msg_.res2 = std::move(arg);
    return Init_GnssSatInfo_res3(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssSatInfo msg_;
};

class Init_GnssSatInfo_res1
{
public:
  explicit Init_GnssSatInfo_res1(::xsens_mti_ros2_driver::msg::GnssSatInfo & msg)
  : msg_(msg)
  {}
  Init_GnssSatInfo_res2 res1(::xsens_mti_ros2_driver::msg::GnssSatInfo::_res1_type arg)
  {
    msg_.res1 = std::move(arg);
    return Init_GnssSatInfo_res2(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssSatInfo msg_;
};

class Init_GnssSatInfo_num_svs
{
public:
  explicit Init_GnssSatInfo_num_svs(::xsens_mti_ros2_driver::msg::GnssSatInfo & msg)
  : msg_(msg)
  {}
  Init_GnssSatInfo_res1 num_svs(::xsens_mti_ros2_driver::msg::GnssSatInfo::_num_svs_type arg)
  {
    msg_.num_svs = std::move(arg);
    return Init_GnssSatInfo_res1(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssSatInfo msg_;
};

class Init_GnssSatInfo_itow
{
public:
  Init_GnssSatInfo_itow()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GnssSatInfo_num_svs itow(::xsens_mti_ros2_driver::msg::GnssSatInfo::_itow_type arg)
  {
    msg_.itow = std::move(arg);
    return Init_GnssSatInfo_num_svs(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssSatInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xsens_mti_ros2_driver::msg::GnssSatInfo>()
{
  return xsens_mti_ros2_driver::msg::builder::Init_GnssSatInfo_itow();
}

}  // namespace xsens_mti_ros2_driver

#endif  // XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__BUILDER_HPP_
