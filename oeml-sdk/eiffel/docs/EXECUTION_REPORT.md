# EXECUTION_REPORT

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchange_id** | [**STRING_32**](STRING_32.md) | Exchange identifier. | [default to null]
**client_order_id** | [**STRING_32**](STRING_32.md) | Unique identifier for the order assigned by the &#x60;OEML API&#x60; client. | [default to null]
**symbol_exchange** | [**STRING_32**](STRING_32.md) | Exchange symbol. One of the properties (&#x60;symbol_exchange&#x60;, &#x60;symbol_coinapi&#x60;) is required to identify the market for the order. | [optional] [default to null]
**symbol_coinapi** | [**STRING_32**](STRING_32.md) | CoinAPI symbol. One of the properties (&#x60;symbol_exchange&#x60;, &#x60;symbol_coinapi&#x60;) is required to identify the market for the order. | [optional] [default to null]
**amount_order** | **REAL_32** | Order quantity. | [default to null]
**price** | **REAL_32** | Order price. | [default to null]
**side** | [**ORD_SIDE**](OrdSide.md) |  | [default to null]
**order_type** | [**ORD_TYPE**](OrdType.md) |  | [default to null]
**time_in_force** | [**TIME_IN_FORCE**](TimeInForce.md) |  | [default to null]
**expire_time** | [**DATE**](DATE.md) | Expiration time. Conditionaly required for orders with time_in_force &#x3D; &#x60;GOOD_TILL_TIME_EXCHANGE&#x60; or &#x60;GOOD_TILL_TIME_OEML&#x60;. | [optional] [default to null]
**exec_inst** | [**LIST [STRING_32]**](STRING_32.md) | Order execution instructions are documented in the separate section: &lt;a href&#x3D;\&quot;#oeml-order-params-exec\&quot;&gt;OEML / Starter Guide / Order parameters / Execution instructions&lt;/a&gt; | [optional] [default to null]
**client_order_id_format_exchange** | [**STRING_32**](STRING_32.md) | Hash client id | [default to null]
**exchange_order_id** | [**STRING_32**](STRING_32.md) | Exchange order id | [optional] [default to null]
**amount_open** | **REAL_32** | Amount open | [default to null]
**amount_filled** | **REAL_32** | Amount filled | [default to null]
**status** | [**ORD_STATUS**](OrdStatus.md) |  | [default to null]
**time_order** | [**LIST [LIST [STRING_32]]**](LIST.md) | Timestamped history of order status changes. | [default to null]
**error_message** | [**STRING_32**](STRING_32.md) | Error message | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


