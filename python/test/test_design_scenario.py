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
from powermeter_api.models.design_scenario import DesignScenario  # noqa: E501
from powermeter_api.rest import ApiException

class TestDesignScenario(unittest.TestCase):
    """DesignScenario unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test DesignScenario
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.design_scenario.DesignScenario()  # noqa: E501
        if include_optional :
            return DesignScenario(
                id = 56, 
                descr = '0', 
                temperature = 1.337, 
                process = 1.337, 
                rc = 1.337, 
                endtime = 1.337, 
                average_power = 1.337, 
                total_energy = 1.337, 
                confidence = 1.337
            )
        else :
            return DesignScenario(
                descr = '0',
                temperature = 1.337,
        )

    def testDesignScenario(self):
        """Test DesignScenario"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
