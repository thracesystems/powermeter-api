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
from powermeter_api.models.hier import Hier  # noqa: E501
from powermeter_api.rest import ApiException

class TestHier(unittest.TestCase):
    """Hier unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test Hier
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.hier.Hier()  # noqa: E501
        if include_optional :
            return Hier(
                name = '0', 
                id = '0', 
                instance = True, 
                group = True, 
                children = [
                    '0'
                    ], 
                is_open = True, 
                color = '0', 
                parent = 56
            )
        else :
            return Hier(
                name = '0',
        )

    def testHier(self):
        """Test Hier"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()