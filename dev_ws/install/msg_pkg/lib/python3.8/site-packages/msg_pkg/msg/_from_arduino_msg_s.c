// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg_pkg:msg/FromArduinoMsg.idl
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
#include "msg_pkg/msg/detail/from_arduino_msg__struct.h"
#include "msg_pkg/msg/detail/from_arduino_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool msg_pkg__msg__from_arduino_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("msg_pkg.msg._from_arduino_msg.FromArduinoMsg", full_classname_dest, 44) == 0);
  }
  msg_pkg__msg__FromArduinoMsg * ros_message = _ros_message;
  {  // ax
    PyObject * field = PyObject_GetAttrString(_pymsg, "ax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ay
    PyObject * field = PyObject_GetAttrString(_pymsg, "ay");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ay = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // az
    PyObject * field = PyObject_GetAttrString(_pymsg, "az");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->az = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gx
    PyObject * field = PyObject_GetAttrString(_pymsg, "gx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gy
    PyObject * field = PyObject_GetAttrString(_pymsg, "gy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gz
    PyObject * field = PyObject_GetAttrString(_pymsg, "gz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mx
    PyObject * field = PyObject_GetAttrString(_pymsg, "mx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // my
    PyObject * field = PyObject_GetAttrString(_pymsg, "my");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->my = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mz
    PyObject * field = PyObject_GetAttrString(_pymsg, "mz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // encoder1
    PyObject * field = PyObject_GetAttrString(_pymsg, "encoder1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->encoder1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // encoder2
    PyObject * field = PyObject_GetAttrString(_pymsg, "encoder2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->encoder2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg_pkg__msg__from_arduino_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FromArduinoMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg_pkg.msg._from_arduino_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FromArduinoMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg_pkg__msg__FromArduinoMsg * ros_message = (msg_pkg__msg__FromArduinoMsg *)raw_ros_message;
  {  // ax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ay
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // az
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->az);
    {
      int rc = PyObject_SetAttrString(_pymessage, "az", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // my
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->my);
    {
      int rc = PyObject_SetAttrString(_pymessage, "my", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encoder1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->encoder1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encoder1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encoder2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->encoder2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encoder2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
