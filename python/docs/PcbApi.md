# powermeter_api.PcbApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**pcb_commit_create**](PcbApi.md#pcb_commit_create) | **POST** /pcb/{pcbid}/commit/ | 
[**pcb_library_clone**](PcbApi.md#pcb_library_clone) | **POST** /pcb/library/{pcbmasterid}/clone/ | 
[**pcb_library_create**](PcbApi.md#pcb_library_create) | **POST** /pcb/library/ | 
[**pcb_library_delete**](PcbApi.md#pcb_library_delete) | **DELETE** /pcb/library/{pcbmasterid}/ | 
[**pcb_library_list**](PcbApi.md#pcb_library_list) | **GET** /pcb/library/ | 
[**pcb_library_read**](PcbApi.md#pcb_library_read) | **GET** /pcb/library/{pcbmasterid}/ | 
[**pcb_library_update**](PcbApi.md#pcb_library_update) | **PUT** /pcb/library/{pcbmasterid}/ | 
[**pcb_library_update_list**](PcbApi.md#pcb_library_update_list) | **GET** /pcb/library/update/ | 
[**pcb_library_version_list**](PcbApi.md#pcb_library_version_list) | **GET** /pcb/library/{pcbmasterid}/version/ | 
[**pcb_permissions_list**](PcbApi.md#pcb_permissions_list) | **GET** /pcb/{pcbid}/permissions/ | 
[**pcb_permissions_update**](PcbApi.md#pcb_permissions_update) | **PUT** /pcb/{pcbid}/permissions/ | 
[**pcb_read**](PcbApi.md#pcb_read) | **GET** /pcb/{pcbid}/ | 
[**pcb_restore_create**](PcbApi.md#pcb_restore_create) | **POST** /pcb/{pcbid}/restore/ | 
[**pcb_supply_clone**](PcbApi.md#pcb_supply_clone) | **POST** /pcb/{pcbid}/supply/{supplyid}/clone/ | 
[**pcb_supply_create**](PcbApi.md#pcb_supply_create) | **POST** /pcb/{pcbid}/supply/ | 
[**pcb_supply_delete**](PcbApi.md#pcb_supply_delete) | **DELETE** /pcb/{pcbid}/supply/{supplyid}/ | 
[**pcb_supply_list**](PcbApi.md#pcb_supply_list) | **GET** /pcb/{pcbid}/supply/ | 
[**pcb_supply_read**](PcbApi.md#pcb_supply_read) | **GET** /pcb/{pcbid}/supply/{supplyid}/ | 
[**pcb_supply_update**](PcbApi.md#pcb_supply_update) | **PUT** /pcb/{pcbid}/supply/{supplyid}/ | 
[**pcb_update**](PcbApi.md#pcb_update) | **PUT** /pcb/{pcbid}/ | 
[**pcb_update_list**](PcbApi.md#pcb_update_list) | **GET** /pcb/{pcbid}/update/ | 
[**pcb_version_list**](PcbApi.md#pcb_version_list) | **GET** /pcb/{pcbid}/version/ | 


# **pcb_commit_create**
> PCBVersionSerialzer pcb_commit_create(pcbid, data)



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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 
data = powermeter_api.PCBVersionSerialzer() # PCBVersionSerialzer | 

    try:
        api_response = api_instance.pcb_commit_create(pcbid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_commit_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_library_clone**
> PCBMaster pcb_library_clone(pcbmasterid)



Copy a PCB

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbmasterid = 56 # int | 

    try:
        api_response = api_instance.pcb_library_clone(pcbmasterid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_library_clone: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbmasterid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_library_create**
> PCBMaster pcb_library_create(data)



Create a PCB

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
    api_instance = powermeter_api.PcbApi(api_client)
    data = powermeter_api.PCBMaster() # PCBMaster | 

    try:
        api_response = api_instance.pcb_library_create(data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_library_create: %s\n" % e)
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_library_delete**
> pcb_library_delete(pcbmasterid)



Delete PCB

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbmasterid = 56 # int | 

    try:
        api_instance.pcb_library_delete(pcbmasterid)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_library_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbmasterid** | **int**|  | 

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

# **pcb_library_list**
> list[PCBMaster] pcb_library_list()



Get list of PCB

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
    api_instance = powermeter_api.PcbApi(api_client)
    
    try:
        api_response = api_instance.pcb_library_list()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_library_list: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**list[PCBMaster]**](PCBMaster.md)

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

# **pcb_library_read**
> PCBMaster pcb_library_read(pcbmasterid)



Get a PCB

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbmasterid = 56 # int | 

    try:
        api_response = api_instance.pcb_library_read(pcbmasterid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_library_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbmasterid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_library_update**
> PCBMaster pcb_library_update(pcbmasterid, data)



Update PCB

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbmasterid = 56 # int | 
data = powermeter_api.PCBMaster() # PCBMaster | 

    try:
        api_response = api_instance.pcb_library_update(pcbmasterid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_library_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbmasterid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_library_update_list**
> UpdateData pcb_library_update_list()



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
    api_instance = powermeter_api.PcbApi(api_client)
    
    try:
        api_response = api_instance.pcb_library_update_list()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_library_update_list: %s\n" % e)
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

# **pcb_library_version_list**
> PCBVersionSerialzer pcb_library_version_list(pcbmasterid)



Get PCB versions

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbmasterid = 56 # int | 

    try:
        api_response = api_instance.pcb_library_version_list(pcbmasterid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_library_version_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbmasterid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_permissions_list**
> pcb_permissions_list(pcbid)



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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 

    try:
        api_instance.pcb_permissions_list(pcbid)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_permissions_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 

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

# **pcb_permissions_update**
> pcb_permissions_update(pcbid)



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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 

    try:
        api_instance.pcb_permissions_update(pcbid)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_permissions_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 

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

# **pcb_read**
> PCB pcb_read(pcbid)



Get a PCB

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 

    try:
        api_response = api_instance.pcb_read(pcbid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_restore_create**
> PCB pcb_restore_create(pcbid)



Restore a pcb version as current version

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 

    try:
        api_response = api_instance.pcb_restore_create(pcbid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_restore_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_supply_clone**
> PCBSupply pcb_supply_clone(pcbid, supplyid)



Copy a PCB supply

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_response = api_instance.pcb_supply_clone(pcbid, supplyid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_supply_clone: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 
 **supplyid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_supply_create**
> PCBSupply pcb_supply_create(pcbid)



Create PCB supplies

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 

    try:
        api_response = api_instance.pcb_supply_create(pcbid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_supply_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_supply_delete**
> pcb_supply_delete(pcbid, supplyid)



Delete PCB supply

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_instance.pcb_supply_delete(pcbid, supplyid)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_supply_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 
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

# **pcb_supply_list**
> list[PCBSupply] pcb_supply_list(pcbid)



Get list of PCB supplies

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 

    try:
        api_response = api_instance.pcb_supply_list(pcbid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_supply_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 

### Return type

[**list[PCBSupply]**](PCBSupply.md)

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

# **pcb_supply_read**
> PCBSupply pcb_supply_read(pcbid, supplyid)



Get a PCB supply

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_response = api_instance.pcb_supply_read(pcbid, supplyid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_supply_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 
 **supplyid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_supply_update**
> PCBSupply pcb_supply_update(pcbid, supplyid, data)



Update PCB supply

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 
supplyid = 56 # int | 
data = powermeter_api.PCBSupply() # PCBSupply | 

    try:
        api_response = api_instance.pcb_supply_update(pcbid, supplyid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_supply_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 
 **supplyid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_update**
> PCB pcb_update(pcbid, data)



Update a PCB

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 
data = powermeter_api.PCB() # PCB | 

    try:
        api_response = api_instance.pcb_update(pcbid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **pcb_update_list**
> UpdateData pcb_update_list(pcbid)



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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 

    try:
        api_response = api_instance.pcb_update_list(pcbid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_update_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 

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

# **pcb_version_list**
> list[PCBVersionSerialzer] pcb_version_list(pcbid)



Get PCB versions

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
    api_instance = powermeter_api.PcbApi(api_client)
    pcbid = 56 # int | 

    try:
        api_response = api_instance.pcb_version_list(pcbid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PcbApi->pcb_version_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pcbid** | **int**|  | 

### Return type

[**list[PCBVersionSerialzer]**](PCBVersionSerialzer.md)

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

