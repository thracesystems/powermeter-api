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
 * DesignSupplyInst
 */

public class DesignSupplyInst {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_CONTAINER = "container";
  @SerializedName(SERIALIZED_NAME_CONTAINER)
  private Integer container;

  public static final String SERIALIZED_NAME_MASTER = "master";
  @SerializedName(SERIALIZED_NAME_MASTER)
  private Integer master;

  public static final String SERIALIZED_NAME_COLOR = "color";
  @SerializedName(SERIALIZED_NAME_COLOR)
  private String color;

  public static final String SERIALIZED_NAME_CONNECTION_COLOR = "connection_color";
  @SerializedName(SERIALIZED_NAME_CONNECTION_COLOR)
  private String connectionColor;

  public static final String SERIALIZED_NAME_MASTER_NAME = "master_name";
  @SerializedName(SERIALIZED_NAME_MASTER_NAME)
  private String masterName;

  public static final String SERIALIZED_NAME_HIER_NAME = "hier_name";
  @SerializedName(SERIALIZED_NAME_HIER_NAME)
  private String hierName;

  public static final String SERIALIZED_NAME_CONNECTED_TO = "connected_to";
  @SerializedName(SERIALIZED_NAME_CONNECTED_TO)
  private Integer connectedTo;

  public static final String SERIALIZED_NAME_CONNECTED_TO_TYPE = "connected_to_type";
  @SerializedName(SERIALIZED_NAME_CONNECTED_TO_TYPE)
  private String connectedToType;


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
   * Get container
   * @return container
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getContainer() {
    return container;
  }




  public DesignSupplyInst master(Integer master) {
    
    this.master = master;
    return this;
  }

   /**
   * Get master
   * @return master
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getMaster() {
    return master;
  }


  public void setMaster(Integer master) {
    this.master = master;
  }


  public DesignSupplyInst color(String color) {
    
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
   * Get connectionColor
   * @return connectionColor
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getConnectionColor() {
    return connectionColor;
  }




   /**
   * Get masterName
   * @return masterName
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getMasterName() {
    return masterName;
  }




   /**
   * Get hierName
   * @return hierName
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getHierName() {
    return hierName;
  }




  public DesignSupplyInst connectedTo(Integer connectedTo) {
    
    this.connectedTo = connectedTo;
    return this;
  }

   /**
   * Get connectedTo
   * minimum: 0
   * maximum: 2147483647
   * @return connectedTo
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getConnectedTo() {
    return connectedTo;
  }


  public void setConnectedTo(Integer connectedTo) {
    this.connectedTo = connectedTo;
  }


  public DesignSupplyInst connectedToType(String connectedToType) {
    
    this.connectedToType = connectedToType;
    return this;
  }

   /**
   * Get connectedToType
   * @return connectedToType
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getConnectedToType() {
    return connectedToType;
  }


  public void setConnectedToType(String connectedToType) {
    this.connectedToType = connectedToType;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DesignSupplyInst designSupplyInst = (DesignSupplyInst) o;
    return Objects.equals(this.id, designSupplyInst.id) &&
        Objects.equals(this.container, designSupplyInst.container) &&
        Objects.equals(this.master, designSupplyInst.master) &&
        Objects.equals(this.color, designSupplyInst.color) &&
        Objects.equals(this.connectionColor, designSupplyInst.connectionColor) &&
        Objects.equals(this.masterName, designSupplyInst.masterName) &&
        Objects.equals(this.hierName, designSupplyInst.hierName) &&
        Objects.equals(this.connectedTo, designSupplyInst.connectedTo) &&
        Objects.equals(this.connectedToType, designSupplyInst.connectedToType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, container, master, color, connectionColor, masterName, hierName, connectedTo, connectedToType);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DesignSupplyInst {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    container: ").append(toIndentedString(container)).append("\n");
    sb.append("    master: ").append(toIndentedString(master)).append("\n");
    sb.append("    color: ").append(toIndentedString(color)).append("\n");
    sb.append("    connectionColor: ").append(toIndentedString(connectionColor)).append("\n");
    sb.append("    masterName: ").append(toIndentedString(masterName)).append("\n");
    sb.append("    hierName: ").append(toIndentedString(hierName)).append("\n");
    sb.append("    connectedTo: ").append(toIndentedString(connectedTo)).append("\n");
    sb.append("    connectedToType: ").append(toIndentedString(connectedToType)).append("\n");
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

