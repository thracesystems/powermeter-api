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
from powermeter_api.models.design_scenario_supply import DesignScenarioSupply  # noqa: E501
from powermeter_api.rest import ApiException

class TestDesignScenarioSupply(unittest.TestCase):
    """DesignScenarioSupply unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test DesignScenarioSupply
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.design_scenario_supply.DesignScenarioSupply()  # noqa: E501
        if include_optional :
            return DesignScenarioSupply(
                id = 56, 
                time = 1.337, 
                voltage = 1.337
            )
        else :
            return DesignScenarioSupply(
                voltage = 1.337,
        )

    def testDesignScenarioSupply(self):
        """Test DesignScenarioSupply"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
