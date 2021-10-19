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
from powermeter_api.models.mode import Mode  # noqa: E501
from powermeter_api.rest import ApiException

class TestMode(unittest.TestCase):
    """Mode unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test Mode
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.mode.Mode()  # noqa: E501
        if include_optional :
            return Mode(
                id = 56, 
                name = '0', 
                descr = '0', 
                default = True, 
                when = '0'
            )
        else :
            return Mode(
                name = '0',
        )

    def testMode(self):
        """Test Mode"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()