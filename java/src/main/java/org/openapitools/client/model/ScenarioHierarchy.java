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
import org.openapitools.client.model.PCBInstance;
import org.openapitools.client.model.PackageInstance;
import org.openapitools.client.model.VRInstance;

/**
 * ScenarioHierarchy
 */

public class ScenarioHierarchy {
  public static final String SERIALIZED_NAME_PCB = "pcb";
  @SerializedName(SERIALIZED_NAME_PCB)
  private List<PCBInstance> pcb = new ArrayList<PCBInstance>();

  public static final String SERIALIZED_NAME_VR = "vr";
  @SerializedName(SERIALIZED_NAME_VR)
  private List<VRInstance> vr = new ArrayList<VRInstance>();

  public static final String SERIALIZED_NAME_PACKAGE = "package";
  @SerializedName(SERIALIZED_NAME_PACKAGE)
  private List<PackageInstance> _package = new ArrayList<PackageInstance>();

  public static final String SERIALIZED_NAME_DESIGN = "design";
  @SerializedName(SERIALIZED_NAME_DESIGN)
  private List<DesignInstance> design = new ArrayList<DesignInstance>();


  public ScenarioHierarchy pcb(List<PCBInstance> pcb) {
    
    this.pcb = pcb;
    return this;
  }

  public ScenarioHierarchy addPcbItem(PCBInstance pcbItem) {
    this.pcb.add(pcbItem);
    return this;
  }

   /**
   * Get pcb
   * @return pcb
  **/
  @ApiModelProperty(required = true, value = "")

  public List<PCBInstance> getPcb() {
    return pcb;
  }


  public void setPcb(List<PCBInstance> pcb) {
    this.pcb = pcb;
  }


  public ScenarioHierarchy vr(List<VRInstance> vr) {
    
    this.vr = vr;
    return this;
  }

  public ScenarioHierarchy addVrItem(VRInstance vrItem) {
    this.vr.add(vrItem);
    return this;
  }

   /**
   * Get vr
   * @return vr
  **/
  @ApiModelProperty(required = true, value = "")

  public List<VRInstance> getVr() {
    return vr;
  }


  public void setVr(List<VRInstance> vr) {
    this.vr = vr;
  }


  public ScenarioHierarchy _package(List<PackageInstance> _package) {
    
    this._package = _package;
    return this;
  }

  public ScenarioHierarchy addPackageItem(PackageInstance _packageItem) {
    this._package.add(_packageItem);
    return this;
  }

   /**
   * Get _package
   * @return _package
  **/
  @ApiModelProperty(required = true, value = "")

  public List<PackageInstance> getPackage() {
    return _package;
  }


  public void setPackage(List<PackageInstance> _package) {
    this._package = _package;
  }


  public ScenarioHierarchy design(List<DesignInstance> design) {
    
    this.design = design;
    return this;
  }

  public ScenarioHierarchy addDesignItem(DesignInstance designItem) {
    this.design.add(designItem);
    return this;
  }

   /**
   * Get design
   * @return design
  **/
  @ApiModelProperty(required = true, value = "")

  public List<DesignInstance> getDesign() {
    return design;
  }


  public void setDesign(List<DesignInstance> design) {
    this.design = design;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ScenarioHierarchy scenarioHierarchy = (ScenarioHierarchy) o;
    return Objects.equals(this.pcb, scenarioHierarchy.pcb) &&
        Objects.equals(this.vr, scenarioHierarchy.vr) &&
        Objects.equals(this._package, scenarioHierarchy._package) &&
        Objects.equals(this.design, scenarioHierarchy.design);
  }

  @Override
  public int hashCode() {
    return Objects.hash(pcb, vr, _package, design);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ScenarioHierarchy {\n");
    sb.append("    pcb: ").append(toIndentedString(pcb)).append("\n");
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

