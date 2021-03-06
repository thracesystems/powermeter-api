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
from powermeter_api.models.paged_design_pin_energy import PagedDesignPinEnergy  # noqa: E501
from powermeter_api.rest import ApiException

class TestPagedDesignPinEnergy(unittest.TestCase):
    """PagedDesignPinEnergy unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test PagedDesignPinEnergy
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.paged_design_pin_energy.PagedDesignPinEnergy()  # noqa: E501
        if include_optional :
            return PagedDesignPinEnergy(
                page = 56, 
                pages = 56, 
                power = [
                    powermeter_api.models.design_pin_energy.DesignPinEnergy(
                        id = 56, 
                        pin = 56, 
                        pin_name = '0', 
                        related_pin = 56, 
                        related_pin_name = '0', 
                        supply = 56, 
                        supply_name = '0', 
                        process = '0', 
                        rc = '0', 
                        voltage = 1.337, 
                        temperature = -32768, 
                        when = '0', 
                        index1 = [
                            1.337
                            ], 
                        variable1 = '0', 
                        index2 = [
                            1.337
                            ], 
                        variable2 = '0', 
                        rise_energy = [
                            1.337
                            ], 
                        fall_energy = [
                            1.337
                            ], 
                        modes = [
                            56
                            ], )
                    ]
            )
        else :
            return PagedDesignPinEnergy(
                page = 56,
                pages = 56,
                power = [
                    powermeter_api.models.design_pin_energy.DesignPinEnergy(
                        id = 56, 
                        pin = 56, 
                        pin_name = '0', 
                        related_pin = 56, 
                        related_pin_name = '0', 
                        supply = 56, 
                        supply_name = '0', 
                        process = '0', 
                        rc = '0', 
                        voltage = 1.337, 
                        temperature = -32768, 
                        when = '0', 
                        index1 = [
                            1.337
                            ], 
                        variable1 = '0', 
                        index2 = [
                            1.337
                            ], 
                        variable2 = '0', 
                        rise_energy = [
                            1.337
                            ], 
                        fall_energy = [
                            1.337
                            ], 
                        modes = [
                            56
                            ], )
                    ],
        )

    def testPagedDesignPinEnergy(self):
        """Test PagedDesignPinEnergy"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
