# OpenapiClient::PositionsApi

All URIs are relative to *http://localhost:8080*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1_positions_get**](PositionsApi.md#v1_positions_get) | **GET** /v1/positions | Get positions



## v1_positions_get

> Array&lt;Position&gt; v1_positions_get(opts)

Get positions

Returns all of your positions.

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::PositionsApi.new
opts = {
  exchange_id: 'KRAKEN' # String | Exchange name
}

begin
  #Get positions
  result = api_instance.v1_positions_get(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling PositionsApi->v1_positions_get: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchange_id** | **String**| Exchange name | [optional] 

### Return type

[**Array&lt;Position&gt;**](Position.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

