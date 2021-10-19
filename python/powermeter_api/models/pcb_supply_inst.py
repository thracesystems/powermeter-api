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


class PCBSupplyInst(object):
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
        'container': 'int',
        'master': 'int',
        'color': 'str',
        'connection_color': 'str',
        'master_name': 'str',
        'hier_name': 'str'
    }

    attribute_map = {
        'id': 'id',
        'container': 'container',
        'master': 'master',
        'color': 'color',
        'connection_color': 'connection_color',
        'master_name': 'master_name',
        'hier_name': 'hier_name'
    }

    def __init__(self, id=None, container=None, master=None, color=None, connection_color=None, master_name=None, hier_name=None, local_vars_configuration=None):  # noqa: E501
        """PCBSupplyInst - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._container = None
        self._master = None
        self._color = None
        self._connection_color = None
        self._master_name = None
        self._hier_name = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if container is not None:
            self.container = container
        self.master = master
        self.color = color
        if connection_color is not None:
            self.connection_color = connection_color
        if master_name is not None:
            self.master_name = master_name
        if hier_name is not None:
            self.hier_name = hier_name

    @property
    def id(self):
        """Gets the id of this PCBSupplyInst.  # noqa: E501


        :return: The id of this PCBSupplyInst.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this PCBSupplyInst.


        :param id: The id of this PCBSupplyInst.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def container(self):
        """Gets the container of this PCBSupplyInst.  # noqa: E501


        :return: The container of this PCBSupplyInst.  # noqa: E501
        :rtype: int
        """
        return self._container

    @container.setter
    def container(self, container):
        """Sets the container of this PCBSupplyInst.


        :param container: The container of this PCBSupplyInst.  # noqa: E501
        :type: int
        """

        self._container = container

    @property
    def master(self):
        """Gets the master of this PCBSupplyInst.  # noqa: E501


        :return: The master of this PCBSupplyInst.  # noqa: E501
        :rtype: int
        """
        return self._master

    @master.setter
    def master(self, master):
        """Sets the master of this PCBSupplyInst.


        :param master: The master of this PCBSupplyInst.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and master is None:  # noqa: E501
            raise ValueError("Invalid value for `master`, must not be `None`")  # noqa: E501

        self._master = master

    @property
    def color(self):
        """Gets the color of this PCBSupplyInst.  # noqa: E501


        :return: The color of this PCBSupplyInst.  # noqa: E501
        :rtype: str
        """
        return self._color

    @color.setter
    def color(self, color):
        """Sets the color of this PCBSupplyInst.


        :param color: The color of this PCBSupplyInst.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                color is not None and len(color) < 1):
            raise ValueError("Invalid value for `color`, length must be greater than or equal to `1`")  # noqa: E501

        self._color = color

    @property
    def connection_color(self):
        """Gets the connection_color of this PCBSupplyInst.  # noqa: E501


        :return: The connection_color of this PCBSupplyInst.  # noqa: E501
        :rtype: str
        """
        return self._connection_color

    @connection_color.setter
    def connection_color(self, connection_color):
        """Sets the connection_color of this PCBSupplyInst.


        :param connection_color: The connection_color of this PCBSupplyInst.  # noqa: E501
        :type: str
        """

        self._connection_color = connection_color

    @property
    def master_name(self):
        """Gets the master_name of this PCBSupplyInst.  # noqa: E501


        :return: The master_name of this PCBSupplyInst.  # noqa: E501
        :rtype: str
        """
        return self._master_name

    @master_name.setter
    def master_name(self, master_name):
        """Sets the master_name of this PCBSupplyInst.


        :param master_name: The master_name of this PCBSupplyInst.  # noqa: E501
        :type: str
        """

        self._master_name = master_name

    @property
    def hier_name(self):
        """Gets the hier_name of this PCBSupplyInst.  # noqa: E501


        :return: The hier_name of this PCBSupplyInst.  # noqa: E501
        :rtype: str
        """
        return self._hier_name

    @hier_name.setter
    def hier_name(self, hier_name):
        """Sets the hier_name of this PCBSupplyInst.


        :param hier_name: The hier_name of this PCBSupplyInst.  # noqa: E501
        :type: str
        """

        self._hier_name = hier_name

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
        if not isinstance(other, PCBSupplyInst):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, PCBSupplyInst):
            return True

        return self.to_dict() != other.to_dict()
