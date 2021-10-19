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

/**
 * DesignPinEnergy
 */

public class DesignPinEnergy {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_PIN = "pin";
  @SerializedName(SERIALIZED_NAME_PIN)
  private Integer pin;

  public static final String SERIALIZED_NAME_PIN_NAME = "pin_name";
  @SerializedName(SERIALIZED_NAME_PIN_NAME)
  private String pinName;

  public static final String SERIALIZED_NAME_RELATED_PIN = "related_pin";
  @SerializedName(SERIALIZED_NAME_RELATED_PIN)
  private Integer relatedPin;

  public static final String SERIALIZED_NAME_RELATED_PIN_NAME = "related_pin_name";
  @SerializedName(SERIALIZED_NAME_RELATED_PIN_NAME)
  private String relatedPinName;

  public static final String SERIALIZED_NAME_SUPPLY = "supply";
  @SerializedName(SERIALIZED_NAME_SUPPLY)
  private Integer supply;

  public static final String SERIALIZED_NAME_SUPPLY_NAME = "supply_name";
  @SerializedName(SERIALIZED_NAME_SUPPLY_NAME)
  private String supplyName;

  public static final String SERIALIZED_NAME_PROCESS = "process";
  @SerializedName(SERIALIZED_NAME_PROCESS)
  private String process;

  public static final String SERIALIZED_NAME_RC = "rc";
  @SerializedName(SERIALIZED_NAME_RC)
  private String rc;

  public static final String SERIALIZED_NAME_VOLTAGE = "voltage";
  @SerializedName(SERIALIZED_NAME_VOLTAGE)
  private BigDecimal voltage;

  public static final String SERIALIZED_NAME_TEMPERATURE = "temperature";
  @SerializedName(SERIALIZED_NAME_TEMPERATURE)
  private Integer temperature;

  public static final String SERIALIZED_NAME_WHEN = "when";
  @SerializedName(SERIALIZED_NAME_WHEN)
  private String when;

  public static final String SERIALIZED_NAME_INDEX1 = "index1";
  @SerializedName(SERIALIZED_NAME_INDEX1)
  private List<BigDecimal> index1 = null;

  public static final String SERIALIZED_NAME_VARIABLE1 = "variable1";
  @SerializedName(SERIALIZED_NAME_VARIABLE1)
  private String variable1;

  public static final String SERIALIZED_NAME_INDEX2 = "index2";
  @SerializedName(SERIALIZED_NAME_INDEX2)
  private List<BigDecimal> index2 = null;

  public static final String SERIALIZED_NAME_VARIABLE2 = "variable2";
  @SerializedName(SERIALIZED_NAME_VARIABLE2)
  private String variable2;

  public static final String SERIALIZED_NAME_RISE_ENERGY = "rise_energy";
  @SerializedName(SERIALIZED_NAME_RISE_ENERGY)
  private List<BigDecimal> riseEnergy = new ArrayList<BigDecimal>();

  public static final String SERIALIZED_NAME_FALL_ENERGY = "fall_energy";
  @SerializedName(SERIALIZED_NAME_FALL_ENERGY)
  private List<BigDecimal> fallEnergy = new ArrayList<BigDecimal>();

  public static final String SERIALIZED_NAME_MODES = "modes";
  @SerializedName(SERIALIZED_NAME_MODES)
  private List<Integer> modes = null;


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




  public DesignPinEnergy pin(Integer pin) {
    
    this.pin = pin;
    return this;
  }

