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


class PinStateArc(object):
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
        'pin': 'str',
        'state': 'str'
    }

    attribute_map = {
        'pin': 'pin',
        'state': 'state'
    }

    def __init__(self, pin=None, state=None, local_vars_configuration=None):  # noqa: E501
        """PinStateArc - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._pin = None
        self._state = None
        self.discriminator = None

        self.pin = pin
        self.state = state

    @property
    def pin(self):
        """Gets the pin of this PinStateArc.  # noqa: E501


        :return: The pin of this PinStateArc.  # noqa: E501
        :rtype: str
        """
        return self._pin

    @pin.setter
    def pin(self, pin):
        """Sets the pin of this PinStateArc.


        :param pin: The pin of this PinStateArc.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and pin is None:  # noqa: E501
            raise ValueError("Invalid value for `pin`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                pin is not None and len(pin) < 1):
            raise ValueError("Invalid value for `pin`, length must be greater than or equal to `1`")  # noqa: E501

        self._pin = pin

    @property
    def state(self):
        """Gets the state of this PinStateArc.  # noqa: E501


        :return: The state of this PinStateArc.  # noqa: E501
        :rtype: str
        """
        return self._state

    @state.setter
    def state(self, state):
        """Sets the state of this PinStateArc.


        :param state: The state of this PinStateArc.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and state is None:  # noqa: E501
            raise ValueError("Invalid value for `state`, must not be `None`")  # noqa: E501
        allowed_values = ["0", "1", "R", "F", "X"]  # noqa: E501
        if self.local_vars_configuration.client_side_validation and state not in allowed_values:  # noqa: E501
            raise ValueError(
                "Invalid value for `state` ({0}), must be one of {1}"  # noqa: E501
                .format(state, allowed_values)
            )

        self._state = state

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
        if not isinstance(other, PinStateArc):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, PinStateArc):
            return True

        return self.to_dict() != other.to_dict()
