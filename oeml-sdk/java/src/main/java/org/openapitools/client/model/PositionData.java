/*
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


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;

/**
 * PositionData
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-07-13T12:54:28.032Z[Etc/UTC]")
public class PositionData {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_SYMBOL_EXCHANGE = "symbol_exchange";
  @SerializedName(SERIALIZED_NAME_SYMBOL_EXCHANGE)
  private String symbolExchange;

  public static final String SERIALIZED_NAME_SYMBOL_COINAPI = "symbol_coinapi";
  @SerializedName(SERIALIZED_NAME_SYMBOL_COINAPI)
  private String symbolCoinapi;

  public static final String SERIALIZED_NAME_AVG_ENTRY_PRICE = "avg_entry_price";
  @SerializedName(SERIALIZED_NAME_AVG_ENTRY_PRICE)
  private BigDecimal avgEntryPrice;

  public static final String SERIALIZED_NAME_QUANTITY = "quantity";
  @SerializedName(SERIALIZED_NAME_QUANTITY)
  private BigDecimal quantity;

  public static final String SERIALIZED_NAME_IS_BUY = "is_buy";
  @SerializedName(SERIALIZED_NAME_IS_BUY)
  private Boolean isBuy;

  public static final String SERIALIZED_NAME_UNREALISED_PN_L = "unrealised_pn_l";
  @SerializedName(SERIALIZED_NAME_UNREALISED_PN_L)
  private BigDecimal unrealisedPnL;

  public static final String SERIALIZED_NAME_LEVERAGE = "leverage";
  @SerializedName(SERIALIZED_NAME_LEVERAGE)
  private BigDecimal leverage;

  public static final String SERIALIZED_NAME_CROSS_MARGIN = "cross_margin";
  @SerializedName(SERIALIZED_NAME_CROSS_MARGIN)
  private Boolean crossMargin;

  public static final String SERIALIZED_NAME_LIQUIDATION_PRICE = "liquidation_price";
  @SerializedName(SERIALIZED_NAME_LIQUIDATION_PRICE)
  private BigDecimal liquidationPrice;

  public static final String SERIALIZED_NAME_RAW_DATA = "raw_data";
  @SerializedName(SERIALIZED_NAME_RAW_DATA)
  private String rawData;


  public PositionData id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Unique position ID
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "2873jkjhgdsd78ii", value = "Unique position ID")

  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public PositionData symbolExchange(String symbolExchange) {
    
    this.symbolExchange = symbolExchange;
    return this;
  }

   /**
   * The contract for this position.
   * @return symbolExchange
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "BTC", value = "The contract for this position.")

  public String getSymbolExchange() {
    return symbolExchange;
  }


  public void setSymbolExchange(String symbolExchange) {
    this.symbolExchange = symbolExchange;
  }


  public PositionData symbolCoinapi(String symbolCoinapi) {
    
    this.symbolCoinapi = symbolCoinapi;
    return this;
  }

   /**
   * The coinapi contract for this position.
   * @return symbolCoinapi
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "BTC", value = "The coinapi contract for this position.")

  public String getSymbolCoinapi() {
    return symbolCoinapi;
  }


  public void setSymbolCoinapi(String symbolCoinapi) {
    this.symbolCoinapi = symbolCoinapi;
  }


  public PositionData avgEntryPrice(BigDecimal avgEntryPrice) {
    
    this.avgEntryPrice = avgEntryPrice;
    return this;
  }

   /**
   * Get avgEntryPrice
   * @return avgEntryPrice
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "0.00134444", value = "")

  public BigDecimal getAvgEntryPrice() {
    return avgEntryPrice;
  }


  public void setAvgEntryPrice(BigDecimal avgEntryPrice) {
    this.avgEntryPrice = avgEntryPrice;
  }


  public PositionData quantity(BigDecimal quantity) {
    
    this.quantity = quantity;
    return this;
  }

   /**
   * The current position amount in contracts.
   * @return quantity
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "0.00134444", value = "The current position amount in contracts.")

  public BigDecimal getQuantity() {
    return quantity;
  }


  public void setQuantity(BigDecimal quantity) {
    this.quantity = quantity;
  }


  public PositionData isBuy(Boolean isBuy) {
    
    this.isBuy = isBuy;
    return this;
  }

   /**
   * Get isBuy
   * @return isBuy
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "true", value = "")

  public Boolean getIsBuy() {
    return isBuy;
  }


  public void setIsBuy(Boolean isBuy) {
    this.isBuy = isBuy;
  }


  public PositionData unrealisedPnL(BigDecimal unrealisedPnL) {
    
    this.unrealisedPnL = unrealisedPnL;
    return this;
  }

   /**
   * Unrealised PNL is all the unrealised profit or loss coming from your portfolio&#39;s open positions.
   * @return unrealisedPnL
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "0.0", value = "Unrealised PNL is all the unrealised profit or loss coming from your portfolio's open positions.")

  public BigDecimal getUnrealisedPnL() {
    return unrealisedPnL;
  }


  public void setUnrealisedPnL(BigDecimal unrealisedPnL) {
    this.unrealisedPnL = unrealisedPnL;
  }


  public PositionData leverage(BigDecimal leverage) {
    
    this.leverage = leverage;
    return this;
  }

   /**
   * 1 / initMarginReq.
   * @return leverage
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "0.0", value = "1 / initMarginReq.")

  public BigDecimal getLeverage() {
    return leverage;
  }


  public void setLeverage(BigDecimal leverage) {
    this.leverage = leverage;
  }


  public PositionData crossMargin(Boolean crossMargin) {
    
    this.crossMargin = crossMargin;
    return this;
  }

   /**
   * True/false depending on whether you set cross margin on this position.
   * @return crossMargin
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "true", value = "True/false depending on whether you set cross margin on this position.")

  public Boolean getCrossMargin() {
    return crossMargin;
  }


  public void setCrossMargin(Boolean crossMargin) {
    this.crossMargin = crossMargin;
  }


  public PositionData liquidationPrice(BigDecimal liquidationPrice) {
    
    this.liquidationPrice = liquidationPrice;
    return this;
  }

   /**
   * Once markPrice reaches this price, this position will be liquidated.
   * @return liquidationPrice
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "0.072323", value = "Once markPrice reaches this price, this position will be liquidated.")

  public BigDecimal getLiquidationPrice() {
    return liquidationPrice;
  }


  public void setLiquidationPrice(BigDecimal liquidationPrice) {
    this.liquidationPrice = liquidationPrice;
  }


  public PositionData rawData(String rawData) {
    
    this.rawData = rawData;
    return this;
  }

   /**
   * Get rawData
   * @return rawData
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "xyz", value = "")

  public String getRawData() {
    return rawData;
  }


  public void setRawData(String rawData) {
    this.rawData = rawData;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PositionData positionData = (PositionData) o;
    return Objects.equals(this.id, positionData.id) &&
        Objects.equals(this.symbolExchange, positionData.symbolExchange) &&
        Objects.equals(this.symbolCoinapi, positionData.symbolCoinapi) &&
        Objects.equals(this.avgEntryPrice, positionData.avgEntryPrice) &&
        Objects.equals(this.quantity, positionData.quantity) &&
        Objects.equals(this.isBuy, positionData.isBuy) &&
        Objects.equals(this.unrealisedPnL, positionData.unrealisedPnL) &&
        Objects.equals(this.leverage, positionData.leverage) &&
        Objects.equals(this.crossMargin, positionData.crossMargin) &&
        Objects.equals(this.liquidationPrice, positionData.liquidationPrice) &&
        Objects.equals(this.rawData, positionData.rawData);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, symbolExchange, symbolCoinapi, avgEntryPrice, quantity, isBuy, unrealisedPnL, leverage, crossMargin, liquidationPrice, rawData);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PositionData {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    symbolExchange: ").append(toIndentedString(symbolExchange)).append("\n");
    sb.append("    symbolCoinapi: ").append(toIndentedString(symbolCoinapi)).append("\n");
    sb.append("    avgEntryPrice: ").append(toIndentedString(avgEntryPrice)).append("\n");
    sb.append("    quantity: ").append(toIndentedString(quantity)).append("\n");
    sb.append("    isBuy: ").append(toIndentedString(isBuy)).append("\n");
    sb.append("    unrealisedPnL: ").append(toIndentedString(unrealisedPnL)).append("\n");
    sb.append("    leverage: ").append(toIndentedString(leverage)).append("\n");
    sb.append("    crossMargin: ").append(toIndentedString(crossMargin)).append("\n");
    sb.append("    liquidationPrice: ").append(toIndentedString(liquidationPrice)).append("\n");
    sb.append("    rawData: ").append(toIndentedString(rawData)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

