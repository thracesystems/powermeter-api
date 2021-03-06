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


class WireLoad(object):
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
        'p': 'str',
        'rc': 'str',
        'v': 'float',
        't': 'int',
        'resistance': 'float',
        'capacitance': 'float',
        'area': 'float',
        'slope': 'float',
        'fanout_length': 'list[FanoutLength]'
    }

    attribute_map = {
        'id': 'id',
        'p': 'p',
        'rc': 'rc',
        'v': 'v',
        't': 't',
        'resistance': 'resistance',
        'capacitance': 'capacitance',
        'area': 'area',
        'slope': 'slope',
        'fanout_length': 'fanout_length'
    }

    def __init__(self, id=None, p=None, rc=None, v=None, t=None, resistance=None, capacitance=None, area=None, slope=None, fanout_length=None, local_vars_configuration=None):  # noqa: E501
        """WireLoad - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._p = None
        self._rc = None
        self._v = None
        self._t = None
        self._resistance = None
        self._capacitance = None
        self._area = None
        self._slope = None
        self._fanout_length = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.p = p
        self.rc = rc
        self.v = v
        self.t = t
        self.resistance = resistance
        self.capacitance = capacitance
        self.area = area
        self.slope = slope
        self.fanout_length = fanout_length

    @property
    def id(self):
        """Gets the id of this WireLoad.  # noqa: E501


        :return: The id of this WireLoad.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this WireLoad.


        :param id: The id of this WireLoad.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def p(self):
        """Gets the p of this WireLoad.  # noqa: E501


        :return: The p of this WireLoad.  # noqa: E501
        :rtype: str
        """
        return self._p

    @p.setter
    def p(self, p):
        """Sets the p of this WireLoad.


        :param p: The p of this WireLoad.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and p is None:  # noqa: E501
            raise ValueError("Invalid value for `p`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                p is not None and len(p) < 1):
            raise ValueError("Invalid value for `p`, length must be greater than or equal to `1`")  # noqa: E501

        self._p = p

    @property
    def rc(self):
        """Gets the rc of this WireLoad.  # noqa: E501


        :return: The rc of this WireLoad.  # noqa: E501
        :rtype: str
        """
        return self._rc

    @rc.setter
    def rc(self, rc):
        """Sets the rc of this WireLoad.


        :param rc: The rc of this WireLoad.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and rc is None:  # noqa: E501
            raise ValueError("Invalid value for `rc`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                rc is not None and len(rc) < 1):
            raise ValueError("Invalid value for `rc`, length must be greater than or equal to `1`")  # noqa: E501

        self._rc = rc

    @property
    def v(self):
        """Gets the v of this WireLoad.  # noqa: E501


        :return: The v of this WireLoad.  # noqa: E501
        :rtype: float
        """
        return self._v

    @v.setter
    def v(self, v):
        """Sets the v of this WireLoad.


        :param v: The v of this WireLoad.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and v is None:  # noqa: E501
            raise ValueError("Invalid value for `v`, must not be `None`")  # noqa: E501

        self._v = v

    @property
    def t(self):
        """Gets the t of this WireLoad.  # noqa: E501


        :return: The t of this WireLoad.  # noqa: E501
        :rtype: int
        """
        return self._t

    @t.setter
    def t(self, t):
        """Sets the t of this WireLoad.


        :param t: The t of this WireLoad.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and t is None:  # noqa: E501
            raise ValueError("Invalid value for `t`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                t is not None and t > 32767):  # noqa: E501
            raise ValueError("Invalid value for `t`, must be a value less than or equal to `32767`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                t is not None and t < -32768):  # noqa: E501
            raise ValueError("Invalid value for `t`, must be a value greater than or equal to `-32768`")  # noqa: E501

        self._t = t

    @property
    def resistance(self):
        """Gets the resistance of this WireLoad.  # noqa: E501


        :return: The resistance of this WireLoad.  # noqa: E501
        :rtype: float
        """
        return self._resistance

    @resistance.setter
    def resistance(self, resistance):
        """Sets the resistance of this WireLoad.


        :param resistance: The resistance of this WireLoad.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and resistance is None:  # noqa: E501
            raise ValueError("Invalid value for `resistance`, must not be `None`")  # noqa: E501

        self._resistance = resistance

    @property
    def capacitance(self):
        """Gets the capacitance of this WireLoad.  # noqa: E501


        :return: The capacitance of this WireLoad.  # noqa: E501
        :rtype: float
        """
        return self._capacitance

    @capacitance.setter
    def capacitance(self, capacitance):
        """Sets the capacitance of this WireLoad.


        :param capacitance: The capacitance of this WireLoad.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and capacitance is None:  # noqa: E501
            raise ValueError("Invalid value for `capacitance`, must not be `None`")  # noqa: E501

        self._capacitance = capacitance

    @property
    def area(self):
        """Gets the area of this WireLoad.  # noqa: E501


        :return: The area of this WireLoad.  # noqa: E501
        :rtype: float
        """
        return self._area

    @area.setter
    def area(self, area):
        """Sets the area of this WireLoad.


        :param area: The area of this WireLoad.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and area is None:  # noqa: E501
            raise ValueError("Invalid value for `area`, must not be `None`")  # noqa: E501

        self._area = area

    @property
    def slope(self):
        """Gets the slope of this WireLoad.  # noqa: E501


        :return: The slope of this WireLoad.  # noqa: E501
        :rtype: float
        """
        return self._slope

    @slope.setter
    def slope(self, slope):
        """Sets the slope of this WireLoad.


        :param slope: The slope of this WireLoad.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and slope is None:  # noqa: E501
            raise ValueError("Invalid value for `slope`, must not be `None`")  # noqa: E501

        self._slope = slope

    @property
    def fanout_length(self):
        """Gets the fanout_length of this WireLoad.  # noqa: E501


        :return: The fanout_length of this WireLoad.  # noqa: E501
        :rtype: list[FanoutLength]
        """
        return self._fanout_length

    @fanout_length.setter
    def fanout_length(self, fanout_length):
        """Sets the fanout_length of this WireLoad.


        :param fanout_length: The fanout_length of this WireLoad.  # noqa: E501
        :type: list[FanoutLength]
        """
        if self.local_vars_configuration.client_side_validation and fanout_length is None:  # noqa: E501
            raise ValueError("Invalid value for `fanout_length`, must not be `None`")  # noqa: E501

        self._fanout_length = fanout_length

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
        if not isinstance(other, WireLoad):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, WireLoad):
            return True

        return self.to_dict() != other.to_dict()
