# WlmApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**wlmCommitCreate**](WlmApi.md#wlmCommitCreate) | **POST** /wlm/{wlmid}/commit/ | 
[**wlmCreate**](WlmApi.md#wlmCreate) | **POST** /wlm/{wlmid}/ | 
[**wlmDataCreate**](WlmApi.md#wlmDataCreate) | **POST** /wlm/{wlmid}/data/{dataid}/ | 
[**wlmDataRead**](WlmApi.md#wlmDataRead) | **GET** /wlm/{wlmid}/data/{dataid}/ | 
[**wlmDataUpdate**](WlmApi.md#wlmDataUpdate) | **PUT** /wlm/{wlmid}/data/{dataid}/ | 
[**wlmRead**](WlmApi.md#wlmRead) | **GET** /wlm/{wlmid}/ | 
[**wlmVersionList**](WlmApi.md#wlmVersionList) | **GET** /wlm/{wlmid}/version/ | 


<a name="wlmCommitCreate"></a>
# **wlmCommitCreate**
> WLMVersion wlmCommitCreate(wlmid, data)



Commit a version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WlmApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    WlmApi apiInstance = new WlmApi(defaultClient);
    Integer wlmid = 56; // Integer | 
    WLMVersion data = new WLMVersion(); // WLMVersion | 
    try {
      WLMVersion result = apiInstance.wlmCommitCreate(wlmid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling WlmApi#wlmCommitCreate");
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
 **wlmid** | **Integer**|  |
 **data** | [**WLMVersion**](WLMVersion.md)|  |

### Return type

[**WLMVersion**](WLMVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with input data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="wlmCreate"></a>
# **wlmCreate**
> WireLoad wlmCreate(wlmid, data)



Create wire load data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WlmApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    WlmApi apiInstance = new WlmApi(defaultClient);
    Integer wlmid = 56; // Integer | 
    WireLoad data = new WireLoad(); // WireLoad | 
    try {
      WireLoad result = apiInstance.wlmCreate(wlmid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling WlmApi#wlmCreate");
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
 **wlmid** | **Integer**|  |
 **data** | [**WireLoad**](WireLoad.md)|  |

### Return type

[**WireLoad**](WireLoad.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="wlmDataCreate"></a>
# **wlmDataCreate**
> wlmDataCreate(wlmid, dataid)



Delete wire load data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WlmApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    WlmApi apiInstance = new WlmApi(defaultClient);
    Integer wlmid = 56; // Integer | 
    Integer dataid = 56; // Integer | 
    try {
      apiInstance.wlmDataCreate(wlmid, dataid);
    } catch (ApiException e) {
      System.err.println("Exception when calling WlmApi#wlmDataCreate");
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
 **wlmid** | **Integer**|  |
 **dataid** | **Integer**|  |

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
**200** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="wlmDataRead"></a>
# **wlmDataRead**
> WireLoad wlmDataRead(wlmid, dataid)



Get list of wire load data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WlmApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    WlmApi apiInstance = new WlmApi(defaultClient);
    Integer wlmid = 56; // Integer | 
    Integer dataid = 56; // Integer | 
    try {
      WireLoad result = apiInstance.wlmDataRead(wlmid, dataid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling WlmApi#wlmDataRead");
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
 **wlmid** | **Integer**|  |
 **dataid** | **Integer**|  |

### Return type

[**WireLoad**](WireLoad.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="wlmDataUpdate"></a>
# **wlmDataUpdate**
> WireLoad wlmDataUpdate(wlmid, dataid, data)



Update wire load data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WlmApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    WlmApi apiInstance = new WlmApi(defaultClient);
    Integer wlmid = 56; // Integer | 
    Integer dataid = 56; // Integer | 
    WireLoad data = new WireLoad(); // WireLoad | 
    try {
      WireLoad result = apiInstance.wlmDataUpdate(wlmid, dataid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling WlmApi#wlmDataUpdate");
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
 **wlmid** | **Integer**|  |
 **dataid** | **Integer**|  |
 **data** | [**WireLoad**](WireLoad.md)|  |

### Return type

[**WireLoad**](WireLoad.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="wlmRead"></a>
# **wlmRead**
> WLMModel wlmRead(wlmid)



Get list of wire load data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WlmApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    WlmApi apiInstance = new WlmApi(defaultClient);
    Integer wlmid = 56; // Integer | 
    try {
      WLMModel result = apiInstance.wlmRead(wlmid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling WlmApi#wlmRead");
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
 **wlmid** | **Integer**|  |

### Return type

[**WLMModel**](WLMModel.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="wlmVersionList"></a>
# **wlmVersionList**
> List&lt;WLMVersion&gt; wlmVersionList(wlmid, pcbid)



Get WLM versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.WlmApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    WlmApi apiInstance = new WlmApi(defaultClient);
    String wlmid = "wlmid_example"; // String | 
    Integer pcbid = 56; // Integer | 
    try {
      List<WLMVersion> result = apiInstance.wlmVersionList(wlmid, pcbid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling WlmApi#wlmVersionList");
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
 **wlmid** | **String**|  |
 **pcbid** | **Integer**|  |

### Return type

[**List&lt;WLMVersion&gt;**](WLMVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

