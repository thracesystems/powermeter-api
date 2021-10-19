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
from powermeter_api.models.power_source import PowerSource  # noqa: E501
from powermeter_api.rest import ApiException

class TestPowerSource(unittest.TestCase):
    """PowerSource unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test PowerSource
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.power_source.PowerSource()  # noqa: E501
        if include_optional :
            return PowerSource(
                id = 56, 
                name = '0', 
                type = '0', 
                scaling = '0'
            )
        else :
            return PowerSource(
                name = '0',
                type = '0',
                scaling = '0',
        )

    def testPowerSource(self):
        """Test PowerSource"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
