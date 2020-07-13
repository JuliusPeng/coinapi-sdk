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

package org.openapitools.client.model;

import java.math.BigDecimal;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ValidationError {
  
  @SerializedName("type")
  private String type = null;
  @SerializedName("title")
  private String title = null;
  @SerializedName("status")
  private BigDecimal status = null;
  @SerializedName("traceId")
  private String traceId = null;
  @SerializedName("errors")
  private String errors = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getStatus() {
    return status;
  }
  public void setStatus(BigDecimal status) {
    this.status = status;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getTraceId() {
    return traceId;
  }
  public void setTraceId(String traceId) {
    this.traceId = traceId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getErrors() {
    return errors;
  }
  public void setErrors(String errors) {
    this.errors = errors;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ValidationError validationError = (ValidationError) o;
    return (this.type == null ? validationError.type == null : this.type.equals(validationError.type)) &&
        (this.title == null ? validationError.title == null : this.title.equals(validationError.title)) &&
        (this.status == null ? validationError.status == null : this.status.equals(validationError.status)) &&
        (this.traceId == null ? validationError.traceId == null : this.traceId.equals(validationError.traceId)) &&
        (this.errors == null ? validationError.errors == null : this.errors.equals(validationError.errors));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    result = 31 * result + (this.title == null ? 0: this.title.hashCode());
    result = 31 * result + (this.status == null ? 0: this.status.hashCode());
    result = 31 * result + (this.traceId == null ? 0: this.traceId.hashCode());
    result = 31 * result + (this.errors == null ? 0: this.errors.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ValidationError {\n");
    
    sb.append("  type: ").append(type).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  status: ").append(status).append("\n");
    sb.append("  traceId: ").append(traceId).append("\n");
    sb.append("  errors: ").append(errors).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
