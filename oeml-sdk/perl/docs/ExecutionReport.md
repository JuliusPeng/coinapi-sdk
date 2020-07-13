# WWW::OpenAPIClient::Object::ExecutionReport

## Load the model package
```perl
use WWW::OpenAPIClient::Object::ExecutionReport;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchange_id** | **string** | Exchange name | [optional] 
**id** | **string** | Client unique identifier for the trade. | [optional] 
**client_order_id_format_exchange** | **string** | Hash client id | [optional] 
**exchange_order_id** | **string** | Exchange order id | [optional] 
**amount_open** | **double** | Amount open | [optional] 
**amount_filled** | **double** | Amount filled | [optional] 
**status** | [**OrdStatus**](OrdStatus.md) |  | [optional] 
**time_order** | **ARRAY[ARRAY[string]]** | History of order status changes | [optional] 
**error_message** | **string** | Error message | [optional] 
**client_order_id** | **string** | Client unique identifier for the trade. | [optional] 
**symbol_exchange** | **string** | The symbol of the order. | [optional] 
**symbol_coinapi** | **string** | The CoinAPI symbol of the order. | [optional] 
**amount_order** | **double** | Quoted decimal amount to purchase. | [optional] 
**price** | **double** | Quoted decimal amount to spend per unit. | [optional] 
**side** | **string** | Buy or Sell | [optional] 
**order_type** | **string** | The order type. | [optional] 
**time_in_force** | [**TimeInForce**](TimeInForce.md) |  | [optional] 
**expire_time** | **DateTime** | Required for orders with time_in_force &#x3D; GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS | [optional] 
**exec_inst** | **ARRAY[string]** | Order execution instructions are documented in the separate section: &lt;a href&#x3D;\&quot;#oeml-order-params-exec\&quot;&gt;OEML / Starter Guide / Order parameters / Execution instructions&lt;/a&gt; | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


