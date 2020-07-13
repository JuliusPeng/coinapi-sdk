# # OrderExecutionReport

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchange_id** | **string** | Exchange identifier. | 
**client_order_id** | **string** | The unique identifier of the order assigned by the client. | 
**symbol_exchange** | **string** | Exchange symbol. One of the properties (&#x60;symbol_exchange&#x60;, &#x60;symbol_coinapi&#x60;) are required to identify the market for the new order. | [optional] 
**symbol_coinapi** | **string** | CoinAPI symbol. One of the properties (&#x60;symbol_exchange&#x60;, &#x60;symbol_coinapi&#x60;) are required to identify the market for the new order. | [optional] 
**amount_order** | **float** | Order quantity. | 
**price** | **float** | Order price. | 
**side** | [**\OpenAPI\Client\Model\OrdSide**](OrdSide.md) |  | 
**order_type** | [**\OpenAPI\Client\Model\OrdType**](OrdType.md) |  | 
**time_in_force** | [**\OpenAPI\Client\Model\TimeInForce**](TimeInForce.md) |  | 
**expire_time** | [**\DateTime**](\DateTime.md) | Expiration time. Conditionaly required for orders with time_in_force &#x3D; &#x60;GOOD_TILL_TIME_EXCHANGE&#x60; or &#x60;GOOD_TILL_TIME_OEML&#x60;. | [optional] 
**exec_inst** | **string[]** | Order execution instructions are documented in the separate section: &lt;a href&#x3D;\&quot;#oeml-order-params-exec\&quot;&gt;OEML / Starter Guide / Order parameters / Execution instructions&lt;/a&gt; | [optional] 
**client_order_id_format_exchange** | **string** | The unique identifier of the order assigned by the client converted to the exchange order tag format for the purpose of tracking it. | 
**exchange_order_id** | **string** | The unique identifier of the order assigned by the exchange. | [optional] 
**amount_open** | **float** | Amount open | 
**amount_filled** | **float** | Amount filled | 
**status** | [**\OpenAPI\Client\Model\OrdStatus**](OrdStatus.md) |  | 
**time_order** | [**string[][]**](array.md) | Timestamped history of order status changes. | 
**error_message** | **string** | Error message | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)


