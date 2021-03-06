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


class ProjectAccess(object):
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
        'project': 'int',
        'project_name': 'str',
        'timestamp': 'datetime'
    }

    attribute_map = {
        'project': 'project',
        'project_name': 'project_name',
        'timestamp': 'timestamp'
    }

    def __init__(self, project=None, project_name=None, timestamp=None, local_vars_configuration=None):  # noqa: E501
        """ProjectAccess - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._project = None
        self._project_name = None
        self._timestamp = None
        self.discriminator = None

        self.project = project
        if project_name is not None:
            self.project_name = project_name
        self.timestamp = timestamp

    @property
    def project(self):
        """Gets the project of this ProjectAccess.  # noqa: E501


        :return: The project of this ProjectAccess.  # noqa: E501
        :rtype: int
        """
        return self._project

    @project.setter
    def project(self, project):
        """Sets the project of this ProjectAccess.


        :param project: The project of this ProjectAccess.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and project is None:  # noqa: E501
            raise ValueError("Invalid value for `project`, must not be `None`")  # noqa: E501

        self._project = project

    @property
    def project_name(self):
        """Gets the project_name of this ProjectAccess.  # noqa: E501


        :return: The project_name of this ProjectAccess.  # noqa: E501
        :rtype: str
        """
        return self._project_name

    @project_name.setter
    def project_name(self, project_name):
        """Sets the project_name of this ProjectAccess.


        :param project_name: The project_name of this ProjectAccess.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                project_name is not None and len(project_name) < 1):
            raise ValueError("Invalid value for `project_name`, length must be greater than or equal to `1`")  # noqa: E501

        self._project_name = project_name

    @property
    def timestamp(self):
        """Gets the timestamp of this ProjectAccess.  # noqa: E501


        :return: The timestamp of this ProjectAccess.  # noqa: E501
        :rtype: datetime
        """
        return self._timestamp

    @timestamp.setter
    def timestamp(self, timestamp):
        """Sets the timestamp of this ProjectAccess.


        :param timestamp: The timestamp of this ProjectAccess.  # noqa: E501
        :type: datetime
        """
        if self.local_vars_configuration.client_side_validation and timestamp is None:  # noqa: E501
            raise ValueError("Invalid value for `timestamp`, must not be `None`")  # noqa: E501

        self._timestamp = timestamp

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
        if not isinstance(other, ProjectAccess):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ProjectAccess):
            return True

        return self.to_dict() != other.to_dict()
