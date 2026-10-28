// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xsens_mti_ros2_driver:msg/GnssSatInfo.idl
// generated code does not contain a copyright notice

#ifndef XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__TRAITS_HPP_
#define XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xsens_mti_ros2_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const GnssSatInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: itow
  {
    out << "itow: ";
    rosidl_generator_traits::value_to_yaml(msg.itow, out);
    out << ", ";
  }

  // member: num_svs
  {
    out << "num_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_svs, out);
    out << ", ";
  }

  // member: res1
  {
    out << "res1: ";
    rosidl_generator_traits::value_to_yaml(msg.res1, out);
    out << ", ";
  }

  // member: res2
  {
    out << "res2: ";
    rosidl_generator_traits::value_to_yaml(msg.res2, out);
    out << ", ";
  }

  // member: res3
  {
    out << "res3: ";
    rosidl_generator_traits::value_to_yaml(msg.res3, out);
    out << ", ";
  }

  // member: gnss_id
  {
    if (msg.gnss_id.size() == 0) {
      out << "gnss_id: []";
    } else {
      out << "gnss_id: [";
      size_t pending_items = msg.gnss_id.size();
      for (auto item : msg.gnss_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sv_id
  {
    if (msg.sv_id.size() == 0) {
      out << "sv_id: []";
    } else {
      out << "sv_id: [";
      size_t pending_items = msg.sv_id.size();
      for (auto item : msg.sv_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cno
  {
    if (msg.cno.size() == 0) {
      out << "cno: []";
    } else {
      out << "cno: [";
      size_t pending_items = msg.cno.size();
      for (auto item : msg.cno) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flags
  {
    if (msg.flags.size() == 0) {
      out << "flags: []";
    } else {
      out << "flags: [";
      size_t pending_items = msg.flags.size();
      for (auto item : msg.flags) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GnssSatInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: itow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "itow: ";
    rosidl_generator_traits::value_to_yaml(msg.itow, out);
    out << "\n";
  }

  // member: num_svs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_svs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_svs, out);
    out << "\n";
  }

  // member: res1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res1: ";
    rosidl_generator_traits::value_to_yaml(msg.res1, out);
    out << "\n";
  }

  // member: res2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res2: ";
    rosidl_generator_traits::value_to_yaml(msg.res2, out);
    out << "\n";
  }

  // member: res3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res3: ";
    rosidl_generator_traits::value_to_yaml(msg.res3, out);
    out << "\n";
  }

  // member: gnss_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gnss_id.size() == 0) {
      out << "gnss_id: []\n";
    } else {
      out << "gnss_id:\n";
      for (auto item : msg.gnss_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sv_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sv_id.size() == 0) {
      out << "sv_id: []\n";
    } else {
      out << "sv_id:\n";
      for (auto item : msg.sv_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cno
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cno.size() == 0) {
      out << "cno: []\n";
    } else {
      out << "cno:\n";
      for (auto item : msg.cno) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flags.size() == 0) {
      out << "flags: []\n";
    } else {
      out << "flags:\n";
      for (auto item : msg.flags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GnssSatInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace xsens_mti_ros2_driver

namespace rosidl_generator_traits
{

[[deprecated("use xsens_mti_ros2_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xsens_mti_ros2_driver::msg::GnssSatInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  xsens_mti_ros2_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xsens_mti_ros2_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const xsens_mti_ros2_driver::msg::GnssSatInfo & msg)
{
  return xsens_mti_ros2_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xsens_mti_ros2_driver::msg::GnssSatInfo>()
{
  return "xsens_mti_ros2_driver::msg::GnssSatInfo";
}

template<>
inline const char * name<xsens_mti_ros2_driver::msg::GnssSatInfo>()
{
  return "xsens_mti_ros2_driver/msg/GnssSatInfo";
}

template<>
struct has_fixed_size<xsens_mti_ros2_driver::msg::GnssSatInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xsens_mti_ros2_driver::msg::GnssSatInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xsens_mti_ros2_driver::msg::GnssSatInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_SAT_INFO__TRAITS_HPP_
