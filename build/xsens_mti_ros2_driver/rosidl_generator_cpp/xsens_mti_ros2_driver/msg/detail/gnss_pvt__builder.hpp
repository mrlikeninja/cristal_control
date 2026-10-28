// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xsens_mti_ros2_driver:msg/GnssPvt.idl
// generated code does not contain a copyright notice

#ifndef XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_PVT__BUILDER_HPP_
#define XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_PVT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xsens_mti_ros2_driver/msg/detail/gnss_pvt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xsens_mti_ros2_driver
{

namespace msg
{

namespace builder
{

class Init_GnssPvt_mag_acc
{
public:
  explicit Init_GnssPvt_mag_acc(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  ::xsens_mti_ros2_driver::msg::GnssPvt mag_acc(::xsens_mti_ros2_driver::msg::GnssPvt::_mag_acc_type arg)
  {
    msg_.mag_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_mag_dec
{
public:
  explicit Init_GnssPvt_mag_dec(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_mag_acc mag_dec(::xsens_mti_ros2_driver::msg::GnssPvt::_mag_dec_type arg)
  {
    msg_.mag_dec = std::move(arg);
    return Init_GnssPvt_mag_acc(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_head_veh
{
public:
  explicit Init_GnssPvt_head_veh(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_mag_dec head_veh(::xsens_mti_ros2_driver::msg::GnssPvt::_head_veh_type arg)
  {
    msg_.head_veh = std::move(arg);
    return Init_GnssPvt_mag_dec(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_reserved1
{
public:
  explicit Init_GnssPvt_reserved1(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_head_veh reserved1(::xsens_mti_ros2_driver::msg::GnssPvt::_reserved1_type arg)
  {
    msg_.reserved1 = std::move(arg);
    return Init_GnssPvt_head_veh(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_p_dop
{
public:
  explicit Init_GnssPvt_p_dop(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_reserved1 p_dop(::xsens_mti_ros2_driver::msg::GnssPvt::_p_dop_type arg)
  {
    msg_.p_dop = std::move(arg);
    return Init_GnssPvt_reserved1(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_head_acc
{
public:
  explicit Init_GnssPvt_head_acc(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_p_dop head_acc(::xsens_mti_ros2_driver::msg::GnssPvt::_head_acc_type arg)
  {
    msg_.head_acc = std::move(arg);
    return Init_GnssPvt_p_dop(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_s_acc
{
public:
  explicit Init_GnssPvt_s_acc(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_head_acc s_acc(::xsens_mti_ros2_driver::msg::GnssPvt::_s_acc_type arg)
  {
    msg_.s_acc = std::move(arg);
    return Init_GnssPvt_head_acc(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_heading
{
public:
  explicit Init_GnssPvt_heading(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_s_acc heading(::xsens_mti_ros2_driver::msg::GnssPvt::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_GnssPvt_s_acc(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_g_speed
{
public:
  explicit Init_GnssPvt_g_speed(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_heading g_speed(::xsens_mti_ros2_driver::msg::GnssPvt::_g_speed_type arg)
  {
    msg_.g_speed = std::move(arg);
    return Init_GnssPvt_heading(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_vel_d
{
public:
  explicit Init_GnssPvt_vel_d(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_g_speed vel_d(::xsens_mti_ros2_driver::msg::GnssPvt::_vel_d_type arg)
  {
    msg_.vel_d = std::move(arg);
    return Init_GnssPvt_g_speed(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_vel_e
{
public:
  explicit Init_GnssPvt_vel_e(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_vel_d vel_e(::xsens_mti_ros2_driver::msg::GnssPvt::_vel_e_type arg)
  {
    msg_.vel_e = std::move(arg);
    return Init_GnssPvt_vel_d(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_vel_n
{
public:
  explicit Init_GnssPvt_vel_n(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_vel_e vel_n(::xsens_mti_ros2_driver::msg::GnssPvt::_vel_n_type arg)
  {
    msg_.vel_n = std::move(arg);
    return Init_GnssPvt_vel_e(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_v_acc
{
public:
  explicit Init_GnssPvt_v_acc(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_vel_n v_acc(::xsens_mti_ros2_driver::msg::GnssPvt::_v_acc_type arg)
  {
    msg_.v_acc = std::move(arg);
    return Init_GnssPvt_vel_n(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_h_acc
{
public:
  explicit Init_GnssPvt_h_acc(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_v_acc h_acc(::xsens_mti_ros2_driver::msg::GnssPvt::_h_acc_type arg)
  {
    msg_.h_acc = std::move(arg);
    return Init_GnssPvt_v_acc(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_h_msl
{
public:
  explicit Init_GnssPvt_h_msl(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_h_acc h_msl(::xsens_mti_ros2_driver::msg::GnssPvt::_h_msl_type arg)
  {
    msg_.h_msl = std::move(arg);
    return Init_GnssPvt_h_acc(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_height
{
public:
  explicit Init_GnssPvt_height(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_h_msl height(::xsens_mti_ros2_driver::msg::GnssPvt::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_GnssPvt_h_msl(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_lat
{
public:
  explicit Init_GnssPvt_lat(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_height lat(::xsens_mti_ros2_driver::msg::GnssPvt::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_GnssPvt_height(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_lon
{
public:
  explicit Init_GnssPvt_lon(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_lat lon(::xsens_mti_ros2_driver::msg::GnssPvt::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_GnssPvt_lat(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_num_sv
{
public:
  explicit Init_GnssPvt_num_sv(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_lon num_sv(::xsens_mti_ros2_driver::msg::GnssPvt::_num_sv_type arg)
  {
    msg_.num_sv = std::move(arg);
    return Init_GnssPvt_lon(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_flags2
{
public:
  explicit Init_GnssPvt_flags2(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_num_sv flags2(::xsens_mti_ros2_driver::msg::GnssPvt::_flags2_type arg)
  {
    msg_.flags2 = std::move(arg);
    return Init_GnssPvt_num_sv(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_flags
{
public:
  explicit Init_GnssPvt_flags(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_flags2 flags(::xsens_mti_ros2_driver::msg::GnssPvt::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_GnssPvt_flags2(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_fix_type
{
public:
  explicit Init_GnssPvt_fix_type(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_flags fix_type(::xsens_mti_ros2_driver::msg::GnssPvt::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return Init_GnssPvt_flags(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_nano
{
public:
  explicit Init_GnssPvt_nano(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_fix_type nano(::xsens_mti_ros2_driver::msg::GnssPvt::_nano_type arg)
  {
    msg_.nano = std::move(arg);
    return Init_GnssPvt_fix_type(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_t_acc
{
public:
  explicit Init_GnssPvt_t_acc(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_nano t_acc(::xsens_mti_ros2_driver::msg::GnssPvt::_t_acc_type arg)
  {
    msg_.t_acc = std::move(arg);
    return Init_GnssPvt_nano(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_valid
{
public:
  explicit Init_GnssPvt_valid(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_t_acc valid(::xsens_mti_ros2_driver::msg::GnssPvt::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_GnssPvt_t_acc(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_sec
{
public:
  explicit Init_GnssPvt_sec(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_valid sec(::xsens_mti_ros2_driver::msg::GnssPvt::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_GnssPvt_valid(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_min
{
public:
  explicit Init_GnssPvt_min(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_sec min(::xsens_mti_ros2_driver::msg::GnssPvt::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_GnssPvt_sec(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_hour
{
public:
  explicit Init_GnssPvt_hour(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_min hour(::xsens_mti_ros2_driver::msg::GnssPvt::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return Init_GnssPvt_min(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_day
{
public:
  explicit Init_GnssPvt_day(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_hour day(::xsens_mti_ros2_driver::msg::GnssPvt::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_GnssPvt_hour(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_month
{
public:
  explicit Init_GnssPvt_month(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_day month(::xsens_mti_ros2_driver::msg::GnssPvt::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_GnssPvt_day(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_year
{
public:
  explicit Init_GnssPvt_year(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_month year(::xsens_mti_ros2_driver::msg::GnssPvt::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_GnssPvt_month(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_i_tow
{
public:
  explicit Init_GnssPvt_i_tow(::xsens_mti_ros2_driver::msg::GnssPvt & msg)
  : msg_(msg)
  {}
  Init_GnssPvt_year i_tow(::xsens_mti_ros2_driver::msg::GnssPvt::_i_tow_type arg)
  {
    msg_.i_tow = std::move(arg);
    return Init_GnssPvt_year(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

class Init_GnssPvt_header
{
public:
  Init_GnssPvt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GnssPvt_i_tow header(::xsens_mti_ros2_driver::msg::GnssPvt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GnssPvt_i_tow(msg_);
  }

private:
  ::xsens_mti_ros2_driver::msg::GnssPvt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xsens_mti_ros2_driver::msg::GnssPvt>()
{
  return xsens_mti_ros2_driver::msg::builder::Init_GnssPvt_header();
}

}  // namespace xsens_mti_ros2_driver

#endif  // XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_PVT__BUILDER_HPP_
