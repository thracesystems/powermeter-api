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


class ComputedDeviceData(object):
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
        'p': 'str',
        'vds': 'float',
        'vgs': 'float',
        'vbs': 'float',
        't': 'int',
        'idrain': 'float',
        'igate': 'float',
        'isource': 'float',
        'ibody': 'float'
    }

    attribute_map = {
        'p': 'p',
        'vds': 'Vds',
        'vgs': 'Vgs',
        'vbs': 'Vbs',
        't': 't',
        'idrain': 'Idrain',
        'igate': 'Igate',
        'isource': 'Isource',
        'ibody': 'Ibody'
    }

    def __init__(self, p=None, vds=None, vgs=None, vbs=None, t=None, idrain=None, igate=None, isource=None, ibody=None, local_vars_configuration=None):  # noqa: E501
        """ComputedDeviceData - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._p = None
        self._vds = None
        self._vgs = None
        self._vbs = None
        self._t = None
        self._idrain = None
        self._igate = None
        self._isource = None
        self._ibody = None
        self.discriminator = None

        if p is not None:
            self.p = p
        if vds is not None:
            self.vds = vds
        if vgs is not None:
            self.vgs = vgs
        if vbs is not None:
            self.vbs = vbs
        if t is not None:
            self.t = t
        if idrain is not None:
            self.idrain = idrain
        if igate is not None:
            self.igate = igate
        if isource is not None:
            self.isource = isource
        if ibody is not None:
            self.ibody = ibody

    @property
    def p(self):
        """Gets the p of this ComputedDeviceData.  # noqa: E501

        Process name  # noqa: E501

        :return: The p of this ComputedDeviceData.  # noqa: E501
        :rtype: str
        """
        return self._p

    @p.setter
    def p(self, p):
        """Sets the p of this ComputedDeviceData.

        Process name  # noqa: E501

        :param p: The p of this ComputedDeviceData.  # noqa: E501
        :type: str
        """

        self._p = p

    @property
    def vds(self):
        """Gets the vds of this ComputedDeviceData.  # noqa: E501

        Drain-Source voltage  # noqa: E501

        :return: The vds of this ComputedDeviceData.  # noqa: E501
        :rtype: float
        """
        return self._vds

    @vds.setter
    def vds(self, vds):
        """Sets the vds of this ComputedDeviceData.

        Drain-Source voltage  # noqa: E501

        :param vds: The vds of this ComputedDeviceData.  # noqa: E501
        :type: float
        """

        self._vds = vds

    @property
    def vgs(self):
        """Gets the vgs of this ComputedDeviceData.  # noqa: E501

        Gate-Source voltage  # noqa: E501

        :return: The vgs of this ComputedDeviceData.  # noqa: E501
        :rtype: float
        """
        return self._vgs

    @vgs.setter
    def vgs(self, vgs):
        """Sets the vgs of this ComputedDeviceData.

        Gate-Source voltage  # noqa: E501

        :param vgs: The vgs of this ComputedDeviceData.  # noqa: E501
        :type: float
        """

        self._vgs = vgs

    @property
    def vbs(self):
        """Gets the vbs of this ComputedDeviceData.  # noqa: E501

        Body-Source voltage  # noqa: E501

        :return: The vbs of this ComputedDeviceData.  # noqa: E501
        :rtype: float
        """
        return self._vbs

    @vbs.setter
    def vbs(self, vbs):
        """Sets the vbs of this ComputedDeviceData.

        Body-Source voltage  # noqa: E501

        :param vbs: The vbs of this ComputedDeviceData.  # noqa: E501
        :type: float
        """

        self._vbs = vbs

    @property
    def t(self):
        """Gets the t of this ComputedDeviceData.  # noqa: E501

        Temperature  # noqa: E501

        :return: The t of this ComputedDeviceData.  # noqa: E501
        :rtype: int
        """
        return self._t

    @t.setter
    def t(self, t):
        """Sets the t of this ComputedDeviceData.

        Temperature  # noqa: E501

        :param t: The t of this ComputedDeviceData.  # noqa: E501
        :type: int
        """

        self._t = t

    @property
    def idrain(self):
        """Gets the idrain of this ComputedDeviceData.  # noqa: E501

        Drain current  # noqa: E501

        :return: The idrain of this ComputedDeviceData.  # noqa: E501
        :rtype: float
        """
        return self._idrain

    @idrain.setter
    def idrain(self, idrain):
        """Sets the idrain of this ComputedDeviceData.

        Drain current  # noqa: E501

        :param idrain: The idrain of this ComputedDeviceData.  # noqa: E501
        :type: float
        """

        self._idrain = idrain

    @property
    def igate(self):
        """Gets the igate of this ComputedDeviceData.  # noqa: E501

        Gate current  # noqa: E501

        :return: The igate of this ComputedDeviceData.  # noqa: E501
        :rtype: float
        """
        return self._igate

    @igate.setter
    def igate(self, igate):
        """Sets the igate of this ComputedDeviceData.

        Gate current  # noqa: E501

        :param igate: The igate of this ComputedDeviceData.  # noqa: E501
        :type: float
        """

        self._igate = igate

    @property
    def isource(self):
        """Gets the isource of this ComputedDeviceData.  # noqa: E501

        Source current  # noqa: E501

        :return: The isource of this ComputedDeviceData.  # noqa: E501
        :rtype: float
        """
        return self._isource

    @isource.setter
    def isource(self, isource):
        """Sets the isource of this ComputedDeviceData.

        Source current  # noqa: E501

        :param isource: The isource of this ComputedDeviceData.  # noqa: E501
        :type: float
        """

        self._isource = isource

    @property
    def ibody(self):
        """Gets the ibody of this ComputedDeviceData.  # noqa: E501

        Body current  # noqa: E501

        :return: The ibody of this ComputedDeviceData.  # noqa: E501
        :rtype: float
        """
        return self._ibody

    @ibody.setter
    def ibody(self, ibody):
        """Sets the ibody of this ComputedDeviceData.

        Body current  # noqa: E501

        :param ibody: The ibody of this ComputedDeviceData.  # noqa: E501
        :type: float
        """

        self._ibody = ibody

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
        if not isinstance(other, ComputedDeviceData):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ComputedDeviceData):
            return True

        return self.to_dict() != other.to_dict()
