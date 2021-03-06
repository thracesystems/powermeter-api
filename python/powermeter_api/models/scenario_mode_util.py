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


class ScenarioModeUtil(object):
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
        'mastermode': 'int',
        'mastermode_name': 'str'
    }

    attribute_map = {
        'id': 'id',
        'mastermode': 'mastermode',
        'mastermode_name': 'mastermode_name'
    }

    def __init__(self, id=None, mastermode=None, mastermode_name=None, local_vars_configuration=None):  # noqa: E501
        """ScenarioModeUtil - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._mastermode = None
        self._mastermode_name = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.mastermode = mastermode
        if mastermode_name is not None:
            self.mastermode_name = mastermode_name

    @property
    def id(self):
        """Gets the id of this ScenarioModeUtil.  # noqa: E501


        :return: The id of this ScenarioModeUtil.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this ScenarioModeUtil.


        :param id: The id of this ScenarioModeUtil.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def mastermode(self):
        """Gets the mastermode of this ScenarioModeUtil.  # noqa: E501


        :return: The mastermode of this ScenarioModeUtil.  # noqa: E501
        :rtype: int
        """
        return self._mastermode

    @mastermode.setter
    def mastermode(self, mastermode):
        """Sets the mastermode of this ScenarioModeUtil.


        :param mastermode: The mastermode of this ScenarioModeUtil.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and mastermode is None:  # noqa: E501
            raise ValueError("Invalid value for `mastermode`, must not be `None`")  # noqa: E501

        self._mastermode = mastermode

    @property
    def mastermode_name(self):
        """Gets the mastermode_name of this ScenarioModeUtil.  # noqa: E501


        :return: The mastermode_name of this ScenarioModeUtil.  # noqa: E501
        :rtype: str
        """
        return self._mastermode_name

    @mastermode_name.setter
    def mastermode_name(self, mastermode_name):
        """Sets the mastermode_name of this ScenarioModeUtil.


        :param mastermode_name: The mastermode_name of this ScenarioModeUtil.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                mastermode_name is not None and len(mastermode_name) < 1):
            raise ValueError("Invalid value for `mastermode_name`, length must be greater than or equal to `1`")  # noqa: E501

        self._mastermode_name = mastermode_name

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
        if not isinstance(other, ScenarioModeUtil):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ScenarioModeUtil):
            return True

        return self.to_dict() != other.to_dict()
