# VrApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**vrCommitCreate**](VrApi.md#vrCommitCreate) | **POST** /vr/{vrid}/commit/ | 
[**vrComputeList**](VrApi.md#vrComputeList) | **GET** /vr/{vrid}/compute/ | 
[**vrLibraryClone**](VrApi.md#vrLibraryClone) | **POST** /vr/library/{vrmasterid}/clone/ | 
[**vrLibraryCreate**](VrApi.md#vrLibraryCreate) | **POST** /vr/library/ | 
[**vrLibraryDelete**](VrApi.md#vrLibraryDelete) | **DELETE** /vr/library/{vrmasterid}/ | 
[**vrLibraryList**](VrApi.md#vrLibraryList) | **GET** /vr/library/ | 
[**vrLibraryUpdate**](VrApi.md#vrLibraryUpdate) | **PUT** /vr/library/{vrmasterid}/ | 
[**vrLibraryUpdateList**](VrApi.md#vrLibraryUpdateList) | **GET** /vr/library/update/ | 
[**vrLibraryVersionList**](VrApi.md#vrLibraryVersionList) | **GET** /vr/library/{vrmasterid}/version/ | 
[**vrPermissionsList**](VrApi.md#vrPermissionsList) | **GET** /vr/{vrid}/permissions/ | 
[**vrPermissionsUpdate**](VrApi.md#vrPermissionsUpdate) | **PUT** /vr/{vrid}/permissions/ | 
[**vrRead**](VrApi.md#vrRead) | **GET** /vr/{vrid}/ | 
[**vrRestoreCreate**](VrApi.md#vrRestoreCreate) | **POST** /vr/{vrid}/restore/ | 
[**vrSupplyClone**](VrApi.md#vrSupplyClone) | **POST** /vr/{vrid}/supply/{supplyid}/clone/ | 
[**vrSupplyCreate**](VrApi.md#vrSupplyCreate) | **POST** /vr/{vrid}/supply/ | 
[**vrSupplyDelete**](VrApi.md#vrSupplyDelete) | **DELETE** /vr/{vrid}/supply/{supplyid}/ | 
[**vrSupplyList**](VrApi.md#vrSupplyList) | **GET** /vr/{vrid}/supply/ | 
[**vrSupplyRead**](VrApi.md#vrSupplyRead) | **GET** /vr/{vrid}/supply/{supplyid}/ | 
[**vrSupplyUpdate**](VrApi.md#vrSupplyUpdate) | **PUT** /vr/{vrid}/supply/{supplyid}/ | 
[**vrUpdate**](VrApi.md#vrUpdate) | **PUT** /vr/{vrid}/ | 
[**vrUpdateList**](VrApi.md#vrUpdateList) | **GET** /vr/{vrid}/update/ | 
[**vrVersionList**](VrApi.md#vrVersionList) | **GET** /vr/{vrid}/version/ | 


<a name="vrCommitCreate"></a>
# **vrCommitCreate**
> VRVersion vrCommitCreate(vrid, data)



Commit a version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    VRVersion data = new VRVersion(); // VRVersion | 
    try {
      VRVersion result = apiInstance.vrCommitCreate(vrid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrCommitCreate");
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
 **vrid** | **Integer**|  |
 **data** | [**VRVersion**](VRVersion.md)|  |

### Return type

[**VRVersion**](VRVersion.md)

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

<a name="vrComputeList"></a>
# **vrComputeList**
> ComputedVR vrComputeList(vrid, vin, vout, iload)



Compute VR

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    BigDecimal vin = new BigDecimal(); // BigDecimal | 
    BigDecimal vout = new BigDecimal(); // BigDecimal | 
    BigDecimal iload = new BigDecimal(); // BigDecimal | 
    try {
      ComputedVR result = apiInstance.vrComputeList(vrid, vin, vout, iload);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrComputeList");
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
 **vrid** | **Integer**|  |
 **vin** | **BigDecimal**|  |
 **vout** | **BigDecimal**|  |
 **iload** | **BigDecimal**|  |

### Return type

[**ComputedVR**](ComputedVR.md)

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

<a name="vrLibraryClone"></a>
# **vrLibraryClone**
> VRMaster vrLibraryClone(vrmasterid)



Copy a VR

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrmasterid = 56; // Integer | 
    try {
      VRMaster result = apiInstance.vrLibraryClone(vrmasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrLibraryClone");
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
 **vrmasterid** | **Integer**|  |

### Return type

[**VRMaster**](VRMaster.md)

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

<a name="vrLibraryCreate"></a>
# **vrLibraryCreate**
> VRMaster vrLibraryCreate(data)



Create a VR

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    VRMaster data = new VRMaster(); // VRMaster | 
    try {
      VRMaster result = apiInstance.vrLibraryCreate(data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrLibraryCreate");
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
 **data** | [**VRMaster**](VRMaster.md)|  |

### Return type

[**VRMaster**](VRMaster.md)

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

<a name="vrLibraryDelete"></a>
# **vrLibraryDelete**
> vrLibraryDelete(vrmasterid)



Delete VR

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrmasterid = 56; // Integer | 
    try {
      apiInstance.vrLibraryDelete(vrmasterid);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrLibraryDelete");
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
 **vrmasterid** | **Integer**|  |

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

<a name="vrLibraryList"></a>
# **vrLibraryList**
> List&lt;VRMaster&gt; vrLibraryList()



Get list of VR

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    try {
      List<VRMaster> result = apiInstance.vrLibraryList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrLibraryList");
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

[**List&lt;VRMaster&gt;**](VRMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

<a name="vrLibraryUpdate"></a>
# **vrLibraryUpdate**
> VRMaster vrLibraryUpdate(vrmasterid, data)



Update VR

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrmasterid = 56; // Integer | 
    VRMaster data = new VRMaster(); // VRMaster | 
    try {
      VRMaster result = apiInstance.vrLibraryUpdate(vrmasterid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrLibraryUpdate");
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
 **vrmasterid** | **Integer**|  |
 **data** | [**VRMaster**](VRMaster.md)|  |

### Return type

[**VRMaster**](VRMaster.md)

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

<a name="vrLibraryUpdateList"></a>
# **vrLibraryUpdateList**
> UpdateData vrLibraryUpdateList()



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    try {
      UpdateData result = apiInstance.vrLibraryUpdateList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrLibraryUpdateList");
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

<a name="vrLibraryVersionList"></a>
# **vrLibraryVersionList**
> VRVersion vrLibraryVersionList(vrmasterid)



Get VR master versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrmasterid = 56; // Integer | 
    try {
      VRVersion result = apiInstance.vrLibraryVersionList(vrmasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrLibraryVersionList");
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
 **vrmasterid** | **Integer**|  |

### Return type

[**VRVersion**](VRVersion.md)

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

<a name="vrPermissionsList"></a>
# **vrPermissionsList**
> vrPermissionsList(vrid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    try {
      apiInstance.vrPermissionsList(vrid);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrPermissionsList");
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
 **vrid** | **Integer**|  |

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

<a name="vrPermissionsUpdate"></a>
# **vrPermissionsUpdate**
> vrPermissionsUpdate(vrid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    try {
      apiInstance.vrPermissionsUpdate(vrid);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrPermissionsUpdate");
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
 **vrid** | **Integer**|  |

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

<a name="vrRead"></a>
# **vrRead**
> VR vrRead(vrid)



Get a VR

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    try {
      VR result = apiInstance.vrRead(vrid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrRead");
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
 **vrid** | **Integer**|  |

### Return type

[**VR**](VR.md)

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

<a name="vrRestoreCreate"></a>
# **vrRestoreCreate**
> VR vrRestoreCreate(vrid)



Restore a VR version as current version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    try {
      VR result = apiInstance.vrRestoreCreate(vrid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrRestoreCreate");
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
 **vrid** | **Integer**|  |

### Return type

[**VR**](VR.md)

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

<a name="vrSupplyClone"></a>
# **vrSupplyClone**
> VRSupply vrSupplyClone(vrid, supplyid)



Copy a VR supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      VRSupply result = apiInstance.vrSupplyClone(vrid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrSupplyClone");
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
 **vrid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**VRSupply**](VRSupply.md)

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

<a name="vrSupplyCreate"></a>
# **vrSupplyCreate**
> VRSupply vrSupplyCreate(vrid, data)



Create VR supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    VRSupply data = new VRSupply(); // VRSupply | 
    try {
      VRSupply result = apiInstance.vrSupplyCreate(vrid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrSupplyCreate");
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
 **vrid** | **Integer**|  |
 **data** | [**VRSupply**](VRSupply.md)|  |

### Return type

[**VRSupply**](VRSupply.md)

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

<a name="vrSupplyDelete"></a>
# **vrSupplyDelete**
> vrSupplyDelete(vrid, supplyid)



Delete VR supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      apiInstance.vrSupplyDelete(vrid, supplyid);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrSupplyDelete");
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
 **vrid** | **Integer**|  |
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

<a name="vrSupplyList"></a>
# **vrSupplyList**
> List&lt;VRSupply&gt; vrSupplyList(vrid)



Get list of VR supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    try {
      List<VRSupply> result = apiInstance.vrSupplyList(vrid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrSupplyList");
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
 **vrid** | **Integer**|  |

### Return type

[**List&lt;VRSupply&gt;**](VRSupply.md)

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

<a name="vrSupplyRead"></a>
# **vrSupplyRead**
> VRSupply vrSupplyRead(vrid, supplyid)



Get a VR supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      VRSupply result = apiInstance.vrSupplyRead(vrid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrSupplyRead");
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
 **vrid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**VRSupply**](VRSupply.md)

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

<a name="vrSupplyUpdate"></a>
# **vrSupplyUpdate**
> VRSupply vrSupplyUpdate(vrid, supplyid, data)



Update VR supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    VRSupply data = new VRSupply(); // VRSupply | 
    try {
      VRSupply result = apiInstance.vrSupplyUpdate(vrid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrSupplyUpdate");
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
 **vrid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **data** | [**VRSupply**](VRSupply.md)|  |

### Return type

[**VRSupply**](VRSupply.md)

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

<a name="vrUpdate"></a>
# **vrUpdate**
> VR vrUpdate(vrid, data)



Update a VR

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    VR data = new VR(); // VR | 
    try {
      VR result = apiInstance.vrUpdate(vrid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrUpdate");
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
 **vrid** | **Integer**|  |
 **data** | [**VR**](VR.md)|  |

### Return type

[**VR**](VR.md)

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

<a name="vrUpdateList"></a>
# **vrUpdateList**
> UpdateData vrUpdateList(vrid)



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    try {
      UpdateData result = apiInstance.vrUpdateList(vrid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrUpdateList");
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
 **vrid** | **Integer**|  |

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

<a name="vrVersionList"></a>
# **vrVersionList**
> List&lt;VRVersion&gt; vrVersionList(vrid)



Get VR versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.VrApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    VrApi apiInstance = new VrApi(defaultClient);
    Integer vrid = 56; // Integer | 
    try {
      List<VRVersion> result = apiInstance.vrVersionList(vrid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling VrApi#vrVersionList");
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
 **vrid** | **Integer**|  |

### Return type

[**List&lt;VRVersion&gt;**](VRVersion.md)

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

