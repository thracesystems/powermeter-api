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
from powermeter_api.models.sim_measurement import SimMeasurement  # noqa: E501
from powermeter_api.rest import ApiException

class TestSimMeasurement(unittest.TestCase):
    """SimMeasurement unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test SimMeasurement
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.sim_measurement.SimMeasurement()  # noqa: E501
        if include_optional :
            return SimMeasurement(
                id = 56, 
                type = '0', 
                name = '0', 
                clock_name = '0', 
                rising = True, 
                expression = '0', 
                bit_size = 0, 
                activity_type = [
                    '0'
                    ], 
                variable = '0'
            )
        else :
            return SimMeasurement(
                type = '0',
                name = '0',
        )

    def testSimMeasurement(self):
        """Test SimMeasurement"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
