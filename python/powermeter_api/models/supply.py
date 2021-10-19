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


class Supply(object):
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
        'name': 'str',
        'voltage': 'float',
        'type': 'str',
        'is_power': 'bool',
        'is_ground': 'bool',
        'switchable': 'bool',
        'master_supply': 'int',
        'color': 'str',
        'instance_count': 'int'
    }

    attribute_map = {
        'id': 'id',
        'name': 'name',
        'voltage': 'voltage',
        'type': 'type',
        'is_power': 'is_power',
        'is_ground': 'is_ground',
        'switchable': 'switchable',
        'master_supply': 'master_supply',
        'color': 'color',
        'instance_count': 'instance_count'
    }

    def __init__(self, id=None, name=None, voltage=None, type=None, is_power=None, is_ground=None, switchable=None, master_supply=None, color=None, instance_count=None, local_vars_configuration=None):  # noqa: E501
        """Supply - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._name = None
        self._voltage = None
        self._type = None
        self._is_power = None
        self._is_ground = None
        self._switchable = None
        self._master_supply = None
        self._color = None
        self._instance_count = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.name = name
        self.voltage = voltage
        if type is not None:
            self.type = type
        if is_power is not None:
            self.is_power = is_power
        if is_ground is not None:
            self.is_ground = is_ground
        if switchable is not None:
            self.switchable = switchable
        self.master_supply = master_supply
        if color is not None:
            self.color = color
        if instance_count is not None:
            self.instance_count = instance_count

    @property
    def id(self):
        """Gets the id of this Supply.  # noqa: E501


        :return: The id of this Supply.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this Supply.


        :param id: The id of this Supply.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def name(self):
        """Gets the name of this Supply.  # noqa: E501


        :return: The name of this Supply.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this Supply.


        :param name: The name of this Supply.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and name is None:  # noqa: E501
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                name is not None and len(name) < 1):
            raise ValueError("Invalid value for `name`, length must be greater than or equal to `1`")  # noqa: E501

        self._name = name

    @property
    def voltage(self):
        """Gets the voltage of this Supply.  # noqa: E501


        :return: The voltage of this Supply.  # noqa: E501
        :rtype: float
        """
        return self._voltage

    @voltage.setter
    def voltage(self, voltage):
        """Sets the voltage of this Supply.


        :param voltage: The voltage of this Supply.  # noqa: E501
        :type: float
        """
        if (self.local_vars_configuration.client_side_validation and
                voltage is not None and voltage < 0.01):  # noqa: E501
            raise ValueError("Invalid value for `voltage`, must be a value greater than or equal to `0.01`")  # noqa: E501

        self._voltage = voltage

    @property
    def type(self):
        """Gets the type of this Supply.  # noqa: E501


        :return: The type of this Supply.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this Supply.


        :param type: The type of this Supply.  # noqa: E501
        :type: str
        """
        allowed_values = ["primary_power", "primary_ground", "backup_power", "backup_ground", "internal_power", "internal_ground", "pwell", "nwell", "deepnwell", "deeppwell"]  # noqa: E501
        if self.local_vars_configuration.client_side_validation and type not in allowed_values:  # noqa: E501
            raise ValueError(
                "Invalid value for `type` ({0}), must be one of {1}"  # noqa: E501
                .format(type, allowed_values)
            )

        self._type = type

    @property
    def is_power(self):
        """Gets the is_power of this Supply.  # noqa: E501


        :return: The is_power of this Supply.  # noqa: E501
        :rtype: bool
        """
        return self._is_power

    @is_power.setter
    def is_power(self, is_power):
        """Sets the is_power of this Supply.


        :param is_power: The is_power of this Supply.  # noqa: E501
        :type: bool
        """

        self._is_power = is_power

    @property
    def is_ground(self):
        """Gets the is_ground of this Supply.  # noqa: E501


        :return: The is_ground of this Supply.  # noqa: E501
        :rtype: bool
        """
        return self._is_ground

    @is_ground.setter
    def is_ground(self, is_ground):
        """Sets the is_ground of this Supply.


        :param is_ground: The is_ground of this Supply.  # noqa: E501
        :type: bool
        """

        self._is_ground = is_ground

    @property
    def switchable(self):
        """Gets the switchable of this Supply.  # noqa: E501


        :return: The switchable of this Supply.  # noqa: E501
        :rtype: bool
        """
        return self._switchable

    @switchable.setter
    def switchable(self, switchable):
        """Sets the switchable of this Supply.


        :param switchable: The switchable of this Supply.  # noqa: E501
        :type: bool
        """

        self._switchable = switchable

    @property
    def master_supply(self):
        """Gets the master_supply of this Supply.  # noqa: E501


        :return: The master_supply of this Supply.  # noqa: E501
        :rtype: int
        """
        return self._master_supply

    @master_supply.setter
    def master_supply(self, master_supply):
        """Sets the master_supply of this Supply.


        :param master_supply: The master_supply of this Supply.  # noqa: E501
        :type: int
        """

        self._master_supply = master_supply

    @property
    def color(self):
        """Gets the color of this Supply.  # noqa: E501


        :return: The color of this Supply.  # noqa: E501
        :rtype: str
        """
        return self._color

    @color.setter
    def color(self, color):
        """Sets the color of this Supply.


        :param color: The color of this Supply.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                color is not None and len(color) < 1):
            raise ValueError("Invalid value for `color`, length must be greater than or equal to `1`")  # noqa: E501

        self._color = color

    @property
    def instance_count(self):
        """Gets the instance_count of this Supply.  # noqa: E501


        :return: The instance_count of this Supply.  # noqa: E501
        :rtype: int
        """
        return self._instance_count

    @instance_count.setter
    def instance_count(self, instance_count):
        """Sets the instance_count of this Supply.


        :param instance_count: The instance_count of this Supply.  # noqa: E501
        :type: int
        """

        self._instance_count = instance_count

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
        if not isinstance(other, Supply):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, Supply):
            return True

        return self.to_dict() != other.to_dict()