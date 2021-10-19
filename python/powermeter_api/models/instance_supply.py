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


class InstanceSupply(object):
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
        'design_supply': 'int',
        'design_supply_name': 'str',
        'master_supply': 'int',
        'master_supply_name': 'str'
    }

    attribute_map = {
        'id': 'id',
        'design_supply': 'design_supply',
        'design_supply_name': 'design_supply_name',
        'master_supply': 'master_supply',
        'master_supply_name': 'master_supply_name'
    }

    def __init__(self, id=None, design_supply=None, design_supply_name=None, master_supply=None, master_supply_name=None, local_vars_configuration=None):  # noqa: E501
        """InstanceSupply - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._design_supply = None
        self._design_supply_name = None
        self._master_supply = None
        self._master_supply_name = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.design_supply = design_supply
        if design_supply_name is not None:
            self.design_supply_name = design_supply_name
        self.master_supply = master_supply
        if master_supply_name is not None:
            self.master_supply_name = master_supply_name

    @property
    def id(self):
        """Gets the id of this InstanceSupply.  # noqa: E501


        :return: The id of this InstanceSupply.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this InstanceSupply.


        :param id: The id of this InstanceSupply.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def design_supply(self):
        """Gets the design_supply of this InstanceSupply.  # noqa: E501


        :return: The design_supply of this InstanceSupply.  # noqa: E501
        :rtype: int
        """
        return self._design_supply

    @design_supply.setter
    def design_supply(self, design_supply):
        """Sets the design_supply of this InstanceSupply.


        :param design_supply: The design_supply of this InstanceSupply.  # noqa: E501
        :type: int
        """

        self._design_supply = design_supply

    @property
    def design_supply_name(self):
        """Gets the design_supply_name of this InstanceSupply.  # noqa: E501


        :return: The design_supply_name of this InstanceSupply.  # noqa: E501
        :rtype: str
        """
        return self._design_supply_name

    @design_supply_name.setter
    def design_supply_name(self, design_supply_name):
        """Sets the design_supply_name of this InstanceSupply.


        :param design_supply_name: The design_supply_name of this InstanceSupply.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                design_supply_name is not None and len(design_supply_name) < 1):
            raise ValueError("Invalid value for `design_supply_name`, length must be greater than or equal to `1`")  # noqa: E501

        self._design_supply_name = design_supply_name

    @property
    def master_supply(self):
        """Gets the master_supply of this InstanceSupply.  # noqa: E501


        :return: The master_supply of this InstanceSupply.  # noqa: E501
        :rtype: int
        """
        return self._master_supply

    @master_supply.setter
    def master_supply(self, master_supply):
        """Sets the master_supply of this InstanceSupply.


        :param master_supply: The master_supply of this InstanceSupply.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and master_supply is None:  # noqa: E501
            raise ValueError("Invalid value for `master_supply`, must not be `None`")  # noqa: E501

        self._master_supply = master_supply

    @property
    def master_supply_name(self):
        """Gets the master_supply_name of this InstanceSupply.  # noqa: E501


        :return: The master_supply_name of this InstanceSupply.  # noqa: E501
        :rtype: str
        """
        return self._master_supply_name

    @master_supply_name.setter
    def master_supply_name(self, master_supply_name):
        """Sets the master_supply_name of this InstanceSupply.


        :param master_supply_name: The master_supply_name of this InstanceSupply.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                master_supply_name is not None and len(master_supply_name) < 1):
            raise ValueError("Invalid value for `master_supply_name`, length must be greater than or equal to `1`")  # noqa: E501

        self._master_supply_name = master_supply_name

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
        if not isinstance(other, InstanceSupply):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, InstanceSupply):
            return True

        return self.to_dict() != other.to_dict()