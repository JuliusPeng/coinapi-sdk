/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import * as models from './models';

/**
 * The order execution report message.
 */
export interface OrderExecutionReportAllOf {
    /**
     * The unique identifier of the order assigned by the client converted to the exchange order tag format for the purpose of tracking it.
     */
    client_order_id_format_exchange: string;

    /**
     * The unique identifier of the order assigned by the exchange.
     */
    exchange_order_id?: string;

    /**
     * Amount open
     */
    amount_open: number;

    /**
     * Amount filled
     */
    amount_filled: number;

    status: models.OrdStatus;

    /**
     * Timestamped history of order status changes.
     */
    time_order: Array<Array<string>>;

    /**
     * Error message
     */
    error_message?: string;

}
