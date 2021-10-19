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
import org.openapitools.client.model.DesignInstance;
import org.openapitools.client.model.PCBSupplyInst;
import org.openapitools.client.model.PackageInstance;
import org.openapitools.client.model.VRInstance;

/**
 * PCBInstance
 */

public class PCBInstance {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_HIER_NAME = "hier_name";
  @SerializedName(SERIALIZED_NAME_HIER_NAME)
  private String hierName;

  public static final String SERIALIZED_NAME_MASTER = "master";
  @SerializedName(SERIALIZED_NAME_MASTER)
  private Integer master;

  public static final String SERIALIZED_NAME_MASTER_MASTER = "master_master";
  @SerializedName(SERIALIZED_NAME_MASTER_MASTER)
  private Integer masterMaster;

  public static final String SERIALIZED_NAME_MASTER_NAME = "master_name";
  @SerializedName(SERIALIZED_NAME_MASTER_NAME)
  private String masterName;

  public static final String SERIALIZED_NAME_SUPPLIES = "supplies";
  @SerializedName(SERIALIZED_NAME_SUPPLIES)
  private List<PCBSupplyInst> supplies = new ArrayList<PCBSupplyInst>();

  public static final String SERIALIZED_NAME_VR = "vr";
  @SerializedName(SERIALIZED_NAME_VR)
  private List<VRInstance> vr = null;

  public static final String SERIALIZED_NAME_PACKAGE = "package";
  @SerializedName(SERIALIZED_NAME_PACKAGE)
  private List<PackageInstance> _package = null;

  public static final String SERIALIZED_NAME_DESIGN = "design";
  @SerializedName(SERIALIZED_NAME_DESIGN)
  private List<DesignInstance> design = null;


   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getId() {
    return id;
  }




  public PCBInstance name(String name) {
    
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


   /**
   * Get hierName
   * @return hierName
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public String getHierName() {
    return hierName;
  }




  public PCBInstance master(Integer master) {
    
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


   /**
   * Get masterMaster
   * @return masterMaster
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getMasterMaster() {
    return masterMaster;
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




  public PCBInstance supplies(List<PCBSupplyInst> supplies) {
    
    this.supplies = supplies;
    return this;
  }

  public PCBInstance addSuppliesItem(PCBSupplyInst suppliesItem) {
    this.supplies.add(suppliesItem);
    return this;
  }

   /**
   * Get supplies
   * @return supplies
  **/
  @ApiModelProperty(required = true, value = "")

  public List<PCBSupplyInst> getSupplies() {
    return supplies;
  }


  public void setSupplies(List<PCBSupplyInst> supplies) {
    this.supplies = supplies;
  }


   /**
   * Get vr
   * @return vr
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<VRInstance> getVr() {
    return vr;
  }




   /**
   * Get _package
   * @return _package
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<PackageInstance> getPackage() {
    return _package;
  }




   /**
   * Get design
   * @return design
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<DesignInstance> getDesign() {
    return design;
  }




  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PCBInstance pcBInstance = (PCBInstance) o;
    return Objects.equals(this.id, pcBInstance.id) &&
        Objects.equals(this.name, pcBInstance.name) &&
        Objects.equals(this.hierName, pcBInstance.hierName) &&
        Objects.equals(this.master, pcBInstance.master) &&
        Objects.equals(this.masterMaster, pcBInstance.masterMaster) &&
        Objects.equals(this.masterName, pcBInstance.masterName) &&
        Objects.equals(this.supplies, pcBInstance.supplies) &&
        Objects.equals(this.vr, pcBInstance.vr) &&
        Objects.equals(this._package, pcBInstance._package) &&
        Objects.equals(this.design, pcBInstance.design);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, hierName, master, masterMaster, masterName, supplies, vr, _package, design);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PCBInstance {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    hierName: ").append(toIndentedString(hierName)).append("\n");
    sb.append("    master: ").append(toIndentedString(master)).append("\n");
    sb.append("    masterMaster: ").append(toIndentedString(masterMaster)).append("\n");
    sb.append("    masterName: ").append(toIndentedString(masterName)).append("\n");
    sb.append("    supplies: ").append(toIndentedString(supplies)).append("\n");
    sb.append("    vr: ").append(toIndentedString(vr)).append("\n");
    sb.append("    _package: ").append(toIndentedString(_package)).append("\n");
    sb.append("    design: ").append(toIndentedString(design)).append("\n");
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

