// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xsens_mti_ros2_driver:msg/GnssPvt.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "xsens_mti_ros2_driver/msg/detail/gnss_pvt__struct.h"
#include "xsens_mti_ros2_driver/msg/detail/gnss_pvt__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool xsens_mti_ros2_driver__msg__gnss_pvt__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("xsens_mti_ros2_driver.msg._gnss_pvt.GnssPvt", full_classname_dest, 43) == 0);
  }
  xsens_mti_ros2_driver__msg__GnssPvt * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // i_tow
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_tow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i_tow = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // year
    PyObject * field = PyObject_GetAttrString(_pymsg, "year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->year = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // month
    PyObject * field = PyObject_GetAttrString(_pymsg, "month");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->month = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // day
    PyObject * field = PyObject_GetAttrString(_pymsg, "day");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->day = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hour
    PyObject * field = PyObject_GetAttrString(_pymsg, "hour");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hour = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // min
    PyObject * field = PyObject_GetAttrString(_pymsg, "min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "sec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sec = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // t_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->t_acc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nano
    PyObject * field = PyObject_GetAttrString(_pymsg, "nano");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nano = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fix_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "fix_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fix_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // flags2
    PyObject * field = PyObject_GetAttrString(_pymsg, "flags2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flags2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sv
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lon = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lat = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // h_msl
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_msl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->h_msl = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // h_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->h_acc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // v_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->v_acc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vel_n
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_n");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_n = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_e");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_e = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vel_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_d = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // g_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "g_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->g_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heading = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // s_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->s_acc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // head_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->head_acc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // p_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_dop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->p_dop = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved1");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 6;
      uint8_t * dest = ros_message->reserved1;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // head_veh
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_veh");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->head_veh = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mag_dec
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_dec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mag_dec = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mag_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_acc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mag_acc = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xsens_mti_ros2_driver__msg__gnss_pvt__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GnssPvt */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xsens_mti_ros2_driver.msg._gnss_pvt");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GnssPvt");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xsens_mti_ros2_driver__msg__GnssPvt * ros_message = (xsens_mti_ros2_driver__msg__GnssPvt *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_tow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->i_tow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_tow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // year
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // month
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->month);
    {
      int rc = PyObject_SetAttrString(_pymessage, "month", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // day
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->day);
    {
      int rc = PyObject_SetAttrString(_pymessage, "day", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hour
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hour);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hour", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_acc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->t_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nano
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->nano);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nano", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fix_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fix_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fix_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flags2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flags2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flags2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_msl
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->h_msl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_msl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_acc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->h_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_acc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->v_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_n
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_e
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_d
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vel_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // g_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->g_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "g_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_acc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->s_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_acc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->head_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_dop
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->p_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved1
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "reserved1");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->reserved1[0]);
    memcpy(dst, src, 6 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // head_veh
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->head_veh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_veh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_dec
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mag_dec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_dec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_acc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mag_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
