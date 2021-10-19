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
import org.openapitools.client.model.VRVersion;

/**
 * VR
 */

public class VR {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_DESCR = "descr";
  @SerializedName(SERIALIZED_NAME_DESCR)
  private String descr;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private Integer type;

  public static final String SERIALIZED_NAME_LINEAR_IQ = "linear_iq";
  @SerializedName(SERIALIZED_NAME_LINEAR_IQ)
  private BigDecimal linearIq;

  public static final String SERIALIZED_NAME_SWITCHED_EFFICIENCY = "switched_efficiency";
  @SerializedName(SERIALIZED_NAME_SWITCHED_EFFICIENCY)
  private Object switchedEfficiency;

  public static final String SERIALIZED_NAME_EDITABLE = "editable";
  @SerializedName(SERIALIZED_NAME_EDITABLE)
  private Boolean editable;

  public static final String SERIALIZED_NAME_VERSION = "version";
  @SerializedName(SERIALIZED_NAME_VERSION)
  private VRVersion version;

  public static final String SERIALIZED_NAME_CURRENT_VERSION = "current_version";
  @SerializedName(SERIALIZED_NAME_CURRENT_VERSION)
  private Integer currentVersion;


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




   /**
   * Get name
   * @return name
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getName() {
    return name;
  }




   /**
   * Get descr
   * @return descr
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getDescr() {
    return descr;
  }




  public VR type(Integer type) {
    
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getType() {
    return type;
  }


  public void setType(Integer type) {
    this.type = type;
  }


  public VR linearIq(BigDecimal linearIq) {
    
    this.linearIq = linearIq;
    return this;
  }

   /**
   * Get linearIq
   * @return linearIq
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getLinearIq() {
    return linearIq;
  }


  public void setLinearIq(BigDecimal linearIq) {
    this.linearIq = linearIq;
  }


  public VR switchedEfficiency(Object switchedEfficiency) {
    
    this.switchedEfficiency = switchedEfficiency;
    return this;
  }

   /**
   * Get switchedEfficiency
   * @return switchedEfficiency
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Object getSwitchedEfficiency() {
    return switchedEfficiency;
  }


  public void setSwitchedEfficiency(Object switchedEfficiency) {
    this.switchedEfficiency = switchedEfficiency;
  }


  public VR editable(Boolean editable) {
    
    this.editable = editable;
    return this;
  }

   /**
   * Get editable
   * @return editable
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Boolean getEditable() {
    return editable;
  }


  public void setEditable(Boolean editable) {
    this.editable = editable;
  }


  public VR version(VRVersion version) {
    
    this.version = version;
    return this;
  }

   /**
   * Get version
   * @return version
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public VRVersion getVersion() {
    return version;
  }


  public void setVersion(VRVersion version) {
    this.version = version;
  }


   /**
   * Get currentVersion
   * @return currentVersion
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getCurrentVersion() {
    return currentVersion;
  }




  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VR VR = (VR) o;
    return Objects.equals(this.id, VR.id) &&
        Objects.equals(this.name, VR.name) &&
        Objects.equals(this.descr, VR.descr) &&
        Objects.equals(this.type, VR.type) &&
        Objects.equals(this.linearIq, VR.linearIq) &&
        Objects.equals(this.switchedEfficiency, VR.switchedEfficiency) &&
        Objects.equals(this.editable, VR.editable) &&
        Objects.equals(this.version, VR.version) &&
        Objects.equals(this.currentVersion, VR.currentVersion);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, descr, type, linearIq, switchedEfficiency, editable, version, currentVersion);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VR {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    descr: ").append(toIndentedString(descr)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    linearIq: ").append(toIndentedString(linearIq)).append("\n");
    sb.append("    switchedEfficiency: ").append(toIndentedString(switchedEfficiency)).append("\n");
    sb.append("    editable: ").append(toIndentedString(editable)).append("\n");
    sb.append("    version: ").append(toIndentedString(version)).append("\n");
    sb.append("    currentVersion: ").append(toIndentedString(currentVersion)).append("\n");
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

