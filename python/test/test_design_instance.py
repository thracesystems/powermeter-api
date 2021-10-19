# coding: utf-8

"""
    PowerMeter API

    API  # noqa: E501

    The version of the OpenAPI document: 2021.4.1
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import powermeter_api
from powermeter_api.models.design_instance import DesignInstance  # noqa: E501
from powermeter_api.rest import ApiException

class TestDesignInstance(unittest.TestCase):
    """DesignInstance unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test DesignInstance
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.design_instance.DesignInstance()  # noqa: E501
        if include_optional :
            return DesignInstance(
                id = 56, 
                name = '0', 
                hier_name = '0', 
                parent_id = 0, 
                parent_type = '0', 
                master = 56, 
                master_name = '0', 
                master_master = 56, 
                layer_stack = 56, 
                process = 1.337, 
                rc = 1.337, 
                junction = -32768, 
                supplies = [
                    powermeter_api.models.design_supply_inst.DesignSupplyInst(
                        id = 56, 
                        container = 56, 
                        master = 56, 
                        color = '0', 
                        connection_color = '0', 
                        master_name = '0', 
                        hier_name = '0', 
                        connected_to = 0, 
                        connected_to_type = '0', )
                    ], 
                config = [
                    powermeter_api.models.scenario_param.ScenarioParam(
                        id = 56, 
                        parameter = 56, )
                    ], 
                utilizations = [
                    powermeter_api.models.scenario_mode_util.ScenarioModeUtil(
                        id = 56, 
                        mastermode = 56, 
                        mastermode_name = '0', )
                    ]
            )
        else :
            return DesignInstance(
                name = '0',
                master = 56,
                process = 1.337,
                rc = 1.337,
        )

    def testDesignInstance(self):
        """Test DesignInstance"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
