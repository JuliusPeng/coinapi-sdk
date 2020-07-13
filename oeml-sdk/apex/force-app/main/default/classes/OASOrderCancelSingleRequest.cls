/*
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol.\n
 *
 * The version of the OpenAPI document: v1
 * 
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASOrderCancelSingleRequest
 */
public class OASOrderCancelSingleRequest implements OAS.MappedProperties {
    /**
     * Exchange name
     * @return exchangeId
     */
    public String exchangeId { get; set; }

    /**
     * Order Id
     * @return exchangeOrderId
     */
    public String exchangeOrderId { get; set; }

    /**
     * Client order Id
     * @return clientOrderId
     */
    public String clientOrderId { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'exchange_order_id' => 'exchangeOrderId',
        'client_order_id' => 'clientOrderId'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASOrderCancelSingleRequest getExample() {
        OASOrderCancelSingleRequest orderCancelSingleRequest = new OASOrderCancelSingleRequest();
          orderCancelSingleRequest.exchangeId = 'KRAKEN';
          orderCancelSingleRequest.exchangeOrderId = 'd8574207d9e3b16a4a5511753eeef1751';
          orderCancelSingleRequest.clientOrderId = 'A12345';
        return orderCancelSingleRequest;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASOrderCancelSingleRequest) {           
            OASOrderCancelSingleRequest orderCancelSingleRequest = (OASOrderCancelSingleRequest) obj;
            return this.exchangeId == orderCancelSingleRequest.exchangeId
                && this.exchangeOrderId == orderCancelSingleRequest.exchangeOrderId
                && this.clientOrderId == orderCancelSingleRequest.clientOrderId;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (exchangeId == null ? 0 : System.hashCode(exchangeId));
        hashCode = (17 * hashCode) + (exchangeOrderId == null ? 0 : System.hashCode(exchangeOrderId));
        hashCode = (17 * hashCode) + (clientOrderId == null ? 0 : System.hashCode(clientOrderId));
        return hashCode;
    }
}
