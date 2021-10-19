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


class DesignInstance(object):
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
        'hier_name': 'str',
        'parent_id': 'int',
        'parent_type': 'str',
        'master': 'int',
        'master_name': 'str',
        'master_master': 'int',
        'layer_stack': 'int',
        'process': 'float',
        'rc': 'float',
        'junction': 'int',
        'supplies': 'list[DesignSupplyInst]',
        'config': 'list[ScenarioParam]',
        'utilizations': 'list[ScenarioModeUtil]'
    }

    attribute_map = {
        'id': 'id',
        'name': 'name',
        'hier_name': 'hier_name',
        'parent_id': 'parent_id',
        'parent_type': 'parent_type',
        'master': 'master',
        'master_name': 'master_name',
        'master_master': 'master_master',
        'layer_stack': 'layer_stack',
        'process': 'process',
        'rc': 'rc',
        'junction': 'junction',
        'supplies': 'supplies',
        'config': 'config',
        'utilizations': 'utilizations'
    }

    def __init__(self, id=None, name=None, hier_name=None, parent_id=None, parent_type=None, master=None, master_name=None, master_master=None, layer_stack=None, process=None, rc=None, junction=None, supplies=None, config=None, utilizations=None, local_vars_configuration=None):  # noqa: E501
        """DesignInstance - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._name = None
        self._hier_name = None
        self._parent_id = None
        self._parent_type = None
        self._master = None
        self._master_name = None
        self._master_master = None
        self._layer_stack = None
        self._process = None
        self._rc = None
        self._junction = None
        self._supplies = None
        self._config = None
        self._utilizations = None
        self.discriminator = None

        if id is not None:
            self.id = id
        self.name = name
        if hier_name is not None:
            self.hier_name = hier_name
        self.parent_id = parent_id
        self.parent_type = parent_type
        self.master = master
        if master_name is not None:
            self.master_name = master_name
        if master_master is not None:
            self.master_master = master_master
        self.layer_stack = layer_stack
        self.process = process
        self.rc = rc
        if junction is not None:
            self.junction = junction
        if supplies is not None:
            self.supplies = supplies
        if config is not None:
            self.config = config
        if utilizations is not None:
            self.utilizations = utilizations

    @property
    def id(self):
        """Gets the id of this DesignInstance.  # noqa: E501


        :return: The id of this DesignInstance.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this DesignInstance.


        :param id: The id of this DesignInstance.  # noqa: E501
        :type: int
        """

        self._id = id

    @property
    def name(self):
        """Gets the name of this DesignInstance.  # noqa: E501


        :return: The name of this DesignInstance.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this DesignInstance.


        :param name: The name of this DesignInstance.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and name is None:  # noqa: E501
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                name is not None and len(name) < 1):
            raise ValueError("Invalid value for `name`, length must be greater than or equal to `1`")  # noqa: E501

        self._name = name

    @property
    def hier_name(self):
        """Gets the hier_name of this DesignInstance.  # noqa: E501


        :return: The hier_name of this DesignInstance.  # noqa: E501
        :rtype: str
        """
        return self._hier_name

    @hier_name.setter
    def hier_name(self, hier_name):
        """Sets the hier_name of this DesignInstance.


        :param hier_name: The hier_name of this DesignInstance.  # noqa: E501
        :type: str
        """

        self._hier_name = hier_name

    @property
    def parent_id(self):
        """Gets the parent_id of this DesignInstance.  # noqa: E501


        :return: The parent_id of this DesignInstance.  # noqa: E501
        :rtype: int
        """
        return self._parent_id

    @parent_id.setter
    def parent_id(self, parent_id):
        """Sets the parent_id of this DesignInstance.


        :param parent_id: The parent_id of this DesignInstance.  # noqa: E501
        :type: int
        """
        if (self.local_vars_configuration.client_side_validation and
                parent_id is not None and parent_id > 2147483647):  # noqa: E501
            raise ValueError("Invalid value for `parent_id`, must be a value less than or equal to `2147483647`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                parent_id is not None and parent_id < 0):  # noqa: E501
            raise ValueError("Invalid value for `parent_id`, must be a value greater than or equal to `0`")  # noqa: E501

        self._parent_id = parent_id

    @property
    def parent_type(self):
        """Gets the parent_type of this DesignInstance.  # noqa: E501


        :return: The parent_type of this DesignInstance.  # noqa: E501
        :rtype: str
        """
        return self._parent_type

    @parent_type.setter
    def parent_type(self, parent_type):
        """Sets the parent_type of this DesignInstance.


        :param parent_type: The parent_type of this DesignInstance.  # noqa: E501
        :type: str
        """

        self._parent_type = parent_type

    @property
    def master(self):
        """Gets the master of this DesignInstance.  # noqa: E501


        :return: The master of this DesignInstance.  # noqa: E501
        :rtype: int
        """
        return self._master

    @master.setter
    def master(self, master):
        """Sets the master of this DesignInstance.


        :param master: The master of this DesignInstance.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and master is None:  # noqa: E501
            raise ValueError("Invalid value for `master`, must not be `None`")  # noqa: E501

        self._master = master

    @property
    def master_name(self):
        """Gets the master_name of this DesignInstance.  # noqa: E501


        :return: The master_name of this DesignInstance.  # noqa: E501
        :rtype: str
        """
        return self._master_name

    @master_name.setter
    def master_name(self, master_name):
        """Sets the master_name of this DesignInstance.


        :param master_name: The master_name of this DesignInstance.  # noqa: E501
        :type: str
        """

        self._master_name = master_name

    @property
    def master_master(self):
        """Gets the master_master of this DesignInstance.  # noqa: E501


        :return: The master_master of this DesignInstance.  # noqa: E501
        :rtype: int
        """
        return self._master_master

    @master_master.setter
    def master_master(self, master_master):
        """Sets the master_master of this DesignInstance.


        :param master_master: The master_master of this DesignInstance.  # noqa: E501
        :type: int
        """

        self._master_master = master_master

    @property
    def layer_stack(self):
        """Gets the layer_stack of this DesignInstance.  # noqa: E501


        :return: The layer_stack of this DesignInstance.  # noqa: E501
        :rtype: int
        """
        return self._layer_stack

    @layer_stack.setter
    def layer_stack(self, layer_stack):
        """Sets the layer_stack of this DesignInstance.


        :param layer_stack: The layer_stack of this DesignInstance.  # noqa: E501
        :type: int
        """

        self._layer_stack = layer_stack

    @property
    def process(self):
        """Gets the process of this DesignInstance.  # noqa: E501


        :return: The process of this DesignInstance.  # noqa: E501
        :rtype: float
        """
        return self._process

    @process.setter
    def process(self, process):
        """Sets the process of this DesignInstance.


        :param process: The process of this DesignInstance.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and process is None:  # noqa: E501
            raise ValueError("Invalid value for `process`, must not be `None`")  # noqa: E501

        self._process = process

    @property
    def rc(self):
        """Gets the rc of this DesignInstance.  # noqa: E501


        :return: The rc of this DesignInstance.  # noqa: E501
        :rtype: float
        """
        return self._rc

    @rc.setter
    def rc(self, rc):
        """Sets the rc of this DesignInstance.


        :param rc: The rc of this DesignInstance.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and rc is None:  # noqa: E501
            raise ValueError("Invalid value for `rc`, must not be `None`")  # noqa: E501

        self._rc = rc

    @property
    def junction(self):
        """Gets the junction of this DesignInstance.  # noqa: E501


        :return: The junction of this DesignInstance.  # noqa: E501
        :rtype: int
        """
        return self._junction

    @junction.setter
    def junction(self, junction):
        """Sets the junction of this DesignInstance.


        :param junction: The junction of this DesignInstance.  # noqa: E501
        :type: int
        """
        if (self.local_vars_configuration.client_side_validation and
                junction is not None and junction > 32767):  # noqa: E501
            raise ValueError("Invalid value for `junction`, must be a value less than or equal to `32767`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                junction is not None and junction < -32768):  # noqa: E501
            raise ValueError("Invalid value for `junction`, must be a value greater than or equal to `-32768`")  # noqa: E501

        self._junction = junction

    @property
    def supplies(self):
        """Gets the supplies of this DesignInstance.  # noqa: E501


        :return: The supplies of this DesignInstance.  # noqa: E501
        :rtype: list[DesignSupplyInst]
        """
        return self._supplies

    @supplies.setter
    def supplies(self, supplies):
        """Sets the supplies of this DesignInstance.


        :param supplies: The supplies of this DesignInstance.  # noqa: E501
        :type: list[DesignSupplyInst]
        """

        self._supplies = supplies

    @property
    def config(self):
        """Gets the config of this DesignInstance.  # noqa: E501


        :return: The config of this DesignInstance.  # noqa: E501
        :rtype: list[ScenarioParam]
        """
        return self._config

    @config.setter
    def config(self, config):
        """Sets the config of this DesignInstance.


        :param config: The config of this DesignInstance.  # noqa: E501
        :type: list[ScenarioParam]
        """

        self._config = config

    @property
    def utilizations(self):
        """Gets the utilizations of this DesignInstance.  # noqa: E501


        :return: The utilizations of this DesignInstance.  # noqa: E501
        :rtype: list[ScenarioModeUtil]
        """
        return self._utilizations

    @utilizations.setter
    def utilizations(self, utilizations):
        """Sets the utilizations of this DesignInstance.


        :param utilizations: The utilizations of this DesignInstance.  # noqa: E501
        :type: list[ScenarioModeUtil]
        """

        self._utilizations = utilizations

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
        if not isinstance(other, DesignInstance):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, DesignInstance):
            return True

        return self.to_dict() != other.to_dict()