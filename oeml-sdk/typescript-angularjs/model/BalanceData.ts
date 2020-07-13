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

export interface BalanceData {
    /**
     * Exchange identifier.
     */
    "id"?: string;
    /**
     * Exchange currency code.
     */
    "symbol_exchange"?: string;
    /**
     * CoinAPI currency code.
     */
    "symbol_coinapi"?: string;
    /**
     * Value of the current total currency balance on the exchange.
     */
    "balance"?: number;
    /**
     * Value of the current available currency balance on the exchange that can be used as collateral.
     */
    "available"?: number;
    /**
     * Value of the current locked currency balance by the exchange.
     */
    "locked"?: number;
    /**
     * Source of the last modification. 
     */
    "update_origin"?: BalanceData.UpdateOriginEnum;
}

export namespace BalanceData {
    export enum UpdateOriginEnum {
        INITIALIZATION = <any> 'INITIALIZATION',
        BALANCEMANAGER = <any> 'BALANCE_MANAGER',
        EXCHANGE = <any> 'EXCHANGE'
    }
}
