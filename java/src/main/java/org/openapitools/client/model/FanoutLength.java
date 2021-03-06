/*
 * PowerMeter API
 * API
 *
 * The version of the OpenAPI document: 2021.4.1
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
 * FanoutLength
 */

public class FanoutLength {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_FANOUT = "fanout";
  @SerializedName(SERIALIZED_NAME_FANOUT)
  private Integer fanout;

  public static final String SERIALIZED_NAME_LENGTH = "length";
  @SerializedName(SERIALIZED_NAME_LENGTH)
  private BigDecimal length;


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




  public FanoutLength fanout(Integer fanout) {
    
    this.fanout = fanout;
    return this;
  }

   /**
   * Get fanout
   * minimum: 0
   * maximum: 2147483647
   * @return fanout
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getFanout() {
    return fanout;
  }


  public void setFanout(Integer fanout) {
    this.fanout = fanout;
  }


  public FanoutLength length(BigDecimal length) {
    
    this.length = length;
    return this;
  }

   /**
   * Get length
   * @return length
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getLength() {
    return length;
  }


  public void setLength(BigDecimal length) {
    this.length = length;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FanoutLength fanoutLength = (FanoutLength) o;
    return Objects.equals(this.id, fanoutLength.id) &&
        Objects.equals(this.fanout, fanoutLength.fanout) &&
        Objects.equals(this.length, fanoutLength.length);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, fanout, length);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FanoutLength {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    fanout: ").append(toIndentedString(fanout)).append("\n");
    sb.append("    length: ").append(toIndentedString(length)).append("\n");
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

