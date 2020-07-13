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
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel

case class PositionData (
  /* Exchange symbol. */
  symbolExchange: Option[String] = None,
  /* CoinAPI symbol. */
  symbolCoinapi: Option[String] = None,
  /* Calculated average price of all fills on this position. */
  avgEntryPrice: Option[Double] = None,
  /* The current position quantity. */
  quantity: Option[Double] = None,
  side: Option[OrdSide] = None,
  /* Unrealised profit or loss (PNL) of this position. */
  unrealizedPnl: Option[Double] = None,
  /* Leverage for this position reported by the exchange. */
  leverage: Option[Double] = None,
  /* Is cross margin mode enable for this position? */
  crossMargin: Option[Boolean] = None,
  /* Liquidation price. If mark price will reach this value, the position will be liquidated. */
  liquidationPrice: Option[Double] = None,
  rawData: Option[Any] = None
) extends ApiModel


