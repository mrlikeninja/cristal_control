// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xsens_mti_ros2_driver:msg/GnssPvt.idl
// generated code does not contain a copyright notice

#ifndef XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_PVT__FUNCTIONS_H_
#define XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_PVT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xsens_mti_ros2_driver/msg/rosidl_generator_c__visibility_control.h"

#include "xsens_mti_ros2_driver/msg/detail/gnss_pvt__struct.h"

/// Initialize msg/GnssPvt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xsens_mti_ros2_driver__msg__GnssPvt
 * )) before or use
 * xsens_mti_ros2_driver__msg__GnssPvt__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
bool
xsens_mti_ros2_driver__msg__GnssPvt__init(xsens_mti_ros2_driver__msg__GnssPvt * msg);

/// Finalize msg/GnssPvt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
void
xsens_mti_ros2_driver__msg__GnssPvt__fini(xsens_mti_ros2_driver__msg__GnssPvt * msg);

/// Create msg/GnssPvt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xsens_mti_ros2_driver__msg__GnssPvt__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
xsens_mti_ros2_driver__msg__GnssPvt *
xsens_mti_ros2_driver__msg__GnssPvt__create();

/// Destroy msg/GnssPvt message.
/**
 * It calls
 * xsens_mti_ros2_driver__msg__GnssPvt__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
void
xsens_mti_ros2_driver__msg__GnssPvt__destroy(xsens_mti_ros2_driver__msg__GnssPvt * msg);

/// Check for msg/GnssPvt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
bool
xsens_mti_ros2_driver__msg__GnssPvt__are_equal(const xsens_mti_ros2_driver__msg__GnssPvt * lhs, const xsens_mti_ros2_driver__msg__GnssPvt * rhs);

/// Copy a msg/GnssPvt message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
bool
xsens_mti_ros2_driver__msg__GnssPvt__copy(
  const xsens_mti_ros2_driver__msg__GnssPvt * input,
  xsens_mti_ros2_driver__msg__GnssPvt * output);

/// Initialize array of msg/GnssPvt messages.
/**
 * It allocates the memory for the number of elements and calls
 * xsens_mti_ros2_driver__msg__GnssPvt__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
bool
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__init(xsens_mti_ros2_driver__msg__GnssPvt__Sequence * array, size_t size);

/// Finalize array of msg/GnssPvt messages.
/**
 * It calls
 * xsens_mti_ros2_driver__msg__GnssPvt__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
void
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__fini(xsens_mti_ros2_driver__msg__GnssPvt__Sequence * array);

/// Create array of msg/GnssPvt messages.
/**
 * It allocates the memory for the array and calls
 * xsens_mti_ros2_driver__msg__GnssPvt__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
xsens_mti_ros2_driver__msg__GnssPvt__Sequence *
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__create(size_t size);

/// Destroy array of msg/GnssPvt messages.
/**
 * It calls
 * xsens_mti_ros2_driver__msg__GnssPvt__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
void
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__destroy(xsens_mti_ros2_driver__msg__GnssPvt__Sequence * array);

/// Check for msg/GnssPvt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
bool
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__are_equal(const xsens_mti_ros2_driver__msg__GnssPvt__Sequence * lhs, const xsens_mti_ros2_driver__msg__GnssPvt__Sequence * rhs);

/// Copy an array of msg/GnssPvt messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xsens_mti_ros2_driver
bool
xsens_mti_ros2_driver__msg__GnssPvt__Sequence__copy(
  const xsens_mti_ros2_driver__msg__GnssPvt__Sequence * input,
  xsens_mti_ros2_driver__msg__GnssPvt__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XSENS_MTI_ROS2_DRIVER__MSG__DETAIL__GNSS_PVT__FUNCTIONS_H_
