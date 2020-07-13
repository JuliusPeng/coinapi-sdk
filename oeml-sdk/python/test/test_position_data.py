# coding: utf-8

"""
    OEML - REST API

    This section will provide necessary information about the `CoinAPI OEML REST API` protocol.   # noqa: E501

    The version of the OpenAPI document: v1
    Contact: support@coinapi.io
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.position_data import PositionData  # noqa: E501
from openapi_client.rest import ApiException

class TestPositionData(unittest.TestCase):
    """PositionData unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test PositionData
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.position_data.PositionData()  # noqa: E501
        if include_optional :
            return PositionData(
                symbol_exchange = 'XBTUSD', 
                symbol_coinapi = 'BITMEX_PERP_BTC_USD', 
                avg_entry_price = 0.00134444, 
                quantity = 7, 
                side = 'BUY', 
                unrealized_pnl = 0.0, 
                leverage = 0.0, 
                cross_margin = True, 
                liquidation_price = 0.072323, 
                raw_data = Other position related information provided by the exchange.
            )
        else :
            return PositionData(
        )

    def testPositionData(self):
        """Test PositionData"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
