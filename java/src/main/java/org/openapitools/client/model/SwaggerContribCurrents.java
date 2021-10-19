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
 * SwaggerContribCurrents
 */

public class SwaggerContribCurrents {
  public static final String SERIALIZED_NAME_P = "p";
  @SerializedName(SERIALIZED_NAME_P)
  private String p;

  public static final String SERIALIZED_NAME_V = "v";
  @SerializedName(SERIALIZED_NAME_V)
  private BigDecimal v;

  public static final String SERIALIZED_NAME_T = "t";
  @SerializedName(SERIALIZED_NAME_T)
  private Integer t;

  public static final String SERIALIZED_NAME_ID = "Id";
  @SerializedName(SERIALIZED_NAME_ID)
  private BigDecimal id;

  public static final String SERIALIZED_NAME_IG = "Ig";
  @SerializedName(SERIALIZED_NAME_IG)
  private BigDecimal ig;

  public static final String SERIALIZED_NAME_IS = "Is";
  @SerializedName(SERIALIZED_NAME_IS)
  private BigDecimal is;

  public static final String SERIALIZED_NAME_IB = "Ib";
  @SerializedName(SERIALIZED_NAME_IB)
  private BigDecimal ib;


  public SwaggerContribCurrents p(String p) {
    
    this.p = p;
    return this;
  }

   /**
   * Get p
   * @return p
  **/
  @ApiModelProperty(required = true, value = "")

  public String getP() {
    return p;
  }


  public void setP(String p) {
    this.p = p;
  }


  public SwaggerContribCurrents v(BigDecimal v) {
    
    this.v = v;
    return this;
  }

   /**
   * Get v
   * @return v
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getV() {
    return v;
  }


  public void setV(BigDecimal v) {
    this.v = v;
  }


  public SwaggerContribCurrents t(Integer t) {
    
    this.t = t;
    return this;
  }

   /**
   * Get t
   * @return t
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getT() {
    return t;
  }


  public void setT(Integer t) {
    this.t = t;
  }


  public SwaggerContribCurrents id(BigDecimal id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getId() {
    return id;
  }


  public void setId(BigDecimal id) {
    this.id = id;
  }


  public SwaggerContribCurrents ig(BigDecimal ig) {
    
    this.ig = ig;
    return this;
  }

   /**
   * Get ig
   * @return ig
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getIg() {
    return ig;
  }


  public void setIg(BigDecimal ig) {
    this.ig = ig;
  }


  public SwaggerContribCurrents is(BigDecimal is) {
    
    this.is = is;
    return this;
  }

   /**
   * Get is
   * @return is
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getIs() {
    return is;
  }


  public void setIs(BigDecimal is) {
    this.is = is;
  }


  public SwaggerContribCurrents ib(BigDecimal ib) {
    
    this.ib = ib;
    return this;
  }

   /**
   * Get ib
   * @return ib
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getIb() {
    return ib;
  }


  public void setIb(BigDecimal ib) {
    this.ib = ib;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SwaggerContribCurrents swaggerContribCurrents = (SwaggerContribCurrents) o;
    return Objects.equals(this.p, swaggerContribCurrents.p) &&
        Objects.equals(this.v, swaggerContribCurrents.v) &&
        Objects.equals(this.t, swaggerContribCurrents.t) &&
        Objects.equals(this.id, swaggerContribCurrents.id) &&
        Objects.equals(this.ig, swaggerContribCurrents.ig) &&
        Objects.equals(this.is, swaggerContribCurrents.is) &&
        Objects.equals(this.ib, swaggerContribCurrents.ib);
  }

  @Override
  public int hashCode() {
    return Objects.hash(p, v, t, id, ig, is, ib);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SwaggerContribCurrents {\n");
    sb.append("    p: ").append(toIndentedString(p)).append("\n");
    sb.append("    v: ").append(toIndentedString(v)).append("\n");
    sb.append("    t: ").append(toIndentedString(t)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    ig: ").append(toIndentedString(ig)).append("\n");
    sb.append("    is: ").append(toIndentedString(is)).append("\n");
    sb.append("    ib: ").append(toIndentedString(ib)).append("\n");
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
