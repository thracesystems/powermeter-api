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
from powermeter_api.models.design_ff import DesignFF  # noqa: E501
from powermeter_api.rest import ApiException

class TestDesignFF(unittest.TestCase):
    """DesignFF unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test DesignFF
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.design_ff.DesignFF()  # noqa: E501
        if include_optional :
            return DesignFF(
                id = 56, 
                var1 = '0', 
                var2 = '0', 
                bits = 0, 
                clocked_on = '0', 
                clocked_on_also = '0', 
                next_state = '0', 
                clear = '0', 
                preset = '0', 
                clear_preset_var1 = '0', 
                clear_preset_var2 = '0', 
                power_down_function = '0'
            )
        else :
            return DesignFF(
                var1 = '0',
                var2 = '0',
        )

    def testDesignFF(self):
        """Test DesignFF"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
