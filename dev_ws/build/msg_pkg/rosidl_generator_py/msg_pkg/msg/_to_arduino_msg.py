# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_pkg:msg/ToArduinoMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ToArduinoMsg(type):
    """Metaclass of message 'ToArduinoMsg'."""

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
            module = import_type_support('msg_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg.msg.ToArduinoMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__to_arduino_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__to_arduino_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__to_arduino_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__to_arduino_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__to_arduino_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToArduinoMsg(metaclass=Metaclass_ToArduinoMsg):
    """Message class 'ToArduinoMsg'."""

    __slots__ = [
        '_m1_speed',
        '_m2_speed',
        '_m1_encoder_speed',
        '_m2_encoder_speed',
    ]

    _fields_and_field_types = {
        'm1_speed': 'float',
        'm2_speed': 'float',
        'm1_encoder_speed': 'int32',
        'm2_encoder_speed': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.m1_speed = kwargs.get('m1_speed', float())
        self.m2_speed = kwargs.get('m2_speed', float())
        self.m1_encoder_speed = kwargs.get('m1_encoder_speed', int())
        self.m2_encoder_speed = kwargs.get('m2_encoder_speed', int())

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
        if self.m1_speed != other.m1_speed:
            return False
        if self.m2_speed != other.m2_speed:
            return False
        if self.m1_encoder_speed != other.m1_encoder_speed:
            return False
        if self.m2_encoder_speed != other.m2_encoder_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def m1_speed(self):
        """Message field 'm1_speed'."""
        return self._m1_speed

    @m1_speed.setter
    def m1_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm1_speed' field must be of type 'float'"
        self._m1_speed = value

    @property
    def m2_speed(self):
        """Message field 'm2_speed'."""
        return self._m2_speed

    @m2_speed.setter
    def m2_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm2_speed' field must be of type 'float'"
        self._m2_speed = value

    @property
    def m1_encoder_speed(self):
        """Message field 'm1_encoder_speed'."""
        return self._m1_encoder_speed

    @m1_encoder_speed.setter
    def m1_encoder_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm1_encoder_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'm1_encoder_speed' field must be an integer in [-2147483648, 2147483647]"
        self._m1_encoder_speed = value

    @property
    def m2_encoder_speed(self):
        """Message field 'm2_encoder_speed'."""
        return self._m2_encoder_speed

    @m2_encoder_speed.setter
    def m2_encoder_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm2_encoder_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'm2_encoder_speed' field must be an integer in [-2147483648, 2147483647]"
        self._m2_encoder_speed = value
