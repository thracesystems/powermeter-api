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
 * HeatsinkVersion
 */

public class HeatsinkVersion {
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

  public static final String SERIALIZED_NAME_HEATSINK = "heatsink";
  @SerializedName(SERIALIZED_NAME_HEATSINK)
  private Integer heatsink;


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




  public HeatsinkVersion descr(String descr) {
    
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
   * Get heatsink
   * @return heatsink
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getHeatsink() {
    return heatsink;
  }




  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HeatsinkVersion heatsinkVersion = (HeatsinkVersion) o;
    return Objects.equals(this.id, heatsinkVersion.id) &&
        Objects.equals(this.version, heatsinkVersion.version) &&
        Objects.equals(this.timestamp, heatsinkVersion.timestamp) &&
        Objects.equals(this.descr, heatsinkVersion.descr) &&
        Objects.equals(this.heatsink, heatsinkVersion.heatsink);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, version, timestamp, descr, heatsink);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HeatsinkVersion {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    version: ").append(toIndentedString(version)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    descr: ").append(toIndentedString(descr)).append("\n");
    sb.append("    heatsink: ").append(toIndentedString(heatsink)).append("\n");
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

