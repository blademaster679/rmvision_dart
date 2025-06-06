# generated from rosidl_generator_py/resource/_idl.py.em
# with input from auto_aim_interfaces:msg/DebugLight.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DebugLight(type):
    """Metaclass of message 'DebugLight'."""

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
            module = import_type_support('auto_aim_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'auto_aim_interfaces.msg.DebugLight')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__debug_light
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__debug_light
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__debug_light
            cls._TYPE_SUPPORT = module.type_support_msg__msg__debug_light
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__debug_light

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DebugLight(metaclass=Metaclass_DebugLight):
    """Message class 'DebugLight'."""

    __slots__ = [
        '_center_x',
        '_radius',
        '_is_light',
    ]

    _fields_and_field_types = {
        'center_x': 'int32',
        'radius': 'float',
        'is_light': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.center_x = kwargs.get('center_x', int())
        self.radius = kwargs.get('radius', float())
        self.is_light = kwargs.get('is_light', bool())

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
        if self.center_x != other.center_x:
            return False
        if self.radius != other.radius:
            return False
        if self.is_light != other.is_light:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def center_x(self):
        """Message field 'center_x'."""
        return self._center_x

    @center_x.setter
    def center_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'center_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'center_x' field must be an integer in [-2147483648, 2147483647]"
        self._center_x = value

    @builtins.property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._radius = value

    @builtins.property
    def is_light(self):
        """Message field 'is_light'."""
        return self._is_light

    @is_light.setter
    def is_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_light' field must be of type 'bool'"
        self._is_light = value
