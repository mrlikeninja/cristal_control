# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xsens_mti_ros2_driver:msg/GnssSatInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'gnss_id'
# Member 'sv_id'
# Member 'cno'
# Member 'flags'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GnssSatInfo(type):
    """Metaclass of message 'GnssSatInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FLAGS_SIGNAL_QUALITY_MASK': 7,
        'FLAGS_SIGNAL_QUALITY_NO_SIGNAL': 0,
        'FLAGS_SIGNAL_QUALITY_SEARCHING': 1,
        'FLAGS_SIGNAL_QUALITY_ACQUIRED': 2,
        'FLAGS_SIGNAL_QUALITY_UNUSABLE': 3,
        'FLAGS_SIGNAL_QUALITY_CODE_TIME_OK': 4,
        'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1': 5,
        'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2': 6,
        'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3': 7,
        'FLAGS_USED_FOR_NAVIGATION_MASK': 8,
        'FLAGS_USED_FOR_NAVIGATION': 8,
        'FLAGS_HEALTH_MASK': 48,
        'FLAGS_HEALTH_UNKNOWN': 0,
        'FLAGS_HEALTH_HEALTHY': 16,
        'FLAGS_HEALTH_UNHEALTHY': 32,
        'FLAGS_DIFFERENTIAL_MASK': 64,
        'FLAGS_DIFFERENTIAL_AVAILABLE': 64,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xsens_mti_ros2_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xsens_mti_ros2_driver.msg.GnssSatInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_sat_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_sat_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_sat_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_sat_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_sat_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FLAGS_SIGNAL_QUALITY_MASK': cls.__constants['FLAGS_SIGNAL_QUALITY_MASK'],
            'FLAGS_SIGNAL_QUALITY_NO_SIGNAL': cls.__constants['FLAGS_SIGNAL_QUALITY_NO_SIGNAL'],
            'FLAGS_SIGNAL_QUALITY_SEARCHING': cls.__constants['FLAGS_SIGNAL_QUALITY_SEARCHING'],
            'FLAGS_SIGNAL_QUALITY_ACQUIRED': cls.__constants['FLAGS_SIGNAL_QUALITY_ACQUIRED'],
            'FLAGS_SIGNAL_QUALITY_UNUSABLE': cls.__constants['FLAGS_SIGNAL_QUALITY_UNUSABLE'],
            'FLAGS_SIGNAL_QUALITY_CODE_TIME_OK': cls.__constants['FLAGS_SIGNAL_QUALITY_CODE_TIME_OK'],
            'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1': cls.__constants['FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1'],
            'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2': cls.__constants['FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2'],
            'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3': cls.__constants['FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3'],
            'FLAGS_USED_FOR_NAVIGATION_MASK': cls.__constants['FLAGS_USED_FOR_NAVIGATION_MASK'],
            'FLAGS_USED_FOR_NAVIGATION': cls.__constants['FLAGS_USED_FOR_NAVIGATION'],
            'FLAGS_HEALTH_MASK': cls.__constants['FLAGS_HEALTH_MASK'],
            'FLAGS_HEALTH_UNKNOWN': cls.__constants['FLAGS_HEALTH_UNKNOWN'],
            'FLAGS_HEALTH_HEALTHY': cls.__constants['FLAGS_HEALTH_HEALTHY'],
            'FLAGS_HEALTH_UNHEALTHY': cls.__constants['FLAGS_HEALTH_UNHEALTHY'],
            'FLAGS_DIFFERENTIAL_MASK': cls.__constants['FLAGS_DIFFERENTIAL_MASK'],
            'FLAGS_DIFFERENTIAL_AVAILABLE': cls.__constants['FLAGS_DIFFERENTIAL_AVAILABLE'],
        }

    @property
    def FLAGS_SIGNAL_QUALITY_MASK(self):
        """Message constant 'FLAGS_SIGNAL_QUALITY_MASK'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_SIGNAL_QUALITY_MASK']

    @property
    def FLAGS_SIGNAL_QUALITY_NO_SIGNAL(self):
        """Message constant 'FLAGS_SIGNAL_QUALITY_NO_SIGNAL'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_SIGNAL_QUALITY_NO_SIGNAL']

    @property
    def FLAGS_SIGNAL_QUALITY_SEARCHING(self):
        """Message constant 'FLAGS_SIGNAL_QUALITY_SEARCHING'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_SIGNAL_QUALITY_SEARCHING']

    @property
    def FLAGS_SIGNAL_QUALITY_ACQUIRED(self):
        """Message constant 'FLAGS_SIGNAL_QUALITY_ACQUIRED'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_SIGNAL_QUALITY_ACQUIRED']

    @property
    def FLAGS_SIGNAL_QUALITY_UNUSABLE(self):
        """Message constant 'FLAGS_SIGNAL_QUALITY_UNUSABLE'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_SIGNAL_QUALITY_UNUSABLE']

    @property
    def FLAGS_SIGNAL_QUALITY_CODE_TIME_OK(self):
        """Message constant 'FLAGS_SIGNAL_QUALITY_CODE_TIME_OK'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_SIGNAL_QUALITY_CODE_TIME_OK']

    @property
    def FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1(self):
        """Message constant 'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1']

    @property
    def FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2(self):
        """Message constant 'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2']

    @property
    def FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3(self):
        """Message constant 'FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3']

    @property
    def FLAGS_USED_FOR_NAVIGATION_MASK(self):
        """Message constant 'FLAGS_USED_FOR_NAVIGATION_MASK'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_USED_FOR_NAVIGATION_MASK']

    @property
    def FLAGS_USED_FOR_NAVIGATION(self):
        """Message constant 'FLAGS_USED_FOR_NAVIGATION'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_USED_FOR_NAVIGATION']

    @property
    def FLAGS_HEALTH_MASK(self):
        """Message constant 'FLAGS_HEALTH_MASK'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_HEALTH_MASK']

    @property
    def FLAGS_HEALTH_UNKNOWN(self):
        """Message constant 'FLAGS_HEALTH_UNKNOWN'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_HEALTH_UNKNOWN']

    @property
    def FLAGS_HEALTH_HEALTHY(self):
        """Message constant 'FLAGS_HEALTH_HEALTHY'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_HEALTH_HEALTHY']

    @property
    def FLAGS_HEALTH_UNHEALTHY(self):
        """Message constant 'FLAGS_HEALTH_UNHEALTHY'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_HEALTH_UNHEALTHY']

    @property
    def FLAGS_DIFFERENTIAL_MASK(self):
        """Message constant 'FLAGS_DIFFERENTIAL_MASK'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_DIFFERENTIAL_MASK']

    @property
    def FLAGS_DIFFERENTIAL_AVAILABLE(self):
        """Message constant 'FLAGS_DIFFERENTIAL_AVAILABLE'."""
        return Metaclass_GnssSatInfo.__constants['FLAGS_DIFFERENTIAL_AVAILABLE']


class GnssSatInfo(metaclass=Metaclass_GnssSatInfo):
    """
    Message class 'GnssSatInfo'.

    Constants:
      FLAGS_SIGNAL_QUALITY_MASK
      FLAGS_SIGNAL_QUALITY_NO_SIGNAL
      FLAGS_SIGNAL_QUALITY_SEARCHING
      FLAGS_SIGNAL_QUALITY_ACQUIRED
      FLAGS_SIGNAL_QUALITY_UNUSABLE
      FLAGS_SIGNAL_QUALITY_CODE_TIME_OK
      FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK1
      FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK2
      FLAGS_SIGNAL_QUALITY_CODE_CARRIER_OK3
      FLAGS_USED_FOR_NAVIGATION_MASK
      FLAGS_USED_FOR_NAVIGATION
      FLAGS_HEALTH_MASK
      FLAGS_HEALTH_UNKNOWN
      FLAGS_HEALTH_HEALTHY
      FLAGS_HEALTH_UNHEALTHY
      FLAGS_DIFFERENTIAL_MASK
      FLAGS_DIFFERENTIAL_AVAILABLE
    """

    __slots__ = [
        '_itow',
        '_num_svs',
        '_res1',
        '_res2',
        '_res3',
        '_gnss_id',
        '_sv_id',
        '_cno',
        '_flags',
    ]

    _fields_and_field_types = {
        'itow': 'uint32',
        'num_svs': 'uint8',
        'res1': 'uint8',
        'res2': 'uint8',
        'res3': 'uint8',
        'gnss_id': 'uint8[60]',
        'sv_id': 'uint8[60]',
        'cno': 'uint8[60]',
        'flags': 'uint8[60]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 60),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 60),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 60),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 60),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.itow = kwargs.get('itow', int())
        self.num_svs = kwargs.get('num_svs', int())
        self.res1 = kwargs.get('res1', int())
        self.res2 = kwargs.get('res2', int())
        self.res3 = kwargs.get('res3', int())
        if 'gnss_id' not in kwargs:
            self.gnss_id = numpy.zeros(60, dtype=numpy.uint8)
        else:
            self.gnss_id = kwargs.get('gnss_id')
        if 'sv_id' not in kwargs:
            self.sv_id = numpy.zeros(60, dtype=numpy.uint8)
        else:
            self.sv_id = kwargs.get('sv_id')
        if 'cno' not in kwargs:
            self.cno = numpy.zeros(60, dtype=numpy.uint8)
        else:
            self.cno = kwargs.get('cno')
        if 'flags' not in kwargs:
            self.flags = numpy.zeros(60, dtype=numpy.uint8)
        else:
            self.flags = kwargs.get('flags')

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
        if self.itow != other.itow:
            return False
        if self.num_svs != other.num_svs:
            return False
        if self.res1 != other.res1:
            return False
        if self.res2 != other.res2:
            return False
        if self.res3 != other.res3:
            return False
        if any(self.gnss_id != other.gnss_id):
            return False
        if any(self.sv_id != other.sv_id):
            return False
        if any(self.cno != other.cno):
            return False
        if any(self.flags != other.flags):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def itow(self):
        """Message field 'itow'."""
        return self._itow

    @itow.setter
    def itow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'itow' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'itow' field must be an unsigned integer in [0, 4294967295]"
        self._itow = value

    @builtins.property
    def num_svs(self):
        """Message field 'num_svs'."""
        return self._num_svs

    @num_svs.setter
    def num_svs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_svs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_svs' field must be an unsigned integer in [0, 255]"
        self._num_svs = value

    @builtins.property
    def res1(self):
        """Message field 'res1'."""
        return self._res1

    @res1.setter
    def res1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'res1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'res1' field must be an unsigned integer in [0, 255]"
        self._res1 = value

    @builtins.property
    def res2(self):
        """Message field 'res2'."""
        return self._res2

    @res2.setter
    def res2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'res2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'res2' field must be an unsigned integer in [0, 255]"
        self._res2 = value

    @builtins.property
    def res3(self):
        """Message field 'res3'."""
        return self._res3

    @res3.setter
    def res3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'res3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'res3' field must be an unsigned integer in [0, 255]"
        self._res3 = value

    @builtins.property
    def gnss_id(self):
        """Message field 'gnss_id'."""
        return self._gnss_id

    @gnss_id.setter
    def gnss_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'gnss_id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 60, \
                "The 'gnss_id' numpy.ndarray() must have a size of 60"
            self._gnss_id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 60 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'gnss_id' field must be a set or sequence with length 60 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._gnss_id = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def sv_id(self):
        """Message field 'sv_id'."""
        return self._sv_id

    @sv_id.setter
    def sv_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'sv_id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 60, \
                "The 'sv_id' numpy.ndarray() must have a size of 60"
            self._sv_id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 60 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'sv_id' field must be a set or sequence with length 60 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._sv_id = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def cno(self):
        """Message field 'cno'."""
        return self._cno

    @cno.setter
    def cno(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'cno' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 60, \
                "The 'cno' numpy.ndarray() must have a size of 60"
            self._cno = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 60 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'cno' field must be a set or sequence with length 60 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._cno = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'flags' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 60, \
                "The 'flags' numpy.ndarray() must have a size of 60"
            self._flags = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 60 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'flags' field must be a set or sequence with length 60 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._flags = numpy.array(value, dtype=numpy.uint8)
