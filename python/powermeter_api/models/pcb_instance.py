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


class PCBInstance(object):
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
        'hier_name': 'str',
        'master': 'int',
        'master_master': 'int',
        'master_name': 'str',
        'supplies': 'list[PCBSupplyInst]',
        'vr': 'list[VRInstance]',
        'package': 'list[PackageInstance]',
        'design': 'list[DesignInstance]'
    }

    attribute_map = {
        'id': 'id',
        'name': 'name',
        'hier_name': 'hier_name',
        'master': 'master',
        'master_master': 'master_master',
        'master_name': 'master_name',
        'supplies': 'supplies',
        'vr': 'vr',
        'package': 'package',
        'design': 'design'
    }

    def __init__(self, id=None, name=None, hier_name=None, master=None, master_master=None, master_name=None, supplies=None, vr=None, package=None, design=None, local_vars_configuration=None):  # noqa: E501
        """PCBInstance - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._name = None
        self._hier_name = None
        self._master = None
        self._master_master = None
        self._master_name = None
        self._supplies = None
        self._vr = None
        self._package = None
        self._design = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.name = name
        if hier_name is not None:
            self.hier_name = hier_name
        self.master = master
        if master_master is not None:
            self.master_master = master_master
        if master_name is not None:
            self.master_name = master_name
        self.supplies = supplies
        if vr is not None:
            self.vr = vr
        if package is not None:
            self.package = package
        if design is not None:
            self.design = design

    @property
    def id(self):
        """Gets the id of this PCBInstance.  # noqa: E501


        :return: The id of this PCBInstance.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this PCBInstance.


        :param id: The id of this PCBInstance.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def name(self):
        """Gets the name of this PCBInstance.  # noqa: E501


        :return: The name of this PCBInstance.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this PCBInstance.


        :param name: The name of this PCBInstance.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and name is None:  # noqa: E501
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                name is not None and len(name) < 1):
            raise ValueError("Invalid value for `name`, length must be greater than or equal to `1`")  # noqa: E501

        self._name = name

    @property
    def hier_name(self):
        """Gets the hier_name of this PCBInstance.  # noqa: E501


        :return: The hier_name of this PCBInstance.  # noqa: E501
        :rtype: str
        """
        return self._hier_name

    @hier_name.setter
    def hier_name(self, hier_name):
        """Sets the hier_name of this PCBInstance.


        :param hier_name: The hier_name of this PCBInstance.  # noqa: E501
        :type: str
        """

        self._hier_name = hier_name

    @property
    def master(self):
        """Gets the master of this PCBInstance.  # noqa: E501


        :return: The master of this PCBInstance.  # noqa: E501
        :rtype: int
        """
        return self._master

    @master.setter
    def master(self, master):
        """Sets the master of this PCBInstance.


        :param master: The master of this PCBInstance.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and master is None:  # noqa: E501
            raise ValueError("Invalid value for `master`, must not be `None`")  # noqa: E501

        self._master = master

    @property
    def master_master(self):
        """Gets the master_master of this PCBInstance.  # noqa: E501


        :return: The master_master of this PCBInstance.  # noqa: E501
        :rtype: int
        """
        return self._master_master

    @master_master.setter
    def master_master(self, master_master):
        """Sets the master_master of this PCBInstance.


        :param master_master: The master_master of this PCBInstance.  # noqa: E501
        :type: int
        """

        self._master_master = master_master

    @property
    def master_name(self):
        """Gets the master_name of this PCBInstance.  # noqa: E501


        :return: The master_name of this PCBInstance.  # noqa: E501
        :rtype: str
        """
        return self._master_name

    @master_name.setter
    def master_name(self, master_name):
        """Sets the master_name of this PCBInstance.


        :param master_name: The master_name of this PCBInstance.  # noqa: E501
        :type: str
        """

        self._master_name = master_name

    @property
    def supplies(self):
        """Gets the supplies of this PCBInstance.  # noqa: E501


        :return: The supplies of this PCBInstance.  # noqa: E501
        :rtype: list[PCBSupplyInst]
        """
        return self._supplies

    @supplies.setter
    def supplies(self, supplies):
        """Sets the supplies of this PCBInstance.


        :param supplies: The supplies of this PCBInstance.  # noqa: E501
        :type: list[PCBSupplyInst]
        """
        if self.local_vars_configuration.client_side_validation and supplies is None:  # noqa: E501
            raise ValueError("Invalid value for `supplies`, must not be `None`")  # noqa: E501

        self._supplies = supplies

    @property
    def vr(self):
        """Gets the vr of this PCBInstance.  # noqa: E501


        :return: The vr of this PCBInstance.  # noqa: E501
        :rtype: list[VRInstance]
        """
        return self._vr

    @vr.setter
    def vr(self, vr):
        """Sets the vr of this PCBInstance.


        :param vr: The vr of this PCBInstance.  # noqa: E501
        :type: list[VRInstance]
        """

        self._vr = vr

    @property
    def package(self):
        """Gets the package of this PCBInstance.  # noqa: E501


        :return: The package of this PCBInstance.  # noqa: E501
        :rtype: list[PackageInstance]
        """
        return self._package

    @package.setter
    def package(self, package):
        """Sets the package of this PCBInstance.


        :param package: The package of this PCBInstance.  # noqa: E501
        :type: list[PackageInstance]
        """

        self._package = package

    @property
    def design(self):
        """Gets the design of this PCBInstance.  # noqa: E501


        :return: The design of this PCBInstance.  # noqa: E501
        :rtype: list[DesignInstance]
        """
        return self._design

    @design.setter
    def design(self, design):
        """Sets the design of this PCBInstance.


        :param design: The design of this PCBInstance.  # noqa: E501
        :type: list[DesignInstance]
        """

        self._design = design

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
        if not isinstance(other, PCBInstance):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, PCBInstance):
            return True

        return self.to_dict() != other.to_dict()
