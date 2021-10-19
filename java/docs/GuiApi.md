# GuiApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**guiList**](GuiApi.md#guiList) | **GET** /gui/ | 
[**guiUpdate**](GuiApi.md#guiUpdate) | **PUT** /gui/ | 


<a name="guiList"></a>
# **guiList**
> guiList()



Get value of saved parameter

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.GuiApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    GuiApi apiInstance = new GuiApi(defaultClient);
    try {
      apiInstance.guiList();
    } catch (ApiException e) {
      System.err.println("Exception when calling GuiApi#guiList");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Value |  -  |
**404** | Not found |  -  |

<a name="guiUpdate"></a>
# **guiUpdate**
> guiUpdate()



Set value of parameter

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.GuiApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    GuiApi apiInstance = new GuiApi(defaultClient);
    try {
      apiInstance.guiUpdate();
    } catch (ApiException e) {
      System.err.println("Exception when calling GuiApi#guiUpdate");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Value set |  -  |
**400** | Missing name and/or value |  -  |

