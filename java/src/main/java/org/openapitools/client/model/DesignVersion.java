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
import org.threeten.bp.OffsetDateTime;

/**
 * DesignVersion
 */

public class DesignVersion {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id;

  public static final String SERIALIZED_NAME_VERSION = "version";
  @SerializedName(SERIALIZED_NAME_VERSION)
  private Integer version;

  public static final String SERIALIZED_NAME_TIMESTAMP = "timestamp";
  @SerializedName(SERIALIZED_NAME_TIMESTAMP)
  private OffsetDateTime timestamp;

  public static final String SERIALIZED_NAME_DESCR = "descr";
  @SerializedName(SERIALIZED_NAME_DESCR)
  private String descr;

  public static final String SERIALIZED_NAME_DESIGN = "design";
  @SerializedName(SERIALIZED_NAME_DESIGN)
  private Integer design;


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
   * Get version
   * @return version
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getVersion() {
    return version;
  }




   /**
   * Get timestamp
   * @return timestamp
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public OffsetDateTime getTimestamp() {
    return timestamp;
  }




  public DesignVersion descr(String descr) {
    
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


   /**
   * Get design
   * @return design
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getDesign() {
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
    DesignVersion designVersion = (DesignVersion) o;
    return Objects.equals(this.id, designVersion.id) &&
        Objects.equals(this.version, designVersion.version) &&
        Objects.equals(this.timestamp, designVersion.timestamp) &&
        Objects.equals(this.descr, designVersion.descr) &&
        Objects.equals(this.design, designVersion.design);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, version, timestamp, descr, design);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DesignVersion {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    version: ").append(toIndentedString(version)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    descr: ").append(toIndentedString(descr)).append("\n");
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

