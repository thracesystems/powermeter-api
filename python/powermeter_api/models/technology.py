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


class Technology(object):
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
        'node': 'int',
        'editable': 'bool',
        'current_version': 'int',
        'version': 'TechnologyVersion',
        'wafer_diameter': 'int',
        'scribe_line': 'float',
        'edge_loss': 'float',
        'project_count': 'int',
        'has_shrink': 'bool',
        'shrink_factor': 'float',
        'thickness': 'float',
        'si_conductivity': 'float',
        'si_heat_capacity': 'float'
    }

    attribute_map = {
        'id': 'id',
        'name': 'name',
        'node': 'node',
        'editable': 'editable',
        'current_version': 'current_version',
        'version': 'version',
        'wafer_diameter': 'wafer_diameter',
        'scribe_line': 'scribe_line',
        'edge_loss': 'edge_loss',
        'project_count': 'project_count',
        'has_shrink': 'has_shrink',
        'shrink_factor': 'shrink_factor',
        'thickness': 'thickness',
        'si_conductivity': 'si_conductivity',
        'si_heat_capacity': 'si_heat_capacity'
    }

    def __init__(self, id=None, name=None, node=None, editable=None, current_version=None, version=None, wafer_diameter=None, scribe_line=None, edge_loss=None, project_count=None, has_shrink=None, shrink_factor=None, thickness=None, si_conductivity=None, si_heat_capacity=None, local_vars_configuration=None):  # noqa: E501
        """Technology - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._name = None
        self._node = None
        self._editable = None
        self._current_version = None
        self._version = None
        self._wafer_diameter = None
        self._scribe_line = None
        self._edge_loss = None
        self._project_count = None
        self._has_shrink = None
        self._shrink_factor = None
        self._thickness = None
        self._si_conductivity = None
        self._si_heat_capacity = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if name is not None:
            self.name = name
        if node is not None:
            self.node = node
        if editable is not None:
            self.editable = editable
        if current_version is not None:
            self.current_version = current_version
        if version is not None:
            self.version = version
        if wafer_diameter is not None:
            self.wafer_diameter = wafer_diameter
        self.scribe_line = scribe_line
        self.edge_loss = edge_loss
        if project_count is not None:
            self.project_count = project_count
        if has_shrink is not None:
            self.has_shrink = has_shrink
        if shrink_factor is not None:
            self.shrink_factor = shrink_factor
        if thickness is not None:
            self.thickness = thickness
        if si_conductivity is not None:
            self.si_conductivity = si_conductivity
        if si_heat_capacity is not None:
            self.si_heat_capacity = si_heat_capacity

    @property
    def id(self):
        """Gets the id of this Technology.  # noqa: E501


        :return: The id of this Technology.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this Technology.


        :param id: The id of this Technology.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def name(self):
        """Gets the name of this Technology.  # noqa: E501


        :return: The name of this Technology.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this Technology.


        :param name: The name of this Technology.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                name is not None and len(name) < 1):
            raise ValueError("Invalid value for `name`, length must be greater than or equal to `1`")  # noqa: E501

        self._name = name

    @property
    def node(self):
        """Gets the node of this Technology.  # noqa: E501


        :return: The node of this Technology.  # noqa: E501
        :rtype: int
        """
        return self._node

    @node.setter
    def node(self, node):
        """Sets the node of this Technology.


        :param node: The node of this Technology.  # noqa: E501
        :type: int
        """

        self._node = node

    @property
    def editable(self):
        """Gets the editable of this Technology.  # noqa: E501


        :return: The editable of this Technology.  # noqa: E501
        :rtype: bool
        """
        return self._editable

    @editable.setter
    def editable(self, editable):
        """Sets the editable of this Technology.


        :param editable: The editable of this Technology.  # noqa: E501
        :type: bool
        """

        self._editable = editable

    @property
    def current_version(self):
        """Gets the current_version of this Technology.  # noqa: E501


        :return: The current_version of this Technology.  # noqa: E501
        :rtype: int
        """
        return self._current_version

    @current_version.setter
    def current_version(self, current_version):
        """Sets the current_version of this Technology.


        :param current_version: The current_version of this Technology.  # noqa: E501
        :type: int
        """

        self._current_version = current_version

    @property
    def version(self):
        """Gets the version of this Technology.  # noqa: E501


        :return: The version of this Technology.  # noqa: E501
        :rtype: TechnologyVersion
        """
        return self._version

    @version.setter
    def version(self, version):
        """Sets the version of this Technology.


        :param version: The version of this Technology.  # noqa: E501
        :type: TechnologyVersion
        """

        self._version = version

    @property
    def wafer_diameter(self):
        """Gets the wafer_diameter of this Technology.  # noqa: E501


        :return: The wafer_diameter of this Technology.  # noqa: E501
        :rtype: int
        """
        return self._wafer_diameter

    @wafer_diameter.setter
    def wafer_diameter(self, wafer_diameter):
        """Sets the wafer_diameter of this Technology.


        :param wafer_diameter: The wafer_diameter of this Technology.  # noqa: E501
        :type: int
        """
        if (self.local_vars_configuration.client_side_validation and
                wafer_diameter is not None and wafer_diameter > 2147483647):  # noqa: E501
            raise ValueError("Invalid value for `wafer_diameter`, must be a value less than or equal to `2147483647`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                wafer_diameter is not None and wafer_diameter < 0):  # noqa: E501
            raise ValueError("Invalid value for `wafer_diameter`, must be a value greater than or equal to `0`")  # noqa: E501

        self._wafer_diameter = wafer_diameter

    @property
    def scribe_line(self):
        """Gets the scribe_line of this Technology.  # noqa: E501


        :return: The scribe_line of this Technology.  # noqa: E501
        :rtype: float
        """
        return self._scribe_line

    @scribe_line.setter
    def scribe_line(self, scribe_line):
        """Sets the scribe_line of this Technology.


        :param scribe_line: The scribe_line of this Technology.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and scribe_line is None:  # noqa: E501
            raise ValueError("Invalid value for `scribe_line`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                scribe_line is not None and scribe_line < 0):  # noqa: E501
            raise ValueError("Invalid value for `scribe_line`, must be a value greater than or equal to `0`")  # noqa: E501

        self._scribe_line = scribe_line

    @property
    def edge_loss(self):
        """Gets the edge_loss of this Technology.  # noqa: E501


        :return: The edge_loss of this Technology.  # noqa: E501
        :rtype: float
        """
        return self._edge_loss

    @edge_loss.setter
    def edge_loss(self, edge_loss):
        """Sets the edge_loss of this Technology.


        :param edge_loss: The edge_loss of this Technology.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and edge_loss is None:  # noqa: E501
            raise ValueError("Invalid value for `edge_loss`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                edge_loss is not None and edge_loss < 0):  # noqa: E501
            raise ValueError("Invalid value for `edge_loss`, must be a value greater than or equal to `0`")  # noqa: E501

        self._edge_loss = edge_loss

    @property
    def project_count(self):
        """Gets the project_count of this Technology.  # noqa: E501


        :return: The project_count of this Technology.  # noqa: E501
        :rtype: int
        """
        return self._project_count

    @project_count.setter
    def project_count(self, project_count):
        """Sets the project_count of this Technology.


        :param project_count: The project_count of this Technology.  # noqa: E501
        :type: int
        """

        self._project_count = project_count

    @property
    def has_shrink(self):
        """Gets the has_shrink of this Technology.  # noqa: E501


        :return: The has_shrink of this Technology.  # noqa: E501
        :rtype: bool
        """
        return self._has_shrink

    @has_shrink.setter
    def has_shrink(self, has_shrink):
        """Sets the has_shrink of this Technology.


        :param has_shrink: The has_shrink of this Technology.  # noqa: E501
        :type: bool
        """

        self._has_shrink = has_shrink

    @property
    def shrink_factor(self):
        """Gets the shrink_factor of this Technology.  # noqa: E501


        :return: The shrink_factor of this Technology.  # noqa: E501
        :rtype: float
        """
        return self._shrink_factor

    @shrink_factor.setter
    def shrink_factor(self, shrink_factor):
        """Sets the shrink_factor of this Technology.


        :param shrink_factor: The shrink_factor of this Technology.  # noqa: E501
        :type: float
        """

        self._shrink_factor = shrink_factor

    @property
    def thickness(self):
        """Gets the thickness of this Technology.  # noqa: E501


        :return: The thickness of this Technology.  # noqa: E501
        :rtype: float
        """
        return self._thickness

    @thickness.setter
    def thickness(self, thickness):
        """Sets the thickness of this Technology.


        :param thickness: The thickness of this Technology.  # noqa: E501
        :type: float
        """

        self._thickness = thickness

    @property
    def si_conductivity(self):
        """Gets the si_conductivity of this Technology.  # noqa: E501


        :return: The si_conductivity of this Technology.  # noqa: E501
        :rtype: float
        """
        return self._si_conductivity

    @si_conductivity.setter
    def si_conductivity(self, si_conductivity):
        """Sets the si_conductivity of this Technology.


        :param si_conductivity: The si_conductivity of this Technology.  # noqa: E501
        :type: float
        """

        self._si_conductivity = si_conductivity

    @property
    def si_heat_capacity(self):
        """Gets the si_heat_capacity of this Technology.  # noqa: E501


        :return: The si_heat_capacity of this Technology.  # noqa: E501
        :rtype: float
        """
        return self._si_heat_capacity

    @si_heat_capacity.setter
    def si_heat_capacity(self, si_heat_capacity):
        """Sets the si_heat_capacity of this Technology.


        :param si_heat_capacity: The si_heat_capacity of this Technology.  # noqa: E501
        :type: float
        """

        self._si_heat_capacity = si_heat_capacity

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
        if not isinstance(other, Technology):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, Technology):
            return True

        return self.to_dict() != other.to_dict()
