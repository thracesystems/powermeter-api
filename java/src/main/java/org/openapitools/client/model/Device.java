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

/**
 * Device
 */

public class Device {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_W = "w";
  @SerializedName(SERIALIZED_NAME_W)
  private Integer w;

  public static final String SERIALIZED_NAME_L = "l";
  @SerializedName(SERIALIZED_NAME_L)
  private Integer l;

  public static final String SERIALIZED_NAME_NFIN = "nfin";
  @SerializedName(SERIALIZED_NAME_NFIN)
  private Integer nfin;

  public static final String SERIALIZED_NAME_DATA_POINTS = "data_points";
  @SerializedName(SERIALIZED_NAME_DATA_POINTS)
  private Integer dataPoints;


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




  public Device name(String name) {
    
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(required = true, value = "")

  public String getName() {
    return name;
  }


  public void setName(String name) {
    this.name = name;
  }


  public Device w(Integer w) {
    
    this.w = w;
    return this;
  }

   /**
   * Get w
   * minimum: 0
   * maximum: 32767
   * @return w
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getW() {
    return w;
  }


  public void setW(Integer w) {
    this.w = w;
  }


  public Device l(Integer l) {
    
    this.l = l;
    return this;
  }

   /**
   * Get l
   * minimum: 0
   * maximum: 32767
   * @return l
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getL() {
    return l;
  }


  public void setL(Integer l) {
    this.l = l;
  }


  public Device nfin(Integer nfin) {
    
    this.nfin = nfin;
    return this;
  }

   /**
   * Get nfin
   * minimum: 0
   * maximum: 32767
   * @return nfin
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getNfin() {
    return nfin;
  }


  public void setNfin(Integer nfin) {
    this.nfin = nfin;
  }


  public Device dataPoints(Integer dataPoints) {
    
    this.dataPoints = dataPoints;
    return this;
  }

   /**
   * Get dataPoints
   * minimum: 0
   * maximum: 2147483647
   * @return dataPoints
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getDataPoints() {
    return dataPoints;
  }


  public void setDataPoints(Integer dataPoints) {
    this.dataPoints = dataPoints;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Device device = (Device) o;
    return Objects.equals(this.id, device.id) &&
        Objects.equals(this.name, device.name) &&
        Objects.equals(this.w, device.w) &&
        Objects.equals(this.l, device.l) &&
        Objects.equals(this.nfin, device.nfin) &&
        Objects.equals(this.dataPoints, device.dataPoints);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, w, l, nfin, dataPoints);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Device {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    w: ").append(toIndentedString(w)).append("\n");
    sb.append("    l: ").append(toIndentedString(l)).append("\n");
    sb.append("    nfin: ").append(toIndentedString(nfin)).append("\n");
    sb.append("    dataPoints: ").append(toIndentedString(dataPoints)).append("\n");
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

