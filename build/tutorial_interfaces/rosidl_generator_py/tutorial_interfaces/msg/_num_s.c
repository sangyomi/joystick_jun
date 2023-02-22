// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tutorial_interfaces:msg/Num.idl
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
#include "tutorial_interfaces/msg/detail/num__struct.h"
#include "tutorial_interfaces/msg/detail/num__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tutorial_interfaces__msg__num__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("tutorial_interfaces.msg._num.Num", full_classname_dest, 32) == 0);
  }
  tutorial_interfaces__msg__Num * ros_message = _ros_message;
  {  // leftstickangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftstickangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftstickangle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightstickangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightstickangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightstickangle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dpadangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "dpadangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dpadangle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lefttrigger
    PyObject * field = PyObject_GetAttrString(_pymsg, "lefttrigger");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lefttrigger = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // righttrigger
    PyObject * field = PyObject_GetAttrString(_pymsg, "righttrigger");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->righttrigger = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b
    PyObject * field = PyObject_GetAttrString(_pymsg, "b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lb
    PyObject * field = PyObject_GetAttrString(_pymsg, "lb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rb
    PyObject * field = PyObject_GetAttrString(_pymsg, "rb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tutorial_interfaces__msg__num__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Num */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tutorial_interfaces.msg._num");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Num");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tutorial_interfaces__msg__Num * ros_message = (tutorial_interfaces__msg__Num *)raw_ros_message;
  {  // leftstickangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftstickangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftstickangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightstickangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightstickangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightstickangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dpadangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dpadangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dpadangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lefttrigger
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lefttrigger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lefttrigger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // righttrigger
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->righttrigger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "righttrigger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
