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


class ScenarioVersion(object):
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
        'version': 'int',
        'timestamp': 'datetime',
        'descr': 'str',
        'datasheet': 'int'
    }

    attribute_map = {
        'id': 'id',
        'version': 'version',
        'timestamp': 'timestamp',
        'descr': 'descr',
        'datasheet': 'datasheet'
    }

    def __init__(self, id=None, version=None, timestamp=None, descr=None, datasheet=None, local_vars_configuration=None):  # noqa: E501
        """ScenarioVersion - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._version = None
        self._timestamp = None
        self._descr = None
        self._datasheet = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if version is not None:
            self.version = version
        if timestamp is not None:
            self.timestamp = timestamp
        self.descr = descr
        if datasheet is not None:
            self.datasheet = datasheet

    @property
    def id(self):
        """Gets the id of this ScenarioVersion.  # noqa: E501


        :return: The id of this ScenarioVersion.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this ScenarioVersion.


        :param id: The id of this ScenarioVersion.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def version(self):
        """Gets the version of this ScenarioVersion.  # noqa: E501


        :return: The version of this ScenarioVersion.  # noqa: E501
        :rtype: int
        """
        return self._version

    @version.setter
    def version(self, version):
        """Sets the version of this ScenarioVersion.


        :param version: The version of this ScenarioVersion.  # noqa: E501
        :type: int
        """

        self._version = version

    @property
    def timestamp(self):
        """Gets the timestamp of this ScenarioVersion.  # noqa: E501


        :return: The timestamp of this ScenarioVersion.  # noqa: E501
        :rtype: datetime
        """
        return self._timestamp

    @timestamp.setter
    def timestamp(self, timestamp):
        """Sets the timestamp of this ScenarioVersion.


        :param timestamp: The timestamp of this ScenarioVersion.  # noqa: E501
        :type: datetime
        """

        self._timestamp = timestamp

    @property
    def descr(self):
        """Gets the descr of this ScenarioVersion.  # noqa: E501


        :return: The descr of this ScenarioVersion.  # noqa: E501
        :rtype: str
        """
        return self._descr

    @descr.setter
    def descr(self, descr):
        """Sets the descr of this ScenarioVersion.


        :param descr: The descr of this ScenarioVersion.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and descr is None:  # noqa: E501
            raise ValueError("Invalid value for `descr`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                descr is not None and len(descr) < 1):
            raise ValueError("Invalid value for `descr`, length must be greater than or equal to `1`")  # noqa: E501

        self._descr = descr

    @property
    def datasheet(self):
        """Gets the datasheet of this ScenarioVersion.  # noqa: E501


        :return: The datasheet of this ScenarioVersion.  # noqa: E501
        :rtype: int
        """
        return self._datasheet

    @datasheet.setter
    def datasheet(self, datasheet):
        """Sets the datasheet of this ScenarioVersion.


        :param datasheet: The datasheet of this ScenarioVersion.  # noqa: E501
        :type: int
        """

        self._datasheet = datasheet

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
        if not isinstance(other, ScenarioVersion):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ScenarioVersion):
            return True

        return self.to_dict() != other.to_dict()
