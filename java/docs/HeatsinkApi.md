# HeatsinkApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**haetsinkLibraryClone**](HeatsinkApi.md#haetsinkLibraryClone) | **POST** /heatsink/library/{heatsinkmasterid}/clone/ | 
[**heatsinkCommitCreate**](HeatsinkApi.md#heatsinkCommitCreate) | **POST** /heatsink/{heatsinkid}/commit/ | 
[**heatsinkLibraryCreate**](HeatsinkApi.md#heatsinkLibraryCreate) | **POST** /heatsink/library/ | 
[**heatsinkLibraryDelete**](HeatsinkApi.md#heatsinkLibraryDelete) | **DELETE** /heatsink/library/{heatsinkmasterid}/ | 
[**heatsinkLibraryList**](HeatsinkApi.md#heatsinkLibraryList) | **GET** /heatsink/library/ | 
[**heatsinkLibraryRead**](HeatsinkApi.md#heatsinkLibraryRead) | **GET** /heatsink/library/{heatsinkmasterid}/ | 
[**heatsinkLibraryUpdate**](HeatsinkApi.md#heatsinkLibraryUpdate) | **PUT** /heatsink/library/{heatsinkmasterid}/ | 
[**heatsinkLibraryUpdateList**](HeatsinkApi.md#heatsinkLibraryUpdateList) | **GET** /heatsink/library/update/ | 
[**heatsinkLibraryVersionList**](HeatsinkApi.md#heatsinkLibraryVersionList) | **GET** /heatsink/library/{heatsinkmasterid}/version/ | 
[**heatsinkPermissionsList**](HeatsinkApi.md#heatsinkPermissionsList) | **GET** /heatsink/{heatsinkid}/permissions/ | 
[**heatsinkPermissionsUpdate**](HeatsinkApi.md#heatsinkPermissionsUpdate) | **PUT** /heatsink/{heatsinkid}/permissions/ | 
[**heatsinkRead**](HeatsinkApi.md#heatsinkRead) | **GET** /heatsink/{heatsinkid}/ | 
[**heatsinkRestoreCreate**](HeatsinkApi.md#heatsinkRestoreCreate) | **POST** /heatsink/{heatsinkid}/restore/ | 
[**heatsinkUpdate**](HeatsinkApi.md#heatsinkUpdate) | **PUT** /heatsink/{heatsinkid}/ | 
[**heatsinkUpdateList**](HeatsinkApi.md#heatsinkUpdateList) | **GET** /heatsink/{heatsinkid}/update/ | 
[**heatsinkVersionList**](HeatsinkApi.md#heatsinkVersionList) | **GET** /heatsink/{heatsinkid}/version/ | 


<a name="haetsinkLibraryClone"></a>
# **haetsinkLibraryClone**
> HeatsinkMaster haetsinkLibraryClone(heatsinkmasterid)



Clone a heat sink

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkmasterid = 56; // Integer | 
    try {
      HeatsinkMaster result = apiInstance.haetsinkLibraryClone(heatsinkmasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#haetsinkLibraryClone");
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
 **heatsinkmasterid** | **Integer**|  |

### Return type

[**HeatsinkMaster**](HeatsinkMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="heatsinkCommitCreate"></a>
# **heatsinkCommitCreate**
> HeatsinkVersion heatsinkCommitCreate(heatsinkid, data)



Commit a version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkid = 56; // Integer | 
    HeatsinkVersion data = new HeatsinkVersion(); // HeatsinkVersion | 
    try {
      HeatsinkVersion result = apiInstance.heatsinkCommitCreate(heatsinkid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkCommitCreate");
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
 **heatsinkid** | **Integer**|  |
 **data** | [**HeatsinkVersion**](HeatsinkVersion.md)|  |

### Return type

[**HeatsinkVersion**](HeatsinkVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with input data, erro message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="heatsinkLibraryCreate"></a>
# **heatsinkLibraryCreate**
> HeatsinkMaster heatsinkLibraryCreate(data)



Create a heatsink

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    HeatsinkMaster data = new HeatsinkMaster(); // HeatsinkMaster | 
    try {
      HeatsinkMaster result = apiInstance.heatsinkLibraryCreate(data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkLibraryCreate");
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
 **data** | [**HeatsinkMaster**](HeatsinkMaster.md)|  |

### Return type

[**HeatsinkMaster**](HeatsinkMaster.md)

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

<a name="heatsinkLibraryDelete"></a>
# **heatsinkLibraryDelete**
> heatsinkLibraryDelete(heatsinkmasterid)



Delete a heatsink

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkmasterid = 56; // Integer | 
    try {
      apiInstance.heatsinkLibraryDelete(heatsinkmasterid);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkLibraryDelete");
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
 **heatsinkmasterid** | **Integer**|  |

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

<a name="heatsinkLibraryList"></a>
# **heatsinkLibraryList**
> List&lt;HeatsinkMaster&gt; heatsinkLibraryList()



Get list of heat sinks

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    try {
      List<HeatsinkMaster> result = apiInstance.heatsinkLibraryList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkLibraryList");
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

[**List&lt;HeatsinkMaster&gt;**](HeatsinkMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

<a name="heatsinkLibraryRead"></a>
# **heatsinkLibraryRead**
> HeatsinkMaster heatsinkLibraryRead(heatsinkmasterid)



Get a heatsink

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkmasterid = 56; // Integer | 
    try {
      HeatsinkMaster result = apiInstance.heatsinkLibraryRead(heatsinkmasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkLibraryRead");
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
 **heatsinkmasterid** | **Integer**|  |

### Return type

[**HeatsinkMaster**](HeatsinkMaster.md)

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

<a name="heatsinkLibraryUpdate"></a>
# **heatsinkLibraryUpdate**
> HeatsinkMaster heatsinkLibraryUpdate(heatsinkmasterid, data)



Update a heatsink

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkmasterid = 56; // Integer | 
    HeatsinkMaster data = new HeatsinkMaster(); // HeatsinkMaster | 
    try {
      HeatsinkMaster result = apiInstance.heatsinkLibraryUpdate(heatsinkmasterid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkLibraryUpdate");
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
 **heatsinkmasterid** | **Integer**|  |
 **data** | [**HeatsinkMaster**](HeatsinkMaster.md)|  |

### Return type

[**HeatsinkMaster**](HeatsinkMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with input data, error messag ereturned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="heatsinkLibraryUpdateList"></a>
# **heatsinkLibraryUpdateList**
> UpdateData heatsinkLibraryUpdateList()



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    try {
      UpdateData result = apiInstance.heatsinkLibraryUpdateList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkLibraryUpdateList");
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

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

<a name="heatsinkLibraryVersionList"></a>
# **heatsinkLibraryVersionList**
> HeatsinkVersion heatsinkLibraryVersionList(heatsinkmasterid)



Get Heatsink versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkmasterid = 56; // Integer | 
    try {
      HeatsinkVersion result = apiInstance.heatsinkLibraryVersionList(heatsinkmasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkLibraryVersionList");
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
 **heatsinkmasterid** | **Integer**|  |

### Return type

[**HeatsinkVersion**](HeatsinkVersion.md)

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

<a name="heatsinkPermissionsList"></a>
# **heatsinkPermissionsList**
> heatsinkPermissionsList(heatsinkid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkid = 56; // Integer | 
    try {
      apiInstance.heatsinkPermissionsList(heatsinkid);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkPermissionsList");
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
 **heatsinkid** | **Integer**|  |

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
**200** |  |  -  |

<a name="heatsinkPermissionsUpdate"></a>
# **heatsinkPermissionsUpdate**
> heatsinkPermissionsUpdate(heatsinkid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkid = 56; // Integer | 
    try {
      apiInstance.heatsinkPermissionsUpdate(heatsinkid);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkPermissionsUpdate");
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
 **heatsinkid** | **Integer**|  |

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
**200** |  |  -  |

<a name="heatsinkRead"></a>
# **heatsinkRead**
> Heatsink heatsinkRead(heatsinkid)



Get a heatsink

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkid = 56; // Integer | 
    try {
      Heatsink result = apiInstance.heatsinkRead(heatsinkid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkRead");
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
 **heatsinkid** | **Integer**|  |

### Return type

[**Heatsink**](Heatsink.md)

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

<a name="heatsinkRestoreCreate"></a>
# **heatsinkRestoreCreate**
> Heatsink heatsinkRestoreCreate(heatsinkid)



Restore a heatsink version as current version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkid = 56; // Integer | 
    try {
      Heatsink result = apiInstance.heatsinkRestoreCreate(heatsinkid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkRestoreCreate");
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
 **heatsinkid** | **Integer**|  |

### Return type

[**Heatsink**](Heatsink.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with input data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="heatsinkUpdate"></a>
# **heatsinkUpdate**
> Heatsink heatsinkUpdate(heatsinkid, data)



Update a heatsink

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkid = 56; // Integer | 
    Heatsink data = new Heatsink(); // Heatsink | 
    try {
      Heatsink result = apiInstance.heatsinkUpdate(heatsinkid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkUpdate");
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
 **heatsinkid** | **Integer**|  |
 **data** | [**Heatsink**](Heatsink.md)|  |

### Return type

[**Heatsink**](Heatsink.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with input data, error messag ereturned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="heatsinkUpdateList"></a>
# **heatsinkUpdateList**
> UpdateData heatsinkUpdateList(heatsinkid)



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkid = 56; // Integer | 
    try {
      UpdateData result = apiInstance.heatsinkUpdateList(heatsinkid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkUpdateList");
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
 **heatsinkid** | **Integer**|  |

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

<a name="heatsinkVersionList"></a>
# **heatsinkVersionList**
> List&lt;HeatsinkVersion&gt; heatsinkVersionList(heatsinkid)



Get Heatsink versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.HeatsinkApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    HeatsinkApi apiInstance = new HeatsinkApi(defaultClient);
    Integer heatsinkid = 56; // Integer | 
    try {
      List<HeatsinkVersion> result = apiInstance.heatsinkVersionList(heatsinkid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling HeatsinkApi#heatsinkVersionList");
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
 **heatsinkid** | **Integer**|  |

### Return type

[**List&lt;HeatsinkVersion&gt;**](HeatsinkVersion.md)

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

