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
 * DeviceDataBulk
 */

public class DeviceDataBulk {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_P = "p";
  @SerializedName(SERIALIZED_NAME_P)
  private String p;

  public static final String SERIALIZED_NAME_T = "t";
  @SerializedName(SERIALIZED_NAME_T)
  private Integer t;

  public static final String SERIALIZED_NAME_VDS = "Vds";
  @SerializedName(SERIALIZED_NAME_VDS)
  private BigDecimal vds;

  public static final String SERIALIZED_NAME_VGS = "Vgs";
  @SerializedName(SERIALIZED_NAME_VGS)
  private BigDecimal vgs;

  public static final String SERIALIZED_NAME_VBS = "Vbs";
  @SerializedName(SERIALIZED_NAME_VBS)
  private BigDecimal vbs;

  public static final String SERIALIZED_NAME_IDRAIN = "Idrain";
  @SerializedName(SERIALIZED_NAME_IDRAIN)
  private BigDecimal idrain;

  public static final String SERIALIZED_NAME_IGATE = "Igate";
  @SerializedName(SERIALIZED_NAME_IGATE)
  private BigDecimal igate;

  public static final String SERIALIZED_NAME_ISOURCE = "Isource";
  @SerializedName(SERIALIZED_NAME_ISOURCE)
  private BigDecimal isource;

  public static final String SERIALIZED_NAME_IBODY = "Ibody";
  @SerializedName(SERIALIZED_NAME_IBODY)
  private BigDecimal ibody;


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




  public DeviceDataBulk p(String p) {
    
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


  public DeviceDataBulk t(Integer t) {
    
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


  public DeviceDataBulk vds(BigDecimal vds) {
    
    this.vds = vds;
    return this;
  }

   /**
   * Get vds
   * @return vds
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getVds() {
    return vds;
  }


  public void setVds(BigDecimal vds) {
    this.vds = vds;
  }


  public DeviceDataBulk vgs(BigDecimal vgs) {
    
    this.vgs = vgs;
    return this;
  }

   /**
   * Get vgs
   * @return vgs
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getVgs() {
    return vgs;
  }


  public void setVgs(BigDecimal vgs) {
    this.vgs = vgs;
  }


  public DeviceDataBulk vbs(BigDecimal vbs) {
    
    this.vbs = vbs;
    return this;
  }

   /**
   * Get vbs
   * @return vbs
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getVbs() {
    return vbs;
  }


  public void setVbs(BigDecimal vbs) {
    this.vbs = vbs;
  }


  public DeviceDataBulk idrain(BigDecimal idrain) {
    
    this.idrain = idrain;
    return this;
  }

   /**
   * Get idrain
   * @return idrain
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getIdrain() {
    return idrain;
  }


  public void setIdrain(BigDecimal idrain) {
    this.idrain = idrain;
  }


  public DeviceDataBulk igate(BigDecimal igate) {
    
    this.igate = igate;
    return this;
  }

   /**
   * Get igate
   * @return igate
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getIgate() {
    return igate;
  }


  public void setIgate(BigDecimal igate) {
    this.igate = igate;
  }


  public DeviceDataBulk isource(BigDecimal isource) {
    
    this.isource = isource;
    return this;
  }

   /**
   * Get isource
   * @return isource
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getIsource() {
    return isource;
  }


  public void setIsource(BigDecimal isource) {
    this.isource = isource;
  }


  public DeviceDataBulk ibody(BigDecimal ibody) {
    
    this.ibody = ibody;
    return this;
  }

   /**
   * Get ibody
   * @return ibody
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getIbody() {
    return ibody;
  }


  public void setIbody(BigDecimal ibody) {
    this.ibody = ibody;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DeviceDataBulk deviceDataBulk = (DeviceDataBulk) o;
    return Objects.equals(this.id, deviceDataBulk.id) &&
        Objects.equals(this.p, deviceDataBulk.p) &&
        Objects.equals(this.t, deviceDataBulk.t) &&
        Objects.equals(this.vds, deviceDataBulk.vds) &&
        Objects.equals(this.vgs, deviceDataBulk.vgs) &&
        Objects.equals(this.vbs, deviceDataBulk.vbs) &&
        Objects.equals(this.idrain, deviceDataBulk.idrain) &&
        Objects.equals(this.igate, deviceDataBulk.igate) &&
        Objects.equals(this.isource, deviceDataBulk.isource) &&
        Objects.equals(this.ibody, deviceDataBulk.ibody);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, p, t, vds, vgs, vbs, idrain, igate, isource, ibody);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DeviceDataBulk {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    p: ").append(toIndentedString(p)).append("\n");
    sb.append("    t: ").append(toIndentedString(t)).append("\n");
    sb.append("    vds: ").append(toIndentedString(vds)).append("\n");
    sb.append("    vgs: ").append(toIndentedString(vgs)).append("\n");
    sb.append("    vbs: ").append(toIndentedString(vbs)).append("\n");
    sb.append("    idrain: ").append(toIndentedString(idrain)).append("\n");
    sb.append("    igate: ").append(toIndentedString(igate)).append("\n");
    sb.append("    isource: ").append(toIndentedString(isource)).append("\n");
    sb.append("    ibody: ").append(toIndentedString(ibody)).append("\n");
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

