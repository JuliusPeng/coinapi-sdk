# OpenAPI\Client\PositionsApi

All URIs are relative to *https://13d16e9d-d8b1-4ef4-bc4a-ed8156b2b159.mock.pstmn.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1PositionsGet**](PositionsApi.md#v1PositionsGet) | **GET** /v1/positions | Get open positions



## v1PositionsGet

> \OpenAPI\Client\Model\Position[] v1PositionsGet($exchange_id)

Get open positions

Get current open positions across all or single exchange.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


$apiInstance = new OpenAPI\Client\Api\PositionsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$exchange_id = KRAKEN; // string | Filter the balances to the specific exchange.

try {
    $result = $apiInstance->v1PositionsGet($exchange_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling PositionsApi->v1PositionsGet: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchange_id** | **string**| Filter the balances to the specific exchange. | [optional]

### Return type

[**\OpenAPI\Client\Model\Position[]**](../Model/Position.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, appliction/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)

