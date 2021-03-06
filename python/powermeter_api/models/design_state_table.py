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


class DesignStateTable(object):
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
        'in_nodes': 'list[str]',
        'int_nodes': 'list[str]',
        'table': 'str',
        'high': 'list[StateEquaiton]',
        'low': 'list[StateEquaiton]',
        'nc': 'list[StateEquaiton]'
    }

    attribute_map = {
        'id': 'id',
        'in_nodes': 'in_nodes',
        'int_nodes': 'int_nodes',
        'table': 'table',
        'high': 'high',
        'low': 'low',
        'nc': 'nc'
    }

    def __init__(self, id=None, in_nodes=None, int_nodes=None, table=None, high=None, low=None, nc=None, local_vars_configuration=None):  # noqa: E501
        """DesignStateTable - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._in_nodes = None
        self._int_nodes = None
        self._table = None
        self._high = None
        self._low = None
        self._nc = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.in_nodes = in_nodes
        self.int_nodes = int_nodes
        self.table = table
        if high is not None:
            self.high = high
        if low is not None:
            self.low = low
        if nc is not None:
            self.nc = nc

    @property
    def id(self):
        """Gets the id of this DesignStateTable.  # noqa: E501


        :return: The id of this DesignStateTable.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this DesignStateTable.


        :param id: The id of this DesignStateTable.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def in_nodes(self):
        """Gets the in_nodes of this DesignStateTable.  # noqa: E501


        :return: The in_nodes of this DesignStateTable.  # noqa: E501
        :rtype: list[str]
        """
        return self._in_nodes

    @in_nodes.setter
    def in_nodes(self, in_nodes):
        """Sets the in_nodes of this DesignStateTable.


        :param in_nodes: The in_nodes of this DesignStateTable.  # noqa: E501
        :type: list[str]
        """
        if self.local_vars_configuration.client_side_validation and in_nodes is None:  # noqa: E501
            raise ValueError("Invalid value for `in_nodes`, must not be `None`")  # noqa: E501

        self._in_nodes = in_nodes

    @property
    def int_nodes(self):
        """Gets the int_nodes of this DesignStateTable.  # noqa: E501


        :return: The int_nodes of this DesignStateTable.  # noqa: E501
        :rtype: list[str]
        """
        return self._int_nodes

    @int_nodes.setter
    def int_nodes(self, int_nodes):
        """Sets the int_nodes of this DesignStateTable.


        :param int_nodes: The int_nodes of this DesignStateTable.  # noqa: E501
        :type: list[str]
        """
        if self.local_vars_configuration.client_side_validation and int_nodes is None:  # noqa: E501
            raise ValueError("Invalid value for `int_nodes`, must not be `None`")  # noqa: E501

        self._int_nodes = int_nodes

    @property
    def table(self):
        """Gets the table of this DesignStateTable.  # noqa: E501


        :return: The table of this DesignStateTable.  # noqa: E501
        :rtype: str
        """
        return self._table

    @table.setter
    def table(self, table):
        """Sets the table of this DesignStateTable.


        :param table: The table of this DesignStateTable.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and table is None:  # noqa: E501
            raise ValueError("Invalid value for `table`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                table is not None and len(table) < 1):
            raise ValueError("Invalid value for `table`, length must be greater than or equal to `1`")  # noqa: E501

        self._table = table

    @property
    def high(self):
        """Gets the high of this DesignStateTable.  # noqa: E501


        :return: The high of this DesignStateTable.  # noqa: E501
        :rtype: list[StateEquaiton]
        """
        return self._high

    @high.setter
    def high(self, high):
        """Sets the high of this DesignStateTable.


        :param high: The high of this DesignStateTable.  # noqa: E501
        :type: list[StateEquaiton]
        """

        self._high = high

    @property
    def low(self):
        """Gets the low of this DesignStateTable.  # noqa: E501


        :return: The low of this DesignStateTable.  # noqa: E501
        :rtype: list[StateEquaiton]
        """
        return self._low

    @low.setter
    def low(self, low):
        """Sets the low of this DesignStateTable.


        :param low: The low of this DesignStateTable.  # noqa: E501
        :type: list[StateEquaiton]
        """

        self._low = low

    @property
    def nc(self):
        """Gets the nc of this DesignStateTable.  # noqa: E501


        :return: The nc of this DesignStateTable.  # noqa: E501
        :rtype: list[StateEquaiton]
        """
        return self._nc

    @nc.setter
    def nc(self, nc):
        """Sets the nc of this DesignStateTable.


        :param nc: The nc of this DesignStateTable.  # noqa: E501
        :type: list[StateEquaiton]
        """

        self._nc = nc

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
        if not isinstance(other, DesignStateTable):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, DesignStateTable):
            return True

        return self.to_dict() != other.to_dict()
