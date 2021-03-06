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
 * DesignScenario
 */

public class DesignScenario {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_DESCR = "descr";
  @SerializedName(SERIALIZED_NAME_DESCR)
  private String descr;

  public static final String SERIALIZED_NAME_TEMPERATURE = "temperature";
  @SerializedName(SERIALIZED_NAME_TEMPERATURE)
  private BigDecimal temperature;

  public static final String SERIALIZED_NAME_PROCESS = "process";
  @SerializedName(SERIALIZED_NAME_PROCESS)
  private BigDecimal process;

  public static final String SERIALIZED_NAME_RC = "rc";
  @SerializedName(SERIALIZED_NAME_RC)
  private BigDecimal rc;

  public static final String SERIALIZED_NAME_ENDTIME = "endtime";
  @SerializedName(SERIALIZED_NAME_ENDTIME)
  private BigDecimal endtime;

  public static final String SERIALIZED_NAME_AVERAGE_POWER = "average_power";
  @SerializedName(SERIALIZED_NAME_AVERAGE_POWER)
  private BigDecimal averagePower;

  public static final String SERIALIZED_NAME_TOTAL_ENERGY = "total_energy";
  @SerializedName(SERIALIZED_NAME_TOTAL_ENERGY)
  private BigDecimal totalEnergy;

  public static final String SERIALIZED_NAME_CONFIDENCE = "confidence";
  @SerializedName(SERIALIZED_NAME_CONFIDENCE)
  private BigDecimal confidence;


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




  public DesignScenario descr(String descr) {
    
    this.descr = descr;
    return this;
  }

   /**
   * Get descr
   * @return descr
  **/
  @ApiModelProperty(required = true, value = "")

  public String getDescr() {
    return descr;
  }


  public void setDescr(String descr) {
    this.descr = descr;
  }


  public DesignScenario temperature(BigDecimal temperature) {
    
    this.temperature = temperature;
    return this;
  }

   /**
   * Get temperature
   * @return temperature
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getTemperature() {
    return temperature;
  }


  public void setTemperature(BigDecimal temperature) {
    this.temperature = temperature;
  }


  public DesignScenario process(BigDecimal process) {
    
    this.process = process;
    return this;
  }

   /**
   * Get process
   * @return process
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getProcess() {
    return process;
  }


  public void setProcess(BigDecimal process) {
    this.process = process;
  }


  public DesignScenario rc(BigDecimal rc) {
    
    this.rc = rc;
    return this;
  }

   /**
   * Get rc
   * @return rc
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getRc() {
    return rc;
  }


  public void setRc(BigDecimal rc) {
    this.rc = rc;
  }


  public DesignScenario endtime(BigDecimal endtime) {
    
    this.endtime = endtime;
    return this;
  }

   /**
   * Get endtime
   * @return endtime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getEndtime() {
    return endtime;
  }


  public void setEndtime(BigDecimal endtime) {
    this.endtime = endtime;
  }


   /**
   * Get averagePower
   * @return averagePower
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getAveragePower() {
    return averagePower;
  }




  public DesignScenario totalEnergy(BigDecimal totalEnergy) {
    
    this.totalEnergy = totalEnergy;
    return this;
  }

   /**
   * Get totalEnergy
   * @return totalEnergy
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getTotalEnergy() {
    return totalEnergy;
  }


  public void setTotalEnergy(BigDecimal totalEnergy) {
    this.totalEnergy = totalEnergy;
  }


   /**
   * Get confidence
   * @return confidence
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getConfidence() {
    return confidence;
  }




  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DesignScenario designScenario = (DesignScenario) o;
    return Objects.equals(this.id, designScenario.id) &&
        Objects.equals(this.descr, designScenario.descr) &&
        Objects.equals(this.temperature, designScenario.temperature) &&
        Objects.equals(this.process, designScenario.process) &&
        Objects.equals(this.rc, designScenario.rc) &&
        Objects.equals(this.endtime, designScenario.endtime) &&
        Objects.equals(this.averagePower, designScenario.averagePower) &&
        Objects.equals(this.totalEnergy, designScenario.totalEnergy) &&
        Objects.equals(this.confidence, designScenario.confidence);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, descr, temperature, process, rc, endtime, averagePower, totalEnergy, confidence);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DesignScenario {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    descr: ").append(toIndentedString(descr)).append("\n");
    sb.append("    temperature: ").append(toIndentedString(temperature)).append("\n");
    sb.append("    process: ").append(toIndentedString(process)).append("\n");
    sb.append("    rc: ").append(toIndentedString(rc)).append("\n");
    sb.append("    endtime: ").append(toIndentedString(endtime)).append("\n");
    sb.append("    averagePower: ").append(toIndentedString(averagePower)).append("\n");
    sb.append("    totalEnergy: ").append(toIndentedString(totalEnergy)).append("\n");
    sb.append("    confidence: ").append(toIndentedString(confidence)).append("\n");
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

