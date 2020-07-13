# ORDERS_DATA

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchange_id** | [**STRING_32**](STRING_32.md) | Exchange name | [optional] [default to null]
**id** | [**STRING_32**](STRING_32.md) | Client unique identifier for the trade. | [optional] [default to null]
**client_order_id_format_exchange** | [**STRING_32**](STRING_32.md) | Hash client id | [optional] [default to null]
**exchange_order_id** | [**STRING_32**](STRING_32.md) | Exchange order id | [optional] [default to null]
**amount_open** | **REAL_32** | Amount open | [optional] [default to null]
**amount_filled** | **REAL_32** | Amount filled | [optional] [default to null]
**status** | [**ORD_STATUS**](OrdStatus.md) |  | [optional] [default to null]
**time_order** | [**LIST [LIST [STRING_32]]**](LIST.md) | History of order status changes | [optional] [default to null]
**error_message** | [**STRING_32**](STRING_32.md) | Error message | [optional] [default to null]
**client_order_id** | [**STRING_32**](STRING_32.md) | Client unique identifier for the trade. | [optional] [default to null]
**symbol_exchange** | [**STRING_32**](STRING_32.md) | The symbol of the order. | [optional] [default to null]
**symbol_coinapi** | [**STRING_32**](STRING_32.md) | The CoinAPI symbol of the order. | [optional] [default to null]
**amount_order** | **REAL_32** | Quoted decimal amount to purchase. | [optional] [default to null]
**price** | **REAL_32** | Quoted decimal amount to spend per unit. | [optional] [default to null]
**side** | [**STRING_32**](STRING_32.md) | Buy or Sell | [optional] [default to null]
**order_type** | [**STRING_32**](STRING_32.md) | The order type. | [optional] [default to null]
**time_in_force** | [**TIME_IN_FORCE**](TimeInForce.md) |  | [optional] [default to null]
**expire_time** | [**DATE**](DATE.md) | Required for orders with time_in_force &#x3D; GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS | [optional] [default to null]
**exec_inst** | [**LIST [STRING_32]**](STRING_32.md) | Order execution instructions are documented in the separate section: &lt;a href&#x3D;\&quot;#oeml-order-params-exec\&quot;&gt;OEML / Starter Guide / Order parameters / Execution instructions&lt;/a&gt; | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


