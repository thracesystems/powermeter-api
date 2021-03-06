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
from powermeter_api.models.wlm_model import WLMModel  # noqa: E501
from powermeter_api.rest import ApiException

class TestWLMModel(unittest.TestCase):
    """WLMModel unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test WLMModel
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = powermeter_api.models.wlm_model.WLMModel()  # noqa: E501
        if include_optional :
            return WLMModel(
                id = 56, 
                master_name = '0', 
                editable = True, 
                wireloads = [
                    powermeter_api.models.wire_load.WireLoad(
                        id = 56, 
                        p = '0', 
                        rc = '0', 
                        v = 1.337, 
                        t = -32768, 
                        resistance = 1.337, 
                        capacitance = 1.337, 
                        area = 1.337, 
                        slope = 1.337, 
                        fanout_length = [
                            powermeter_api.models.fanout_length.FanoutLength(
                                id = 56, 
                                fanout = 0, 
                                length = 1.337, )
                            ], )
                    ], 
                current_version = 56, 
                version = powermeter_api.models.wlm_version.WLMVersion(
                    id = 56, 
                    timestamp = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                    version = 56, 
                    descr = '0', 
                    wlm = 56, )
            )
        else :
            return WLMModel(
                wireloads = [
                    powermeter_api.models.wire_load.WireLoad(
                        id = 56, 
                        p = '0', 
                        rc = '0', 
                        v = 1.337, 
                        t = -32768, 
                        resistance = 1.337, 
                        capacitance = 1.337, 
                        area = 1.337, 
                        slope = 1.337, 
                        fanout_length = [
                            powermeter_api.models.fanout_length.FanoutLength(
                                id = 56, 
                                fanout = 0, 
                                length = 1.337, )
                            ], )
                    ],
                version = powermeter_api.models.wlm_version.WLMVersion(
                    id = 56, 
                    timestamp = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                    version = 56, 
                    descr = '0', 
                    wlm = 56, ),
        )

    def testWLMModel(self):
        """Test WLMModel"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
