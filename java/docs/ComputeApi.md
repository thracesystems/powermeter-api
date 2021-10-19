# ComputeApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**computePower**](ComputeApi.md#computePower) | **POST** /compute/power/ | 


<a name="computePower"></a>
# **computePower**
> computePower(data)



Computes equation(s)

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ComputeApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ComputeApi apiInstance = new ComputeApi(defaultClient);
    ComputePower data = new ComputePower(); // ComputePower | 
    try {
      apiInstance.computePower(data);
    } catch (ApiException e) {
      System.err.println("Exception when calling ComputeApi#computePower");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **data** | [**ComputePower**](ComputePower.md)|  |

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Computed value(s) returned |  -  |
**400** | Error. Message returned |  -  |
**500** | Internal error |  -  |

