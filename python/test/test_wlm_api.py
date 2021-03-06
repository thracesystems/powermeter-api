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
from powermeter_api.api.wlm_api import WlmApi  # noqa: E501
from powermeter_api.rest import ApiException


class TestWlmApi(unittest.TestCase):
    """WlmApi unit test stubs"""

    def setUp(self):
        self.api = powermeter_api.api.wlm_api.WlmApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_wlm_commit_create(self):
        """Test case for wlm_commit_create

        """
        pass

    def test_wlm_create(self):
        """Test case for wlm_create

        """
        pass

    def test_wlm_data_create(self):
        """Test case for wlm_data_create

        """
        pass

    def test_wlm_data_read(self):
        """Test case for wlm_data_read

        """
        pass

    def test_wlm_data_update(self):
        """Test case for wlm_data_update

        """
        pass

    def test_wlm_read(self):
        """Test case for wlm_read

        """
        pass

    def test_wlm_version_list(self):
        """Test case for wlm_version_list

        """
        pass


if __name__ == '__main__':
    unittest.main()
