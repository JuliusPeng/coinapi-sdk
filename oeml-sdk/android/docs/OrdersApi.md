# OrdersApi

All URIs are relative to *http://localhost:8080*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1OrdersCancelAllPost**](OrdersApi.md#v1OrdersCancelAllPost) | **POST** /v1/orders/cancel/all | Cancel all orders request
[**v1OrdersCancelPost**](OrdersApi.md#v1OrdersCancelPost) | **POST** /v1/orders/cancel | Cancel order request
[**v1OrdersGet**](OrdersApi.md#v1OrdersGet) | **GET** /v1/orders | Get all orders
[**v1OrdersPost**](OrdersApi.md#v1OrdersPost) | **POST** /v1/orders | Send new order
[**v1OrdersStatusClientOrderIdGet**](OrdersApi.md#v1OrdersStatusClientOrderIdGet) | **GET** /v1/orders/status/{client_order_id} | Get order execution report



## v1OrdersCancelAllPost

> Message v1OrdersCancelAllPost(cancelOrderAllRequest)

Cancel all orders request

This request cancels all open orders on single specified exchange.

### Example

```java
// Import classes:
//import org.openapitools.client.api.OrdersApi;

OrdersApi apiInstance = new OrdersApi();
CancelOrderAllRequest cancelOrderAllRequest = new CancelOrderAllRequest(); // CancelOrderAllRequest | CancelOrderAllRequest object.
try {
    Message result = apiInstance.v1OrdersCancelAllPost(cancelOrderAllRequest);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling OrdersApi#v1OrdersCancelAllPost");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cancelOrderAllRequest** | [**CancelOrderAllRequest**](CancelOrderAllRequest.md)| CancelOrderAllRequest object. |

### Return type

[**Message**](Message.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, appliction/json


## v1OrdersCancelPost

> OrderExecutionReport v1OrdersCancelPost(cancelOrderSingleRequest)

Cancel order request

Request cancel for an existing order. The order can be canceled using the &#x60;client_order_id&#x60; or &#x60;exchange_order_id&#x60;.

### Example

```java
// Import classes:
//import org.openapitools.client.api.OrdersApi;

OrdersApi apiInstance = new OrdersApi();
CancelOrderSingleRequest cancelOrderSingleRequest = new CancelOrderSingleRequest(); // CancelOrderSingleRequest | CancelOrderSingleRequest object.
try {
    OrderExecutionReport result = apiInstance.v1OrdersCancelPost(cancelOrderSingleRequest);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling OrdersApi#v1OrdersCancelPost");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cancelOrderSingleRequest** | [**CancelOrderSingleRequest**](CancelOrderSingleRequest.md)| CancelOrderSingleRequest object. |

### Return type

[**OrderExecutionReport**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, appliction/json


## v1OrdersGet

> List&lt;OrderExecutionReport&gt; v1OrdersGet(exchangeId)

Get all orders

Get last execution reports for open orders across all or single exchange.

### Example

```java
// Import classes:
//import org.openapitools.client.api.OrdersApi;

OrdersApi apiInstance = new OrdersApi();
String exchangeId = KRAKEN; // String | Filter the open orders to the specific exchange.
try {
    List<OrderExecutionReport> result = apiInstance.v1OrdersGet(exchangeId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling OrdersApi#v1OrdersGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **String**| Filter the open orders to the specific exchange. | [optional] [default to null]

### Return type

[**List&lt;OrderExecutionReport&gt;**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, appliction/json


## v1OrdersPost

> OrderExecutionReport v1OrdersPost(newOrderSingle)

Send new order

This request creating new order for the specific exchange.

### Example

```java
// Import classes:
//import org.openapitools.client.api.OrdersApi;

OrdersApi apiInstance = new OrdersApi();
NewOrderSingle newOrderSingle = new NewOrderSingle(); // NewOrderSingle | NewOrderSingle object.
try {
    OrderExecutionReport result = apiInstance.v1OrdersPost(newOrderSingle);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling OrdersApi#v1OrdersPost");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **newOrderSingle** | [**NewOrderSingle**](NewOrderSingle.md)| NewOrderSingle object. |

### Return type

[**OrderExecutionReport**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json, appliction/json


## v1OrdersStatusClientOrderIdGet

> OrderExecutionReport v1OrdersStatusClientOrderIdGet(clientOrderId)

Get order execution report

Get the last order execution report for the specified order. The requested order does not need to be active or opened.

### Example

```java
// Import classes:
//import org.openapitools.client.api.OrdersApi;

OrdersApi apiInstance = new OrdersApi();
String clientOrderId = 6ab36bc1-344d-432e-ac6d-0bf44ee64c2b; // String | The unique identifier of the order assigned by the client.
try {
    OrderExecutionReport result = apiInstance.v1OrdersStatusClientOrderIdGet(clientOrderId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling OrdersApi#v1OrdersStatusClientOrderIdGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientOrderId** | **String**| The unique identifier of the order assigned by the client. | [default to null]

### Return type

[**OrderExecutionReport**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

