# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:msg/Num.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Num(type):
    """Metaclass of message 'Num'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.msg.Num')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__num
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__num
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__num
            cls._TYPE_SUPPORT = module.type_support_msg__msg__num
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__num

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Num(metaclass=Metaclass_Num):
    """Message class 'Num'."""

    __slots__ = [
        '_leftstickangle',
        '_rightstickangle',
        '_dpadangle',
        '_lefttrigger',
        '_righttrigger',
        '_a',
        '_b',
        '_x',
        '_y',
        '_lb',
        '_rb',
    ]

    _fields_and_field_types = {
        'leftstickangle': 'float',
        'rightstickangle': 'float',
        'dpadangle': 'float',
        'lefttrigger': 'float',
        'righttrigger': 'float',
        'a': 'float',
        'b': 'float',
        'x': 'float',
        'y': 'float',
        'lb': 'float',
        'rb': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.leftstickangle = kwargs.get('leftstickangle', float())
        self.rightstickangle = kwargs.get('rightstickangle', float())
        self.dpadangle = kwargs.get('dpadangle', float())
        self.lefttrigger = kwargs.get('lefttrigger', float())
        self.righttrigger = kwargs.get('righttrigger', float())
        self.a = kwargs.get('a', float())
        self.b = kwargs.get('b', float())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.lb = kwargs.get('lb', float())
        self.rb = kwargs.get('rb', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.leftstickangle != other.leftstickangle:
            return False
        if self.rightstickangle != other.rightstickangle:
            return False
        if self.dpadangle != other.dpadangle:
            return False
        if self.lefttrigger != other.lefttrigger:
            return False
        if self.righttrigger != other.righttrigger:
            return False
        if self.a != other.a:
            return False
        if self.b != other.b:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.lb != other.lb:
            return False
        if self.rb != other.rb:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def leftstickangle(self):
        """Message field 'leftstickangle'."""
        return self._leftstickangle

    @leftstickangle.setter
    def leftstickangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftstickangle' field must be of type 'float'"
        self._leftstickangle = value

    @property
    def rightstickangle(self):
        """Message field 'rightstickangle'."""
        return self._rightstickangle

    @rightstickangle.setter
    def rightstickangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightstickangle' field must be of type 'float'"
        self._rightstickangle = value

    @property
    def dpadangle(self):
        """Message field 'dpadangle'."""
        return self._dpadangle

    @dpadangle.setter
    def dpadangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dpadangle' field must be of type 'float'"
        self._dpadangle = value

    @property
    def lefttrigger(self):
        """Message field 'lefttrigger'."""
        return self._lefttrigger

    @lefttrigger.setter
    def lefttrigger(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lefttrigger' field must be of type 'float'"
        self._lefttrigger = value

    @property
    def righttrigger(self):
        """Message field 'righttrigger'."""
        return self._righttrigger

    @righttrigger.setter
    def righttrigger(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'righttrigger' field must be of type 'float'"
        self._righttrigger = value

    @property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a' field must be of type 'float'"
        self._a = value

    @property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b' field must be of type 'float'"
        self._b = value

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def lb(self):
        """Message field 'lb'."""
        return self._lb

    @lb.setter
    def lb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lb' field must be of type 'float'"
        self._lb = value

    @property
    def rb(self):
        """Message field 'rb'."""
        return self._rb

    @rb.setter
    def rb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rb' field must be of type 'float'"
        self._rb = value
