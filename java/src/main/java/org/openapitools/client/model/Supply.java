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
 * Supply
 */

public class Supply {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_VOLTAGE = "voltage";
  @SerializedName(SERIALIZED_NAME_VOLTAGE)
  private BigDecimal voltage;

  /**
   * Gets or Sets type
   */
  @JsonAdapter(TypeEnum.Adapter.class)
  public enum TypeEnum {
    PRIMARY_POWER("primary_power"),
    
    PRIMARY_GROUND("primary_ground"),
    
    BACKUP_POWER("backup_power"),
    
    BACKUP_GROUND("backup_ground"),
    
    INTERNAL_POWER("internal_power"),
    
    INTERNAL_GROUND("internal_ground"),
    
    PWELL("pwell"),
    
    NWELL("nwell"),
    
    DEEPNWELL("deepnwell"),
    
    DEEPPWELL("deeppwell");

    private String value;

    TypeEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static TypeEnum fromValue(String value) {
      for (TypeEnum b : TypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<TypeEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final TypeEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public TypeEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return TypeEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private TypeEnum type;

  public static final String SERIALIZED_NAME_IS_POWER = "is_power";
  @SerializedName(SERIALIZED_NAME_IS_POWER)
  private Boolean isPower;

  public static final String SERIALIZED_NAME_IS_GROUND = "is_ground";
  @SerializedName(SERIALIZED_NAME_IS_GROUND)
  private Boolean isGround;

  public static final String SERIALIZED_NAME_SWITCHABLE = "switchable";
  @SerializedName(SERIALIZED_NAME_SWITCHABLE)
  private Boolean switchable;

  public static final String SERIALIZED_NAME_MASTER_SUPPLY = "master_supply";
  @SerializedName(SERIALIZED_NAME_MASTER_SUPPLY)
  private Integer masterSupply;

  public static final String SERIALIZED_NAME_COLOR = "color";
  @SerializedName(SERIALIZED_NAME_COLOR)
  private String color;

  public static final String SERIALIZED_NAME_INSTANCE_COUNT = "instance_count";
  @SerializedName(SERIALIZED_NAME_INSTANCE_COUNT)
  private Integer instanceCount;


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




  public Supply name(String name) {
    
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


  public Supply voltage(BigDecimal voltage) {
    
    this.voltage = voltage;
    return this;
  }

   /**
   * Get voltage
   * minimum: 0.01
   * @return voltage
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public BigDecimal getVoltage() {
    return voltage;
  }


  public void setVoltage(BigDecimal voltage) {
    this.voltage = voltage;
  }


  public Supply type(TypeEnum type) {
    
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public TypeEnum getType() {
    return type;
  }


  public void setType(TypeEnum type) {
    this.type = type;
  }


   /**
   * Get isPower
   * @return isPower
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Boolean getIsPower() {
    return isPower;
  }




   /**
   * Get isGround
   * @return isGround
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Boolean getIsGround() {
    return isGround;
  }




  public Supply switchable(Boolean switchable) {
    
    this.switchable = switchable;
    return this;
  }

   /**
   * Get switchable
   * @return switchable
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Boolean getSwitchable() {
    return switchable;
  }


  public void setSwitchable(Boolean switchable) {
    this.switchable = switchable;
  }


  public Supply masterSupply(Integer masterSupply) {
    
    this.masterSupply = masterSupply;
    return this;
  }

   /**
   * Get masterSupply
   * @return masterSupply
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getMasterSupply() {
    return masterSupply;
  }


  public void setMasterSupply(Integer masterSupply) {
    this.masterSupply = masterSupply;
  }


  public Supply color(String color) {
    
    this.color = color;
    return this;
  }

   /**
   * Get color
   * @return color
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getColor() {
    return color;
  }


  public void setColor(String color) {
    this.color = color;
  }


   /**
   * Get instanceCount
   * @return instanceCount
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getInstanceCount() {
    return instanceCount;
  }




  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Supply supply = (Supply) o;
    return Objects.equals(this.id, supply.id) &&
        Objects.equals(this.name, supply.name) &&
        Objects.equals(this.voltage, supply.voltage) &&
        Objects.equals(this.type, supply.type) &&
        Objects.equals(this.isPower, supply.isPower) &&
        Objects.equals(this.isGround, supply.isGround) &&
        Objects.equals(this.switchable, supply.switchable) &&
        Objects.equals(this.masterSupply, supply.masterSupply) &&
        Objects.equals(this.color, supply.color) &&
        Objects.equals(this.instanceCount, supply.instanceCount);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, voltage, type, isPower, isGround, switchable, masterSupply, color, instanceCount);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Supply {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    voltage: ").append(toIndentedString(voltage)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    isPower: ").append(toIndentedString(isPower)).append("\n");
    sb.append("    isGround: ").append(toIndentedString(isGround)).append("\n");
    sb.append("    switchable: ").append(toIndentedString(switchable)).append("\n");
    sb.append("    masterSupply: ").append(toIndentedString(masterSupply)).append("\n");
    sb.append("    color: ").append(toIndentedString(color)).append("\n");
    sb.append("    instanceCount: ").append(toIndentedString(instanceCount)).append("\n");
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
