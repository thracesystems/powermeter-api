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
from powermeter_api.models.technology import Technology  # noqa: E501
from powermeter_api.rest import ApiException

class TestTechnology(unittest.TestCase):
    """Technology unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test Technology
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.technology.Technology()  # noqa: E501
        if include_optional :
            return Technology(
                id = 56, 
                name = '0', 
                node = 56, 
                editable = True, 
                current_version = 56, 
                version = powermeter_api.models.technology_version.TechnologyVersion(
                    id = 56, 
                    version = 56, 
                    timestamp = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                    descr = '0', 
                    technology = 56, ), 
                wafer_diameter = 0, 
                scribe_line = 0, 
                edge_loss = 0, 
                project_count = 56, 
                has_shrink = True, 
                shrink_factor = 1.337, 
                thickness = 1.337, 
                si_conductivity = 1.337, 
                si_heat_capacity = 1.337
            )
        else :
            return Technology(
                scribe_line = 0,
                edge_loss = 0,
        )

    def testTechnology(self):
        """Test Technology"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()