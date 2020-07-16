/**
* OEML - REST API
* This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
*
* The version of the OpenAPI document: v1
* Contact: support@coinapi.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.models


import com.squareup.moshi.Json
/**
 * 
 * @param type 
 * @param title 
 * @param status 
 * @param traceId 
 * @param errors 
 */

data class ValidationError (
    @Json(name = "type")
    val type: kotlin.String? = null,
    @Json(name = "title")
    val title: kotlin.String? = null,
    @Json(name = "status")
    val status: java.math.BigDecimal? = null,
    @Json(name = "traceId")
    val traceId: kotlin.String? = null,
    @Json(name = "errors")
    val errors: kotlin.String? = null
)
