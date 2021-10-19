# powermeter_api.WlmApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**wlm_commit_create**](WlmApi.md#wlm_commit_create) | **POST** /wlm/{wlmid}/commit/ | 
[**wlm_create**](WlmApi.md#wlm_create) | **POST** /wlm/{wlmid}/ | 
[**wlm_data_create**](WlmApi.md#wlm_data_create) | **POST** /wlm/{wlmid}/data/{dataid}/ | 
[**wlm_data_read**](WlmApi.md#wlm_data_read) | **GET** /wlm/{wlmid}/data/{dataid}/ | 
[**wlm_data_update**](WlmApi.md#wlm_data_update) | **PUT** /wlm/{wlmid}/data/{dataid}/ | 
[**wlm_read**](WlmApi.md#wlm_read) | **GET** /wlm/{wlmid}/ | 
[**wlm_version_list**](WlmApi.md#wlm_version_list) | **GET** /wlm/{wlmid}/version/ | 


# **wlm_commit_create**
> WLMVersion wlm_commit_create(wlmid, data)



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
    api_instance = powermeter_api.WlmApi(api_client)
    wlmid = 56 # int | 
data = powermeter_api.WLMVersion() # WLMVersion | 

    try:
        api_response = api_instance.wlm_commit_create(wlmid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling WlmApi->wlm_commit_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wlmid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wlm_create**
> WireLoad wlm_create(wlmid, data)



Create wire load data

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
    api_instance = powermeter_api.WlmApi(api_client)
    wlmid = 56 # int | 
data = powermeter_api.WireLoad() # WireLoad | 

    try:
        api_response = api_instance.wlm_create(wlmid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling WlmApi->wlm_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wlmid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wlm_data_create**
> wlm_data_create(wlmid, dataid)



Delete wire load data

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
    api_instance = powermeter_api.WlmApi(api_client)
    wlmid = 56 # int | 
dataid = 56 # int | 

    try:
        api_instance.wlm_data_create(wlmid, dataid)
    except ApiException as e:
        print("Exception when calling WlmApi->wlm_data_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wlmid** | **int**|  | 
 **dataid** | **int**|  | 

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

# **wlm_data_read**
> WireLoad wlm_data_read(wlmid, dataid)



Get list of wire load data

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
    api_instance = powermeter_api.WlmApi(api_client)
    wlmid = 56 # int | 
dataid = 56 # int | 

    try:
        api_response = api_instance.wlm_data_read(wlmid, dataid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling WlmApi->wlm_data_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wlmid** | **int**|  | 
 **dataid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wlm_data_update**
> WireLoad wlm_data_update(wlmid, dataid, data)



Update wire load data

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
    api_instance = powermeter_api.WlmApi(api_client)
    wlmid = 56 # int | 
dataid = 56 # int | 
data = powermeter_api.WireLoad() # WireLoad | 

    try:
        api_response = api_instance.wlm_data_update(wlmid, dataid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling WlmApi->wlm_data_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wlmid** | **int**|  | 
 **dataid** | **int**|  | 
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wlm_read**
> WLMModel wlm_read(wlmid)



Get list of wire load data

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
    api_instance = powermeter_api.WlmApi(api_client)
    wlmid = 56 # int | 

    try:
        api_response = api_instance.wlm_read(wlmid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling WlmApi->wlm_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wlmid** | **int**|  | 

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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wlm_version_list**
> list[WLMVersion] wlm_version_list(wlmid, pcbid)



Get WLM versions

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
    api_instance = powermeter_api.WlmApi(api_client)
    wlmid = 'wlmid_example' # str | 
pcbid = 56 # int | 

    try:
        api_response = api_instance.wlm_version_list(wlmid, pcbid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling WlmApi->wlm_version_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wlmid** | **str**|  | 
 **pcbid** | **int**|  | 

### Return type

[**list[WLMVersion]**](WLMVersion.md)

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

