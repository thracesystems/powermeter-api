# SimulationApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**apiSimulationScopeDeleteAll**](SimulationApi.md#apiSimulationScopeDeleteAll) | **DELETE** /simulation/{simid}/scope/ | 
[**simulationAccessCreate**](SimulationApi.md#simulationAccessCreate) | **POST** /simulation/{simid}/access/ | 
[**simulationMeasurementCloneCreate**](SimulationApi.md#simulationMeasurementCloneCreate) | **POST** /simulation/{simid}/measurement/{measureid}/clone/ | 
[**simulationMeasurementCreate**](SimulationApi.md#simulationMeasurementCreate) | **POST** /simulation/{simid}/measurement/ | 
[**simulationMeasurementDataCreate**](SimulationApi.md#simulationMeasurementDataCreate) | **POST** /simulation/{simid}/measurement/{measureid}/data/ | 
[**simulationMeasurementDataDelete**](SimulationApi.md#simulationMeasurementDataDelete) | **DELETE** /simulation/{simid}/measurement/{measureid}/data/ | 
[**simulationMeasurementDataList**](SimulationApi.md#simulationMeasurementDataList) | **GET** /simulation/{simid}/measurement/{measureid}/data/ | 
[**simulationMeasurementDelete**](SimulationApi.md#simulationMeasurementDelete) | **DELETE** /simulation/{simid}/measurement/{measureid}/ | 
[**simulationMeasurementList**](SimulationApi.md#simulationMeasurementList) | **GET** /simulation/{simid}/measurement/ | 
[**simulationMeasurementRead**](SimulationApi.md#simulationMeasurementRead) | **GET** /simulation/{simid}/measurement/{measureid}/ | 
[**simulationMeasurementUpdate**](SimulationApi.md#simulationMeasurementUpdate) | **PUT** /simulation/{simid}/measurement/{measureid}/ | 
[**simulationPermissionsList**](SimulationApi.md#simulationPermissionsList) | **GET** /simulation/{simid}/permissions/ | 
[**simulationPermissionsUpdate**](SimulationApi.md#simulationPermissionsUpdate) | **PUT** /simulation/{simid}/permissions/ | 
[**simulationRead**](SimulationApi.md#simulationRead) | **GET** /simulation/{simid}/ | 
[**simulationScopeCreate**](SimulationApi.md#simulationScopeCreate) | **POST** /simulation/{simid}/scope/ | 
[**simulationScopeDelete**](SimulationApi.md#simulationScopeDelete) | **DELETE** /simulation/{simid}/scope/{scopeid}/ | 
[**simulationScopeList**](SimulationApi.md#simulationScopeList) | **GET** /simulation/{simid}/scope/ | 
[**simulationScopeRead**](SimulationApi.md#simulationScopeRead) | **GET** /simulation/{simid}/scope/{scopeid}/ | 
[**simulationScopeScopeCreate**](SimulationApi.md#simulationScopeScopeCreate) | **POST** /simulation/{simid}/scope/{scopeid}/scope/ | 
[**simulationScopeScopeList**](SimulationApi.md#simulationScopeScopeList) | **GET** /simulation/{simid}/scope/{scopeid}/scope/ | 
[**simulationScopeVarCreate**](SimulationApi.md#simulationScopeVarCreate) | **POST** /simulation/{simid}/scope/{scopeid}/var/ | 
[**simulationScopeVarList**](SimulationApi.md#simulationScopeVarList) | **GET** /simulation/{simid}/scope/{scopeid}/var/ | 
[**simulationUpdate**](SimulationApi.md#simulationUpdate) | **PUT** /simulation/{simid}/ | 
[**simulationVarList**](SimulationApi.md#simulationVarList) | **GET** /simulation/{simid}/var/ | 


<a name="apiSimulationScopeDeleteAll"></a>
# **apiSimulationScopeDeleteAll**
> apiSimulationScopeDeleteAll(simid)



Delete all scope

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    try {
      apiInstance.apiSimulationScopeDeleteAll(simid);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#apiSimulationScopeDeleteAll");
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
 **simid** | **Integer**|  |

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

<a name="simulationAccessCreate"></a>
# **simulationAccessCreate**
> simulationAccessCreate(simid)



Update design access

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    try {
      apiInstance.simulationAccessCreate(simid);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationAccessCreate");
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
 **simid** | **Integer**|  |

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
**201** |  |  -  |

<a name="simulationMeasurementCloneCreate"></a>
# **simulationMeasurementCloneCreate**
> SimMeasurement simulationMeasurementCloneCreate(simid, measureid)



Clone a measurement

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer measureid = 56; // Integer | 
    try {
      SimMeasurement result = apiInstance.simulationMeasurementCloneCreate(simid, measureid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationMeasurementCloneCreate");
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
 **simid** | **Integer**|  |
 **measureid** | **Integer**|  |

### Return type

[**SimMeasurement**](SimMeasurement.md)

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

<a name="simulationMeasurementCreate"></a>
# **simulationMeasurementCreate**
> SimMeasurement simulationMeasurementCreate(simid, data)



Create a new simulation

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    SimMeasurement data = new SimMeasurement(); // SimMeasurement | 
    try {
      SimMeasurement result = apiInstance.simulationMeasurementCreate(simid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationMeasurementCreate");
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
 **simid** | **Integer**|  |
 **data** | [**SimMeasurement**](SimMeasurement.md)|  |

### Return type

[**SimMeasurement**](SimMeasurement.md)

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

<a name="simulationMeasurementDataCreate"></a>
# **simulationMeasurementDataCreate**
> simulationMeasurementDataCreate(simid, measureid, data)



Append data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer measureid = 56; // Integer | 
    List<MeasuredDataJSON> data = Arrays.asList(); // List<MeasuredDataJSON> | 
    try {
      apiInstance.simulationMeasurementDataCreate(simid, measureid, data);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationMeasurementDataCreate");
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
 **simid** | **Integer**|  |
 **measureid** | **Integer**|  |
 **data** | [**List&lt;MeasuredDataJSON&gt;**](MeasuredDataJSON.md)|  |

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
**200** | OK |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="simulationMeasurementDataDelete"></a>
# **simulationMeasurementDataDelete**
> simulationMeasurementDataDelete(simid, measureid)



Delete all data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer measureid = 56; // Integer | 
    try {
      apiInstance.simulationMeasurementDataDelete(simid, measureid);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationMeasurementDataDelete");
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
 **simid** | **Integer**|  |
 **measureid** | **Integer**|  |

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
**200** | OK |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="simulationMeasurementDataList"></a>
# **simulationMeasurementDataList**
> PagedMeasuredData simulationMeasurementDataList(simid, measureid)



Get data for a measure

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer measureid = 56; // Integer | 
    try {
      PagedMeasuredData result = apiInstance.simulationMeasurementDataList(simid, measureid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationMeasurementDataList");
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
 **simid** | **Integer**|  |
 **measureid** | **Integer**|  |

### Return type

[**PagedMeasuredData**](PagedMeasuredData.md)

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

<a name="simulationMeasurementDelete"></a>
# **simulationMeasurementDelete**
> simulationMeasurementDelete(simid, measureid)



Delete a measurement

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer measureid = 56; // Integer | 
    try {
      apiInstance.simulationMeasurementDelete(simid, measureid);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationMeasurementDelete");
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
 **simid** | **Integer**|  |
 **measureid** | **Integer**|  |

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

<a name="simulationMeasurementList"></a>
# **simulationMeasurementList**
> List&lt;SimMeasurement&gt; simulationMeasurementList(simid)



Get list of simulations

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    try {
      List<SimMeasurement> result = apiInstance.simulationMeasurementList(simid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationMeasurementList");
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
 **simid** | **Integer**|  |

### Return type

[**List&lt;SimMeasurement&gt;**](SimMeasurement.md)

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

<a name="simulationMeasurementRead"></a>
# **simulationMeasurementRead**
> SimMeasurement simulationMeasurementRead(simid, measureid)



Get measurement

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer measureid = 56; // Integer | 
    try {
      SimMeasurement result = apiInstance.simulationMeasurementRead(simid, measureid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationMeasurementRead");
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
 **simid** | **Integer**|  |
 **measureid** | **Integer**|  |

### Return type

[**SimMeasurement**](SimMeasurement.md)

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

<a name="simulationMeasurementUpdate"></a>
# **simulationMeasurementUpdate**
> SimMeasurement simulationMeasurementUpdate(simid, measureid, data)



Update a measurement

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer measureid = 56; // Integer | 
    SimMeasurement data = new SimMeasurement(); // SimMeasurement | 
    try {
      SimMeasurement result = apiInstance.simulationMeasurementUpdate(simid, measureid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationMeasurementUpdate");
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
 **simid** | **Integer**|  |
 **measureid** | **Integer**|  |
 **data** | [**SimMeasurement**](SimMeasurement.md)|  |

### Return type

[**SimMeasurement**](SimMeasurement.md)

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

<a name="simulationPermissionsList"></a>
# **simulationPermissionsList**
> simulationPermissionsList(simid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    try {
      apiInstance.simulationPermissionsList(simid);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationPermissionsList");
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
 **simid** | **Integer**|  |

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

<a name="simulationPermissionsUpdate"></a>
# **simulationPermissionsUpdate**
> simulationPermissionsUpdate(simid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    try {
      apiInstance.simulationPermissionsUpdate(simid);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationPermissionsUpdate");
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
 **simid** | **Integer**|  |

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

<a name="simulationRead"></a>
# **simulationRead**
> Simulation simulationRead(simid)



Get a simulation

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    try {
      Simulation result = apiInstance.simulationRead(simid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationRead");
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
 **simid** | **Integer**|  |

### Return type

[**Simulation**](Simulation.md)

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

<a name="simulationScopeCreate"></a>
# **simulationScopeCreate**
> SimScope simulationScopeCreate(simid, data)



Create a scope

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    SimScope data = new SimScope(); // SimScope | 
    try {
      SimScope result = apiInstance.simulationScopeCreate(simid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationScopeCreate");
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
 **simid** | **Integer**|  |
 **data** | [**SimScope**](SimScope.md)|  |

### Return type

[**SimScope**](SimScope.md)

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

<a name="simulationScopeDelete"></a>
# **simulationScopeDelete**
> SimScope simulationScopeDelete(simid, scopeid)



Get a scope

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer scopeid = 56; // Integer | 
    try {
      SimScope result = apiInstance.simulationScopeDelete(simid, scopeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationScopeDelete");
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
 **simid** | **Integer**|  |
 **scopeid** | **Integer**|  |

### Return type

[**SimScope**](SimScope.md)

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

<a name="simulationScopeList"></a>
# **simulationScopeList**
> PagedSimScope simulationScopeList(simid, page, number)



Get scopes

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer page = 56; // Integer | 
    Integer number = 56; // Integer | 
    try {
      PagedSimScope result = apiInstance.simulationScopeList(simid, page, number);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationScopeList");
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
 **simid** | **Integer**|  |
 **page** | **Integer**|  | [optional]
 **number** | **Integer**|  | [optional]

### Return type

[**PagedSimScope**](PagedSimScope.md)

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

<a name="simulationScopeRead"></a>
# **simulationScopeRead**
> SimScope simulationScopeRead(simid, scopeid)



Get a scope

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer scopeid = 56; // Integer | 
    try {
      SimScope result = apiInstance.simulationScopeRead(simid, scopeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationScopeRead");
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
 **simid** | **Integer**|  |
 **scopeid** | **Integer**|  |

### Return type

[**SimScope**](SimScope.md)

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

<a name="simulationScopeScopeCreate"></a>
# **simulationScopeScopeCreate**
> SimScope simulationScopeScopeCreate(simid, scopeid, data)



Create a scope

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer scopeid = 56; // Integer | 
    SimScope data = new SimScope(); // SimScope | 
    try {
      SimScope result = apiInstance.simulationScopeScopeCreate(simid, scopeid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationScopeScopeCreate");
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
 **simid** | **Integer**|  |
 **scopeid** | **Integer**|  |
 **data** | [**SimScope**](SimScope.md)|  |

### Return type

[**SimScope**](SimScope.md)

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

<a name="simulationScopeScopeList"></a>
# **simulationScopeScopeList**
> SimScope simulationScopeScopeList(simid, scopeid)



Get scopes

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer scopeid = 56; // Integer | 
    try {
      SimScope result = apiInstance.simulationScopeScopeList(simid, scopeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationScopeScopeList");
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
 **simid** | **Integer**|  |
 **scopeid** | **Integer**|  |

### Return type

[**SimScope**](SimScope.md)

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

<a name="simulationScopeVarCreate"></a>
# **simulationScopeVarCreate**
> SimVar simulationScopeVarCreate(simid, scopeid, data)



Create a var

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer scopeid = 56; // Integer | 
    SimVar data = new SimVar(); // SimVar | 
    try {
      SimVar result = apiInstance.simulationScopeVarCreate(simid, scopeid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationScopeVarCreate");
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
 **simid** | **Integer**|  |
 **scopeid** | **Integer**|  |
 **data** | [**SimVar**](SimVar.md)|  |

### Return type

[**SimVar**](SimVar.md)

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

<a name="simulationScopeVarList"></a>
# **simulationScopeVarList**
> List&lt;SimVar&gt; simulationScopeVarList(simid, scopeid)



Get vars

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer scopeid = 56; // Integer | 
    try {
      List<SimVar> result = apiInstance.simulationScopeVarList(simid, scopeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationScopeVarList");
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
 **simid** | **Integer**|  |
 **scopeid** | **Integer**|  |

### Return type

[**List&lt;SimVar&gt;**](SimVar.md)

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

<a name="simulationUpdate"></a>
# **simulationUpdate**
> Simulation simulationUpdate(simid, data)



Update a simulation

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Simulation data = new Simulation(); // Simulation | 
    try {
      Simulation result = apiInstance.simulationUpdate(simid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationUpdate");
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
 **simid** | **Integer**|  |
 **data** | [**Simulation**](Simulation.md)|  |

### Return type

[**Simulation**](Simulation.md)

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

<a name="simulationVarList"></a>
# **simulationVarList**
> PagedSimVar simulationVarList(simid, page, number)



Get vars

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.SimulationApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    SimulationApi apiInstance = new SimulationApi(defaultClient);
    Integer simid = 56; // Integer | 
    Integer page = 56; // Integer | 
    Integer number = 56; // Integer | 
    try {
      PagedSimVar result = apiInstance.simulationVarList(simid, page, number);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling SimulationApi#simulationVarList");
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
 **simid** | **Integer**|  |
 **page** | **Integer**|  | [optional]
 **number** | **Integer**|  | [optional]

### Return type

[**PagedSimVar**](PagedSimVar.md)

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

