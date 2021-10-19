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


class ScenarioMaster(object):
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
        'title': 'str',
        'descr': 'str',
        'latest_commit': 'int',
        'current_version': 'int',
        'average_power': 'float',
        'total_energy': 'float',
        'confidence': 'float'
    }

    attribute_map = {
        'id': 'id',
        'title': 'title',
        'descr': 'descr',
        'latest_commit': 'latest_commit',
        'current_version': 'current_version',
        'average_power': 'average_power',
        'total_energy': 'total_energy',
        'confidence': 'confidence'
    }

    def __init__(self, id=None, title=None, descr=None, latest_commit=None, current_version=None, average_power=None, total_energy=None, confidence=None, local_vars_configuration=None):  # noqa: E501
        """ScenarioMaster - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._title = None
        self._descr = None
        self._latest_commit = None
        self._current_version = None
        self._average_power = None
        self._total_energy = None
        self._confidence = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.title = title
        self.descr = descr
        if latest_commit is not None:
            self.latest_commit = latest_commit
        if current_version is not None:
            self.current_version = current_version
        if average_power is not None:
            self.average_power = average_power
        if total_energy is not None:
            self.total_energy = total_energy
        if confidence is not None:
            self.confidence = confidence

    @property
    def id(self):
        """Gets the id of this ScenarioMaster.  # noqa: E501


        :return: The id of this ScenarioMaster.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this ScenarioMaster.


        :param id: The id of this ScenarioMaster.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def title(self):
        """Gets the title of this ScenarioMaster.  # noqa: E501


        :return: The title of this ScenarioMaster.  # noqa: E501
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title):
        """Sets the title of this ScenarioMaster.


        :param title: The title of this ScenarioMaster.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and title is None:  # noqa: E501
            raise ValueError("Invalid value for `title`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                title is not None and len(title) < 1):
            raise ValueError("Invalid value for `title`, length must be greater than or equal to `1`")  # noqa: E501

        self._title = title

    @property
    def descr(self):
        """Gets the descr of this ScenarioMaster.  # noqa: E501


        :return: The descr of this ScenarioMaster.  # noqa: E501
        :rtype: str
        """
        return self._descr

    @descr.setter
    def descr(self, descr):
        """Sets the descr of this ScenarioMaster.


        :param descr: The descr of this ScenarioMaster.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and descr is None:  # noqa: E501
            raise ValueError("Invalid value for `descr`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                descr is not None and len(descr) < 1):
            raise ValueError("Invalid value for `descr`, length must be greater than or equal to `1`")  # noqa: E501

        self._descr = descr

    @property
    def latest_commit(self):
        """Gets the latest_commit of this ScenarioMaster.  # noqa: E501


        :return: The latest_commit of this ScenarioMaster.  # noqa: E501
        :rtype: int
        """
        return self._latest_commit

    @latest_commit.setter
    def latest_commit(self, latest_commit):
        """Sets the latest_commit of this ScenarioMaster.


        :param latest_commit: The latest_commit of this ScenarioMaster.  # noqa: E501
        :type: int
        """

        self._latest_commit = latest_commit

    @property
    def current_version(self):
        """Gets the current_version of this ScenarioMaster.  # noqa: E501


        :return: The current_version of this ScenarioMaster.  # noqa: E501
        :rtype: int
        """
        return self._current_version

    @current_version.setter
    def current_version(self, current_version):
        """Sets the current_version of this ScenarioMaster.


        :param current_version: The current_version of this ScenarioMaster.  # noqa: E501
        :type: int
        """

        self._current_version = current_version

    @property
    def average_power(self):
        """Gets the average_power of this ScenarioMaster.  # noqa: E501


        :return: The average_power of this ScenarioMaster.  # noqa: E501
        :rtype: float
        """
        return self._average_power

    @average_power.setter
    def average_power(self, average_power):
        """Sets the average_power of this ScenarioMaster.


        :param average_power: The average_power of this ScenarioMaster.  # noqa: E501
        :type: float
        """

        self._average_power = average_power

    @property
    def total_energy(self):
        """Gets the total_energy of this ScenarioMaster.  # noqa: E501


        :return: The total_energy of this ScenarioMaster.  # noqa: E501
        :rtype: float
        """
        return self._total_energy

    @total_energy.setter
    def total_energy(self, total_energy):
        """Sets the total_energy of this ScenarioMaster.


        :param total_energy: The total_energy of this ScenarioMaster.  # noqa: E501
        :type: float
        """

        self._total_energy = total_energy

    @property
    def confidence(self):
        """Gets the confidence of this ScenarioMaster.  # noqa: E501


        :return: The confidence of this ScenarioMaster.  # noqa: E501
        :rtype: float
        """
        return self._confidence

    @confidence.setter
    def confidence(self, confidence):
        """Sets the confidence of this ScenarioMaster.


        :param confidence: The confidence of this ScenarioMaster.  # noqa: E501
        :type: float
        """

        self._confidence = confidence

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
        if not isinstance(other, ScenarioMaster):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ScenarioMaster):
            return True

        return self.to_dict() != other.to_dict()