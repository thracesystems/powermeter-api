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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.FanoutLength;

/**
 * WireLoad
 */

public class WireLoad {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_P = "p";
  @SerializedName(SERIALIZED_NAME_P)
  private String p;

  public static final String SERIALIZED_NAME_RC = "rc";
  @SerializedName(SERIALIZED_NAME_RC)
  private String rc;

  public static final String SERIALIZED_NAME_V = "v";
  @SerializedName(SERIALIZED_NAME_V)
  private BigDecimal v;

  public static final String SERIALIZED_NAME_T = "t";
  @SerializedName(SERIALIZED_NAME_T)
  private Integer t;

  public static final String SERIALIZED_NAME_RESISTANCE = "resistance";
  @SerializedName(SERIALIZED_NAME_RESISTANCE)
  private BigDecimal resistance;

  public static final String SERIALIZED_NAME_CAPACITANCE = "capacitance";
  @SerializedName(SERIALIZED_NAME_CAPACITANCE)
  private BigDecimal capacitance;

  public static final String SERIALIZED_NAME_AREA = "area";
  @SerializedName(SERIALIZED_NAME_AREA)
  private BigDecimal area;

  public static final String SERIALIZED_NAME_SLOPE = "slope";
  @SerializedName(SERIALIZED_NAME_SLOPE)
  private BigDecimal slope;

  public static final String SERIALIZED_NAME_FANOUT_LENGTH = "fanout_length";
  @SerializedName(SERIALIZED_NAME_FANOUT_LENGTH)
  private List<FanoutLength> fanoutLength = new ArrayList<FanoutLength>();


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




  public WireLoad p(String p) {
    
    this.p = p;
    return this;
  }

   /**
   * Get p
   * @return p
  **/
  @ApiModelProperty(required = true, value = "")

  public String getP() {
    return p;
  }


  public void setP(String p) {
    this.p = p;
  }


  public WireLoad rc(String rc) {
    
    this.rc = rc;
    return this;
  }

   /**
   * Get rc
   * @return rc
  **/
  @ApiModelProperty(required = true, value = "")

  public String getRc() {
    return rc;
  }


  public void setRc(String rc) {
    this.rc = rc;
  }


  public WireLoad v(BigDecimal v) {
    
    this.v = v;
    return this;
  }

   /**
   * Get v
   * @return v
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getV() {
    return v;
  }


  public void setV(BigDecimal v) {
    this.v = v;
  }


  public WireLoad t(Integer t) {
    
    this.t = t;
    return this;
  }

   /**
   * Get t
   * minimum: -32768
   * maximum: 32767
   * @return t
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getT() {
    return t;
  }


  public void setT(Integer t) {
    this.t = t;
  }


  public WireLoad resistance(BigDecimal resistance) {
    
    this.resistance = resistance;
    return this;
  }

   /**
   * Get resistance
   * @return resistance
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getResistance() {
    return resistance;
  }


  public void setResistance(BigDecimal resistance) {
    this.resistance = resistance;
  }


  public WireLoad capacitance(BigDecimal capacitance) {
    
    this.capacitance = capacitance;
    return this;
  }

   /**
   * Get capacitance
   * @return capacitance
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getCapacitance() {
    return capacitance;
  }


  public void setCapacitance(BigDecimal capacitance) {
    this.capacitance = capacitance;
  }


  public WireLoad area(BigDecimal area) {
    
    this.area = area;
    return this;
  }

   /**
   * Get area
   * @return area
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getArea() {
    return area;
  }


  public void setArea(BigDecimal area) {
    this.area = area;
  }


  public WireLoad slope(BigDecimal slope) {
    
    this.slope = slope;
    return this;
  }

   /**
   * Get slope
   * @return slope
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getSlope() {
    return slope;
  }


  public void setSlope(BigDecimal slope) {
    this.slope = slope;
  }


  public WireLoad fanoutLength(List<FanoutLength> fanoutLength) {
    
    this.fanoutLength = fanoutLength;
    return this;
  }

  public WireLoad addFanoutLengthItem(FanoutLength fanoutLengthItem) {
    this.fanoutLength.add(fanoutLengthItem);
    return this;
  }

   /**
   * Get fanoutLength
   * @return fanoutLength
  **/
  @ApiModelProperty(required = true, value = "")

  public List<FanoutLength> getFanoutLength() {
    return fanoutLength;
  }


  public void setFanoutLength(List<FanoutLength> fanoutLength) {
    this.fanoutLength = fanoutLength;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WireLoad wireLoad = (WireLoad) o;
    return Objects.equals(this.id, wireLoad.id) &&
        Objects.equals(this.p, wireLoad.p) &&
        Objects.equals(this.rc, wireLoad.rc) &&
        Objects.equals(this.v, wireLoad.v) &&
        Objects.equals(this.t, wireLoad.t) &&
        Objects.equals(this.resistance, wireLoad.resistance) &&
        Objects.equals(this.capacitance, wireLoad.capacitance) &&
        Objects.equals(this.area, wireLoad.area) &&
        Objects.equals(this.slope, wireLoad.slope) &&
        Objects.equals(this.fanoutLength, wireLoad.fanoutLength);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, p, rc, v, t, resistance, capacitance, area, slope, fanoutLength);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WireLoad {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    p: ").append(toIndentedString(p)).append("\n");
    sb.append("    rc: ").append(toIndentedString(rc)).append("\n");
    sb.append("    v: ").append(toIndentedString(v)).append("\n");
    sb.append("    t: ").append(toIndentedString(t)).append("\n");
    sb.append("    resistance: ").append(toIndentedString(resistance)).append("\n");
    sb.append("    capacitance: ").append(toIndentedString(capacitance)).append("\n");
    sb.append("    area: ").append(toIndentedString(area)).append("\n");
    sb.append("    slope: ").append(toIndentedString(slope)).append("\n");
    sb.append("    fanoutLength: ").append(toIndentedString(fanoutLength)).append("\n");
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

