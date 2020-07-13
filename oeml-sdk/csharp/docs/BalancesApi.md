# CoinAPI.OMS.REST.V1.Api.BalancesApi

All URIs are relative to *http://localhost:8080*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V1BalancesGet**](BalancesApi.md#v1balancesget) | **GET** /v1/balances | Get balances



## V1BalancesGet

> List&lt;Balance&gt; V1BalancesGet (string exchangeId = null)

Get balances

Returns all of your balances, including available balance.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using CoinAPI.OMS.REST.V1.Api;
using CoinAPI.OMS.REST.V1.Client;
using CoinAPI.OMS.REST.V1.Model;

namespace Example
{
    public class V1BalancesGetExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "http://localhost:8080";
            var apiInstance = new BalancesApi(Configuration.Default);
            var exchangeId = KRAKEN;  // string | Exchange name (optional) 

            try
            {
                // Get balances
                List<Balance> result = apiInstance.V1BalancesGet(exchangeId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling BalancesApi.V1BalancesGet: " + e.Message );
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
 **exchangeId** | **string**| Exchange name | [optional] 

### Return type

[**List&lt;Balance&gt;**](Balance.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Result |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

