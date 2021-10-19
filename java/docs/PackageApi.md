# PackageApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**packageCommitCreate**](PackageApi.md#packageCommitCreate) | **POST** /package/{packageid}/commit/ | 
[**packageLibraryClone**](PackageApi.md#packageLibraryClone) | **POST** /package/library/{packagemasterid}/clone/ | 
[**packageLibraryCreate**](PackageApi.md#packageLibraryCreate) | **POST** /package/library/ | 
[**packageLibraryDelete**](PackageApi.md#packageLibraryDelete) | **DELETE** /package/library/{packagemasterid}/ | 
[**packageLibraryList**](PackageApi.md#packageLibraryList) | **GET** /package/library/ | 
[**packageLibraryRead**](PackageApi.md#packageLibraryRead) | **GET** /package/library/{packagemasterid}/ | 
[**packageLibraryUpdate**](PackageApi.md#packageLibraryUpdate) | **PUT** /package/library/{packagemasterid}/ | 
[**packageLibraryUpdateList**](PackageApi.md#packageLibraryUpdateList) | **GET** /package/library/update/ | 
[**packageLibraryVersionList**](PackageApi.md#packageLibraryVersionList) | **GET** /package/library/{packagemasterid}/version/ | 
[**packagePermissionsList**](PackageApi.md#packagePermissionsList) | **GET** /package/{packageid}/permissions/ | 
[**packagePermissionsUpdate**](PackageApi.md#packagePermissionsUpdate) | **PUT** /package/{packageid}/permissions/ | 
[**packageRead**](PackageApi.md#packageRead) | **GET** /package/{packageid}/ | 
[**packageRestoreCreate**](PackageApi.md#packageRestoreCreate) | **POST** /package/{packageid}/restore/ | 
[**packageSupplyClone**](PackageApi.md#packageSupplyClone) | **POST** /package/{packageid}/supply/{supplyid}/clone/ | 
[**packageSupplyCreate**](PackageApi.md#packageSupplyCreate) | **POST** /package/{packageid}/supply/ | 
[**packageSupplyDelete**](PackageApi.md#packageSupplyDelete) | **DELETE** /package/{packageid}/supply/{supplyid}/ | 
[**packageSupplyList**](PackageApi.md#packageSupplyList) | **GET** /package/{packageid}/supply/ | 
[**packageSupplyRead**](PackageApi.md#packageSupplyRead) | **GET** /package/{packageid}/supply/{supplyid}/ | 
[**packageSupplyUpdate**](PackageApi.md#packageSupplyUpdate) | **PUT** /package/{packageid}/supply/{supplyid}/ | 
[**packageUpdate**](PackageApi.md#packageUpdate) | **PUT** /package/{packageid}/ | 
[**packageUpdateList**](PackageApi.md#packageUpdateList) | **GET** /package/{packageid}/update/ | 
[**packageVersionList**](PackageApi.md#packageVersionList) | **GET** /package/{packageid}/version/ | 


<a name="packageCommitCreate"></a>
# **packageCommitCreate**
> PackageVersion packageCommitCreate(packageid, data)



Commit a version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    PackageVersion data = new PackageVersion(); // PackageVersion | 
    try {
      PackageVersion result = apiInstance.packageCommitCreate(packageid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageCommitCreate");
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
 **packageid** | **Integer**|  |
 **data** | [**PackageVersion**](PackageVersion.md)|  |

### Return type

[**PackageVersion**](PackageVersion.md)

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

<a name="packageLibraryClone"></a>
# **packageLibraryClone**
> PackageMaster packageLibraryClone(packagemasterid)



Copy a package

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packagemasterid = 56; // Integer | 
    try {
      PackageMaster result = apiInstance.packageLibraryClone(packagemasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageLibraryClone");
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
 **packagemasterid** | **Integer**|  |

### Return type

[**PackageMaster**](PackageMaster.md)

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

<a name="packageLibraryCreate"></a>
# **packageLibraryCreate**
> PackageMaster packageLibraryCreate(data)



Create a package

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    PackageMaster data = new PackageMaster(); // PackageMaster | 
    try {
      PackageMaster result = apiInstance.packageLibraryCreate(data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageLibraryCreate");
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
 **data** | [**PackageMaster**](PackageMaster.md)|  |

### Return type

[**PackageMaster**](PackageMaster.md)

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

<a name="packageLibraryDelete"></a>
# **packageLibraryDelete**
> packageLibraryDelete(packagemasterid)



Delete a package

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packagemasterid = 56; // Integer | 
    try {
      apiInstance.packageLibraryDelete(packagemasterid);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageLibraryDelete");
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
 **packagemasterid** | **Integer**|  |

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

<a name="packageLibraryList"></a>
# **packageLibraryList**
> List&lt;PackageMaster&gt; packageLibraryList()



Get list of packages

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    try {
      List<PackageMaster> result = apiInstance.packageLibraryList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageLibraryList");
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

[**List&lt;PackageMaster&gt;**](PackageMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

<a name="packageLibraryRead"></a>
# **packageLibraryRead**
> PackageMaster packageLibraryRead(packagemasterid)



Get a package

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packagemasterid = 56; // Integer | 
    try {
      PackageMaster result = apiInstance.packageLibraryRead(packagemasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageLibraryRead");
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
 **packagemasterid** | **Integer**|  |

### Return type

[**PackageMaster**](PackageMaster.md)

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

<a name="packageLibraryUpdate"></a>
# **packageLibraryUpdate**
> PackageMaster packageLibraryUpdate(packagemasterid, data)



Update a package

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packagemasterid = 56; // Integer | 
    PackageMaster data = new PackageMaster(); // PackageMaster | 
    try {
      PackageMaster result = apiInstance.packageLibraryUpdate(packagemasterid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageLibraryUpdate");
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
 **packagemasterid** | **Integer**|  |
 **data** | [**PackageMaster**](PackageMaster.md)|  |

### Return type

[**PackageMaster**](PackageMaster.md)

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

<a name="packageLibraryUpdateList"></a>
# **packageLibraryUpdateList**
> UpdateData packageLibraryUpdateList()



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    try {
      UpdateData result = apiInstance.packageLibraryUpdateList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageLibraryUpdateList");
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

<a name="packageLibraryVersionList"></a>
# **packageLibraryVersionList**
> PackageVersion packageLibraryVersionList(packagemasterid)



Get a package

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packagemasterid = 56; // Integer | 
    try {
      PackageVersion result = apiInstance.packageLibraryVersionList(packagemasterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageLibraryVersionList");
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
 **packagemasterid** | **Integer**|  |

### Return type

[**PackageVersion**](PackageVersion.md)

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

<a name="packagePermissionsList"></a>
# **packagePermissionsList**
> packagePermissionsList(packageid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    try {
      apiInstance.packagePermissionsList(packageid);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packagePermissionsList");
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
 **packageid** | **Integer**|  |

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

<a name="packagePermissionsUpdate"></a>
# **packagePermissionsUpdate**
> packagePermissionsUpdate(packageid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    try {
      apiInstance.packagePermissionsUpdate(packageid);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packagePermissionsUpdate");
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
 **packageid** | **Integer**|  |

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

<a name="packageRead"></a>
# **packageRead**
> ModelPackage packageRead(packageid)



Get a package

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    try {
      ModelPackage result = apiInstance.packageRead(packageid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageRead");
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
 **packageid** | **Integer**|  |

### Return type

[**ModelPackage**](ModelPackage.md)

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

<a name="packageRestoreCreate"></a>
# **packageRestoreCreate**
> ModelPackage packageRestoreCreate(packageid)



Restore a package version as current version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    try {
      ModelPackage result = apiInstance.packageRestoreCreate(packageid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageRestoreCreate");
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
 **packageid** | **Integer**|  |

### Return type

[**ModelPackage**](ModelPackage.md)

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

<a name="packageSupplyClone"></a>
# **packageSupplyClone**
> PackageSupply packageSupplyClone(packageid, supplyid)



Copy a package supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      PackageSupply result = apiInstance.packageSupplyClone(packageid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageSupplyClone");
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
 **packageid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**PackageSupply**](PackageSupply.md)

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

<a name="packageSupplyCreate"></a>
# **packageSupplyCreate**
> PackageSupply packageSupplyCreate(packageid, data)



Create a package supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    PackageSupply data = new PackageSupply(); // PackageSupply | 
    try {
      PackageSupply result = apiInstance.packageSupplyCreate(packageid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageSupplyCreate");
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
 **packageid** | **Integer**|  |
 **data** | [**PackageSupply**](PackageSupply.md)|  |

### Return type

[**PackageSupply**](PackageSupply.md)

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

<a name="packageSupplyDelete"></a>
# **packageSupplyDelete**
> packageSupplyDelete(packageid, supplyid)



Delete a package supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      apiInstance.packageSupplyDelete(packageid, supplyid);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageSupplyDelete");
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
 **packageid** | **Integer**|  |
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
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="packageSupplyList"></a>
# **packageSupplyList**
> List&lt;PackageSupply&gt; packageSupplyList(packageid)



Get list of package supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    try {
      List<PackageSupply> result = apiInstance.packageSupplyList(packageid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageSupplyList");
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
 **packageid** | **Integer**|  |

### Return type

[**List&lt;PackageSupply&gt;**](PackageSupply.md)

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

<a name="packageSupplyRead"></a>
# **packageSupplyRead**
> PackageSupply packageSupplyRead(packageid, supplyid)



Get a package supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      PackageSupply result = apiInstance.packageSupplyRead(packageid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageSupplyRead");
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
 **packageid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**PackageSupply**](PackageSupply.md)

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

<a name="packageSupplyUpdate"></a>
# **packageSupplyUpdate**
> PackageSupply packageSupplyUpdate(packageid, supplyid, data)



Update a package supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    PackageSupply data = new PackageSupply(); // PackageSupply | 
    try {
      PackageSupply result = apiInstance.packageSupplyUpdate(packageid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageSupplyUpdate");
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
 **packageid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **data** | [**PackageSupply**](PackageSupply.md)|  |

### Return type

[**PackageSupply**](PackageSupply.md)

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

<a name="packageUpdate"></a>
# **packageUpdate**
> ModelPackage packageUpdate(packageid, data)



Update a package

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    ModelPackage data = new ModelPackage(); // ModelPackage | 
    try {
      ModelPackage result = apiInstance.packageUpdate(packageid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageUpdate");
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
 **packageid** | **Integer**|  |
 **data** | [**ModelPackage**](ModelPackage.md)|  |

### Return type

[**ModelPackage**](ModelPackage.md)

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

<a name="packageUpdateList"></a>
# **packageUpdateList**
> UpdateData packageUpdateList(packageid)



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    try {
      UpdateData result = apiInstance.packageUpdateList(packageid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageUpdateList");
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
 **packageid** | **Integer**|  |

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

<a name="packageVersionList"></a>
# **packageVersionList**
> List&lt;PackageVersion&gt; packageVersionList(packageid)



Get a package

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PackageApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    PackageApi apiInstance = new PackageApi(defaultClient);
    Integer packageid = 56; // Integer | 
    try {
      List<PackageVersion> result = apiInstance.packageVersionList(packageid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PackageApi#packageVersionList");
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
 **packageid** | **Integer**|  |

### Return type

[**List&lt;PackageVersion&gt;**](PackageVersion.md)

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

