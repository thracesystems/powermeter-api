# powermeter_api.ComputeApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**compute_power**](ComputeApi.md#compute_power) | **POST** /compute/power/ | 


# **compute_power**
> compute_power(data)



Computes equation(s)

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
    api_instance = powermeter_api.ComputeApi(api_client)
    data = powermeter_api.ComputePower() # ComputePower | 

    try:
        api_instance.compute_power(data)
    except ApiException as e:
        print("Exception when calling ComputeApi->compute_power: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **data** | [**ComputePower**](ComputePower.md)|  | 

### Return type

void (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Computed value(s) returned |  -  |
**400** | Error. Message returned |  -  |
**500** | Internal error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

