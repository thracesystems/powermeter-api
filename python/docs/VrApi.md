# powermeter_api.VrApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**vr_commit_create**](VrApi.md#vr_commit_create) | **POST** /vr/{vrid}/commit/ | 
[**vr_compute_list**](VrApi.md#vr_compute_list) | **GET** /vr/{vrid}/compute/ | 
[**vr_library_clone**](VrApi.md#vr_library_clone) | **POST** /vr/library/{vrmasterid}/clone/ | 
[**vr_library_create**](VrApi.md#vr_library_create) | **POST** /vr/library/ | 
[**vr_library_delete**](VrApi.md#vr_library_delete) | **DELETE** /vr/library/{vrmasterid}/ | 
[**vr_library_list**](VrApi.md#vr_library_list) | **GET** /vr/library/ | 
[**vr_library_update**](VrApi.md#vr_library_update) | **PUT** /vr/library/{vrmasterid}/ | 
[**vr_library_update_list**](VrApi.md#vr_library_update_list) | **GET** /vr/library/update/ | 
[**vr_library_version_list**](VrApi.md#vr_library_version_list) | **GET** /vr/library/{vrmasterid}/version/ | 
[**vr_permissions_list**](VrApi.md#vr_permissions_list) | **GET** /vr/{vrid}/permissions/ | 
[**vr_permissions_update**](VrApi.md#vr_permissions_update) | **PUT** /vr/{vrid}/permissions/ | 
[**vr_read**](VrApi.md#vr_read) | **GET** /vr/{vrid}/ | 
[**vr_restore_create**](VrApi.md#vr_restore_create) | **POST** /vr/{vrid}/restore/ | 
[**vr_supply_clone**](VrApi.md#vr_supply_clone) | **POST** /vr/{vrid}/supply/{supplyid}/clone/ | 
[**vr_supply_create**](VrApi.md#vr_supply_create) | **POST** /vr/{vrid}/supply/ | 
[**vr_supply_delete**](VrApi.md#vr_supply_delete) | **DELETE** /vr/{vrid}/supply/{supplyid}/ | 
[**vr_supply_list**](VrApi.md#vr_supply_list) | **GET** /vr/{vrid}/supply/ | 
[**vr_supply_read**](VrApi.md#vr_supply_read) | **GET** /vr/{vrid}/supply/{supplyid}/ | 
[**vr_supply_update**](VrApi.md#vr_supply_update) | **PUT** /vr/{vrid}/supply/{supplyid}/ | 
[**vr_update**](VrApi.md#vr_update) | **PUT** /vr/{vrid}/ | 
[**vr_update_list**](VrApi.md#vr_update_list) | **GET** /vr/{vrid}/update/ | 
[**vr_version_list**](VrApi.md#vr_version_list) | **GET** /vr/{vrid}/version/ | 


# **vr_commit_create**
> VRVersion vr_commit_create(vrid, data)



Commit a version

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 
data = powermeter_api.VRVersion() # VRVersion | 

    try:
        api_response = api_instance.vr_commit_create(vrid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_commit_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_compute_list**
> ComputedVR vr_compute_list(vrid, vin, vout, iload)



Compute VR

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 
vin = 3.4 # float | 
vout = 3.4 # float | 
iload = 3.4 # float | 

    try:
        api_response = api_instance.vr_compute_list(vrid, vin, vout, iload)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_compute_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 
 **vin** | **float**|  | 
 **vout** | **float**|  | 
 **iload** | **float**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_library_clone**
> VRMaster vr_library_clone(vrmasterid)



Copy a VR

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrmasterid = 56 # int | 

    try:
        api_response = api_instance.vr_library_clone(vrmasterid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_library_clone: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrmasterid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_library_create**
> VRMaster vr_library_create(data)



Create a VR

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    data = powermeter_api.VRMaster() # VRMaster | 

    try:
        api_response = api_instance.vr_library_create(data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_library_create: %s\n" % e)
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_library_delete**
> vr_library_delete(vrmasterid)



Delete VR

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrmasterid = 56 # int | 

    try:
        api_instance.vr_library_delete(vrmasterid)
    except ApiException as e:
        print("Exception when calling VrApi->vr_library_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrmasterid** | **int**|  | 

### Return type

void (empty response body)

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_library_list**
> list[VRMaster] vr_library_list()



Get list of VR

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    
    try:
        api_response = api_instance.vr_library_list()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_library_list: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**list[VRMaster]**](VRMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_library_update**
> VRMaster vr_library_update(vrmasterid, data)



Update VR

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrmasterid = 56 # int | 
data = powermeter_api.VRMaster() # VRMaster | 

    try:
        api_response = api_instance.vr_library_update(vrmasterid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_library_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrmasterid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_library_update_list**
> UpdateData vr_library_update_list()



Returns an array of [current, last update] times

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    
    try:
        api_response = api_instance.vr_library_update_list()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_library_update_list: %s\n" % e)
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_library_version_list**
> VRVersion vr_library_version_list(vrmasterid)



Get VR master versions

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrmasterid = 56 # int | 

    try:
        api_response = api_instance.vr_library_version_list(vrmasterid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_library_version_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrmasterid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_permissions_list**
> vr_permissions_list(vrid)



Get list of permissions

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 

    try:
        api_instance.vr_permissions_list(vrid)
    except ApiException as e:
        print("Exception when calling VrApi->vr_permissions_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 

### Return type

void (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_permissions_update**
> vr_permissions_update(vrid)



Get list of permissions

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 

    try:
        api_instance.vr_permissions_update(vrid)
    except ApiException as e:
        print("Exception when calling VrApi->vr_permissions_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 

### Return type

void (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_read**
> VR vr_read(vrid)



Get a VR

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 

    try:
        api_response = api_instance.vr_read(vrid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_restore_create**
> VR vr_restore_create(vrid)



Restore a VR version as current version

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 

    try:
        api_response = api_instance.vr_restore_create(vrid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_restore_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_supply_clone**
> VRSupply vr_supply_clone(vrid, supplyid)



Copy a VR supply

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_response = api_instance.vr_supply_clone(vrid, supplyid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_supply_clone: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 
 **supplyid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_supply_create**
> VRSupply vr_supply_create(vrid, data)



Create VR supplies

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 
data = powermeter_api.VRSupply() # VRSupply | 

    try:
        api_response = api_instance.vr_supply_create(vrid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_supply_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_supply_delete**
> vr_supply_delete(vrid, supplyid)



Delete VR supply

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_instance.vr_supply_delete(vrid, supplyid)
    except ApiException as e:
        print("Exception when calling VrApi->vr_supply_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 
 **supplyid** | **int**|  | 

### Return type

void (empty response body)

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_supply_list**
> list[VRSupply] vr_supply_list(vrid)



Get list of VR supplies

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 

    try:
        api_response = api_instance.vr_supply_list(vrid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_supply_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 

### Return type

[**list[VRSupply]**](VRSupply.md)

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_supply_read**
> VRSupply vr_supply_read(vrid, supplyid)



Get a VR supply

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_response = api_instance.vr_supply_read(vrid, supplyid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_supply_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 
 **supplyid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_supply_update**
> VRSupply vr_supply_update(vrid, supplyid, data)



Update VR supply

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 
supplyid = 56 # int | 
data = powermeter_api.VRSupply() # VRSupply | 

    try:
        api_response = api_instance.vr_supply_update(vrid, supplyid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_supply_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 
 **supplyid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_update**
> VR vr_update(vrid, data)



Update a VR

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 
data = powermeter_api.VR() # VR | 

    try:
        api_response = api_instance.vr_update(vrid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_update_list**
> UpdateData vr_update_list(vrid)



Returns an array of [current, last update] times

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 

    try:
        api_response = api_instance.vr_update_list(vrid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_update_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vr_version_list**
> list[VRVersion] vr_version_list(vrid)



Get VR versions

### Example

* Api Key Authentication (Basic):
```python
from __future__ import print_function
import time
import powermeter_api
from powermeter_api.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://thracesystems.com/api
# See configuration.py for a list of all supported configuration parameters.
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: Basic
configuration = powermeter_api.Configuration(
    host = "https://thracesystems.com/api",
    api_key = {
        'Authorization': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['Authorization'] = 'Bearer'

# Enter a context with an instance of the API client
with powermeter_api.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = powermeter_api.VrApi(api_client)
    vrid = 56 # int | 

    try:
        api_response = api_instance.vr_version_list(vrid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling VrApi->vr_version_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vrid** | **int**|  | 

### Return type

[**list[VRVersion]**](VRVersion.md)

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

