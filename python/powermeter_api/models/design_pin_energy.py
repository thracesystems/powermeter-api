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


class DesignPinEnergy(object):
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
        'pin': 'int',
        'pin_name': 'str',
        'related_pin': 'int',
        'related_pin_name': 'str',
        'supply': 'int',
        'supply_name': 'str',
        'process': 'str',
        'rc': 'str',
        'voltage': 'float',
        'temperature': 'int',
        'when': 'str',
        'index1': 'list[float]',
        'variable1': 'str',
        'index2': 'list[float]',
        'variable2': 'str',
        'rise_energy': 'list[float]',
        'fall_energy': 'list[float]',
        'modes': 'list[int]'
    }

    attribute_map = {
        'id': 'id',
        'pin': 'pin',
        'pin_name': 'pin_name',
        'related_pin': 'related_pin',
        'related_pin_name': 'related_pin_name',
        'supply': 'supply',
        'supply_name': 'supply_name',
        'process': 'process',
        'rc': 'rc',
        'voltage': 'voltage',
        'temperature': 'temperature',
        'when': 'when',
        'index1': 'index1',
        'variable1': 'variable1',
        'index2': 'index2',
        'variable2': 'variable2',
        'rise_energy': 'rise_energy',
        'fall_energy': 'fall_energy',
        'modes': 'modes'
    }

    def __init__(self, id=None, pin=None, pin_name=None, related_pin=None, related_pin_name=None, supply=None, supply_name=None, process=None, rc=None, voltage=None, temperature=None, when=None, index1=None, variable1=None, index2=None, variable2=None, rise_energy=None, fall_energy=None, modes=None, local_vars_configuration=None):  # noqa: E501
        """DesignPinEnergy - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._pin = None
        self._pin_name = None
        self._related_pin = None
        self._related_pin_name = None
        self._supply = None
        self._supply_name = None
        self._process = None
        self._rc = None
        self._voltage = None
        self._temperature = None
        self._when = None
        self._index1 = None
        self._variable1 = None
        self._index2 = None
        self._variable2 = None
        self._rise_energy = None
        self._fall_energy = None
        self._modes = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.pin = pin
        if pin_name is not None:
            self.pin_name = pin_name
        self.related_pin = related_pin
        if related_pin_name is not None:
            self.related_pin_name = related_pin_name
        self.supply = supply
        if supply_name is not None:
            self.supply_name = supply_name
        self.process = process
        self.rc = rc
        self.voltage = voltage
        self.temperature = temperature
        self.when = when
        self.index1 = index1
        if variable1 is not None:
            self.variable1 = variable1
        self.index2 = index2
        if variable2 is not None:
            self.variable2 = variable2
        self.rise_energy = rise_energy
        self.fall_energy = fall_energy
        if modes is not None:
            self.modes = modes

    @property
    def id(self):
        """Gets the id of this DesignPinEnergy.  # noqa: E501


        :return: The id of this DesignPinEnergy.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this DesignPinEnergy.


        :param id: The id of this DesignPinEnergy.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def pin(self):
        """Gets the pin of this DesignPinEnergy.  # noqa: E501


        :return: The pin of this DesignPinEnergy.  # noqa: E501
        :rtype: int
        """
        return self._pin

    @pin.setter
    def pin(self, pin):
        """Sets the pin of this DesignPinEnergy.


        :param pin: The pin of this DesignPinEnergy.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and pin is None:  # noqa: E501
            raise ValueError("Invalid value for `pin`, must not be `None`")  # noqa: E501

        self._pin = pin

    @property
    def pin_name(self):
        """Gets the pin_name of this DesignPinEnergy.  # noqa: E501


        :return: The pin_name of this DesignPinEnergy.  # noqa: E501
        :rtype: str
        """
        return self._pin_name

    @pin_name.setter
    def pin_name(self, pin_name):
        """Sets the pin_name of this DesignPinEnergy.


        :param pin_name: The pin_name of this DesignPinEnergy.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                pin_name is not None and len(pin_name) < 1):
            raise ValueError("Invalid value for `pin_name`, length must be greater than or equal to `1`")  # noqa: E501

        self._pin_name = pin_name

    @property
    def related_pin(self):
        """Gets the related_pin of this DesignPinEnergy.  # noqa: E501


        :return: The related_pin of this DesignPinEnergy.  # noqa: E501
        :rtype: int
        """
        return self._related_pin

    @related_pin.setter
    def related_pin(self, related_pin):
        """Sets the related_pin of this DesignPinEnergy.


        :param related_pin: The related_pin of this DesignPinEnergy.  # noqa: E501
        :type: int
        """

        self._related_pin = related_pin

    @property
    def related_pin_name(self):
        """Gets the related_pin_name of this DesignPinEnergy.  # noqa: E501


        :return: The related_pin_name of this DesignPinEnergy.  # noqa: E501
        :rtype: str
        """
        return self._related_pin_name

    @related_pin_name.setter
    def related_pin_name(self, related_pin_name):
        """Sets the related_pin_name of this DesignPinEnergy.


        :param related_pin_name: The related_pin_name of this DesignPinEnergy.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                related_pin_name is not None and len(related_pin_name) < 1):
            raise ValueError("Invalid value for `related_pin_name`, length must be greater than or equal to `1`")  # noqa: E501

        self._related_pin_name = related_pin_name

    @property
    def supply(self):
        """Gets the supply of this DesignPinEnergy.  # noqa: E501


        :return: The supply of this DesignPinEnergy.  # noqa: E501
        :rtype: int
        """
        return self._supply

    @supply.setter
    def supply(self, supply):
        """Sets the supply of this DesignPinEnergy.


        :param supply: The supply of this DesignPinEnergy.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and supply is None:  # noqa: E501
            raise ValueError("Invalid value for `supply`, must not be `None`")  # noqa: E501

        self._supply = supply

    @property
    def supply_name(self):
        """Gets the supply_name of this DesignPinEnergy.  # noqa: E501


        :return: The supply_name of this DesignPinEnergy.  # noqa: E501
        :rtype: str
        """
        return self._supply_name

    @supply_name.setter
    def supply_name(self, supply_name):
        """Sets the supply_name of this DesignPinEnergy.


        :param supply_name: The supply_name of this DesignPinEnergy.  # noqa: E501
        :type: str
        """
        if (self.local_vars_configuration.client_side_validation and
                supply_name is not None and len(supply_name) < 1):
            raise ValueError("Invalid value for `supply_name`, length must be greater than or equal to `1`")  # noqa: E501

        self._supply_name = supply_name

    @property
    def process(self):
        """Gets the process of this DesignPinEnergy.  # noqa: E501


        :return: The process of this DesignPinEnergy.  # noqa: E501
        :rtype: str
        """
        return self._process

    @process.setter
    def process(self, process):
        """Sets the process of this DesignPinEnergy.


        :param process: The process of this DesignPinEnergy.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and process is None:  # noqa: E501
            raise ValueError("Invalid value for `process`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                process is not None and len(process) < 1):
            raise ValueError("Invalid value for `process`, length must be greater than or equal to `1`")  # noqa: E501

        self._process = process

    @property
    def rc(self):
        """Gets the rc of this DesignPinEnergy.  # noqa: E501


        :return: The rc of this DesignPinEnergy.  # noqa: E501
        :rtype: str
        """
        return self._rc

    @rc.setter
    def rc(self, rc):
        """Sets the rc of this DesignPinEnergy.


        :param rc: The rc of this DesignPinEnergy.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and rc is None:  # noqa: E501
            raise ValueError("Invalid value for `rc`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                rc is not None and len(rc) < 1):
            raise ValueError("Invalid value for `rc`, length must be greater than or equal to `1`")  # noqa: E501

        self._rc = rc

    @property
    def voltage(self):
        """Gets the voltage of this DesignPinEnergy.  # noqa: E501


        :return: The voltage of this DesignPinEnergy.  # noqa: E501
        :rtype: float
        """
        return self._voltage

    @voltage.setter
    def voltage(self, voltage):
        """Sets the voltage of this DesignPinEnergy.


        :param voltage: The voltage of this DesignPinEnergy.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and voltage is None:  # noqa: E501
            raise ValueError("Invalid value for `voltage`, must not be `None`")  # noqa: E501

        self._voltage = voltage

    @property
    def temperature(self):
        """Gets the temperature of this DesignPinEnergy.  # noqa: E501


        :return: The temperature of this DesignPinEnergy.  # noqa: E501
        :rtype: int
        """
        return self._temperature

    @temperature.setter
    def temperature(self, temperature):
        """Sets the temperature of this DesignPinEnergy.


        :param temperature: The temperature of this DesignPinEnergy.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and temperature is None:  # noqa: E501
            raise ValueError("Invalid value for `temperature`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                temperature is not None and temperature > 32767):  # noqa: E501
            raise ValueError("Invalid value for `temperature`, must be a value less than or equal to `32767`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                temperature is not None and temperature < -32768):  # noqa: E501
            raise ValueError("Invalid value for `temperature`, must be a value greater than or equal to `-32768`")  # noqa: E501

        self._temperature = temperature

    @property
    def when(self):
        """Gets the when of this DesignPinEnergy.  # noqa: E501


        :return: The when of this DesignPinEnergy.  # noqa: E501
        :rtype: str
        """
        return self._when

    @when.setter
    def when(self, when):
        """Sets the when of this DesignPinEnergy.


        :param when: The when of this DesignPinEnergy.  # noqa: E501
        :type: str
        """

        self._when = when

    @property
    def index1(self):
        """Gets the index1 of this DesignPinEnergy.  # noqa: E501


        :return: The index1 of this DesignPinEnergy.  # noqa: E501
        :rtype: list[float]
        """
        return self._index1

    @index1.setter
    def index1(self, index1):
        """Sets the index1 of this DesignPinEnergy.


        :param index1: The index1 of this DesignPinEnergy.  # noqa: E501
        :type: list[float]
        """

        self._index1 = index1

    @property
    def variable1(self):
        """Gets the variable1 of this DesignPinEnergy.  # noqa: E501


        :return: The variable1 of this DesignPinEnergy.  # noqa: E501
        :rtype: str
        """
        return self._variable1

    @variable1.setter
    def variable1(self, variable1):
        """Sets the variable1 of this DesignPinEnergy.


        :param variable1: The variable1 of this DesignPinEnergy.  # noqa: E501
        :type: str
        """

        self._variable1 = variable1

    @property
    def index2(self):
        """Gets the index2 of this DesignPinEnergy.  # noqa: E501


        :return: The index2 of this DesignPinEnergy.  # noqa: E501
        :rtype: list[float]
        """
        return self._index2

    @index2.setter
    def index2(self, index2):
        """Sets the index2 of this DesignPinEnergy.


        :param index2: The index2 of this DesignPinEnergy.  # noqa: E501
        :type: list[float]
        """

        self._index2 = index2

    @property
    def variable2(self):
        """Gets the variable2 of this DesignPinEnergy.  # noqa: E501


        :return: The variable2 of this DesignPinEnergy.  # noqa: E501
        :rtype: str
        """
        return self._variable2

    @variable2.setter
    def variable2(self, variable2):
        """Sets the variable2 of this DesignPinEnergy.


        :param variable2: The variable2 of this DesignPinEnergy.  # noqa: E501
        :type: str
        """

        self._variable2 = variable2

    @property
    def rise_energy(self):
        """Gets the rise_energy of this DesignPinEnergy.  # noqa: E501


        :return: The rise_energy of this DesignPinEnergy.  # noqa: E501
        :rtype: list[float]
        """
        return self._rise_energy

    @rise_energy.setter
    def rise_energy(self, rise_energy):
        """Sets the rise_energy of this DesignPinEnergy.


        :param rise_energy: The rise_energy of this DesignPinEnergy.  # noqa: E501
        :type: list[float]
        """
        if self.local_vars_configuration.client_side_validation and rise_energy is None:  # noqa: E501
            raise ValueError("Invalid value for `rise_energy`, must not be `None`")  # noqa: E501

        self._rise_energy = rise_energy

    @property
    def fall_energy(self):
        """Gets the fall_energy of this DesignPinEnergy.  # noqa: E501


        :return: The fall_energy of this DesignPinEnergy.  # noqa: E501
        :rtype: list[float]
        """
        return self._fall_energy

    @fall_energy.setter
    def fall_energy(self, fall_energy):
        """Sets the fall_energy of this DesignPinEnergy.


        :param fall_energy: The fall_energy of this DesignPinEnergy.  # noqa: E501
        :type: list[float]
        """
        if self.local_vars_configuration.client_side_validation and fall_energy is None:  # noqa: E501
            raise ValueError("Invalid value for `fall_energy`, must not be `None`")  # noqa: E501

        self._fall_energy = fall_energy

    @property
    def modes(self):
        """Gets the modes of this DesignPinEnergy.  # noqa: E501


        :return: The modes of this DesignPinEnergy.  # noqa: E501
        :rtype: list[int]
        """
        return self._modes

    @modes.setter
    def modes(self, modes):
        """Sets the modes of this DesignPinEnergy.


        :param modes: The modes of this DesignPinEnergy.  # noqa: E501
        :type: list[int]
        """

        self._modes = modes

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
        if not isinstance(other, DesignPinEnergy):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, DesignPinEnergy):
            return True

        return self.to_dict() != other.to_dict()