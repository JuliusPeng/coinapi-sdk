# BalancesApi

All URIs are relative to *http://localhost:8080*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1BalancesGet**](BalancesApi.md#v1BalancesGet) | **GET** /v1/balances | Get balances


<a name="v1BalancesGet"></a>
# **v1BalancesGet**
> kotlin.Array&lt;Balance&gt; v1BalancesGet(exchangeId)

Get balances

Returns all of your balances, including available balance.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = BalancesApi()
val exchangeId : kotlin.String = KRAKEN // kotlin.String | Exchange name
try {
    val result : kotlin.Array<Balance> = apiInstance.v1BalancesGet(exchangeId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling BalancesApi#v1BalancesGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling BalancesApi#v1BalancesGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **kotlin.String**| Exchange name | [optional]

### Return type

[**kotlin.Array&lt;Balance&gt;**](Balance.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

