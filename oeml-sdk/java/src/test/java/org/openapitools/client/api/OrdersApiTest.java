/*
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
 *
 * The version of the OpenAPI document: v1
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.CancelOrderAllRequest;
import org.openapitools.client.model.CancelOrderSingleRequest;
import org.openapitools.client.model.Message;
import org.openapitools.client.model.NewOrderSingle;
import org.openapitools.client.model.OrderExecutionReport;
import org.openapitools.client.model.ValidationError;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for OrdersApi
 */
@Ignore
public class OrdersApiTest {

    private final OrdersApi api = new OrdersApi();

    
    /**
     * Cancel all orders
     *
     * This request cancels all open orders across all or single specified exchange.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void v1OrdersCancelAllPostTest() throws ApiException {
        CancelOrderAllRequest cancelOrderAllRequest = null;
        Message response = api.v1OrdersCancelAllPost(cancelOrderAllRequest);

        // TODO: test validations
    }
    
    /**
     * Cancel order
     *
     * This request cancels an existing order. The order can be canceled by the client order ID or exchange order ID.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void v1OrdersCancelPostTest() throws ApiException {
        CancelOrderSingleRequest cancelOrderSingleRequest = null;
        OrderExecutionReport response = api.v1OrdersCancelPost(cancelOrderSingleRequest);

        // TODO: test validations
    }
    
    /**
     * Get all orders
     *
     * Get all current open orders across all or single specified exchange.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void v1OrdersGetTest() throws ApiException {
        String exchangeId = null;
        List<OrderExecutionReport> response = api.v1OrdersGet(exchangeId);

        // TODO: test validations
    }
    
    /**
     * Create new order
     *
     * This request creating new order for the specific exchange.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void v1OrdersPostTest() throws ApiException {
        NewOrderSingle newOrderSingle = null;
        OrderExecutionReport response = api.v1OrdersPost(newOrderSingle);

        // TODO: test validations
    }
    
    /**
     * Get order status
     *
     * Get the current order status for the specified order. The requested order can no longer be active.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void v1OrdersStatusClientOrderIdGetTest() throws ApiException {
        String clientOrderId = null;
        OrderExecutionReport response = api.v1OrdersStatusClientOrderIdGet(clientOrderId);

        // TODO: test validations
    }
    
}
