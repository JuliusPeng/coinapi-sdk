# CoinAPI.OMS.REST.V1.Api.OrdersApi

All URIs are relative to *http://localhost:8080*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V1OrdersCancelAllPost**](OrdersApi.md#v1orderscancelallpost) | **POST** /v1/orders/cancel/all | Cancel all orders request
[**V1OrdersCancelPost**](OrdersApi.md#v1orderscancelpost) | **POST** /v1/orders/cancel | Cancel order request
[**V1OrdersGet**](OrdersApi.md#v1ordersget) | **GET** /v1/orders | Get open orders
[**V1OrdersPost**](OrdersApi.md#v1orderspost) | **POST** /v1/orders | Send new order
[**V1OrdersStatusClientOrderIdGet**](OrdersApi.md#v1ordersstatusclientorderidget) | **GET** /v1/orders/status/{client_order_id} | Get order execution report



## V1OrdersCancelAllPost

> Message V1OrdersCancelAllPost (CancelOrderAllRequest cancelOrderAllRequest)

Cancel all orders request

This request cancels all open orders on single specified exchange.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using CoinAPI.OMS.REST.V1.Api;
using CoinAPI.OMS.REST.V1.Client;
using CoinAPI.OMS.REST.V1.Model;

namespace Example
{
    public class V1OrdersCancelAllPostExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost:8080";
            var apiInstance = new OrdersApi(Configuration.Default);
            var cancelOrderAllRequest = new CancelOrderAllRequest(); // CancelOrderAllRequest | CancelOrderAllRequest object.

            try
            {
                // Cancel all orders request
                Message result = apiInstance.V1OrdersCancelAllPost(cancelOrderAllRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling OrdersApi.V1OrdersCancelAllPost: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Result |  -  |
| **400** | Input model validation errors. |  -  |
| **490** | Exchange is unreachable. |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## V1OrdersCancelPost

> OrderExecutionReport V1OrdersCancelPost (CancelOrderSingleRequest cancelOrderSingleRequest)

Cancel order request

Request cancel for an existing order. The order can be canceled using the `client_order_id` or `exchange_order_id`.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using CoinAPI.OMS.REST.V1.Api;
using CoinAPI.OMS.REST.V1.Client;
using CoinAPI.OMS.REST.V1.Model;

namespace Example
{
    public class V1OrdersCancelPostExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost:8080";
            var apiInstance = new OrdersApi(Configuration.Default);
            var cancelOrderSingleRequest = new CancelOrderSingleRequest(); // CancelOrderSingleRequest | CancelOrderSingleRequest object.

            try
            {
                // Cancel order request
                OrderExecutionReport result = apiInstance.V1OrdersCancelPost(cancelOrderSingleRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling OrdersApi.V1OrdersCancelPost: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The last execution report for the order for which cancelation was requested. |  -  |
| **400** | Input model validation errors. |  -  |
| **490** | Exchange is unreachable. |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## V1OrdersGet

> List&lt;OrderExecutionReport&gt; V1OrdersGet (string exchangeId = null)

Get open orders

Get last execution reports for open orders across all or single exchange.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using CoinAPI.OMS.REST.V1.Api;
using CoinAPI.OMS.REST.V1.Client;
using CoinAPI.OMS.REST.V1.Model;

namespace Example
{
    public class V1OrdersGetExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost:8080";
            var apiInstance = new OrdersApi(Configuration.Default);
            var exchangeId = KRAKEN;  // string | Filter the open orders to the specific exchange. (optional) 

            try
            {
                // Get open orders
                List<OrderExecutionReport> result = apiInstance.V1OrdersGet(exchangeId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling OrdersApi.V1OrdersGet: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **string**| Filter the open orders to the specific exchange. | [optional] 

### Return type

[**List&lt;OrderExecutionReport&gt;**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, appliction/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Collection of order execution reports. |  -  |
| **490** | Filtered exchange is unreachable. |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## V1OrdersPost

> OrderExecutionReport V1OrdersPost (NewOrderSingle newOrderSingle)

Send new order

This request creating new order for the specific exchange.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using CoinAPI.OMS.REST.V1.Api;
using CoinAPI.OMS.REST.V1.Client;
using CoinAPI.OMS.REST.V1.Model;

namespace Example
{
    public class V1OrdersPostExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost:8080";
            var apiInstance = new OrdersApi(Configuration.Default);
            var newOrderSingle = new NewOrderSingle(); // NewOrderSingle | NewOrderSingle object.

            try
            {
                // Send new order
                OrderExecutionReport result = apiInstance.V1OrdersPost(newOrderSingle);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling OrdersApi.V1OrdersPost: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Created |  -  |
| **400** | Input model validation errors. |  -  |
| **490** | Exchange is unreachable. |  -  |
| **504** | Exchange didn&#39;t responded in the defined timeout. |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## V1OrdersStatusClientOrderIdGet

> OrderExecutionReport V1OrdersStatusClientOrderIdGet (string clientOrderId)

Get order execution report

Get the last order execution report for the specified order. The requested order does not need to be active or opened.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using CoinAPI.OMS.REST.V1.Api;
using CoinAPI.OMS.REST.V1.Client;
using CoinAPI.OMS.REST.V1.Model;

namespace Example
{
    public class V1OrdersStatusClientOrderIdGetExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost:8080";
            var apiInstance = new OrdersApi(Configuration.Default);
            var clientOrderId = 6ab36bc1-344d-432e-ac6d-0bf44ee64c2b;  // string | The unique identifier of the order assigned by the client.

            try
            {
                // Get order execution report
                OrderExecutionReport result = apiInstance.V1OrdersStatusClientOrderIdGet(clientOrderId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling OrdersApi.V1OrdersStatusClientOrderIdGet: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientOrderId** | **string**| The unique identifier of the order assigned by the client. | 

### Return type

[**OrderExecutionReport**](OrderExecutionReport.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The last execution report of the requested order. |  -  |
| **404** | The requested order was not found. |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

