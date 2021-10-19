# PcbApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**pcbCommitCreate**](PcbApi.md#pcbCommitCreate) | **POST** /pcb/{pcbid}/commit/ | 
[**pcbLibraryClone**](PcbApi.md#pcbLibraryClone) | **POST** /pcb/library/{pcbmasterid}/clone/ | 
[**pcbLibraryCreate**](PcbApi.md#pcbLibraryCreate) | **POST** /pcb/library/ | 
[**pcbLibraryDelete**](PcbApi.md#pcbLibraryDelete) | **DELETE** /pcb/library/{pcbmasterid}/ | 
[**pcbLibraryList**](PcbApi.md#pcbLibraryList) | **GET** /pcb/library/ | 
[**pcbLibraryRead**](PcbApi.md#pcbLibraryRead) | **GET** /pcb/library/{pcbmasterid}/ | 
[**pcbLibraryUpdate**](PcbApi.md#pcbLibraryUpdate) | **PUT** /pcb/library/{pcbmasterid}/ | 
[**pcbLibraryUpdateList**](PcbApi.md#pcbLibraryUpdateList) | **GET** /pcb/library/update/ | 
[**pcbLibraryVersionList**](PcbApi.md#pcbLibraryVersionList) | **GET** /pcb/library/{pcbmasterid}/version/ | 
[**pcbPermissionsList**](PcbApi.md#pcbPermissionsList) | **GET** /pcb/{pcbid}/permissions/ | 
[**pcbPermissionsUpdate**](PcbApi.md#pcbPermissionsUpdate) | **PUT** /pcb/{pcbid}/permissions/ | 
[**pcbRead**](PcbApi.md#pcbRead) | **GET** /pcb/{pcbid}/ | 
[**pcbRestoreCreate**](PcbApi.md#pcbRestoreCreate) | **POST** /pcb/{pcbid}/restore/ | 
[**pcbSupplyClone**](PcbApi.md#pcbSupplyClone) | **POST** /pcb/{pcbid}/supply/{supplyid}/clone/ | 
[**pcbSupplyCreate**](PcbApi.md#pcbSupplyCreate) | **POST** /pcb/{pcbid}/supply/ | 
[**pcbSupplyDelete**](PcbApi.md#pcbSupplyDelete) | **DELETE** /pcb/{pcbid}/supply/{supplyid}/ | 
[**pcbSupplyList**](PcbApi.md#pcbSupplyList) | **GET** /pcb/{pcbid}/supply/ | 
[**pcbSupplyRead**](PcbApi.md#pcbSupplyRead) | **GET** /pcb/{pcbid}/supply/{supplyid}/ | 
[**pcbSupplyUpdate**](PcbApi.md#pcbSupplyUpdate) | **PUT** /pcb/{pcbid}/supply/{supplyid}/ | 
[**pcbUpdate**](PcbApi.md#pcbUpdate) | **PUT** /pcb/{pcbid}/ | 
[**pcbUpdateList**](PcbApi.md#pcbUpdateList) | **GET** /pcb/{pcbid}/update/ | 
[**pcbVersionList**](PcbApi.md#pcbVersionList) | **GET** /pcb/{pcbid}/version/ | 


<a name="pcbCommitCreate"></a>
# **pcbCommitCreate**
> PCBVersionSerialzer pcbCommitCreate(pcbid, data)



Commit a version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    PCBVersionSerialzer data = new PCBVersionSerialzer(); // PCBVersionSerialzer | 
    try {
      PCBVersionSerialzer result = apiInstance.pcbCommitCreate(pcbid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbCommitCreate");
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
 **pcbid** | **Integer**|  |
 **data** | [**PCBVersionSerialzer**](PCBVersionSerialzer.md)|  |

### Return type

[**PCBVersionSerialzer**](PCBVersionSerialzer.md)

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

<a name="pcbLibraryClone"></a>
# **pcbLibraryClone**
> PCBMaster pcbLibraryClone(pcbmasterid)



Copy a PCB

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbmasterid = 56; // Integer | 
    try {
      PCBMaster result = apiInstance.pcbLibraryClone(pcbmasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbLibraryClone");
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
 **pcbmasterid** | **Integer**|  |

### Return type

[**PCBMaster**](PCBMaster.md)

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

<a name="pcbLibraryCreate"></a>
# **pcbLibraryCreate**
> PCBMaster pcbLibraryCreate(data)



Create a PCB

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    PCBMaster data = new PCBMaster(); // PCBMaster | 
    try {
      PCBMaster result = apiInstance.pcbLibraryCreate(data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbLibraryCreate");
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
 **data** | [**PCBMaster**](PCBMaster.md)|  |

### Return type

[**PCBMaster**](PCBMaster.md)

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

<a name="pcbLibraryDelete"></a>
# **pcbLibraryDelete**
> pcbLibraryDelete(pcbmasterid)



Delete PCB

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbmasterid = 56; // Integer | 
    try {
      apiInstance.pcbLibraryDelete(pcbmasterid);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbLibraryDelete");
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
 **pcbmasterid** | **Integer**|  |

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

<a name="pcbLibraryList"></a>
# **pcbLibraryList**
> List&lt;PCBMaster&gt; pcbLibraryList()



Get list of PCB

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    try {
      List<PCBMaster> result = apiInstance.pcbLibraryList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbLibraryList");
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

[**List&lt;PCBMaster&gt;**](PCBMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

<a name="pcbLibraryRead"></a>
# **pcbLibraryRead**
> PCBMaster pcbLibraryRead(pcbmasterid)



Get a PCB

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbmasterid = 56; // Integer | 
    try {
      PCBMaster result = apiInstance.pcbLibraryRead(pcbmasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbLibraryRead");
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
 **pcbmasterid** | **Integer**|  |

### Return type

[**PCBMaster**](PCBMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Issue with data, error details returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="pcbLibraryUpdate"></a>
# **pcbLibraryUpdate**
> PCBMaster pcbLibraryUpdate(pcbmasterid, data)



Update PCB

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbmasterid = 56; // Integer | 
    PCBMaster data = new PCBMaster(); // PCBMaster | 
    try {
      PCBMaster result = apiInstance.pcbLibraryUpdate(pcbmasterid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbLibraryUpdate");
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
 **pcbmasterid** | **Integer**|  |
 **data** | [**PCBMaster**](PCBMaster.md)|  |

### Return type

[**PCBMaster**](PCBMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Issue with data, error details returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="pcbLibraryUpdateList"></a>
# **pcbLibraryUpdateList**
> UpdateData pcbLibraryUpdateList()



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    try {
      UpdateData result = apiInstance.pcbLibraryUpdateList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbLibraryUpdateList");
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

<a name="pcbLibraryVersionList"></a>
# **pcbLibraryVersionList**
> PCBVersionSerialzer pcbLibraryVersionList(pcbmasterid)



Get PCB versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbmasterid = 56; // Integer | 
    try {
      PCBVersionSerialzer result = apiInstance.pcbLibraryVersionList(pcbmasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbLibraryVersionList");
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
 **pcbmasterid** | **Integer**|  |

### Return type

[**PCBVersionSerialzer**](PCBVersionSerialzer.md)

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

<a name="pcbPermissionsList"></a>
# **pcbPermissionsList**
> pcbPermissionsList(pcbid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    try {
      apiInstance.pcbPermissionsList(pcbid);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbPermissionsList");
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
 **pcbid** | **Integer**|  |

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

<a name="pcbPermissionsUpdate"></a>
# **pcbPermissionsUpdate**
> pcbPermissionsUpdate(pcbid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    try {
      apiInstance.pcbPermissionsUpdate(pcbid);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbPermissionsUpdate");
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
 **pcbid** | **Integer**|  |

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

<a name="pcbRead"></a>
# **pcbRead**
> PCB pcbRead(pcbid)



Get a PCB

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    try {
      PCB result = apiInstance.pcbRead(pcbid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbRead");
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
 **pcbid** | **Integer**|  |

### Return type

[**PCB**](PCB.md)

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

<a name="pcbRestoreCreate"></a>
# **pcbRestoreCreate**
> PCB pcbRestoreCreate(pcbid)



Restore a pcb version as current version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    try {
      PCB result = apiInstance.pcbRestoreCreate(pcbid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbRestoreCreate");
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
 **pcbid** | **Integer**|  |

### Return type

[**PCB**](PCB.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inut data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="pcbSupplyClone"></a>
# **pcbSupplyClone**
> PCBSupply pcbSupplyClone(pcbid, supplyid)



Copy a PCB supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      PCBSupply result = apiInstance.pcbSupplyClone(pcbid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbSupplyClone");
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
 **pcbid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**PCBSupply**](PCBSupply.md)

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

<a name="pcbSupplyCreate"></a>
# **pcbSupplyCreate**
> PCBSupply pcbSupplyCreate(pcbid)



Create PCB supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    try {
      PCBSupply result = apiInstance.pcbSupplyCreate(pcbid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbSupplyCreate");
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
 **pcbid** | **Integer**|  |

### Return type

[**PCBSupply**](PCBSupply.md)

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
**404** | Not found |  -  |

<a name="pcbSupplyDelete"></a>
# **pcbSupplyDelete**
> pcbSupplyDelete(pcbid, supplyid)



Delete PCB supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      apiInstance.pcbSupplyDelete(pcbid, supplyid);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbSupplyDelete");
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
 **pcbid** | **Integer**|  |
 **supplyid** | **Integer**|  |

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
**404** | Not found |  -  |

<a name="pcbSupplyList"></a>
# **pcbSupplyList**
> List&lt;PCBSupply&gt; pcbSupplyList(pcbid)



Get list of PCB supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    try {
      List<PCBSupply> result = apiInstance.pcbSupplyList(pcbid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbSupplyList");
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
 **pcbid** | **Integer**|  |

### Return type

[**List&lt;PCBSupply&gt;**](PCBSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**404** | Not found |  -  |

<a name="pcbSupplyRead"></a>
# **pcbSupplyRead**
> PCBSupply pcbSupplyRead(pcbid, supplyid)



Get a PCB supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      PCBSupply result = apiInstance.pcbSupplyRead(pcbid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbSupplyRead");
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
 **pcbid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**PCBSupply**](PCBSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**404** | Not found |  -  |

<a name="pcbSupplyUpdate"></a>
# **pcbSupplyUpdate**
> PCBSupply pcbSupplyUpdate(pcbid, supplyid, data)



Update PCB supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    PCBSupply data = new PCBSupply(); // PCBSupply | 
    try {
      PCBSupply result = apiInstance.pcbSupplyUpdate(pcbid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbSupplyUpdate");
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
 **pcbid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **data** | [**PCBSupply**](PCBSupply.md)|  |

### Return type

[**PCBSupply**](PCBSupply.md)

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
**404** | Not found |  -  |

<a name="pcbUpdate"></a>
# **pcbUpdate**
> PCB pcbUpdate(pcbid, data)



Update a PCB

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    PCB data = new PCB(); // PCB | 
    try {
      PCB result = apiInstance.pcbUpdate(pcbid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbUpdate");
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
 **pcbid** | **Integer**|  |
 **data** | [**PCB**](PCB.md)|  |

### Return type

[**PCB**](PCB.md)

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

<a name="pcbUpdateList"></a>
# **pcbUpdateList**
> UpdateData pcbUpdateList(pcbid)



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    try {
      UpdateData result = apiInstance.pcbUpdateList(pcbid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbUpdateList");
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
 **pcbid** | **Integer**|  |

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

<a name="pcbVersionList"></a>
# **pcbVersionList**
> List&lt;PCBVersionSerialzer&gt; pcbVersionList(pcbid)



Get PCB versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PcbApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PcbApi apiInstance = new PcbApi(defaultClient);
    Integer pcbid = 56; // Integer | 
    try {
      List<PCBVersionSerialzer> result = apiInstance.pcbVersionList(pcbid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PcbApi#pcbVersionList");
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
 **pcbid** | **Integer**|  |

### Return type

[**List&lt;PCBVersionSerialzer&gt;**](PCBVersionSerialzer.md)

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

