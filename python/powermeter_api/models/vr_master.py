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


class VRMaster(object):
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
        'descr': 'str',
        'latest_commit': 'int',
        'current_version': 'int',
        'latest_commit_version': 'int',
        'latest_commit_timestamp': 'str'
    }

    attribute_map = {
        'id': 'id',
        'name': 'name',
        'descr': 'descr',
        'latest_commit': 'latest_commit',
        'current_version': 'current_version',
        'latest_commit_version': 'latest_commit_version',
        'latest_commit_timestamp': 'latest_commit_timestamp'
    }

    def __init__(self, id=None, name=None, descr=None, latest_commit=None, current_version=None, latest_commit_version=None, latest_commit_timestamp=None, local_vars_configuration=None):  # noqa: E501
        """VRMaster - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._name = None
        self._descr = None
        self._latest_commit = None
        self._current_version = None
        self._latest_commit_version = None
        self._latest_commit_timestamp = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.name = name
        if descr is not None:
            self.descr = descr
        if latest_commit is not None:
            self.latest_commit = latest_commit
        if current_version is not None:
            self.current_version = current_version
        if latest_commit_version is not None:
            self.latest_commit_version = latest_commit_version
        if latest_commit_timestamp is not None:
            self.latest_commit_timestamp = latest_commit_timestamp

    @property
    def id(self):
        """Gets the id of this VRMaster.  # noqa: E501


        :return: The id of this VRMaster.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this VRMaster.


        :param id: The id of this VRMaster.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def name(self):
        """Gets the name of this VRMaster.  # noqa: E501


        :return: The name of this VRMaster.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this VRMaster.


        :param name: The name of this VRMaster.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and name is None:  # noqa: E501
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                name is not None and len(name) < 1):
            raise ValueError("Invalid value for `name`, length must be greater than or equal to `1`")  # noqa: E501

        self._name = name

    @property
    def descr(self):
        """Gets the descr of this VRMaster.  # noqa: E501


        :return: The descr of this VRMaster.  # noqa: E501
        :rtype: str
        """
        return self._descr

    @descr.setter
    def descr(self, descr):
        """Sets the descr of this VRMaster.


        :param descr: The descr of this VRMaster.  # noqa: E501
        :type: str
        """

        self._descr = descr

    @property
    def latest_commit(self):
        """Gets the latest_commit of this VRMaster.  # noqa: E501


        :return: The latest_commit of this VRMaster.  # noqa: E501
        :rtype: int
        """
        return self._latest_commit

    @latest_commit.setter
    def latest_commit(self, latest_commit):
        """Sets the latest_commit of this VRMaster.


        :param latest_commit: The latest_commit of this VRMaster.  # noqa: E501
        :type: int
        """

        self._latest_commit = latest_commit

    @property
    def current_version(self):
        """Gets the current_version of this VRMaster.  # noqa: E501


        :return: The current_version of this VRMaster.  # noqa: E501
        :rtype: int
        """
        return self._current_version

    @current_version.setter
    def current_version(self, current_version):
        """Sets the current_version of this VRMaster.


        :param current_version: The current_version of this VRMaster.  # noqa: E501
        :type: int
        """

        self._current_version = current_version

    @property
    def latest_commit_version(self):
        """Gets the latest_commit_version of this VRMaster.  # noqa: E501


        :return: The latest_commit_version of this VRMaster.  # noqa: E501
        :rtype: int
        """
        return self._latest_commit_version

    @latest_commit_version.setter
    def latest_commit_version(self, latest_commit_version):
        """Sets the latest_commit_version of this VRMaster.


        :param latest_commit_version: The latest_commit_version of this VRMaster.  # noqa: E501
        :type: int
        """

        self._latest_commit_version = latest_commit_version

    @property
    def latest_commit_timestamp(self):
        """Gets the latest_commit_timestamp of this VRMaster.  # noqa: E501


        :return: The latest_commit_timestamp of this VRMaster.  # noqa: E501
        :rtype: str
        """
        return self._latest_commit_timestamp

    @latest_commit_timestamp.setter
    def latest_commit_timestamp(self, latest_commit_timestamp):
        """Sets the latest_commit_timestamp of this VRMaster.


        :param latest_commit_timestamp: The latest_commit_timestamp of this VRMaster.  # noqa: E501
        :type: str
        """

        self._latest_commit_timestamp = latest_commit_timestamp

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
        if not isinstance(other, VRMaster):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, VRMaster):
            return True

        return self.to_dict() != other.to_dict()
