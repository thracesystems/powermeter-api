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
from powermeter_api.models.compute_power_config import ComputePowerConfig  # noqa: E501
from powermeter_api.rest import ApiException

class TestComputePowerConfig(unittest.TestCase):
    """ComputePowerConfig unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ComputePowerConfig
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.compute_power_config.ComputePowerConfig()  # noqa: E501
        if include_optional :
            return ComputePowerConfig(
                source_scaling = '0', 
                tech_scaling = True
            )
        else :
            return ComputePowerConfig(
        )

    def testComputePowerConfig(self):
        """Test ComputePowerConfig"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()