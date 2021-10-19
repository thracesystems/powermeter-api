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
import org.openapitools.client.model.DesignPinEnergy;

/**
 * PagedDesignPinEnergy
 */

public class PagedDesignPinEnergy {
  public static final String SERIALIZED_NAME_PAGE = "page";
  @SerializedName(SERIALIZED_NAME_PAGE)
  private Integer page;

  public static final String SERIALIZED_NAME_PAGES = "pages";
  @SerializedName(SERIALIZED_NAME_PAGES)
  private Integer pages;

  public static final String SERIALIZED_NAME_POWER = "power";
  @SerializedName(SERIALIZED_NAME_POWER)
  private List<DesignPinEnergy> power = new ArrayList<DesignPinEnergy>();


  public PagedDesignPinEnergy page(Integer page) {
    
    this.page = page;
    return this;
  }

   /**
   * Get page
   * @return page
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getPage() {
    return page;
  }


  public void setPage(Integer page) {
    this.page = page;
  }


  public PagedDesignPinEnergy pages(Integer pages) {
    
    this.pages = pages;
    return this;
  }

   /**
   * Get pages
   * @return pages
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getPages() {
    return pages;
  }


  public void setPages(Integer pages) {
    this.pages = pages;
  }


  public PagedDesignPinEnergy power(List<DesignPinEnergy> power) {
    
    this.power = power;
    return this;
  }

  public PagedDesignPinEnergy addPowerItem(DesignPinEnergy powerItem) {
    this.power.add(powerItem);
    return this;
  }

   /**
   * Get power
   * @return power
  **/
  @ApiModelProperty(required = true, value = "")

  public List<DesignPinEnergy> getPower() {
    return power;
  }


  public void setPower(List<DesignPinEnergy> power) {
    this.power = power;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PagedDesignPinEnergy pagedDesignPinEnergy = (PagedDesignPinEnergy) o;
    return Objects.equals(this.page, pagedDesignPinEnergy.page) &&
        Objects.equals(this.pages, pagedDesignPinEnergy.pages) &&
        Objects.equals(this.power, pagedDesignPinEnergy.power);
  }

  @Override
  public int hashCode() {
    return Objects.hash(page, pages, power);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PagedDesignPinEnergy {\n");
    sb.append("    page: ").append(toIndentedString(page)).append("\n");
    sb.append("    pages: ").append(toIndentedString(pages)).append("\n");
    sb.append("    power: ").append(toIndentedString(power)).append("\n");
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

