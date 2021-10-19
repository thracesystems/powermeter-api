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
from powermeter_api.models.package_version import PackageVersion  # noqa: E501
from powermeter_api.rest import ApiException

class TestPackageVersion(unittest.TestCase):
    """PackageVersion unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test PackageVersion
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.package_version.PackageVersion()  # noqa: E501
        if include_optional :
            return PackageVersion(
                id = 56, 
                version = 56, 
                timestamp = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                descr = '0', 
                package = 56
            )
        else :
            return PackageVersion(
                descr = '0',
        )

    def testPackageVersion(self):
        """Test PackageVersion"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()