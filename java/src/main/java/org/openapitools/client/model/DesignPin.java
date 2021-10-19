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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.PinCap;

/**
 * DesignPin
 */

public class DesignPin {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  /**
   * Gets or Sets direction
   */
  @JsonAdapter(DirectionEnum.Adapter.class)
  public enum DirectionEnum {
    INPUT("input"),
    
    OUTPUT("output"),
    
    INOUT("inout"),
    
    INTERNAL("internal");

    private String value;

    DirectionEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static DirectionEnum fromValue(String value) {
      for (DirectionEnum b : DirectionEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<DirectionEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final DirectionEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public DirectionEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return DirectionEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_DIRECTION = "direction";
  @SerializedName(SERIALIZED_NAME_DIRECTION)
  private DirectionEnum direction;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_BUS = "bus";
  @SerializedName(SERIALIZED_NAME_BUS)
  private String bus;

  public static final String SERIALIZED_NAME_BUS_INDEX = "bus_index";
  @SerializedName(SERIALIZED_NAME_BUS_INDEX)
  private Integer busIndex;

  public static final String SERIALIZED_NAME_BUNDLE = "bundle";
  @SerializedName(SERIALIZED_NAME_BUNDLE)
  private String bundle;

  public static final String SERIALIZED_NAME_BUNDLE_INDEX = "bundle_index";
  @SerializedName(SERIALIZED_NAME_BUNDLE_INDEX)
  private Integer bundleIndex;

  public static final String SERIALIZED_NAME_PIN_CAPS = "pin_caps";
  @SerializedName(SERIALIZED_NAME_PIN_CAPS)
  private List<PinCap> pinCaps = null;

  public static final String SERIALIZED_NAME_POWER_COUNT = "power_count";
  @SerializedName(SERIALIZED_NAME_POWER_COUNT)
  private Integer powerCount;

  public static final String SERIALIZED_NAME_FUNCTION = "function";
  @SerializedName(SERIALIZED_NAME_FUNCTION)
  private String function;

  public static final String SERIALIZED_NAME_INTERNAL_NODE = "internal_node";
  @SerializedName(SERIALIZED_NAME_INTERNAL_NODE)
  private String internalNode;


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




  public DesignPin name(String name) {
    
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


  public DesignPin direction(DirectionEnum direction) {
    
    this.direction = direction;
    return this;
  }

   /**
   * Get direction
   * @return direction
  **/
  @ApiModelProperty(required = true, value = "")

  public DirectionEnum getDirection() {
    return direction;
  }


  public void setDirection(DirectionEnum direction) {
    this.direction = direction;
  }


  public DesignPin type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  public DesignPin bus(String bus) {
    
    this.bus = bus;
    return this;
  }

   /**
   * Get bus
   * @return bus
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getBus() {
    return bus;
  }


  public void setBus(String bus) {
    this.bus = bus;
  }


  public DesignPin busIndex(Integer busIndex) {
    
    this.busIndex = busIndex;
    return this;
  }

   /**
   * Get busIndex
   * minimum: -2147483648
   * maximum: 2147483647
   * @return busIndex
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getBusIndex() {
    return busIndex;
  }


  public void setBusIndex(Integer busIndex) {
    this.busIndex = busIndex;
  }


  public DesignPin bundle(String bundle) {
    
    this.bundle = bundle;
    return this;
  }

   /**
   * Get bundle
   * @return bundle
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getBundle() {
    return bundle;
  }


  public void setBundle(String bundle) {
    this.bundle = bundle;
  }


  public DesignPin bundleIndex(Integer bundleIndex) {
    
    this.bundleIndex = bundleIndex;
    return this;
  }

   /**
   * Get bundleIndex
   * minimum: 0
   * maximum: 2147483647
   * @return bundleIndex
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getBundleIndex() {
    return bundleIndex;
  }


  public void setBundleIndex(Integer bundleIndex) {
    this.bundleIndex = bundleIndex;
  }


   /**
   * Get pinCaps
   * @return pinCaps
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<PinCap> getPinCaps() {
    return pinCaps;
  }




   /**
   * Get powerCount
   * @return powerCount
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getPowerCount() {
    return powerCount;
  }




  public DesignPin function(String function) {
    
    this.function = function;
    return this;
  }

   /**
   * Get function
   * @return function
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getFunction() {
    return function;
  }


  public void setFunction(String function) {
    this.function = function;
  }


  public DesignPin internalNode(String internalNode) {
    
    this.internalNode = internalNode;
    return this;
  }

   /**
   * Get internalNode
   * @return internalNode
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getInternalNode() {
    return internalNode;
  }


  public void setInternalNode(String internalNode) {
    this.internalNode = internalNode;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DesignPin designPin = (DesignPin) o;
    return Objects.equals(this.id, designPin.id) &&
        Objects.equals(this.name, designPin.name) &&
        Objects.equals(this.direction, designPin.direction) &&
        Objects.equals(this.type, designPin.type) &&
        Objects.equals(this.bus, designPin.bus) &&
        Objects.equals(this.busIndex, designPin.busIndex) &&
        Objects.equals(this.bundle, designPin.bundle) &&
        Objects.equals(this.bundleIndex, designPin.bundleIndex) &&
        Objects.equals(this.pinCaps, designPin.pinCaps) &&
        Objects.equals(this.powerCount, designPin.powerCount) &&
        Objects.equals(this.function, designPin.function) &&
        Objects.equals(this.internalNode, designPin.internalNode);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, direction, type, bus, busIndex, bundle, bundleIndex, pinCaps, powerCount, function, internalNode);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DesignPin {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    direction: ").append(toIndentedString(direction)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    bus: ").append(toIndentedString(bus)).append("\n");
    sb.append("    busIndex: ").append(toIndentedString(busIndex)).append("\n");
    sb.append("    bundle: ").append(toIndentedString(bundle)).append("\n");
    sb.append("    bundleIndex: ").append(toIndentedString(bundleIndex)).append("\n");
    sb.append("    pinCaps: ").append(toIndentedString(pinCaps)).append("\n");
    sb.append("    powerCount: ").append(toIndentedString(powerCount)).append("\n");
    sb.append("    function: ").append(toIndentedString(function)).append("\n");
    sb.append("    internalNode: ").append(toIndentedString(internalNode)).append("\n");
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

