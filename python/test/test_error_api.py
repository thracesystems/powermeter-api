# coding: utf-8

"""
    PowerMeter API

    API  # noqa: E501

    The version of the OpenAPI document: 2021.4.1
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest

import powermeter_api
from powermeter_api.api.error_api import ErrorApi  # noqa: E501
from powermeter_api.rest import ApiException


class TestErrorApi(unittest.TestCase):
    """ErrorApi unit test stubs"""

    def setUp(self):
        self.api = powermeter_api.api.error_api.ErrorApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_error_create(self):
        """Test case for error_create

        """
        pass


if __name__ == '__main__':
    unittest.main()
