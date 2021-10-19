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
from powermeter_api.models.swagger_contrib import SwaggerContrib  # noqa: E501
from powermeter_api.rest import ApiException

class TestSwaggerContrib(unittest.TestCase):
    """SwaggerContrib unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test SwaggerContrib
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.swagger_contrib.SwaggerContrib()  # noqa: E501
        if include_optional :
            return SwaggerContrib(
                id = 56, 
                name = '0', 
                length = 0, 
                width = 0, 
                nfin = 0, 
                voltages = [
                    powermeter_api.models.swagger_contrib_voltages.SwaggerContribVoltages(
                        p = '0', 
                        v = 1.337, 
                        t = 56, 
                        vds = 1.337, 
                        vgs = 1.337, 
                        vbs = 1.337, )
                    ], 
                currents = [
                    powermeter_api.models.swagger_contrib_currents.SwaggerContribCurrents(
                        p = '0', 
                        v = 1.337, 
                        t = 56, 
                        id = 1.337, 
                        ig = 1.337, 
                        is = 1.337, 
                        ib = 1.337, )
                    ]
            )
        else :
            return SwaggerContrib(
                name = '0',
                length = 0,
                voltages = [
                    powermeter_api.models.swagger_contrib_voltages.SwaggerContribVoltages(
                        p = '0', 
                        v = 1.337, 
                        t = 56, 
                        vds = 1.337, 
                        vgs = 1.337, 
                        vbs = 1.337, )
                    ],
                currents = [
                    powermeter_api.models.swagger_contrib_currents.SwaggerContribCurrents(
                        p = '0', 
                        v = 1.337, 
                        t = 56, 
                        id = 1.337, 
                        ig = 1.337, 
                        is = 1.337, 
                        ib = 1.337, )
                    ],
        )

    def testSwaggerContrib(self):
        """Test SwaggerContrib"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
