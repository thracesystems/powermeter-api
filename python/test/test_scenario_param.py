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
from powermeter_api.models.scenario_param import ScenarioParam  # noqa: E501
from powermeter_api.rest import ApiException

class TestScenarioParam(unittest.TestCase):
    """ScenarioParam unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ScenarioParam
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.scenario_param.ScenarioParam()  # noqa: E501
        if include_optional :
            return ScenarioParam(
                id = 56, 
                parameter = 56
            )
        else :
            return ScenarioParam(
                parameter = 56,
        )

    def testScenarioParam(self):
        """Test ScenarioParam"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()