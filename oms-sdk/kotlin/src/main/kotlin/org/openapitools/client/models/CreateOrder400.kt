/**
* OMS - REST API .
* OMS Project
*
* The version of the OpenAPI document: v1
* 
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

data class CreateOrder400 (
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
