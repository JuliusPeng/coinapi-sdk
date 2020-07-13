# coding: utf-8

"""
    OEML - REST API

    This section will provide necessary information about the `CoinAPI OEML REST API` protocol.   # noqa: E501

    The version of the OpenAPI document: v1
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from openapi_client.configuration import Configuration


class OrderData(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'exchange_id': 'str',
        'id': 'str',
        'client_order_id_format_exchange': 'str',
        'exchange_order_id': 'str',
        'amount_open': 'float',
        'amount_filled': 'float',
        'status': 'OrdStatus',
        'time_order': 'list[list[str]]',
        'error_message': 'str',
        'client_order_id': 'str',
        'symbol_exchange': 'str',
        'symbol_coinapi': 'str',
        'amount_order': 'float',
        'price': 'float',
        'side': 'str',
        'order_type': 'str',
        'time_in_force': 'TimeInForce',
        'expire_time': 'date',
        'exec_inst': 'list[str]'
    }

    attribute_map = {
        'exchange_id': 'exchange_id',
        'id': 'id',
        'client_order_id_format_exchange': 'client_order_id_format_exchange',
        'exchange_order_id': 'exchange_order_id',
        'amount_open': 'amount_open',
        'amount_filled': 'amount_filled',
        'status': 'status',
        'time_order': 'time_order',
        'error_message': 'error_message',
        'client_order_id': 'client_order_id',
        'symbol_exchange': 'symbol_exchange',
        'symbol_coinapi': 'symbol_coinapi',
        'amount_order': 'amount_order',
        'price': 'price',
        'side': 'side',
        'order_type': 'order_type',
        'time_in_force': 'time_in_force',
        'expire_time': 'expire_time',
        'exec_inst': 'exec_inst'
    }

    def __init__(self, exchange_id=None, id=None, client_order_id_format_exchange=None, exchange_order_id=None, amount_open=None, amount_filled=None, status=None, time_order=None, error_message=None, client_order_id=None, symbol_exchange=None, symbol_coinapi=None, amount_order=None, price=None, side=None, order_type=None, time_in_force=None, expire_time=None, exec_inst=None, local_vars_configuration=None):  # noqa: E501
        """OrderData - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._exchange_id = None
        self._id = None
        self._client_order_id_format_exchange = None
        self._exchange_order_id = None
        self._amount_open = None
        self._amount_filled = None
        self._status = None
        self._time_order = None
        self._error_message = None
        self._client_order_id = None
        self._symbol_exchange = None
        self._symbol_coinapi = None
        self._amount_order = None
        self._price = None
        self._side = None
        self._order_type = None
        self._time_in_force = None
        self._expire_time = None
        self._exec_inst = None
        self.discriminator = None

        if exchange_id is not None:
            self.exchange_id = exchange_id
        if id is not None:
            self.id = id
        if client_order_id_format_exchange is not None:
            self.client_order_id_format_exchange = client_order_id_format_exchange
        if exchange_order_id is not None:
            self.exchange_order_id = exchange_order_id
        if amount_open is not None:
            self.amount_open = amount_open
        if amount_filled is not None:
            self.amount_filled = amount_filled
        if status is not None:
            self.status = status
        if time_order is not None:
            self.time_order = time_order
        if error_message is not None:
            self.error_message = error_message
        if client_order_id is not None:
            self.client_order_id = client_order_id
        if symbol_exchange is not None:
            self.symbol_exchange = symbol_exchange
        if symbol_coinapi is not None:
            self.symbol_coinapi = symbol_coinapi
        if amount_order is not None:
            self.amount_order = amount_order
        if price is not None:
            self.price = price
        if side is not None:
            self.side = side
        if order_type is not None:
            self.order_type = order_type
        if time_in_force is not None:
            self.time_in_force = time_in_force
        if expire_time is not None:
            self.expire_time = expire_time
        if exec_inst is not None:
            self.exec_inst = exec_inst

    @property
    def exchange_id(self):
        """Gets the exchange_id of this OrderData.  # noqa: E501

        Exchange name  # noqa: E501

        :return: The exchange_id of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._exchange_id

    @exchange_id.setter
    def exchange_id(self, exchange_id):
        """Sets the exchange_id of this OrderData.

        Exchange name  # noqa: E501

        :param exchange_id: The exchange_id of this OrderData.  # noqa: E501
        :type: str
        """

        self._exchange_id = exchange_id

    @property
    def id(self):
        """Gets the id of this OrderData.  # noqa: E501

        Client unique identifier for the trade.  # noqa: E501

        :return: The id of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this OrderData.

        Client unique identifier for the trade.  # noqa: E501

        :param id: The id of this OrderData.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def client_order_id_format_exchange(self):
        """Gets the client_order_id_format_exchange of this OrderData.  # noqa: E501

        Hash client id  # noqa: E501

        :return: The client_order_id_format_exchange of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._client_order_id_format_exchange

    @client_order_id_format_exchange.setter
    def client_order_id_format_exchange(self, client_order_id_format_exchange):
        """Sets the client_order_id_format_exchange of this OrderData.

        Hash client id  # noqa: E501

        :param client_order_id_format_exchange: The client_order_id_format_exchange of this OrderData.  # noqa: E501
        :type: str
        """

        self._client_order_id_format_exchange = client_order_id_format_exchange

    @property
    def exchange_order_id(self):
        """Gets the exchange_order_id of this OrderData.  # noqa: E501

        Exchange order id  # noqa: E501

        :return: The exchange_order_id of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._exchange_order_id

    @exchange_order_id.setter
    def exchange_order_id(self, exchange_order_id):
        """Sets the exchange_order_id of this OrderData.

        Exchange order id  # noqa: E501

        :param exchange_order_id: The exchange_order_id of this OrderData.  # noqa: E501
        :type: str
        """

        self._exchange_order_id = exchange_order_id

    @property
    def amount_open(self):
        """Gets the amount_open of this OrderData.  # noqa: E501

        Amount open  # noqa: E501

        :return: The amount_open of this OrderData.  # noqa: E501
        :rtype: float
        """
        return self._amount_open

    @amount_open.setter
    def amount_open(self, amount_open):
        """Sets the amount_open of this OrderData.

        Amount open  # noqa: E501

        :param amount_open: The amount_open of this OrderData.  # noqa: E501
        :type: float
        """

        self._amount_open = amount_open

    @property
    def amount_filled(self):
        """Gets the amount_filled of this OrderData.  # noqa: E501

        Amount filled  # noqa: E501

        :return: The amount_filled of this OrderData.  # noqa: E501
        :rtype: float
        """
        return self._amount_filled

    @amount_filled.setter
    def amount_filled(self, amount_filled):
        """Sets the amount_filled of this OrderData.

        Amount filled  # noqa: E501

        :param amount_filled: The amount_filled of this OrderData.  # noqa: E501
        :type: float
        """

        self._amount_filled = amount_filled

    @property
    def status(self):
        """Gets the status of this OrderData.  # noqa: E501


        :return: The status of this OrderData.  # noqa: E501
        :rtype: OrdStatus
        """
        return self._status

    @status.setter
    def status(self, status):
        """Sets the status of this OrderData.


        :param status: The status of this OrderData.  # noqa: E501
        :type: OrdStatus
        """

        self._status = status

    @property
    def time_order(self):
        """Gets the time_order of this OrderData.  # noqa: E501

        History of order status changes  # noqa: E501

        :return: The time_order of this OrderData.  # noqa: E501
        :rtype: list[list[str]]
        """
        return self._time_order

    @time_order.setter
    def time_order(self, time_order):
        """Sets the time_order of this OrderData.

        History of order status changes  # noqa: E501

        :param time_order: The time_order of this OrderData.  # noqa: E501
        :type: list[list[str]]
        """

        self._time_order = time_order

    @property
    def error_message(self):
        """Gets the error_message of this OrderData.  # noqa: E501

        Error message  # noqa: E501

        :return: The error_message of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._error_message

    @error_message.setter
    def error_message(self, error_message):
        """Sets the error_message of this OrderData.

        Error message  # noqa: E501

        :param error_message: The error_message of this OrderData.  # noqa: E501
        :type: str
        """

        self._error_message = error_message

    @property
    def client_order_id(self):
        """Gets the client_order_id of this OrderData.  # noqa: E501

        Client unique identifier for the trade.  # noqa: E501

        :return: The client_order_id of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._client_order_id

    @client_order_id.setter
    def client_order_id(self, client_order_id):
        """Sets the client_order_id of this OrderData.

        Client unique identifier for the trade.  # noqa: E501

        :param client_order_id: The client_order_id of this OrderData.  # noqa: E501
        :type: str
        """

        self._client_order_id = client_order_id

    @property
    def symbol_exchange(self):
        """Gets the symbol_exchange of this OrderData.  # noqa: E501

        The symbol of the order.  # noqa: E501

        :return: The symbol_exchange of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._symbol_exchange

    @symbol_exchange.setter
    def symbol_exchange(self, symbol_exchange):
        """Sets the symbol_exchange of this OrderData.

        The symbol of the order.  # noqa: E501

        :param symbol_exchange: The symbol_exchange of this OrderData.  # noqa: E501
        :type: str
        """

        self._symbol_exchange = symbol_exchange

    @property
    def symbol_coinapi(self):
        """Gets the symbol_coinapi of this OrderData.  # noqa: E501

        The CoinAPI symbol of the order.  # noqa: E501

        :return: The symbol_coinapi of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._symbol_coinapi

    @symbol_coinapi.setter
    def symbol_coinapi(self, symbol_coinapi):
        """Sets the symbol_coinapi of this OrderData.

        The CoinAPI symbol of the order.  # noqa: E501

        :param symbol_coinapi: The symbol_coinapi of this OrderData.  # noqa: E501
        :type: str
        """

        self._symbol_coinapi = symbol_coinapi

    @property
    def amount_order(self):
        """Gets the amount_order of this OrderData.  # noqa: E501

        Quoted decimal amount to purchase.  # noqa: E501

        :return: The amount_order of this OrderData.  # noqa: E501
        :rtype: float
        """
        return self._amount_order

    @amount_order.setter
    def amount_order(self, amount_order):
        """Sets the amount_order of this OrderData.

        Quoted decimal amount to purchase.  # noqa: E501

        :param amount_order: The amount_order of this OrderData.  # noqa: E501
        :type: float
        """

        self._amount_order = amount_order

    @property
    def price(self):
        """Gets the price of this OrderData.  # noqa: E501

        Quoted decimal amount to spend per unit.  # noqa: E501

        :return: The price of this OrderData.  # noqa: E501
        :rtype: float
        """
        return self._price

    @price.setter
    def price(self, price):
        """Sets the price of this OrderData.

        Quoted decimal amount to spend per unit.  # noqa: E501

        :param price: The price of this OrderData.  # noqa: E501
        :type: float
        """

        self._price = price

    @property
    def side(self):
        """Gets the side of this OrderData.  # noqa: E501

        Buy or Sell  # noqa: E501

        :return: The side of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._side

    @side.setter
    def side(self, side):
        """Sets the side of this OrderData.

        Buy or Sell  # noqa: E501

        :param side: The side of this OrderData.  # noqa: E501
        :type: str
        """
        allowed_values = ["BUY", "SELL"]  # noqa: E501
        if self.local_vars_configuration.client_side_validation and side not in allowed_values:  # noqa: E501
            raise ValueError(
                "Invalid value for `side` ({0}), must be one of {1}"  # noqa: E501
                .format(side, allowed_values)
            )

        self._side = side

    @property
    def order_type(self):
        """Gets the order_type of this OrderData.  # noqa: E501

        The order type.  # noqa: E501

        :return: The order_type of this OrderData.  # noqa: E501
        :rtype: str
        """
        return self._order_type

    @order_type.setter
    def order_type(self, order_type):
        """Sets the order_type of this OrderData.

        The order type.  # noqa: E501

        :param order_type: The order_type of this OrderData.  # noqa: E501
        :type: str
        """
        allowed_values = ["LIMIT"]  # noqa: E501
        if self.local_vars_configuration.client_side_validation and order_type not in allowed_values:  # noqa: E501
            raise ValueError(
                "Invalid value for `order_type` ({0}), must be one of {1}"  # noqa: E501
                .format(order_type, allowed_values)
            )

        self._order_type = order_type

    @property
    def time_in_force(self):
        """Gets the time_in_force of this OrderData.  # noqa: E501


        :return: The time_in_force of this OrderData.  # noqa: E501
        :rtype: TimeInForce
        """
        return self._time_in_force

    @time_in_force.setter
    def time_in_force(self, time_in_force):
        """Sets the time_in_force of this OrderData.


        :param time_in_force: The time_in_force of this OrderData.  # noqa: E501
        :type: TimeInForce
        """

        self._time_in_force = time_in_force

    @property
    def expire_time(self):
        """Gets the expire_time of this OrderData.  # noqa: E501

        Required for orders with time_in_force = GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS  # noqa: E501

        :return: The expire_time of this OrderData.  # noqa: E501
        :rtype: date
        """
        return self._expire_time

    @expire_time.setter
    def expire_time(self, expire_time):
        """Sets the expire_time of this OrderData.

        Required for orders with time_in_force = GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS  # noqa: E501

        :param expire_time: The expire_time of this OrderData.  # noqa: E501
        :type: date
        """

        self._expire_time = expire_time

    @property
    def exec_inst(self):
        """Gets the exec_inst of this OrderData.  # noqa: E501

        Order execution instructions are documented in the separate section: <a href=\"#oeml-order-params-exec\">OEML / Starter Guide / Order parameters / Execution instructions</a>   # noqa: E501

        :return: The exec_inst of this OrderData.  # noqa: E501
        :rtype: list[str]
        """
        return self._exec_inst

    @exec_inst.setter
    def exec_inst(self, exec_inst):
        """Sets the exec_inst of this OrderData.

        Order execution instructions are documented in the separate section: <a href=\"#oeml-order-params-exec\">OEML / Starter Guide / Order parameters / Execution instructions</a>   # noqa: E501

        :param exec_inst: The exec_inst of this OrderData.  # noqa: E501
        :type: list[str]
        """
        allowed_values = ["MAKER_OR_CANCEL", "AUCTION_ONLY", "INDICATION_OF_INTEREST"]  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                not set(exec_inst).issubset(set(allowed_values))):  # noqa: E501
            raise ValueError(
                "Invalid values for `exec_inst` [{0}], must be a subset of [{1}]"  # noqa: E501
                .format(", ".join(map(str, set(exec_inst) - set(allowed_values))),  # noqa: E501
                        ", ".join(map(str, allowed_values)))
            )

        self._exec_inst = exec_inst

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, OrderData):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, OrderData):
            return True

        return self.to_dict() != other.to_dict()