   /**
   * Get pin
   * @return pin
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getPin() {
    return pin;
  }


  public void setPin(Integer pin) {
    this.pin = pin;
  }


   /**
   * Get pinName
   * @return pinName
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getPinName() {
    return pinName;
  }




  public DesignPinEnergy relatedPin(Integer relatedPin) {
    
    this.relatedPin = relatedPin;
    return this;
  }

   /**
   * Get relatedPin
   * @return relatedPin
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getRelatedPin() {
    return relatedPin;
  }


  public void setRelatedPin(Integer relatedPin) {
    this.relatedPin = relatedPin;
  }


   /**
   * Get relatedPinName
   * @return relatedPinName
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getRelatedPinName() {
    return relatedPinName;
  }




  public DesignPinEnergy supply(Integer supply) {
    
    this.supply = supply;
    return this;
  }

   /**
   * Get supply
   * @return supply
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getSupply() {
    return supply;
  }


  public void setSupply(Integer supply) {
    this.supply = supply;
  }


   /**
   * Get supplyName
   * @return supplyName
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getSupplyName() {
    return supplyName;
  }




  public DesignPinEnergy process(String process) {
    
    this.process = process;
    return this;
  }

   /**
   * Get process
   * @return process
  **/
  @ApiModelProperty(required = true, value = "")

  public String getProcess() {
    return process;
  }


  public void setProcess(String process) {
    this.process = process;
  }


