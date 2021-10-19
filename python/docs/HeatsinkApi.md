# powermeter_api.HeatsinkApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**haetsink_library_clone**](HeatsinkApi.md#haetsink_library_clone) | **POST** /heatsink/library/{heatsinkmasterid}/clone/ | 
[**heatsink_commit_create**](HeatsinkApi.md#heatsink_commit_create) | **POST** /heatsink/{heatsinkid}/commit/ | 
[**heatsink_library_create**](HeatsinkApi.md#heatsink_library_create) | **POST** /heatsink/library/ | 
[**heatsink_library_delete**](HeatsinkApi.md#heatsink_library_delete) | **DELETE** /heatsink/library/{heatsinkmasterid}/ | 
[**heatsink_library_list**](HeatsinkApi.md#heatsink_library_list) | **GET** /heatsink/library/ | 
[**heatsink_library_read**](HeatsinkApi.md#heatsink_library_read) | **GET** /heatsink/library/{heatsinkmasterid}/ | 
[**heatsink_library_update**](HeatsinkApi.md#heatsink_library_update) | **PUT** /heatsink/library/{heatsinkmasterid}/ | 
[**heatsink_library_update_list**](HeatsinkApi.md#heatsink_library_update_list) | **GET** /heatsink/library/update/ | 
[**heatsink_library_version_list**](HeatsinkApi.md#heatsink_library_version_list) | **GET** /heatsink/library/{heatsinkmasterid}/version/ | 
[**heatsink_permissions_list**](HeatsinkApi.md#heatsink_permissions_list) | **GET** /heatsink/{heatsinkid}/permissions/ | 
[**heatsink_permissions_update**](HeatsinkApi.md#heatsink_permissions_update) | **PUT** /heatsink/{heatsinkid}/permissions/ | 
[**heatsink_read**](HeatsinkApi.md#heatsink_read) | **GET** /heatsink/{heatsinkid}/ | 
[**heatsink_restore_create**](HeatsinkApi.md#heatsink_restore_create) | **POST** /heatsink/{heatsinkid}/restore/ | 
[**heatsink_update**](HeatsinkApi.md#heatsink_update) | **PUT** /heatsink/{heatsinkid}/ | 
[**heatsink_update_list**](HeatsinkApi.md#heatsink_update_list) | **GET** /heatsink/{heatsinkid}/update/ | 
[**heatsink_version_list**](HeatsinkApi.md#heatsink_version_list) | **GET** /heatsink/{heatsinkid}/version/ | 


# **haetsink_library_clone**
> HeatsinkMaster haetsink_library_clone(heatsinkmasterid)



Clone a heat sink

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkmasterid = 56 # int | 

    try:
        api_response = api_instance.haetsink_library_clone(heatsinkmasterid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->haetsink_library_clone: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkmasterid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **heatsink_commit_create**
> HeatsinkVersion heatsink_commit_create(heatsinkid, data)



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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkid = 56 # int | 
data = powermeter_api.HeatsinkVersion() # HeatsinkVersion | 

    try:
        api_response = api_instance.heatsink_commit_create(heatsinkid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_commit_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **heatsink_library_create**
> HeatsinkMaster heatsink_library_create(data)



Create a heatsink

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    data = powermeter_api.HeatsinkMaster() # HeatsinkMaster | 

    try:
        api_response = api_instance.heatsink_library_create(data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_library_create: %s\n" % e)
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **heatsink_library_delete**
> heatsink_library_delete(heatsinkmasterid)



Delete a heatsink

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkmasterid = 56 # int | 

    try:
        api_instance.heatsink_library_delete(heatsinkmasterid)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_library_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkmasterid** | **int**|  | 

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

# **heatsink_library_list**
> list[HeatsinkMaster] heatsink_library_list()



Get list of heat sinks

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    
    try:
        api_response = api_instance.heatsink_library_list()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_library_list: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**list[HeatsinkMaster]**](HeatsinkMaster.md)

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

# **heatsink_library_read**
> HeatsinkMaster heatsink_library_read(heatsinkmasterid)



Get a heatsink

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkmasterid = 56 # int | 

    try:
        api_response = api_instance.heatsink_library_read(heatsinkmasterid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_library_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkmasterid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **heatsink_library_update**
> HeatsinkMaster heatsink_library_update(heatsinkmasterid, data)



Update a heatsink

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkmasterid = 56 # int | 
data = powermeter_api.HeatsinkMaster() # HeatsinkMaster | 

    try:
        api_response = api_instance.heatsink_library_update(heatsinkmasterid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_library_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkmasterid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **heatsink_library_update_list**
> UpdateData heatsink_library_update_list()



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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    
    try:
        api_response = api_instance.heatsink_library_update_list()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_library_update_list: %s\n" % e)
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

# **heatsink_library_version_list**
> HeatsinkVersion heatsink_library_version_list(heatsinkmasterid)



Get Heatsink versions

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkmasterid = 56 # int | 

    try:
        api_response = api_instance.heatsink_library_version_list(heatsinkmasterid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_library_version_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkmasterid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **heatsink_permissions_list**
> heatsink_permissions_list(heatsinkid)



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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkid = 56 # int | 

    try:
        api_instance.heatsink_permissions_list(heatsinkid)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_permissions_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkid** | **int**|  | 

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

# **heatsink_permissions_update**
> heatsink_permissions_update(heatsinkid)



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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkid = 56 # int | 

    try:
        api_instance.heatsink_permissions_update(heatsinkid)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_permissions_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkid** | **int**|  | 

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

# **heatsink_read**
> Heatsink heatsink_read(heatsinkid)



Get a heatsink

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkid = 56 # int | 

    try:
        api_response = api_instance.heatsink_read(heatsinkid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **heatsink_restore_create**
> Heatsink heatsink_restore_create(heatsinkid)



Restore a heatsink version as current version

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkid = 56 # int | 

    try:
        api_response = api_instance.heatsink_restore_create(heatsinkid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_restore_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **heatsink_update**
> Heatsink heatsink_update(heatsinkid, data)



Update a heatsink

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkid = 56 # int | 
data = powermeter_api.Heatsink() # Heatsink | 

    try:
        api_response = api_instance.heatsink_update(heatsinkid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **heatsink_update_list**
> UpdateData heatsink_update_list(heatsinkid)



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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkid = 56 # int | 

    try:
        api_response = api_instance.heatsink_update_list(heatsinkid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_update_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkid** | **int**|  | 

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

# **heatsink_version_list**
> list[HeatsinkVersion] heatsink_version_list(heatsinkid)



Get Heatsink versions

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
    api_instance = powermeter_api.HeatsinkApi(api_client)
    heatsinkid = 56 # int | 

    try:
        api_response = api_instance.heatsink_version_list(heatsinkid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling HeatsinkApi->heatsink_version_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **heatsinkid** | **int**|  | 

### Return type

[**list[HeatsinkVersion]**](HeatsinkVersion.md)

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

