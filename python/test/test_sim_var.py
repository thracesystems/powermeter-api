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
from powermeter_api.models.sim_var import SimVar  # noqa: E501
from powermeter_api.rest import ApiException

class TestSimVar(unittest.TestCase):
    """SimVar unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test SimVar
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.sim_var.SimVar()  # noqa: E501
        if include_optional :
            return SimVar(
                id = 56, 
                scope = 56, 
                type = '0', 
                size = 0, 
                name = '0', 
                vcd_id = '0', 
                msb = [
                    -2147483648
                    ], 
                lsb = [
                    -2147483648
                    ]
            )
        else :
            return SimVar(
                type = '0',
                size = 0,
                name = '0',
                vcd_id = '0',
        )

    def testSimVar(self):
        """Test SimVar"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