  public DesignPinEnergy rc(String rc) {
    
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


  public DesignPinEnergy voltage(BigDecimal voltage) {
    
    this.voltage = voltage;
    return this;
  }

   /**
   * Get voltage
   * @return voltage
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getVoltage() {
    return voltage;
  }


  public void setVoltage(BigDecimal voltage) {
    this.voltage = voltage;
  }


  public DesignPinEnergy temperature(Integer temperature) {
    
    this.temperature = temperature;
    return this;
  }

   /**
   * Get temperature
   * minimum: -32768
   * maximum: 32767
   * @return temperature
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getTemperature() {
    return temperature;
  }


  public void setTemperature(Integer temperature) {
    this.temperature = temperature;
  }


  public DesignPinEnergy when(String when) {
    
    this.when = when;
    return this;
  }

   /**
   * Get when
   * @return when
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getWhen() {
    return when;
  }


  public void setWhen(String when) {
    this.when = when;
  }


  public DesignPinEnergy index1(List<BigDecimal> index1) {
    
    this.index1 = index1;
    return this;
  }

  public DesignPinEnergy addIndex1Item(BigDecimal index1Item) {
    if (this.index1 == null) {
      this.index1 = new ArrayList<BigDecimal>();
    }
    this.index1.add(index1Item);
    return this;
  }

   /**
   * Get index1
   * @return index1
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<BigDecimal> getIndex1() {
    return index1;
  }


  public void setIndex1(List<BigDecimal> index1) {
    this.index1 = index1;
  }


  public DesignPinEnergy variable1(String variable1) {
    
    this.variable1 = variable1;
    return this;
  }

   /**
   * Get variable1
   * @return variable1
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getVariable1() {
    return variable1;
  }


  public void setVariable1(String variable1) {
    this.variable1 = variable1;
  }


  public DesignPinEnergy index2(List<BigDecimal> index2) {
    
    this.index2 = index2;
    return this;
  }

  public DesignPinEnergy addIndex2Item(BigDecimal index2Item) {
    if (this.index2 == null) {
      this.index2 = new ArrayList<BigDecimal>();
    }
    this.index2.add(index2Item);
    return this;
  }

   /**
   * Get index2
   * @return index2
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<BigDecimal> getIndex2() {
    return index2;
  }


  public void setIndex2(List<BigDecimal> index2) {
    this.index2 = index2;
  }


  public DesignPinEnergy variable2(String variable2) {
    
    this.variable2 = variable2;
    return this;
  }

   /**
   * Get variable2
   * @return variable2
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getVariable2() {
    return variable2;
  }


  public void setVariable2(String variable2) {
    this.variable2 = variable2;
  }


  public DesignPinEnergy riseEnergy(List<BigDecimal> riseEnergy) {
    
    this.riseEnergy = riseEnergy;
    return this;
  }

  public DesignPinEnergy addRiseEnergyItem(BigDecimal riseEnergyItem) {
    this.riseEnergy.add(riseEnergyItem);
    return this;
  }

   /**
   * Get riseEnergy
   * @return riseEnergy
  **/
  @ApiModelProperty(required = true, value = "")

  public List<BigDecimal> getRiseEnergy() {
    return riseEnergy;
  }


  public void setRiseEnergy(List<BigDecimal> riseEnergy) {
    this.riseEnergy = riseEnergy;
  }


  public DesignPinEnergy fallEnergy(List<BigDecimal> fallEnergy) {
    
    this.fallEnergy = fallEnergy;
    return this;
  }

  public DesignPinEnergy addFallEnergyItem(BigDecimal fallEnergyItem) {
    this.fallEnergy.add(fallEnergyItem);
    return this;
  }

   /**
   * Get fallEnergy
   * @return fallEnergy
  **/
  @ApiModelProperty(required = true, value = "")

  public List<BigDecimal> getFallEnergy() {
    return fallEnergy;
  }


  public void setFallEnergy(List<BigDecimal> fallEnergy) {
    this.fallEnergy = fallEnergy;
  }


   /**
   * Get modes
   * @return modes
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<Integer> getModes() {
    return modes;
  }




  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DesignPinEnergy designPinEnergy = (DesignPinEnergy) o;
    return Objects.equals(this.id, designPinEnergy.id) &&
        Objects.equals(this.pin, designPinEnergy.pin) &&
        Objects.equals(this.pinName, designPinEnergy.pinName) &&
        Objects.equals(this.relatedPin, designPinEnergy.relatedPin) &&
        Objects.equals(this.relatedPinName, designPinEnergy.relatedPinName) &&
        Objects.equals(this.supply, designPinEnergy.supply) &&
        Objects.equals(this.supplyName, designPinEnergy.supplyName) &&
        Objects.equals(this.process, designPinEnergy.process) &&
        Objects.equals(this.rc, designPinEnergy.rc) &&
        Objects.equals(this.voltage, designPinEnergy.voltage) &&
        Objects.equals(this.temperature, designPinEnergy.temperature) &&
        Objects.equals(this.when, designPinEnergy.when) &&
        Objects.equals(this.index1, designPinEnergy.index1) &&
        Objects.equals(this.variable1, designPinEnergy.variable1) &&
        Objects.equals(this.index2, designPinEnergy.index2) &&
        Objects.equals(this.variable2, designPinEnergy.variable2) &&
        Objects.equals(this.riseEnergy, designPinEnergy.riseEnergy) &&
        Objects.equals(this.fallEnergy, designPinEnergy.fallEnergy) &&
        Objects.equals(this.modes, designPinEnergy.modes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, pin, pinName, relatedPin, relatedPinName, supply, supplyName, process, rc, voltage, temperature, when, index1, variable1, index2, variable2, riseEnergy, fallEnergy, modes);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DesignPinEnergy {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    pin: ").append(toIndentedString(pin)).append("\n");
    sb.append("    pinName: ").append(toIndentedString(pinName)).append("\n");
    sb.append("    relatedPin: ").append(toIndentedString(relatedPin)).append("\n");
    sb.append("    relatedPinName: ").append(toIndentedString(relatedPinName)).append("\n");
    sb.append("    supply: ").append(toIndentedString(supply)).append("\n");
    sb.append("    supplyName: ").append(toIndentedString(supplyName)).append("\n");
    sb.append("    process: ").append(toIndentedString(process)).append("\n");
    sb.append("    rc: ").append(toIndentedString(rc)).append("\n");
    sb.append("    voltage: ").append(toIndentedString(voltage)).append("\n");
    sb.append("    temperature: ").append(toIndentedString(temperature)).append("\n");
    sb.append("    when: ").append(toIndentedString(when)).append("\n");
    sb.append("    index1: ").append(toIndentedString(index1)).append("\n");
    sb.append("    variable1: ").append(toIndentedString(variable1)).append("\n");
    sb.append("    index2: ").append(toIndentedString(index2)).append("\n");
    sb.append("    variable2: ").append(toIndentedString(variable2)).append("\n");
    sb.append("    riseEnergy: ").append(toIndentedString(riseEnergy)).append("\n");
    sb.append("    fallEnergy: ").append(toIndentedString(fallEnergy)).append("\n");
    sb.append("    modes: ").append(toIndentedString(modes)).append("\n");
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

