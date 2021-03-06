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


class ContribPowerDevice(object):
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
        'type': 'str',
        'device': 'int',
        'count': 'int',
        'd_pin': 'str',
        'g_pin': 'str',
        's_pin': 'str',
        'b_pin': 'str',
        'device_name': 'str',
        'device_width': 'int',
        'device_length': 'int',
        'device_nfin': 'int'
    }

    attribute_map = {
        'type': 'type',
        'device': 'device',
        'count': 'count',
        'd_pin': 'd_pin',
        'g_pin': 'g_pin',
        's_pin': 's_pin',
        'b_pin': 'b_pin',
        'device_name': 'device_name',
        'device_width': 'device_width',
        'device_length': 'device_length',
        'device_nfin': 'device_nfin'
    }

    def __init__(self, type=None, device=None, count=None, d_pin=None, g_pin=None, s_pin=None, b_pin=None, device_name=None, device_width=None, device_length=None, device_nfin=None, local_vars_configuration=None):  # noqa: E501
        """ContribPowerDevice - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._type = None
        self._device = None
        self._count = None
        self._d_pin = None
        self._g_pin = None
        self._s_pin = None
        self._b_pin = None
        self._device_name = None
        self._device_width = None
        self._device_length = None
        self._device_nfin = None
        self.discriminator = None

        if type is not None:
            self.type = type
        self.device = device
        self.count = count
        self.d_pin = d_pin
        self.g_pin = g_pin
        self.s_pin = s_pin
        self.b_pin = b_pin
        if device_name is not None:
            self.device_name = device_name
        if device_width is not None:
            self.device_width = device_width
        if device_length is not None:
            self.device_length = device_length
        if device_nfin is not None:
            self.device_nfin = device_nfin

    @property
    def type(self):
        """Gets the type of this ContribPowerDevice.  # noqa: E501


        :return: The type of this ContribPowerDevice.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this ContribPowerDevice.


        :param type: The type of this ContribPowerDevice.  # noqa: E501
        :type: str
        """

        self._type = type

    @property
    def device(self):
        """Gets the device of this ContribPowerDevice.  # noqa: E501


        :return: The device of this ContribPowerDevice.  # noqa: E501
        :rtype: int
        """
        return self._device

    @device.setter
    def device(self, device):
        """Sets the device of this ContribPowerDevice.


        :param device: The device of this ContribPowerDevice.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and device is None:  # noqa: E501
            raise ValueError("Invalid value for `device`, must not be `None`")  # noqa: E501

        self._device = device

    @property
    def count(self):
        """Gets the count of this ContribPowerDevice.  # noqa: E501


        :return: The count of this ContribPowerDevice.  # noqa: E501
        :rtype: int
        """
        return self._count

    @count.setter
    def count(self, count):
        """Sets the count of this ContribPowerDevice.


        :param count: The count of this ContribPowerDevice.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and count is None:  # noqa: E501
            raise ValueError("Invalid value for `count`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                count is not None and count > 2147483647):  # noqa: E501
            raise ValueError("Invalid value for `count`, must be a value less than or equal to `2147483647`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                count is not None and count < 0):  # noqa: E501
            raise ValueError("Invalid value for `count`, must be a value greater than or equal to `0`")  # noqa: E501

        self._count = count

    @property
    def d_pin(self):
        """Gets the d_pin of this ContribPowerDevice.  # noqa: E501


        :return: The d_pin of this ContribPowerDevice.  # noqa: E501
        :rtype: str
        """
        return self._d_pin

    @d_pin.setter
    def d_pin(self, d_pin):
        """Sets the d_pin of this ContribPowerDevice.


        :param d_pin: The d_pin of this ContribPowerDevice.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                d_pin is not None and len(d_pin) < 1):
            raise ValueError("Invalid value for `d_pin`, length must be greater than or equal to `1`")  # noqa: E501

        self._d_pin = d_pin

    @property
    def g_pin(self):
        """Gets the g_pin of this ContribPowerDevice.  # noqa: E501


        :return: The g_pin of this ContribPowerDevice.  # noqa: E501
        :rtype: str
        """
        return self._g_pin

    @g_pin.setter
    def g_pin(self, g_pin):
        """Sets the g_pin of this ContribPowerDevice.


        :param g_pin: The g_pin of this ContribPowerDevice.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                g_pin is not None and len(g_pin) < 1):
            raise ValueError("Invalid value for `g_pin`, length must be greater than or equal to `1`")  # noqa: E501

        self._g_pin = g_pin

    @property
    def s_pin(self):
        """Gets the s_pin of this ContribPowerDevice.  # noqa: E501


        :return: The s_pin of this ContribPowerDevice.  # noqa: E501
        :rtype: str
        """
        return self._s_pin

    @s_pin.setter
    def s_pin(self, s_pin):
        """Sets the s_pin of this ContribPowerDevice.


        :param s_pin: The s_pin of this ContribPowerDevice.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                s_pin is not None and len(s_pin) < 1):
            raise ValueError("Invalid value for `s_pin`, length must be greater than or equal to `1`")  # noqa: E501

        self._s_pin = s_pin

    @property
    def b_pin(self):
        """Gets the b_pin of this ContribPowerDevice.  # noqa: E501


        :return: The b_pin of this ContribPowerDevice.  # noqa: E501
        :rtype: str
        """
        return self._b_pin

    @b_pin.setter
    def b_pin(self, b_pin):
        """Sets the b_pin of this ContribPowerDevice.


        :param b_pin: The b_pin of this ContribPowerDevice.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                b_pin is not None and len(b_pin) < 1):
            raise ValueError("Invalid value for `b_pin`, length must be greater than or equal to `1`")  # noqa: E501

        self._b_pin = b_pin

    @property
    def device_name(self):
        """Gets the device_name of this ContribPowerDevice.  # noqa: E501


        :return: The device_name of this ContribPowerDevice.  # noqa: E501
        :rtype: str
        """
        return self._device_name

    @device_name.setter
    def device_name(self, device_name):
        """Sets the device_name of this ContribPowerDevice.


        :param device_name: The device_name of this ContribPowerDevice.  # noqa: E501
        :type: str
        """

        self._device_name = device_name

    @property
    def device_width(self):
        """Gets the device_width of this ContribPowerDevice.  # noqa: E501


        :return: The device_width of this ContribPowerDevice.  # noqa: E501
        :rtype: int
        """
        return self._device_width

    @device_width.setter
    def device_width(self, device_width):
        """Sets the device_width of this ContribPowerDevice.


        :param device_width: The device_width of this ContribPowerDevice.  # noqa: E501
        :type: int
        """

        self._device_width = device_width

    @property
    def device_length(self):
        """Gets the device_length of this ContribPowerDevice.  # noqa: E501


        :return: The device_length of this ContribPowerDevice.  # noqa: E501
        :rtype: int
        """
        return self._device_length

    @device_length.setter
    def device_length(self, device_length):
        """Sets the device_length of this ContribPowerDevice.


        :param device_length: The device_length of this ContribPowerDevice.  # noqa: E501
        :type: int
        """

        self._device_length = device_length

    @property
    def device_nfin(self):
        """Gets the device_nfin of this ContribPowerDevice.  # noqa: E501


        :return: The device_nfin of this ContribPowerDevice.  # noqa: E501
        :rtype: int
        """
        return self._device_nfin

    @device_nfin.setter
    def device_nfin(self, device_nfin):
        """Sets the device_nfin of this ContribPowerDevice.


        :param device_nfin: The device_nfin of this ContribPowerDevice.  # noqa: E501
        :type: int
        """

        self._device_nfin = device_nfin

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
        if not isinstance(other, ContribPowerDevice):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ContribPowerDevice):
            return True

        return self.to_dict() != other.to_dict()
