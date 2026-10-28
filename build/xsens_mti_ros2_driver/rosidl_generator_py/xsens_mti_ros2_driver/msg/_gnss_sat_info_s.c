// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xsens_mti_ros2_driver:msg/GnssSatInfo.idl
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
#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__struct.h"
#include "xsens_mti_ros2_driver/msg/detail/gnss_sat_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool xsens_mti_ros2_driver__msg__gnss_sat_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("xsens_mti_ros2_driver.msg._gnss_sat_info.GnssSatInfo", full_classname_dest, 52) == 0);
  }
  xsens_mti_ros2_driver__msg__GnssSatInfo * ros_message = _ros_message;
  {  // itow
    PyObject * field = PyObject_GetAttrString(_pymsg, "itow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->itow = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_svs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_svs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_svs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // res1
    PyObject * field = PyObject_GetAttrString(_pymsg, "res1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->res1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // res2
    PyObject * field = PyObject_GetAttrString(_pymsg, "res2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->res2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // res3
    PyObject * field = PyObject_GetAttrString(_pymsg, "res3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->res3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gnss_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_id");
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
      Py_ssize_t size = 60;
      uint8_t * dest = ros_message->gnss_id;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // sv_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sv_id");
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
      Py_ssize_t size = 60;
      uint8_t * dest = ros_message->sv_id;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // cno
    PyObject * field = PyObject_GetAttrString(_pymsg, "cno");
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
      Py_ssize_t size = 60;
      uint8_t * dest = ros_message->cno;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "flags");
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
      Py_ssize_t size = 60;
      uint8_t * dest = ros_message->flags;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xsens_mti_ros2_driver__msg__gnss_sat_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GnssSatInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xsens_mti_ros2_driver.msg._gnss_sat_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GnssSatInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xsens_mti_ros2_driver__msg__GnssSatInfo * ros_message = (xsens_mti_ros2_driver__msg__GnssSatInfo *)raw_ros_message;
  {  // itow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->itow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "itow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_svs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_svs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_svs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // res1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->res1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "res1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // res2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->res2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "res2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // res3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->res3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "res3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_id
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "gnss_id");
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
    uint8_t * src = &(ros_message->gnss_id[0]);
    memcpy(dst, src, 60 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // sv_id
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "sv_id");
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
    uint8_t * src = &(ros_message->sv_id[0]);
    memcpy(dst, src, 60 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // cno
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "cno");
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
    uint8_t * src = &(ros_message->cno[0]);
    memcpy(dst, src, 60 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // flags
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "flags");
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
    uint8_t * src = &(ros_message->flags[0]);
    memcpy(dst, src, 60 * sizeof(uint8_t));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
