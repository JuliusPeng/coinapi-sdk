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
package org.openapitools.client.models

import org.openapitools.client.models.OrdStatus
import org.openapitools.client.models.TimeInForce

import com.squareup.moshi.Json
/**
 * 
 * @param exchangeId Exchange name
 * @param id Client unique identifier for the trade.
 * @param clientOrderIdFormatExchange Hash client id
 * @param exchangeOrderId Exchange order id
 * @param amountOpen Amount open
 * @param amountFilled Amount filled
 * @param status 
 * @param timeOrder History of order status changes
 * @param errorMessage Error message
 * @param clientOrderId Client unique identifier for the trade.
 * @param symbolExchange The symbol of the order.
 * @param symbolCoinapi The CoinAPI symbol of the order.
 * @param amountOrder Quoted decimal amount to purchase.
 * @param price Quoted decimal amount to spend per unit.
 * @param side Buy or Sell
 * @param orderType The order type.
 * @param timeInForce 
 * @param expireTime Required for orders with time_in_force = GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS
 * @param execInst Order execution instructions are documented in the separate section: <a href=\"#oeml-order-params-exec\">OEML / Starter Guide / Order parameters / Execution instructions</a> 
 */

data class OrderData (
    /* Exchange name */
    @Json(name = "exchange_id")
    val exchangeId: kotlin.String? = null,
    /* Client unique identifier for the trade. */
    @Json(name = "id")
    val id: kotlin.String? = null,
    /* Hash client id */
    @Json(name = "client_order_id_format_exchange")
    val clientOrderIdFormatExchange: kotlin.String? = null,
    /* Exchange order id */
    @Json(name = "exchange_order_id")
    val exchangeOrderId: kotlin.String? = null,
    /* Amount open */
    @Json(name = "amount_open")
    val amountOpen: java.math.BigDecimal? = null,
    /* Amount filled */
    @Json(name = "amount_filled")
    val amountFilled: java.math.BigDecimal? = null,
    @Json(name = "status")
    val status: OrdStatus? = null,
    /* History of order status changes */
    @Json(name = "time_order")
    val timeOrder: kotlin.Array<kotlin.Array<kotlin.String>>? = null,
    /* Error message */
    @Json(name = "error_message")
    val errorMessage: kotlin.String? = null,
    /* Client unique identifier for the trade. */
    @Json(name = "client_order_id")
    val clientOrderId: kotlin.String? = null,
    /* The symbol of the order. */
    @Json(name = "symbol_exchange")
    val symbolExchange: kotlin.String? = null,
    /* The CoinAPI symbol of the order. */
    @Json(name = "symbol_coinapi")
    val symbolCoinapi: kotlin.String? = null,
    /* Quoted decimal amount to purchase. */
    @Json(name = "amount_order")
    val amountOrder: java.math.BigDecimal? = null,
    /* Quoted decimal amount to spend per unit. */
    @Json(name = "price")
    val price: java.math.BigDecimal? = null,
    /* Buy or Sell */
    @Json(name = "side")
    val side: OrderData.Side? = null,
    /* The order type. */
    @Json(name = "order_type")
    val orderType: OrderData.OrderType? = null,
    @Json(name = "time_in_force")
    val timeInForce: TimeInForce? = null,
    /* Required for orders with time_in_force = GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS */
    @Json(name = "expire_time")
    val expireTime: java.time.LocalDate? = null,
    /* Order execution instructions are documented in the separate section: <a href=\"#oeml-order-params-exec\">OEML / Starter Guide / Order parameters / Execution instructions</a>  */
    @Json(name = "exec_inst")
    val execInst: kotlin.Array<OrderData.ExecInst>? = null
) {

    /**
    * Buy or Sell
    * Values: bUY,sELL
    */
    
    enum class Side(val value: kotlin.String){
        @Json(name = "BUY") bUY("BUY"),
        @Json(name = "SELL") sELL("SELL");
    }
    /**
    * The order type.
    * Values: lIMIT
    */
    
    enum class OrderType(val value: kotlin.String){
        @Json(name = "LIMIT") lIMIT("LIMIT");
    }
    /**
    * Order execution instructions are documented in the separate section: <a href=\"#oeml-order-params-exec\">OEML / Starter Guide / Order parameters / Execution instructions</a> 
    * Values: mAKERORCANCEL,aUCTIONONLY,iNDICATIONOFINTEREST
    */
    
    enum class ExecInst(val value: kotlin.String){
        @Json(name = "MAKER_OR_CANCEL") mAKERORCANCEL("MAKER_OR_CANCEL"),
        @Json(name = "AUCTION_ONLY") aUCTIONONLY("AUCTION_ONLY"),
        @Json(name = "INDICATION_OF_INTEREST") iNDICATIONOFINTEREST("INDICATION_OF_INTEREST");
    }
}

