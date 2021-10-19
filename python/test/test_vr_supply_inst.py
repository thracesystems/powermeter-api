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
from powermeter_api.models.vr_supply_inst import VRSupplyInst  # noqa: E501
from powermeter_api.rest import ApiException

class TestVRSupplyInst(unittest.TestCase):
    """VRSupplyInst unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test VRSupplyInst
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.vr_supply_inst.VRSupplyInst()  # noqa: E501
        if include_optional :
            return VRSupplyInst(
                id = 56, 
                container = 56, 
                master = 56, 
                color = '0', 
                connection_color = '0', 
                master_name = '0', 
                hier_name = '0', 
                connected_to = 0, 
                connected_to_type = '0', 
                direction = '0'
            )
        else :
            return VRSupplyInst(
                master = 56,
        )

    def testVRSupplyInst(self):
        """Test VRSupplyInst"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()