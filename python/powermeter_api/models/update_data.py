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


class UpdateData(object):
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
        'current_time': 'float',
        'update_time': 'float'
    }

    attribute_map = {
        'current_time': 'current_time',
        'update_time': 'update_time'
    }

    def __init__(self, current_time=None, update_time=None, local_vars_configuration=None):  # noqa: E501
        """UpdateData - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._current_time = None
        self._update_time = None
        self.discriminator = None

        if current_time is not None:
            self.current_time = current_time
        if update_time is not None:
            self.update_time = update_time

    @property
    def current_time(self):
        """Gets the current_time of this UpdateData.  # noqa: E501


        :return: The current_time of this UpdateData.  # noqa: E501
        :rtype: float
        """
        return self._current_time

    @current_time.setter
    def current_time(self, current_time):
        """Sets the current_time of this UpdateData.


        :param current_time: The current_time of this UpdateData.  # noqa: E501
        :type: float
        """

        self._current_time = current_time

    @property
    def update_time(self):
        """Gets the update_time of this UpdateData.  # noqa: E501


        :return: The update_time of this UpdateData.  # noqa: E501
        :rtype: float
        """
        return self._update_time

    @update_time.setter
    def update_time(self, update_time):
        """Sets the update_time of this UpdateData.


        :param update_time: The update_time of this UpdateData.  # noqa: E501
        :type: float
        """

        self._update_time = update_time

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
        if not isinstance(other, UpdateData):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, UpdateData):
            return True

        return self.to_dict() != other.to_dict()
