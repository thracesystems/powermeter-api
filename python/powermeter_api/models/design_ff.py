# coding: utf-8

"""
    PowerMeter API

    API  # noqa: E501

    The version of the OpenAPI document: 2021.4.1
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from powermeter_api.configuration import Configuration


class DesignFF(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'id': 'int',
        'var1': 'str',
        'var2': 'str',
        'bits': 'int',
        'clocked_on': 'str',
        'clocked_on_also': 'str',
        'next_state': 'str',
        'clear': 'str',
        'preset': 'str',
        'clear_preset_var1': 'str',
        'clear_preset_var2': 'str',
        'power_down_function': 'str'
    }

    attribute_map = {
        'id': 'id',
        'var1': 'var1',
        'var2': 'var2',
        'bits': 'bits',
        'clocked_on': 'clocked_on',
        'clocked_on_also': 'clocked_on_also',
        'next_state': 'next_state',
        'clear': 'clear',
        'preset': 'preset',
        'clear_preset_var1': 'clear_preset_var1',
        'clear_preset_var2': 'clear_preset_var2',
        'power_down_function': 'power_down_function'
    }

    def __init__(self, id=None, var1=None, var2=None, bits=None, clocked_on=None, clocked_on_also=None, next_state=None, clear=None, preset=None, clear_preset_var1=None, clear_preset_var2=None, power_down_function=None, local_vars_configuration=None):  # noqa: E501
        """DesignFF - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._var1 = None
        self._var2 = None
        self._bits = None
        self._clocked_on = None
        self._clocked_on_also = None
        self._next_state = None
        self._clear = None
        self._preset = None
        self._clear_preset_var1 = None
        self._clear_preset_var2 = None
        self._power_down_function = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.var1 = var1
        self.var2 = var2
        self.bits = bits
        self.clocked_on = clocked_on
        self.clocked_on_also = clocked_on_also
        self.next_state = next_state
        self.clear = clear
        self.preset = preset
        self.clear_preset_var1 = clear_preset_var1
        self.clear_preset_var2 = clear_preset_var2
        self.power_down_function = power_down_function

    @property
    def id(self):
        """Gets the id of this DesignFF.  # noqa: E501


        :return: The id of this DesignFF.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this DesignFF.


        :param id: The id of this DesignFF.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def var1(self):
        """Gets the var1 of this DesignFF.  # noqa: E501


        :return: The var1 of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._var1

    @var1.setter
    def var1(self, var1):
        """Sets the var1 of this DesignFF.


        :param var1: The var1 of this DesignFF.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and var1 is None:  # noqa: E501
            raise ValueError("Invalid value for `var1`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                var1 is not None and len(var1) < 1):
            raise ValueError("Invalid value for `var1`, length must be greater than or equal to `1`")  # noqa: E501

        self._var1 = var1

    @property
    def var2(self):
        """Gets the var2 of this DesignFF.  # noqa: E501


        :return: The var2 of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._var2

    @var2.setter
    def var2(self, var2):
        """Sets the var2 of this DesignFF.


        :param var2: The var2 of this DesignFF.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and var2 is None:  # noqa: E501
            raise ValueError("Invalid value for `var2`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                var2 is not None and len(var2) < 1):
            raise ValueError("Invalid value for `var2`, length must be greater than or equal to `1`")  # noqa: E501

        self._var2 = var2

    @property
    def bits(self):
        """Gets the bits of this DesignFF.  # noqa: E501


        :return: The bits of this DesignFF.  # noqa: E501
        :rtype: int
        """
        return self._bits

    @bits.setter
    def bits(self, bits):
        """Sets the bits of this DesignFF.


        :param bits: The bits of this DesignFF.  # noqa: E501
        :type: int
        """
        if (self.local_vars_configuration.client_side_validation and
                bits is not None and bits > 2147483647):  # noqa: E501
            raise ValueError("Invalid value for `bits`, must be a value less than or equal to `2147483647`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                bits is not None and bits < 0):  # noqa: E501
            raise ValueError("Invalid value for `bits`, must be a value greater than or equal to `0`")  # noqa: E501

        self._bits = bits

    @property
    def clocked_on(self):
        """Gets the clocked_on of this DesignFF.  # noqa: E501


        :return: The clocked_on of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._clocked_on

    @clocked_on.setter
    def clocked_on(self, clocked_on):
        """Sets the clocked_on of this DesignFF.


        :param clocked_on: The clocked_on of this DesignFF.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                clocked_on is not None and len(clocked_on) < 1):
            raise ValueError("Invalid value for `clocked_on`, length must be greater than or equal to `1`")  # noqa: E501

        self._clocked_on = clocked_on

    @property
    def clocked_on_also(self):
        """Gets the clocked_on_also of this DesignFF.  # noqa: E501


        :return: The clocked_on_also of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._clocked_on_also

    @clocked_on_also.setter
    def clocked_on_also(self, clocked_on_also):
        """Sets the clocked_on_also of this DesignFF.


        :param clocked_on_also: The clocked_on_also of this DesignFF.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                clocked_on_also is not None and len(clocked_on_also) < 1):
            raise ValueError("Invalid value for `clocked_on_also`, length must be greater than or equal to `1`")  # noqa: E501

        self._clocked_on_also = clocked_on_also

    @property
    def next_state(self):
        """Gets the next_state of this DesignFF.  # noqa: E501


        :return: The next_state of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._next_state

    @next_state.setter
    def next_state(self, next_state):
        """Sets the next_state of this DesignFF.


        :param next_state: The next_state of this DesignFF.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                next_state is not None and len(next_state) < 1):
            raise ValueError("Invalid value for `next_state`, length must be greater than or equal to `1`")  # noqa: E501

        self._next_state = next_state

    @property
    def clear(self):
        """Gets the clear of this DesignFF.  # noqa: E501


        :return: The clear of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._clear

    @clear.setter
    def clear(self, clear):
        """Sets the clear of this DesignFF.


        :param clear: The clear of this DesignFF.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                clear is not None and len(clear) < 1):
            raise ValueError("Invalid value for `clear`, length must be greater than or equal to `1`")  # noqa: E501

        self._clear = clear

    @property
    def preset(self):
        """Gets the preset of this DesignFF.  # noqa: E501


        :return: The preset of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._preset

    @preset.setter
    def preset(self, preset):
        """Sets the preset of this DesignFF.


        :param preset: The preset of this DesignFF.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                preset is not None and len(preset) < 1):
            raise ValueError("Invalid value for `preset`, length must be greater than or equal to `1`")  # noqa: E501

        self._preset = preset

    @property
    def clear_preset_var1(self):
        """Gets the clear_preset_var1 of this DesignFF.  # noqa: E501


        :return: The clear_preset_var1 of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._clear_preset_var1

    @clear_preset_var1.setter
    def clear_preset_var1(self, clear_preset_var1):
        """Sets the clear_preset_var1 of this DesignFF.


        :param clear_preset_var1: The clear_preset_var1 of this DesignFF.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                clear_preset_var1 is not None and len(clear_preset_var1) < 1):
            raise ValueError("Invalid value for `clear_preset_var1`, length must be greater than or equal to `1`")  # noqa: E501

        self._clear_preset_var1 = clear_preset_var1

    @property
    def clear_preset_var2(self):
        """Gets the clear_preset_var2 of this DesignFF.  # noqa: E501


        :return: The clear_preset_var2 of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._clear_preset_var2

    @clear_preset_var2.setter
    def clear_preset_var2(self, clear_preset_var2):
        """Sets the clear_preset_var2 of this DesignFF.


        :param clear_preset_var2: The clear_preset_var2 of this DesignFF.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                clear_preset_var2 is not None and len(clear_preset_var2) < 1):
            raise ValueError("Invalid value for `clear_preset_var2`, length must be greater than or equal to `1`")  # noqa: E501

        self._clear_preset_var2 = clear_preset_var2

    @property
    def power_down_function(self):
        """Gets the power_down_function of this DesignFF.  # noqa: E501


        :return: The power_down_function of this DesignFF.  # noqa: E501
        :rtype: str
        """
        return self._power_down_function

    @power_down_function.setter
    def power_down_function(self, power_down_function):
        """Sets the power_down_function of this DesignFF.


        :param power_down_function: The power_down_function of this DesignFF.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                power_down_function is not None and len(power_down_function) < 1):
            raise ValueError("Invalid value for `power_down_function`, length must be greater than or equal to `1`")  # noqa: E501

        self._power_down_function = power_down_function

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, DesignFF):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, DesignFF):
            return True

        return self.to_dict() != other.to_dict()
