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

package org.openapitools.client.model;

import java.math.BigDecimal;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class PositionData {
  
  @SerializedName("id")
  private String id = null;
  @SerializedName("symbol_exchange")
  private String symbolExchange = null;
  @SerializedName("symbol_coinapi")
  private String symbolCoinapi = null;
  @SerializedName("avg_entry_price")
  private BigDecimal avgEntryPrice = null;
  @SerializedName("quantity")
  private BigDecimal quantity = null;
  @SerializedName("is_buy")
  private Boolean isBuy = null;
  @SerializedName("unrealised_pn_l")
  private BigDecimal unrealisedPnL = null;
  @SerializedName("leverage")
  private BigDecimal leverage = null;
  @SerializedName("cross_margin")
  private Boolean crossMargin = null;
  @SerializedName("liquidation_price")
  private BigDecimal liquidationPrice = null;
  @SerializedName("raw_data")
  private String rawData = null;

  /**
   * Unique position ID
   **/
  @ApiModelProperty(value = "Unique position ID")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * The contract for this position.
   **/
  @ApiModelProperty(value = "The contract for this position.")
  public String getSymbolExchange() {
    return symbolExchange;
  }
  public void setSymbolExchange(String symbolExchange) {
    this.symbolExchange = symbolExchange;
  }

  /**
   * The coinapi contract for this position.
   **/
  @ApiModelProperty(value = "The coinapi contract for this position.")
  public String getSymbolCoinapi() {
    return symbolCoinapi;
  }
  public void setSymbolCoinapi(String symbolCoinapi) {
    this.symbolCoinapi = symbolCoinapi;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getAvgEntryPrice() {
    return avgEntryPrice;
  }
  public void setAvgEntryPrice(BigDecimal avgEntryPrice) {
    this.avgEntryPrice = avgEntryPrice;
  }

  /**
   * The current position amount in contracts.
   **/
  @ApiModelProperty(value = "The current position amount in contracts.")
  public BigDecimal getQuantity() {
    return quantity;
  }
  public void setQuantity(BigDecimal quantity) {
    this.quantity = quantity;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsBuy() {
    return isBuy;
  }
  public void setIsBuy(Boolean isBuy) {
    this.isBuy = isBuy;
  }

  /**
   * Unrealised PNL is all the unrealised profit or loss coming from your portfolio's open positions.
   **/
  @ApiModelProperty(value = "Unrealised PNL is all the unrealised profit or loss coming from your portfolio's open positions.")
  public BigDecimal getUnrealisedPnL() {
    return unrealisedPnL;
  }
  public void setUnrealisedPnL(BigDecimal unrealisedPnL) {
    this.unrealisedPnL = unrealisedPnL;
  }

  /**
   * 1 / initMarginReq.
   **/
  @ApiModelProperty(value = "1 / initMarginReq.")
  public BigDecimal getLeverage() {
    return leverage;
  }
  public void setLeverage(BigDecimal leverage) {
    this.leverage = leverage;
  }

  /**
   * True/false depending on whether you set cross margin on this position.
   **/
  @ApiModelProperty(value = "True/false depending on whether you set cross margin on this position.")
  public Boolean getCrossMargin() {
    return crossMargin;
  }
  public void setCrossMargin(Boolean crossMargin) {
    this.crossMargin = crossMargin;
  }

  /**
   * Once markPrice reaches this price, this position will be liquidated.
   **/
  @ApiModelProperty(value = "Once markPrice reaches this price, this position will be liquidated.")
  public BigDecimal getLiquidationPrice() {
    return liquidationPrice;
  }
  public void setLiquidationPrice(BigDecimal liquidationPrice) {
    this.liquidationPrice = liquidationPrice;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getRawData() {
    return rawData;
  }
  public void setRawData(String rawData) {
    this.rawData = rawData;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PositionData positionData = (PositionData) o;
    return (this.id == null ? positionData.id == null : this.id.equals(positionData.id)) &&
        (this.symbolExchange == null ? positionData.symbolExchange == null : this.symbolExchange.equals(positionData.symbolExchange)) &&
        (this.symbolCoinapi == null ? positionData.symbolCoinapi == null : this.symbolCoinapi.equals(positionData.symbolCoinapi)) &&
        (this.avgEntryPrice == null ? positionData.avgEntryPrice == null : this.avgEntryPrice.equals(positionData.avgEntryPrice)) &&
        (this.quantity == null ? positionData.quantity == null : this.quantity.equals(positionData.quantity)) &&
        (this.isBuy == null ? positionData.isBuy == null : this.isBuy.equals(positionData.isBuy)) &&
        (this.unrealisedPnL == null ? positionData.unrealisedPnL == null : this.unrealisedPnL.equals(positionData.unrealisedPnL)) &&
        (this.leverage == null ? positionData.leverage == null : this.leverage.equals(positionData.leverage)) &&
        (this.crossMargin == null ? positionData.crossMargin == null : this.crossMargin.equals(positionData.crossMargin)) &&
        (this.liquidationPrice == null ? positionData.liquidationPrice == null : this.liquidationPrice.equals(positionData.liquidationPrice)) &&
        (this.rawData == null ? positionData.rawData == null : this.rawData.equals(positionData.rawData));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.symbolExchange == null ? 0: this.symbolExchange.hashCode());
    result = 31 * result + (this.symbolCoinapi == null ? 0: this.symbolCoinapi.hashCode());
    result = 31 * result + (this.avgEntryPrice == null ? 0: this.avgEntryPrice.hashCode());
    result = 31 * result + (this.quantity == null ? 0: this.quantity.hashCode());
    result = 31 * result + (this.isBuy == null ? 0: this.isBuy.hashCode());
    result = 31 * result + (this.unrealisedPnL == null ? 0: this.unrealisedPnL.hashCode());
    result = 31 * result + (this.leverage == null ? 0: this.leverage.hashCode());
    result = 31 * result + (this.crossMargin == null ? 0: this.crossMargin.hashCode());
    result = 31 * result + (this.liquidationPrice == null ? 0: this.liquidationPrice.hashCode());
    result = 31 * result + (this.rawData == null ? 0: this.rawData.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class PositionData {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  symbolExchange: ").append(symbolExchange).append("\n");
    sb.append("  symbolCoinapi: ").append(symbolCoinapi).append("\n");
    sb.append("  avgEntryPrice: ").append(avgEntryPrice).append("\n");
    sb.append("  quantity: ").append(quantity).append("\n");
    sb.append("  isBuy: ").append(isBuy).append("\n");
    sb.append("  unrealisedPnL: ").append(unrealisedPnL).append("\n");
    sb.append("  leverage: ").append(leverage).append("\n");
    sb.append("  crossMargin: ").append(crossMargin).append("\n");
    sb.append("  liquidationPrice: ").append(liquidationPrice).append("\n");
    sb.append("  rawData: ").append(rawData).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}