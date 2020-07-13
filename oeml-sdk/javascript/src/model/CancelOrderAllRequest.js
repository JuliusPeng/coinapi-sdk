/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
 *
 * The version of the OpenAPI document: v1
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';

/**
 * The CancelOrderAllRequest model module.
 * @module model/CancelOrderAllRequest
 * @version v1
 */
class CancelOrderAllRequest {
    /**
     * Constructs a new <code>CancelOrderAllRequest</code>.
     * Cancel all orders request object.
     * @alias module:model/CancelOrderAllRequest
     * @param exchangeId {String} Identifier of the exchange from which active orders should be canceled.
     */
    constructor(exchangeId) { 
        
        CancelOrderAllRequest.initialize(this, exchangeId);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, exchangeId) { 
        obj['exchange_id'] = exchangeId;
    }

    /**
     * Constructs a <code>CancelOrderAllRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CancelOrderAllRequest} obj Optional instance to populate.
     * @return {module:model/CancelOrderAllRequest} The populated <code>CancelOrderAllRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CancelOrderAllRequest();

            if (data.hasOwnProperty('exchange_id')) {
                obj['exchange_id'] = ApiClient.convertToType(data['exchange_id'], 'String');
            }
        }
        return obj;
    }


}

/**
 * Identifier of the exchange from which active orders should be canceled.
 * @member {String} exchange_id
 */
CancelOrderAllRequest.prototype['exchange_id'] = undefined;






export default CancelOrderAllRequest;

