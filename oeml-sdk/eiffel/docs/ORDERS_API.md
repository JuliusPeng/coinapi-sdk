# ORDERS_API

All URIs are relative to *http://localhost:8080*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**v1_orders_cancel_all_post**](ORDERS_API.md#v1_orders_cancel_all_post) | **Post** /v1/orders/cancel/all | Cancel all orders request
[**v1_orders_cancel_post**](ORDERS_API.md#v1_orders_cancel_post) | **Post** /v1/orders/cancel | Cancel order request
[**v1_orders_get**](ORDERS_API.md#v1_orders_get) | **Get** /v1/orders | Get open orders
[**v1_orders_post**](ORDERS_API.md#v1_orders_post) | **Post** /v1/orders | Send new order
[**v1_orders_status_client_order_id_get**](ORDERS_API.md#v1_orders_status_client_order_id_get) | **Get** /v1/orders/status/{client_order_id} | Get order execution report


# **v1_orders_cancel_all_post**
> v1_orders_cancel_all_post (cancel_order_all_request: CANCEL_ORDER_ALL_REQUEST ): detachable MESSAGE
	

Cancel all orders request

This request cancels all open orders on single specified exchange.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cancel_order_all_request** | [**CANCEL_ORDER_ALL_REQUEST**](CANCEL_ORDER_ALL_REQUEST.md)| CancelOrderAllRequest object. | 

### Return type

[**MESSAGE**](Message.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, appliction/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_orders_cancel_post**
> v1_orders_cancel_post (cancel_order_single_request: CANCEL_ORDER_SINGLE_REQUEST ): detachable ORDER_EXECUTION_REPORT
	

Cancel order request

Request cancel for an existing order. The order can be canceled using the `client_order_id` or `exchange_order_id`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cancel_order_single_request** | [**CANCEL_ORDER_SINGLE_REQUEST**](CANCEL_ORDER_SINGLE_REQUEST.md)| CancelOrderSingleRequest object. | 

### Return type

[**ORDER_EXECUTION_REPORT**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, appliction/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_orders_get**
> v1_orders_get (exchange_id:  detachable STRING_32 ): detachable LIST [ORDER_EXECUTION_REPORT]
	

Get open orders

Get last execution reports for open orders across all or single exchange.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchange_id** | **STRING_32**| Filter the open orders to the specific exchange. | [optional] [default to null]

### Return type

[**LIST [ORDER_EXECUTION_REPORT]**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, appliction/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_orders_post**
> v1_orders_post (new_order_single: NEW_ORDER_SINGLE ): detachable ORDER_EXECUTION_REPORT
	

Send new order

This request creating new order for the specific exchange.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **new_order_single** | [**NEW_ORDER_SINGLE**](NEW_ORDER_SINGLE.md)| NewOrderSingle object. | 

### Return type

[**ORDER_EXECUTION_REPORT**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, appliction/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_orders_status_client_order_id_get**
> v1_orders_status_client_order_id_get (client_order_id: STRING_32 ): detachable ORDER_EXECUTION_REPORT
	

Get order execution report

Get the last order execution report for the specified order. The requested order does not need to be active or opened.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **client_order_id** | **STRING_32**| The unique identifier of the order assigned by the client. | [default to null]

### Return type

[**ORDER_EXECUTION_REPORT**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

