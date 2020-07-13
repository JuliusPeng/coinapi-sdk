# coding: utf-8

"""
    OEML - REST API

    This section will provide necessary information about the `CoinAPI OEML REST API` protocol.   # noqa: E501

    The version of the OpenAPI document: v1
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.position import Position  # noqa: E501
from openapi_client.rest import ApiException

class TestPosition(unittest.TestCase):
    """Position unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test Position
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.position.Position()  # noqa: E501
        if include_optional :
            return Position(
                type = 'snapshotPositions', 
                exchange_name = 'KRAKEN', 
                data = [
                    openapi_client.models.position_data.Position_data(
                        id = '2873jkjhgdsd78ii', 
                        symbol_exchange = 'BTC', 
                        symbol_coinapi = 'BTC', 
                        avg_entry_price = 0.00134444, 
                        quantity = 0.00134444, 
                        is_buy = True, 
                        unrealised_pn_l = 0.0, 
                        leverage = 0.0, 
                        cross_margin = True, 
                        liquidation_price = 0.072323, 
                        raw_data = 'xyz', )
                    ]
            )
        else :
            return Position(
        )

    def testPosition(self):
        """Test Position"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
