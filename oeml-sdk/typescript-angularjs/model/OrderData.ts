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
 */

import * as models from './models';

export interface OrderData {
    /**
     * Exchange name
     */
    "exchange_id"?: string;
    /**
     * Client unique identifier for the trade.
     */
    "id"?: string;
    /**
     * Hash client id
     */
    "client_order_id_format_exchange"?: string;
    /**
     * Exchange order id
     */
    "exchange_order_id"?: string;
    /**
     * Amount open
     */
    "amount_open"?: number;
    /**
     * Amount filled
     */
    "amount_filled"?: number;
    "status"?: models.OrdStatus;
    /**
     * History of order status changes
     */
    "time_order"?: Array<Array<string>>;
    /**
     * Error message
     */
    "error_message"?: string;
    /**
     * Client unique identifier for the trade.
     */
    "client_order_id"?: string;
    /**
     * The symbol of the order.
     */
    "symbol_exchange"?: string;
    /**
     * The CoinAPI symbol of the order.
     */
    "symbol_coinapi"?: string;
    /**
     * Quoted decimal amount to purchase.
     */
    "amount_order"?: number;
    /**
     * Quoted decimal amount to spend per unit.
     */
    "price"?: number;
    /**
     * Buy or Sell
     */
    "side"?: OrderData.SideEnum;
    /**
     * The order type.
     */
    "order_type"?: OrderData.OrderTypeEnum;
    "time_in_force"?: models.TimeInForce;
    /**
     * Required for orders with time_in_force = GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS
     */
    "expire_time"?: string;
    /**
     * Order execution instructions are documented in the separate section: <a href=\"#oeml-order-params-exec\">OEML / Starter Guide / Order parameters / Execution instructions</a> 
     */
    "exec_inst"?: Array<OrderData.ExecInstEnum>;
}

export namespace OrderData {
    export enum SideEnum {
        BUY = <any> 'BUY',
        SELL = <any> 'SELL'
    }
    export enum OrderTypeEnum {
        LIMIT = <any> 'LIMIT'
    }
    export enum ExecInstEnum {
        MAKERORCANCEL = <any> 'MAKER_OR_CANCEL',
        AUCTIONONLY = <any> 'AUCTION_ONLY',
        INDICATIONOFINTEREST = <any> 'INDICATION_OF_INTEREST'
    }
}
