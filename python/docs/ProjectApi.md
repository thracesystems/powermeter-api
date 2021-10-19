# powermeter_api.ProjectApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**project_access_create**](ProjectApi.md#project_access_create) | **POST** /project/{projectid}/access/ | 
[**project_clone**](ProjectApi.md#project_clone) | **POST** /project/{projectid}/clone/ | 
[**project_contrib_device_compute_list**](ProjectApi.md#project_contrib_device_compute_list) | **GET** /project/{projectid}/contrib_device/{deviceid}/compute/ | 
[**project_contrib_device_create**](ProjectApi.md#project_contrib_device_create) | **POST** /project/{projectid}/contrib_device/ | 
[**project_contrib_device_delete**](ProjectApi.md#project_contrib_device_delete) | **DELETE** /project/{projectid}/contrib_device/{deviceid}/ | 
[**project_contrib_device_list**](ProjectApi.md#project_contrib_device_list) | **GET** /project/{projectid}/contrib_device/ | 
[**project_contrib_device_read**](ProjectApi.md#project_contrib_device_read) | **GET** /project/{projectid}/contrib_device/{deviceid}/ | 
[**project_contrib_device_update**](ProjectApi.md#project_contrib_device_update) | **PUT** /project/{projectid}/contrib_device/{deviceid}/ | 
[**project_create**](ProjectApi.md#project_create) | **POST** /project/ | 
[**project_delete**](ProjectApi.md#project_delete) | **DELETE** /project/{projectid}/ | 
[**project_design_access_create**](ProjectApi.md#project_design_access_create) | **POST** /project/{projectid}/design/{masterdesignid}/access/ | 
[**project_design_clone**](ProjectApi.md#project_design_clone) | **POST** /project/{projectid}/design/{masterdesignid}/clone/ | 
[**project_design_create**](ProjectApi.md#project_design_create) | **POST** /project/{projectid}/design/ | 
[**project_design_delete**](ProjectApi.md#project_design_delete) | **DELETE** /project/{projectid}/design/{masterdesignid}/ | 
[**project_design_instantiable_list**](ProjectApi.md#project_design_instantiable_list) | **GET** /project/{projectid}/design/instantiable/ | 
[**project_design_list**](ProjectApi.md#project_design_list) | **GET** /project/{projectid}/design/ | 
[**project_design_read**](ProjectApi.md#project_design_read) | **GET** /project/{projectid}/design/{masterdesignid}/ | 
[**project_design_update**](ProjectApi.md#project_design_update) | **PUT** /project/{projectid}/design/{masterdesignid}/ | 
[**project_design_versions_list**](ProjectApi.md#project_design_versions_list) | **GET** /project/{projectid}/design/{masterdesignid}/versions/ | 
[**project_list**](ProjectApi.md#project_list) | **GET** /project/ | 
[**project_permissions_list**](ProjectApi.md#project_permissions_list) | **GET** /project/{projectid}/permissions/ | 
[**project_permissions_update**](ProjectApi.md#project_permissions_update) | **PUT** /project/{projectid}/permissions/ | 
[**project_read**](ProjectApi.md#project_read) | **GET** /project/{projectid}/ | 
[**project_reference_create**](ProjectApi.md#project_reference_create) | **POST** /project/{projectid}/reference/ | 
[**project_reference_delete**](ProjectApi.md#project_reference_delete) | **DELETE** /project/{projectid}/reference/{refid}/ | 
[**project_reference_list**](ProjectApi.md#project_reference_list) | **GET** /project/{projectid}/reference/ | 
[**project_reference_read**](ProjectApi.md#project_reference_read) | **GET** /project/{projectid}/reference/{refid}/ | 
[**project_referenceable_list**](ProjectApi.md#project_referenceable_list) | **GET** /project/{projectid}/referenceable/ | 
[**project_scenario_access_create**](ProjectApi.md#project_scenario_access_create) | **POST** /project/{projectid}/scenario/{scenarioid}/access/ | 
[**project_scenario_commit_create**](ProjectApi.md#project_scenario_commit_create) | **POST** /project/{projectid}/scenario/{scenarioid}/commit/ | 
[**project_scenario_delete**](ProjectApi.md#project_scenario_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/ | 
[**project_scenario_design_create**](ProjectApi.md#project_scenario_design_create) | **POST** /project/{projectid}/scenario/{scenarioid}/design/ | 
[**project_scenario_design_delete**](ProjectApi.md#project_scenario_design_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/ | 
[**project_scenario_design_list**](ProjectApi.md#project_scenario_design_list) | **GET** /project/{projectid}/scenario/{scenarioid}/design/ | 
[**project_scenario_design_param_config_create**](ProjectApi.md#project_scenario_design_param_config_create) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/ | 
[**project_scenario_design_param_config_delete**](ProjectApi.md#project_scenario_design_param_config_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/{configid}/ | 
[**project_scenario_design_param_config_list**](ProjectApi.md#project_scenario_design_param_config_list) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/ | 
[**project_scenario_design_param_config_read**](ProjectApi.md#project_scenario_design_param_config_read) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/{configid}/ | 
[**project_scenario_design_param_config_update**](ProjectApi.md#project_scenario_design_param_config_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/{configid}/ | 
[**project_scenario_design_param_create**](ProjectApi.md#project_scenario_design_param_create) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/ | 
[**project_scenario_design_param_list**](ProjectApi.md#project_scenario_design_param_list) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/ | 
[**project_scenario_design_param_read**](ProjectApi.md#project_scenario_design_param_read) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/ | 
[**project_scenario_design_param_update**](ProjectApi.md#project_scenario_design_param_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/ | 
[**project_scenario_design_power_list**](ProjectApi.md#project_scenario_design_power_list) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/power/ | 
[**project_scenario_design_powerdistribution_list**](ProjectApi.md#project_scenario_design_powerdistribution_list) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/powerdistribution/ | 
[**project_scenario_design_read**](ProjectApi.md#project_scenario_design_read) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/ | 
[**project_scenario_design_supply_config_create**](ProjectApi.md#project_scenario_design_supply_config_create) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/ | 
[**project_scenario_design_supply_config_delete**](ProjectApi.md#project_scenario_design_supply_config_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_design_supply_config_list**](ProjectApi.md#project_scenario_design_supply_config_list) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/ | 
[**project_scenario_design_supply_config_read**](ProjectApi.md#project_scenario_design_supply_config_read) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_design_supply_config_update**](ProjectApi.md#project_scenario_design_supply_config_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_design_supply_create**](ProjectApi.md#project_scenario_design_supply_create) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/ | 
[**project_scenario_design_supply_read**](ProjectApi.md#project_scenario_design_supply_read) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/ | 
[**project_scenario_design_thermal_list**](ProjectApi.md#project_scenario_design_thermal_list) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/thermal/ | 
[**project_scenario_design_update**](ProjectApi.md#project_scenario_design_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/ | 
[**project_scenario_design_utilization_config_create**](ProjectApi.md#project_scenario_design_utilization_config_create) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/ | 
[**project_scenario_design_utilization_config_delete**](ProjectApi.md#project_scenario_design_utilization_config_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/{configid}/ | 
[**project_scenario_design_utilization_config_list**](ProjectApi.md#project_scenario_design_utilization_config_list) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/ | 
[**project_scenario_design_utilization_config_read**](ProjectApi.md#project_scenario_design_utilization_config_read) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/{configid}/ | 
[**project_scenario_design_utilization_config_update**](ProjectApi.md#project_scenario_design_utilization_config_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/{configid}/ | 
[**project_scenario_design_utilization_create**](ProjectApi.md#project_scenario_design_utilization_create) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/ | 
[**project_scenario_design_utilization_list**](ProjectApi.md#project_scenario_design_utilization_list) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/ | 
[**project_scenario_design_utilization_read**](ProjectApi.md#project_scenario_design_utilization_read) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/ | 
[**project_scenario_design_utilization_update**](ProjectApi.md#project_scenario_design_utilization_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/ | 
[**project_scenario_hierarchy_design_supply_read**](ProjectApi.md#project_scenario_hierarchy_design_supply_read) | **GET** /project/{projectid}/scenario/{scenarioid}/hierarchy/design/{designinstid}/supply/{supplyinstid}/ | 
[**project_scenario_hierarchy_design_supply_update**](ProjectApi.md#project_scenario_hierarchy_design_supply_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/hierarchy/design/{designinstid}/supply/{supplyinstid}/ | 
[**project_scenario_hierarchy_list**](ProjectApi.md#project_scenario_hierarchy_list) | **GET** /project/{projectid}/scenario/{scenarioid}/hierarchy/ | 
[**project_scenario_hierarchy_package_supply_read**](ProjectApi.md#project_scenario_hierarchy_package_supply_read) | **GET** /project/{projectid}/scenario/{scenarioid}/hierarchy/package/{packinstid}/supply/{supplyinstid}/ | 
[**project_scenario_hierarchy_package_supply_update**](ProjectApi.md#project_scenario_hierarchy_package_supply_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/hierarchy/package/{packinstid}/supply/{supplyinstid}/ | 
[**project_scenario_hierarchy_vr_supply_read**](ProjectApi.md#project_scenario_hierarchy_vr_supply_read) | **GET** /project/{projectid}/scenario/{scenarioid}/hierarchy/vr/{vrinstid}/supply/{supplyinstid}/ | 
[**project_scenario_hierarchy_vr_supply_update**](ProjectApi.md#project_scenario_hierarchy_vr_supply_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/hierarchy/vr/{vrinstid}/supply/{supplyinstid}/ | 
[**project_scenario_library_clone**](ProjectApi.md#project_scenario_library_clone) | **POST** /project/{projectid}/scenario/library/{scenarioid}/clone/ | 
[**project_scenario_library_create**](ProjectApi.md#project_scenario_library_create) | **POST** /project/{projectid}/scenario/library/ | 
[**project_scenario_library_delete**](ProjectApi.md#project_scenario_library_delete) | **DELETE** /project/{projectid}/scenario/library/{scenarioid}/ | 
[**project_scenario_library_list**](ProjectApi.md#project_scenario_library_list) | **GET** /project/{projectid}/scenario/library/ | 
[**project_scenario_library_read**](ProjectApi.md#project_scenario_library_read) | **GET** /project/{projectid}/scenario/library/{scenarioid}/ | 
[**project_scenario_library_update**](ProjectApi.md#project_scenario_library_update) | **PUT** /project/{projectid}/scenario/library/{scenarioid}/ | 
[**project_scenario_library_version_list**](ProjectApi.md#project_scenario_library_version_list) | **GET** /project/{projectid}/scenario/library/{scenarioid}/version/ | 
[**project_scenario_package_create**](ProjectApi.md#project_scenario_package_create) | **POST** /project/{projectid}/scenario/{scenarioid}/package/ | 
[**project_scenario_package_delete**](ProjectApi.md#project_scenario_package_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/ | 
[**project_scenario_package_list**](ProjectApi.md#project_scenario_package_list) | **GET** /project/{projectid}/scenario/{scenarioid}/package/ | 
[**project_scenario_package_power_list**](ProjectApi.md#project_scenario_package_power_list) | **GET** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/power/ | 
[**project_scenario_package_read**](ProjectApi.md#project_scenario_package_read) | **GET** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/ | 
[**project_scenario_package_supply_config_create**](ProjectApi.md#project_scenario_package_supply_config_create) | **POST** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/ | 
[**project_scenario_package_supply_config_delete**](ProjectApi.md#project_scenario_package_supply_config_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_package_supply_config_list**](ProjectApi.md#project_scenario_package_supply_config_list) | **GET** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/ | 
[**project_scenario_package_supply_config_read**](ProjectApi.md#project_scenario_package_supply_config_read) | **GET** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_package_supply_config_update**](ProjectApi.md#project_scenario_package_supply_config_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_package_update**](ProjectApi.md#project_scenario_package_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/ | 
[**project_scenario_pcb_create**](ProjectApi.md#project_scenario_pcb_create) | **POST** /project/{projectid}/scenario/{scenarioid}/pcb/ | 
[**project_scenario_pcb_delete**](ProjectApi.md#project_scenario_pcb_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/ | 
[**project_scenario_pcb_list**](ProjectApi.md#project_scenario_pcb_list) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/ | 
[**project_scenario_pcb_power_list**](ProjectApi.md#project_scenario_pcb_power_list) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/power/ | 
[**project_scenario_pcb_read**](ProjectApi.md#project_scenario_pcb_read) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/ | 
[**project_scenario_pcb_supply_config_create**](ProjectApi.md#project_scenario_pcb_supply_config_create) | **POST** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/ | 
[**project_scenario_pcb_supply_config_delete**](ProjectApi.md#project_scenario_pcb_supply_config_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_pcb_supply_config_list**](ProjectApi.md#project_scenario_pcb_supply_config_list) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/ | 
[**project_scenario_pcb_supply_config_read**](ProjectApi.md#project_scenario_pcb_supply_config_read) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_pcb_supply_config_update**](ProjectApi.md#project_scenario_pcb_supply_config_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_pcb_update**](ProjectApi.md#project_scenario_pcb_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/ | 
[**project_scenario_power_list**](ProjectApi.md#project_scenario_power_list) | **GET** /project/{projectid}/scenario/{scenarioid}/power/ | 
[**project_scenario_powerdistribution_download_read**](ProjectApi.md#project_scenario_powerdistribution_download_read) | **GET** /project/{projectid}/scenario/{scenarioid}/powerdistribution/download/{resolution}/ | 
[**project_scenario_read**](ProjectApi.md#project_scenario_read) | **GET** /project/{projectid}/scenario/{scenarioid}/ | 
[**project_scenario_trend_list**](ProjectApi.md#project_scenario_trend_list) | **GET** /project/{projectid}/scenario/{scenarioid}/trend/ | 
[**project_scenario_update**](ProjectApi.md#project_scenario_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/ | 
[**project_scenario_update_list**](ProjectApi.md#project_scenario_update_list) | **GET** /project/{projectid}/scenario/{scenarioid}/update/ | 
[**project_scenario_version_list**](ProjectApi.md#project_scenario_version_list) | **GET** /project/{projectid}/scenario/{scenarioid}/version/ | 
[**project_scenario_vr_create**](ProjectApi.md#project_scenario_vr_create) | **POST** /project/{projectid}/scenario/{scenarioid}/vr/ | 
[**project_scenario_vr_delete**](ProjectApi.md#project_scenario_vr_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/ | 
[**project_scenario_vr_list**](ProjectApi.md#project_scenario_vr_list) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/ | 
[**project_scenario_vr_power_list**](ProjectApi.md#project_scenario_vr_power_list) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/power/ | 
[**project_scenario_vr_read**](ProjectApi.md#project_scenario_vr_read) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/ | 
[**project_scenario_vr_supply_config_create**](ProjectApi.md#project_scenario_vr_supply_config_create) | **POST** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/ | 
[**project_scenario_vr_supply_config_delete**](ProjectApi.md#project_scenario_vr_supply_config_delete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_vr_supply_config_list**](ProjectApi.md#project_scenario_vr_supply_config_list) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/ | 
[**project_scenario_vr_supply_config_read**](ProjectApi.md#project_scenario_vr_supply_config_read) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_vr_supply_config_update**](ProjectApi.md#project_scenario_vr_supply_config_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/{configid}/ | 
[**project_scenario_vr_update**](ProjectApi.md#project_scenario_vr_update) | **PUT** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/ | 
[**project_simulation_clone_create**](ProjectApi.md#project_simulation_clone_create) | **POST** /project/{projectid}/simulation/{simid}/clone/ | 
[**project_simulation_create**](ProjectApi.md#project_simulation_create) | **POST** /project/{projectid}/simulation/ | 
[**project_simulation_delete**](ProjectApi.md#project_simulation_delete) | **DELETE** /project/{projectid}/simulation/{simid}/ | 
[**project_simulation_list**](ProjectApi.md#project_simulation_list) | **GET** /project/{projectid}/simulation/ | 
[**project_simulation_read**](ProjectApi.md#project_simulation_read) | **GET** /project/{projectid}/simulation/{simid}/ | 
[**project_simulation_update**](ProjectApi.md#project_simulation_update) | **PUT** /project/{projectid}/simulation/{simid}/ | 
[**project_simulation_update_list**](ProjectApi.md#project_simulation_update_list) | **GET** /project/{projectid}/simulation/{simid}/update/ | 
[**project_update**](ProjectApi.md#project_update) | **PUT** /project/{projectid}/ | 
[**project_update_times**](ProjectApi.md#project_update_times) | **GET** /project/{projectid}/update/ | 
[**project_verilog_create**](ProjectApi.md#project_verilog_create) | **POST** /project/{projectid}/verilog/ | 
[**project_wire_load_create**](ProjectApi.md#project_wire_load_create) | **POST** /project/{projectid}/wire_load/ | 
[**project_wire_load_delete**](ProjectApi.md#project_wire_load_delete) | **DELETE** /project/{projectid}/wire_load/{wlmid}/ | 
[**project_wire_load_list**](ProjectApi.md#project_wire_load_list) | **GET** /project/{projectid}/wire_load/ | 
[**project_wire_load_read**](ProjectApi.md#project_wire_load_read) | **GET** /project/{projectid}/wire_load/{wlmid}/ | 
[**project_wire_load_update**](ProjectApi.md#project_wire_load_update) | **PUT** /project/{projectid}/wire_load/{wlmid}/ | 
[**projects_update_times**](ProjectApi.md#projects_update_times) | **GET** /project/update/ | 


# **project_access_create**
> project_access_create(projectid)



Update project access

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_instance.project_access_create(projectid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_access_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

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
**201** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_clone**
> project_clone(projectid)



Create a copy of project

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_instance.project_clone(projectid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_clone: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

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
**202** | Accepted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_contrib_device_compute_list**
> SwaggerContrib project_contrib_device_compute_list(projectid, deviceid, p=p, v=v, t=t)



Compute a contributor device

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
deviceid = 56 # int | 
p = 3.4 # float |  (optional)
v = 3.4 # float |  (optional)
t = 56 # int |  (optional)

    try:
        api_response = api_instance.project_contrib_device_compute_list(projectid, deviceid, p=p, v=v, t=t)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_contrib_device_compute_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **deviceid** | **int**|  | 
 **p** | **float**|  | [optional] 
 **v** | **float**|  | [optional] 
 **t** | **int**|  | [optional] 

### Return type

[**SwaggerContrib**](SwaggerContrib.md)

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

# **project_contrib_device_create**
> SwaggerContrib project_contrib_device_create(projectid, data)



Create a contributor devices

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
data = powermeter_api.SwaggerContrib() # SwaggerContrib | 

    try:
        api_response = api_instance.project_contrib_device_create(projectid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_contrib_device_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **data** | [**SwaggerContrib**](SwaggerContrib.md)|  | 

### Return type

[**SwaggerContrib**](SwaggerContrib.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_contrib_device_delete**
> project_contrib_device_delete(projectid, deviceid)



Delete a contributor devices

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
deviceid = 56 # int | 

    try:
        api_instance.project_contrib_device_delete(projectid, deviceid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_contrib_device_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **deviceid** | **int**|  | 

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

# **project_contrib_device_list**
> PagedContribDevice project_contrib_device_list(projectid, page=page, number=number)



Get list of contributor devices

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
page = 56 # int |  (optional)
number = 56 # int |  (optional)

    try:
        api_response = api_instance.project_contrib_device_list(projectid, page=page, number=number)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_contrib_device_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **page** | **int**|  | [optional] 
 **number** | **int**|  | [optional] 

### Return type

[**PagedContribDevice**](PagedContribDevice.md)

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

# **project_contrib_device_read**
> SwaggerContrib project_contrib_device_read(projectid, deviceid)



Get a contributor device

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
deviceid = 56 # int | 

    try:
        api_response = api_instance.project_contrib_device_read(projectid, deviceid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_contrib_device_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **deviceid** | **int**|  | 

### Return type

[**SwaggerContrib**](SwaggerContrib.md)

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

# **project_contrib_device_update**
> SwaggerContrib project_contrib_device_update(projectid, deviceid, data)



Update a contributor devices

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
deviceid = 56 # int | 
data = powermeter_api.SwaggerContrib() # SwaggerContrib | 

    try:
        api_response = api_instance.project_contrib_device_update(projectid, deviceid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_contrib_device_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **deviceid** | **int**|  | 
 **data** | [**SwaggerContrib**](SwaggerContrib.md)|  | 

### Return type

[**SwaggerContrib**](SwaggerContrib.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_create**
> Project project_create(data)



Create a project

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
    api_instance = powermeter_api.ProjectApi(api_client)
    data = powermeter_api.Project() # Project | 

    try:
        api_response = api_instance.project_create(data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **data** | [**Project**](Project.md)|  | 

### Return type

[**Project**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with input, error message returned |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_delete**
> project_delete(projectid)



Delete a project

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_instance.project_delete(projectid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

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
**200** | Project deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_design_access_create**
> project_design_access_create(projectid, masterdesignid)



Update design access

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
masterdesignid = 56 # int | 

    try:
        api_instance.project_design_access_create(projectid, masterdesignid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_design_access_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **masterdesignid** | **int**|  | 

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
**201** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_design_clone**
> DesignMaster project_design_clone(projectid, masterdesignid)



Create a copy of design

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
masterdesignid = 56 # int | 

    try:
        api_response = api_instance.project_design_clone(projectid, masterdesignid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_design_clone: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **masterdesignid** | **int**|  | 

### Return type

[**DesignMaster**](DesignMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authoried |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_design_create**
> DesignMaster project_design_create(projectid, data)



Create a design, return master design

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
data = powermeter_api.Design() # Design | 

    try:
        api_response = api_instance.project_design_create(projectid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_design_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **data** | [**Design**](Design.md)|  | 

### Return type

[**DesignMaster**](DesignMaster.md)

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

# **project_design_delete**
> project_design_delete(projectid, masterdesignid)



Delete a master design

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
masterdesignid = 56 # int | 

    try:
        api_instance.project_design_delete(projectid, masterdesignid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_design_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **masterdesignid** | **int**|  | 

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
**200** | Delete |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_design_instantiable_list**
> list[DesignMaster] project_design_instantiable_list(projectid)



Get list of designs that can be instantiated in the given design

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_response = api_instance.project_design_instantiable_list(projectid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_design_instantiable_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

### Return type

[**list[DesignMaster]**](DesignMaster.md)

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

# **project_design_list**
> list[DesignMaster] project_design_list(projectid, name=name)



Get list of master designs in projects

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
name = 'name_example' # str | Design name (optional)

    try:
        api_response = api_instance.project_design_list(projectid, name=name)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_design_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **name** | **str**| Design name | [optional] 

### Return type

[**list[DesignMaster]**](DesignMaster.md)

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

# **project_design_read**
> DesignMaster project_design_read(projectid, masterdesignid)



Get a master design

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
masterdesignid = 56 # int | 

    try:
        api_response = api_instance.project_design_read(projectid, masterdesignid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_design_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **masterdesignid** | **int**|  | 

### Return type

[**DesignMaster**](DesignMaster.md)

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

# **project_design_update**
> DesignMaster project_design_update(projectid, masterdesignid, data)



Update a design master

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
masterdesignid = 56 # int | 
data = powermeter_api.DesignMaster() # DesignMaster | 

    try:
        api_response = api_instance.project_design_update(projectid, masterdesignid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_design_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **masterdesignid** | **int**|  | 
 **data** | [**DesignMaster**](DesignMaster.md)|  | 

### Return type

[**DesignMaster**](DesignMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_design_versions_list**
> list[DesignVersion] project_design_versions_list(projectid, masterdesignid)



Get list of design versions

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
masterdesignid = 56 # int | 

    try:
        api_response = api_instance.project_design_versions_list(projectid, masterdesignid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_design_versions_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **masterdesignid** | **int**|  | 

### Return type

[**list[DesignVersion]**](DesignVersion.md)

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

# **project_list**
> list[Project] project_list(name=name)



Get list of projects

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
    api_instance = powermeter_api.ProjectApi(api_client)
    name = 'name_example' # str | Project name (optional)

    try:
        api_response = api_instance.project_list(name=name)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**| Project name | [optional] 

### Return type

[**list[Project]**](Project.md)

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

# **project_permissions_list**
> project_permissions_list(projectid)



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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_instance.project_permissions_list(projectid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_permissions_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

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

# **project_permissions_update**
> project_permissions_update(projectid)



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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_instance.project_permissions_update(projectid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_permissions_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

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

# **project_read**
> Project project_read(projectid)



Get a project

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_response = api_instance.project_read(projectid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

### Return type

[**Project**](Project.md)

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

# **project_reference_create**
> Project project_reference_create(projectid, data)



Add a reference

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
data = powermeter_api.Project() # Project | 

    try:
        api_response = api_instance.project_reference_create(projectid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_reference_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **data** | [**Project**](Project.md)|  | 

### Return type

[**Project**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_reference_delete**
> project_reference_delete(projectid, refid)



Delete a reference

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
refid = 56 # int | 

    try:
        api_instance.project_reference_delete(projectid, refid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_reference_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **refid** | **int**|  | 

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

# **project_reference_list**
> list[Project] project_reference_list(projectid)



Get list of refernced projects

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_response = api_instance.project_reference_list(projectid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_reference_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

### Return type

[**list[Project]**](Project.md)

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

# **project_reference_read**
> Project project_reference_read(projectid, refid)



Get a reference

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
refid = 56 # int | 

    try:
        api_response = api_instance.project_reference_read(projectid, refid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_reference_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **refid** | **int**|  | 

### Return type

[**Project**](Project.md)

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

# **project_referenceable_list**
> list[Project] project_referenceable_list(projectid)



Get list of projects referenceable by this project

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_response = api_instance.project_referenceable_list(projectid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_referenceable_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

### Return type

[**list[Project]**](Project.md)

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

# **project_scenario_access_create**
> project_scenario_access_create(projectid, scenarioid)



Update project datasheet access

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_instance.project_scenario_access_create(projectid, scenarioid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_access_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

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
**201** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_commit_create**
> ScenarioVersion project_scenario_commit_create(projectid, scenarioid, data)



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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
data = powermeter_api.ScenarioVersion() # ScenarioVersion | 

    try:
        api_response = api_instance.project_scenario_commit_create(projectid, scenarioid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_commit_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **data** | [**ScenarioVersion**](ScenarioVersion.md)|  | 

### Return type

[**ScenarioVersion**](ScenarioVersion.md)

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

# **project_scenario_delete**
> project_scenario_delete(projectid, scenarioid)



Delete a scenario

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_instance.project_scenario_delete(projectid, scenarioid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

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

# **project_scenario_design_create**
> DesignInstance project_scenario_design_create(projectid, scenarioid, data)



Create scenario PC instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
data = powermeter_api.DesignInstance() # DesignInstance | 

    try:
        api_response = api_instance.project_scenario_design_create(projectid, scenarioid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **data** | [**DesignInstance**](DesignInstance.md)|  | 

### Return type

[**DesignInstance**](DesignInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_delete**
> project_scenario_design_delete(projectid, scenarioid, designinstid)



Delete a scenario Design instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 

    try:
        api_instance.project_scenario_design_delete(projectid, scenarioid, designinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 

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
**201** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_list**
> list[DesignInstance] project_scenario_design_list(projectid, scenarioid)



Get scenario Designs

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_list(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**list[DesignInstance]**](DesignInstance.md)

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

# **project_scenario_design_param_config_create**
> ScenarioParamConfig project_scenario_design_param_config_create(projectid, scenarioid, designinstid, paramid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
paramid = 56 # int | 
data = powermeter_api.ScenarioParamConfig() # ScenarioParamConfig | 

    try:
        api_response = api_instance.project_scenario_design_param_config_create(projectid, scenarioid, designinstid, paramid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_param_config_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **paramid** | **int**|  | 
 **data** | [**ScenarioParamConfig**](ScenarioParamConfig.md)|  | 

### Return type

[**ScenarioParamConfig**](ScenarioParamConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_param_config_delete**
> project_scenario_design_param_config_delete(projectid, scenarioid, designinstid, paramid, configid)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
paramid = 56 # int | 
configid = 56 # int | 

    try:
        api_instance.project_scenario_design_param_config_delete(projectid, scenarioid, designinstid, paramid, configid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_param_config_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **paramid** | **int**|  | 
 **configid** | **int**|  | 

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

# **project_scenario_design_param_config_list**
> list[ScenarioParamConfig] project_scenario_design_param_config_list(projectid, scenarioid, designinstid, paramid)



Get scenario design config data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
paramid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_param_config_list(projectid, scenarioid, designinstid, paramid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_param_config_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **paramid** | **int**|  | 

### Return type

[**list[ScenarioParamConfig]**](ScenarioParamConfig.md)

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

# **project_scenario_design_param_config_read**
> ScenarioParamConfig project_scenario_design_param_config_read(projectid, scenarioid, designinstid, paramid, configid)



Get scenario design config data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
paramid = 56 # int | 
configid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_param_config_read(projectid, scenarioid, designinstid, paramid, configid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_param_config_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **paramid** | **int**|  | 
 **configid** | **int**|  | 

### Return type

[**ScenarioParamConfig**](ScenarioParamConfig.md)

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

# **project_scenario_design_param_config_update**
> ScenarioParamConfig project_scenario_design_param_config_update(projectid, scenarioid, designinstid, paramid, configid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
paramid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.ScenarioParamConfig() # ScenarioParamConfig | 

    try:
        api_response = api_instance.project_scenario_design_param_config_update(projectid, scenarioid, designinstid, paramid, configid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_param_config_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **paramid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**ScenarioParamConfig**](ScenarioParamConfig.md)|  | 

### Return type

[**ScenarioParamConfig**](ScenarioParamConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_param_create**
> ScenarioParam project_scenario_design_param_create(projectid, scenarioid, designinstid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
data = powermeter_api.ScenarioParam() # ScenarioParam | 

    try:
        api_response = api_instance.project_scenario_design_param_create(projectid, scenarioid, designinstid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_param_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **data** | [**ScenarioParam**](ScenarioParam.md)|  | 

### Return type

[**ScenarioParam**](ScenarioParam.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_param_list**
> list[ScenarioParam] project_scenario_design_param_list(projectid, scenarioid, designinstid)



Get scenario design config data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_param_list(projectid, scenarioid, designinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_param_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 

### Return type

[**list[ScenarioParam]**](ScenarioParam.md)

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

# **project_scenario_design_param_read**
> list[ScenarioParam] project_scenario_design_param_read(projectid, scenarioid, designinstid, paramid)



Get datasheet design config data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
paramid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_param_read(projectid, scenarioid, designinstid, paramid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_param_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **paramid** | **int**|  | 

### Return type

[**list[ScenarioParam]**](ScenarioParam.md)

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

# **project_scenario_design_param_update**
> ScenarioParam project_scenario_design_param_update(projectid, scenarioid, designinstid, paramid, data)



Create datasheet supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
paramid = 56 # int | 
data = powermeter_api.ScenarioParam() # ScenarioParam | 

    try:
        api_response = api_instance.project_scenario_design_param_update(projectid, scenarioid, designinstid, paramid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_param_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **paramid** | **int**|  | 
 **data** | [**ScenarioParam**](ScenarioParam.md)|  | 

### Return type

[**ScenarioParam**](ScenarioParam.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_power_list**
> project_scenario_design_power_list(projectid, scenarioid, designinstid)



Get project scenario power

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 

    try:
        api_instance.project_scenario_design_power_list(projectid, scenarioid, designinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_power_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 

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

# **project_scenario_design_powerdistribution_list**
> project_scenario_design_powerdistribution_list(projectid, scenarioid, designinstid)



Get project scenario power distribution

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 

    try:
        api_instance.project_scenario_design_powerdistribution_list(projectid, scenarioid, designinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_powerdistribution_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 

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

# **project_scenario_design_read**
> DesignInstance project_scenario_design_read(projectid, scenarioid, designinstid)



Get a scenario Design

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_read(projectid, scenarioid, designinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 

### Return type

[**DesignInstance**](DesignInstance.md)

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

# **project_scenario_design_supply_config_create**
> SupplyInstConfig project_scenario_design_supply_config_create(designinstid, projectid, scenarioid, dsigninstid, supplyid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    designinstid = 'designinstid_example' # str | 
projectid = 56 # int | 
scenarioid = 56 # int | 
dsigninstid = 56 # int | 
supplyid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_response = api_instance.project_scenario_design_supply_config_create(designinstid, projectid, scenarioid, dsigninstid, supplyid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_supply_config_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **designinstid** | **str**|  | 
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **dsigninstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_supply_config_delete**
> project_scenario_design_supply_config_delete(projectid, scenarioid, designinstid, supplyid, configid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_instance.project_scenario_design_supply_config_delete(projectid, scenarioid, designinstid, supplyid, configid, data)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_supply_config_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

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
**200** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_supply_config_list**
> list[SupplyInstConfig] project_scenario_design_supply_config_list(projectid, scenarioid, designinstid, supplyid)



Get scenario design supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_supply_config_list(projectid, scenarioid, designinstid, supplyid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_supply_config_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **supplyid** | **int**|  | 

### Return type

[**list[SupplyInstConfig]**](SupplyInstConfig.md)

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

# **project_scenario_design_supply_config_read**
> SupplyInstConfig project_scenario_design_supply_config_read(projectid, scenarioid, designinstid, supplyid, configid)



Get scenario design supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_supply_config_read(projectid, scenarioid, designinstid, supplyid, configid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_supply_config_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

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

# **project_scenario_design_supply_config_update**
> SupplyInstConfig project_scenario_design_supply_config_update(projectid, scenarioid, designinstid, supplyid, configid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_response = api_instance.project_scenario_design_supply_config_update(projectid, scenarioid, designinstid, supplyid, configid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_supply_config_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

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

# **project_scenario_design_supply_create**
> DesignSupplyInst project_scenario_design_supply_create(designinstid, projectid, scenarioid, dsigninstid, supplyid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    designinstid = 'designinstid_example' # str | 
projectid = 56 # int | 
scenarioid = 56 # int | 
dsigninstid = 56 # int | 
supplyid = 56 # int | 
data = powermeter_api.DesignSupplyInst() # DesignSupplyInst | 

    try:
        api_response = api_instance.project_scenario_design_supply_create(designinstid, projectid, scenarioid, dsigninstid, supplyid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_supply_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **designinstid** | **str**|  | 
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **dsigninstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **data** | [**DesignSupplyInst**](DesignSupplyInst.md)|  | 

### Return type

[**DesignSupplyInst**](DesignSupplyInst.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_supply_read**
> list[DesignSupplyInst] project_scenario_design_supply_read(projectid, scenarioid, designinstid, supplyid)



Get scenario design supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_supply_read(projectid, scenarioid, designinstid, supplyid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_supply_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **supplyid** | **int**|  | 

### Return type

[**list[DesignSupplyInst]**](DesignSupplyInst.md)

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

# **project_scenario_design_thermal_list**
> project_scenario_design_thermal_list(projectid, scenarioid, designinstid)



Compute project scenario steady state thermal

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 

    try:
        api_instance.project_scenario_design_thermal_list(projectid, scenarioid, designinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_thermal_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 

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

# **project_scenario_design_update**
> DesignInstance project_scenario_design_update(projectid, scenarioid, designinstid, data)



Update a scenario Design instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
data = powermeter_api.DesignInstance() # DesignInstance | 

    try:
        api_response = api_instance.project_scenario_design_update(projectid, scenarioid, designinstid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **data** | [**DesignInstance**](DesignInstance.md)|  | 

### Return type

[**DesignInstance**](DesignInstance.md)

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

# **project_scenario_design_utilization_config_create**
> ScenarioModeUtilConfig project_scenario_design_utilization_config_create(projectid, scenarioid, designinstid, modeid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
modeid = 56 # int | 
data = powermeter_api.ScenarioModeUtilConfig() # ScenarioModeUtilConfig | 

    try:
        api_response = api_instance.project_scenario_design_utilization_config_create(projectid, scenarioid, designinstid, modeid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_utilization_config_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **modeid** | **int**|  | 
 **data** | [**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)|  | 

### Return type

[**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_utilization_config_delete**
> project_scenario_design_utilization_config_delete(projectid, scenarioid, designinstid, modeid, configid)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
modeid = 56 # int | 
configid = 56 # int | 

    try:
        api_instance.project_scenario_design_utilization_config_delete(projectid, scenarioid, designinstid, modeid, configid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_utilization_config_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **modeid** | **int**|  | 
 **configid** | **int**|  | 

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

# **project_scenario_design_utilization_config_list**
> list[ScenarioModeUtilConfig] project_scenario_design_utilization_config_list(projectid, scenarioid, designinstid, modeid)



Get scenario design config data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
modeid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_utilization_config_list(projectid, scenarioid, designinstid, modeid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_utilization_config_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **modeid** | **int**|  | 

### Return type

[**list[ScenarioModeUtilConfig]**](ScenarioModeUtilConfig.md)

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

# **project_scenario_design_utilization_config_read**
> ScenarioModeUtilConfig project_scenario_design_utilization_config_read(projectid, scenarioid, designinstid, modeid, configid)



Get scenario design config data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
modeid = 56 # int | 
configid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_utilization_config_read(projectid, scenarioid, designinstid, modeid, configid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_utilization_config_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **modeid** | **int**|  | 
 **configid** | **int**|  | 

### Return type

[**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)

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

# **project_scenario_design_utilization_config_update**
> ScenarioModeUtilConfig project_scenario_design_utilization_config_update(projectid, scenarioid, designinstid, modeid, configid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
modeid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.ScenarioModeUtilConfig() # ScenarioModeUtilConfig | 

    try:
        api_response = api_instance.project_scenario_design_utilization_config_update(projectid, scenarioid, designinstid, modeid, configid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_utilization_config_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **modeid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)|  | 

### Return type

[**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)

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

# **project_scenario_design_utilization_create**
> ScenarioModeUtil project_scenario_design_utilization_create(projectid, scenarioid, designinstid, modeid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
modeid = 56 # int | 
data = powermeter_api.ScenarioModeUtil() # ScenarioModeUtil | 

    try:
        api_response = api_instance.project_scenario_design_utilization_create(projectid, scenarioid, designinstid, modeid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_utilization_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **modeid** | **int**|  | 
 **data** | [**ScenarioModeUtil**](ScenarioModeUtil.md)|  | 

### Return type

[**ScenarioModeUtil**](ScenarioModeUtil.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_design_utilization_list**
> list[ScenarioModeUtil] project_scenario_design_utilization_list(projectid, scenarioid, designinstid)



Get scenario design config data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_utilization_list(projectid, scenarioid, designinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_utilization_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 

### Return type

[**list[ScenarioModeUtil]**](ScenarioModeUtil.md)

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

# **project_scenario_design_utilization_read**
> ScenarioModeUtil project_scenario_design_utilization_read(projectid, scenarioid, designinstid, modeid)



Get scenario design config data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
modeid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_design_utilization_read(projectid, scenarioid, designinstid, modeid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_utilization_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **modeid** | **int**|  | 

### Return type

[**ScenarioModeUtil**](ScenarioModeUtil.md)

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

# **project_scenario_design_utilization_update**
> ScenarioModeUtil project_scenario_design_utilization_update(projectid, scenarioid, designinstid, modeid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
modeid = 56 # int | 
data = powermeter_api.ScenarioModeUtil() # ScenarioModeUtil | 

    try:
        api_response = api_instance.project_scenario_design_utilization_update(projectid, scenarioid, designinstid, modeid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_design_utilization_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **modeid** | **int**|  | 
 **data** | [**ScenarioModeUtil**](ScenarioModeUtil.md)|  | 

### Return type

[**ScenarioModeUtil**](ScenarioModeUtil.md)

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

# **project_scenario_hierarchy_design_supply_read**
> DesignSupplyInst project_scenario_hierarchy_design_supply_read(projectid, scenarioid, designinstid, supplyinstid)



Get scenario PCB package supply instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
supplyinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_hierarchy_design_supply_read(projectid, scenarioid, designinstid, supplyinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_hierarchy_design_supply_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **supplyinstid** | **int**|  | 

### Return type

[**DesignSupplyInst**](DesignSupplyInst.md)

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

# **project_scenario_hierarchy_design_supply_update**
> DesignSupplyInst project_scenario_hierarchy_design_supply_update(projectid, scenarioid, designinstid, supplyinstid)



Create scenario PCB package supply instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
designinstid = 56 # int | 
supplyinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_hierarchy_design_supply_update(projectid, scenarioid, designinstid, supplyinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_hierarchy_design_supply_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **designinstid** | **int**|  | 
 **supplyinstid** | **int**|  | 

### Return type

[**DesignSupplyInst**](DesignSupplyInst.md)

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

# **project_scenario_hierarchy_list**
> ScenarioHierarchy project_scenario_hierarchy_list(projectid, scenarioid)



Get scenario PCBs

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_hierarchy_list(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_hierarchy_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**ScenarioHierarchy**](ScenarioHierarchy.md)

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

# **project_scenario_hierarchy_package_supply_read**
> PackageSupplyInst project_scenario_hierarchy_package_supply_read(projectid, scenarioid, packinstid, supplyinstid)



Get scenario PCB package supply instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 
supplyinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_hierarchy_package_supply_read(projectid, scenarioid, packinstid, supplyinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_hierarchy_package_supply_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 
 **supplyinstid** | **int**|  | 

### Return type

[**PackageSupplyInst**](PackageSupplyInst.md)

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

# **project_scenario_hierarchy_package_supply_update**
> PackageSupplyInst project_scenario_hierarchy_package_supply_update(projectid, scenarioid, packinstid, supplyinstid)



Update scenario PCB package supply instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 
supplyinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_hierarchy_package_supply_update(projectid, scenarioid, packinstid, supplyinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_hierarchy_package_supply_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 
 **supplyinstid** | **int**|  | 

### Return type

[**PackageSupplyInst**](PackageSupplyInst.md)

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

# **project_scenario_hierarchy_vr_supply_read**
> VRSupplyInst project_scenario_hierarchy_vr_supply_read(projectid, scenarioid, vrinstid, supplyinstid)



Create datasheet PCB package supply instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 
supplyinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_hierarchy_vr_supply_read(projectid, scenarioid, vrinstid, supplyinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_hierarchy_vr_supply_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 
 **supplyinstid** | **int**|  | 

### Return type

[**VRSupplyInst**](VRSupplyInst.md)

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

# **project_scenario_hierarchy_vr_supply_update**
> VRSupplyInst project_scenario_hierarchy_vr_supply_update(projectid, scenarioid, vrinstid, supplyinstid)



Create datasheet PCB package supply instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 
supplyinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_hierarchy_vr_supply_update(projectid, scenarioid, vrinstid, supplyinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_hierarchy_vr_supply_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 
 **supplyinstid** | **int**|  | 

### Return type

[**VRSupplyInst**](VRSupplyInst.md)

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

# **project_scenario_library_clone**
> ScenarioMaster project_scenario_library_clone(projectid, scenarioid)



Clone a scenario

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_library_clone(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_library_clone: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**ScenarioMaster**](ScenarioMaster.md)

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

# **project_scenario_library_create**
> ScenarioMaster project_scenario_library_create(projectid, data)



Create a new scenario

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
data = powermeter_api.ScenarioMaster() # ScenarioMaster | 

    try:
        api_response = api_instance.project_scenario_library_create(projectid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_library_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **data** | [**ScenarioMaster**](ScenarioMaster.md)|  | 

### Return type

[**ScenarioMaster**](ScenarioMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inout data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_library_delete**
> project_scenario_library_delete(projectid, scenarioid)



Delete a scenario

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_instance.project_scenario_library_delete(projectid, scenarioid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_library_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

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

# **project_scenario_library_list**
> list[ScenarioMaster] project_scenario_library_list(projectid)



Get list of project scenarios

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_library_list(projectid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_library_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

### Return type

[**list[ScenarioMaster]**](ScenarioMaster.md)

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

# **project_scenario_library_read**
> list[ScenarioMaster] project_scenario_library_read(projectid, scenarioid)



Get a scenarios

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_library_read(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_library_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**list[ScenarioMaster]**](ScenarioMaster.md)

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

# **project_scenario_library_update**
> ScenarioMaster project_scenario_library_update(projectid, scenarioid, data)



Update a scenario

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
data = powermeter_api.ScenarioMaster() # ScenarioMaster | 

    try:
        api_response = api_instance.project_scenario_library_update(projectid, scenarioid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_library_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **data** | [**ScenarioMaster**](ScenarioMaster.md)|  | 

### Return type

[**ScenarioMaster**](ScenarioMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Issue with inout data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_library_version_list**
> list[ScenarioVersion] project_scenario_library_version_list(projectid, scenarioid)



Get List of design versions

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_library_version_list(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_library_version_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**list[ScenarioVersion]**](ScenarioVersion.md)

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

# **project_scenario_package_create**
> PackageInstance project_scenario_package_create(projectid, scenarioid, data)



Create scenario Package instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
data = powermeter_api.PackageInstance() # PackageInstance | 

    try:
        api_response = api_instance.project_scenario_package_create(projectid, scenarioid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **data** | [**PackageInstance**](PackageInstance.md)|  | 

### Return type

[**PackageInstance**](PackageInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_package_delete**
> project_scenario_package_delete(projectid, scenarioid, packinstid)



Delete a scenario Package instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 

    try:
        api_instance.project_scenario_package_delete(projectid, scenarioid, packinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 

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

# **project_scenario_package_list**
> list[PackageInstance] project_scenario_package_list(projectid, scenarioid)



Get scenario Packages

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_package_list(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**list[PackageInstance]**](PackageInstance.md)

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

# **project_scenario_package_power_list**
> project_scenario_package_power_list(projectid, scenarioid, packinstid)



Get project scenario power

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 

    try:
        api_instance.project_scenario_package_power_list(projectid, scenarioid, packinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_power_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 

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

# **project_scenario_package_read**
> PackageInstance project_scenario_package_read(projectid, scenarioid, packinstid)



Get a scenario Pckage

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_package_read(projectid, scenarioid, packinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 

### Return type

[**PackageInstance**](PackageInstance.md)

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

# **project_scenario_package_supply_config_create**
> SupplyInstConfig project_scenario_package_supply_config_create(projectid, scenarioid, packinstid, supplyid, data)



Create datasheet supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 
supplyid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_response = api_instance.project_scenario_package_supply_config_create(projectid, scenarioid, packinstid, supplyid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_supply_config_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_package_supply_config_delete**
> project_scenario_package_supply_config_delete(projectid, scenarioid, packinstid, supplyid, configid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_instance.project_scenario_package_supply_config_delete(projectid, scenarioid, packinstid, supplyid, configid, data)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_supply_config_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

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
**200** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_package_supply_config_list**
> list[SupplyInstConfig] project_scenario_package_supply_config_list(projectid, scenarioid, packinstid, supplyid)



Get scenario design supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_package_supply_config_list(projectid, scenarioid, packinstid, supplyid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_supply_config_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 
 **supplyid** | **int**|  | 

### Return type

[**list[SupplyInstConfig]**](SupplyInstConfig.md)

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

# **project_scenario_package_supply_config_read**
> SupplyInstConfig project_scenario_package_supply_config_read(projectid, scenarioid, packinstid, supplyid, configid)



Get scenario design supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_package_supply_config_read(projectid, scenarioid, packinstid, supplyid, configid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_supply_config_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

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

# **project_scenario_package_supply_config_update**
> SupplyInstConfig project_scenario_package_supply_config_update(projectid, scenarioid, packinstid, supplyid, configid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_response = api_instance.project_scenario_package_supply_config_update(projectid, scenarioid, packinstid, supplyid, configid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_supply_config_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

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

# **project_scenario_package_update**
> PackageInstance project_scenario_package_update(projectid, scenarioid, packinstid, data)



Update a scenario Package instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
packinstid = 56 # int | 
data = powermeter_api.PackageInstance() # PackageInstance | 

    try:
        api_response = api_instance.project_scenario_package_update(projectid, scenarioid, packinstid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_package_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **packinstid** | **int**|  | 
 **data** | [**PackageInstance**](PackageInstance.md)|  | 

### Return type

[**PackageInstance**](PackageInstance.md)

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

# **project_scenario_pcb_create**
> PCBInstance project_scenario_pcb_create(projectid, scenarioid, data)



Create scenario PC instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
data = powermeter_api.PCBInstance() # PCBInstance | 

    try:
        api_response = api_instance.project_scenario_pcb_create(projectid, scenarioid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **data** | [**PCBInstance**](PCBInstance.md)|  | 

### Return type

[**PCBInstance**](PCBInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_pcb_delete**
> project_scenario_pcb_delete(projectid, scenarioid, pcbinstid)



Delete a datasheet PCB instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
pcbinstid = 56 # int | 

    try:
        api_instance.project_scenario_pcb_delete(projectid, scenarioid, pcbinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **pcbinstid** | **int**|  | 

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
**201** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_pcb_list**
> list[PCBInstance] project_scenario_pcb_list(projectid, scenarioid)



Get scenario PCBs

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_pcb_list(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**list[PCBInstance]**](PCBInstance.md)

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

# **project_scenario_pcb_power_list**
> project_scenario_pcb_power_list(projectid, scenarioid, pcbinstid)



Get project scenario power

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
pcbinstid = 56 # int | 

    try:
        api_instance.project_scenario_pcb_power_list(projectid, scenarioid, pcbinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_power_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **pcbinstid** | **int**|  | 

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

# **project_scenario_pcb_read**
> PCBInstance project_scenario_pcb_read(projectid, scenarioid, pcbinstid)



Get a datasheet PCB

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
pcbinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_pcb_read(projectid, scenarioid, pcbinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **pcbinstid** | **int**|  | 

### Return type

[**PCBInstance**](PCBInstance.md)

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

# **project_scenario_pcb_supply_config_create**
> SupplyInstConfig project_scenario_pcb_supply_config_create(projectid, scenarioid, pcbinstid, supplyid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
pcbinstid = 56 # int | 
supplyid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_response = api_instance.project_scenario_pcb_supply_config_create(projectid, scenarioid, pcbinstid, supplyid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_supply_config_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **pcbinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_pcb_supply_config_delete**
> project_scenario_pcb_supply_config_delete(projectid, scenarioid, pcbinstid, supplyid, configid, data)



Create datasheet supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
pcbinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_instance.project_scenario_pcb_supply_config_delete(projectid, scenarioid, pcbinstid, supplyid, configid, data)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_supply_config_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **pcbinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

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
**200** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_pcb_supply_config_list**
> list[SupplyInstConfig] project_scenario_pcb_supply_config_list(projectid, scenarioid, pcbinstid, supplyid)



Get scenario design supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
pcbinstid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_pcb_supply_config_list(projectid, scenarioid, pcbinstid, supplyid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_supply_config_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **pcbinstid** | **int**|  | 
 **supplyid** | **int**|  | 

### Return type

[**list[SupplyInstConfig]**](SupplyInstConfig.md)

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

# **project_scenario_pcb_supply_config_read**
> SupplyInstConfig project_scenario_pcb_supply_config_read(projectid, scenarioid, pcbinstid, supplyid, configid)



Get datasheet design supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
pcbinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_pcb_supply_config_read(projectid, scenarioid, pcbinstid, supplyid, configid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_supply_config_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **pcbinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

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

# **project_scenario_pcb_supply_config_update**
> SupplyInstConfig project_scenario_pcb_supply_config_update(projectid, scenarioid, pcbinstid, supplyid, configid, data)



Create datasheet supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
pcbinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_response = api_instance.project_scenario_pcb_supply_config_update(projectid, scenarioid, pcbinstid, supplyid, configid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_supply_config_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **pcbinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

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

# **project_scenario_pcb_update**
> PCBInstance project_scenario_pcb_update(projectid, scenarioid, pcbinstid, data)



Update a datasheet PCB instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
pcbinstid = 56 # int | 
data = powermeter_api.PCBInstance() # PCBInstance | 

    try:
        api_response = api_instance.project_scenario_pcb_update(projectid, scenarioid, pcbinstid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_pcb_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **pcbinstid** | **int**|  | 
 **data** | [**PCBInstance**](PCBInstance.md)|  | 

### Return type

[**PCBInstance**](PCBInstance.md)

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

# **project_scenario_power_list**
> project_scenario_power_list(projectid, scenarioid)



Get project scenario power

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_instance.project_scenario_power_list(projectid, scenarioid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_power_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

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

# **project_scenario_powerdistribution_download_read**
> project_scenario_powerdistribution_download_read(projectid, scenarioid, resolution)



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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
resolution = 56 # int | 

    try:
        api_instance.project_scenario_powerdistribution_download_read(projectid, scenarioid, resolution)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_powerdistribution_download_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **resolution** | **int**|  | 

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

# **project_scenario_read**
> Scenario project_scenario_read(projectid, scenarioid)



Get scenario

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_read(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**Scenario**](Scenario.md)

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

# **project_scenario_trend_list**
> project_scenario_trend_list(projectid, scenarioid)



Get a datasheet trend

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_instance.project_scenario_trend_list(projectid, scenarioid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_trend_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

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
**200** | Data |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_update**
> Scenario project_scenario_update(projectid, scenarioid, data)



Update a scenario

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
data = powermeter_api.Scenario() # Scenario | 

    try:
        api_response = api_instance.project_scenario_update(projectid, scenarioid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **data** | [**Scenario**](Scenario.md)|  | 

### Return type

[**Scenario**](Scenario.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Issue with input data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_update_list**
> UpdateData project_scenario_update_list(projectid, scenarioid)



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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_update_list(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_update_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

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

# **project_scenario_version_list**
> list[ScenarioVersion] project_scenario_version_list(projectid, scenarioid)



Get List of design versions

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_version_list(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_version_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**list[ScenarioVersion]**](ScenarioVersion.md)

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

# **project_scenario_vr_create**
> VRInstance project_scenario_vr_create(projectid, scenarioid, data)



Create scenario PC instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
data = powermeter_api.VRInstance() # VRInstance | 

    try:
        api_response = api_instance.project_scenario_vr_create(projectid, scenarioid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **data** | [**VRInstance**](VRInstance.md)|  | 

### Return type

[**VRInstance**](VRInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_vr_delete**
> project_scenario_vr_delete(projectid, scenarioid, vrinstid)



Delete a scenario VR instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 

    try:
        api_instance.project_scenario_vr_delete(projectid, scenarioid, vrinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 

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
**201** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_vr_list**
> list[VRInstance] project_scenario_vr_list(projectid, scenarioid)



Get scenario VRs

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_vr_list(projectid, scenarioid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 

### Return type

[**list[VRInstance]**](VRInstance.md)

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

# **project_scenario_vr_power_list**
> project_scenario_vr_power_list(projectid, scenarioid, vrinstid)



Get project scenario power

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 

    try:
        api_instance.project_scenario_vr_power_list(projectid, scenarioid, vrinstid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_power_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 

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

# **project_scenario_vr_read**
> VRInstance project_scenario_vr_read(projectid, scenarioid, vrinstid)



Get a scenario VR

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_vr_read(projectid, scenarioid, vrinstid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 

### Return type

[**VRInstance**](VRInstance.md)

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

# **project_scenario_vr_supply_config_create**
> SupplyInstConfig project_scenario_vr_supply_config_create(projectid, scenarioid, vrinstid, supplyid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 
supplyid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_response = api_instance.project_scenario_vr_supply_config_create(projectid, scenarioid, vrinstid, supplyid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_supply_config_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_vr_supply_config_delete**
> project_scenario_vr_supply_config_delete(projectid, scenarioid, vrinstid, supplyid, configid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_instance.project_scenario_vr_supply_config_delete(projectid, scenarioid, vrinstid, supplyid, configid, data)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_supply_config_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

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
**200** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_scenario_vr_supply_config_list**
> list[SupplyInstConfig] project_scenario_vr_supply_config_list(projectid, scenarioid, vrinstid, supplyid)



Get scenario design supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 
supplyid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_vr_supply_config_list(projectid, scenarioid, vrinstid, supplyid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_supply_config_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 
 **supplyid** | **int**|  | 

### Return type

[**list[SupplyInstConfig]**](SupplyInstConfig.md)

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

# **project_scenario_vr_supply_config_read**
> SupplyInstConfig project_scenario_vr_supply_config_read(projectid, scenarioid, vrinstid, supplyid, configid)



Get scenario design supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 

    try:
        api_response = api_instance.project_scenario_vr_supply_config_read(projectid, scenarioid, vrinstid, supplyid, configid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_supply_config_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

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

# **project_scenario_vr_supply_config_update**
> SupplyInstConfig project_scenario_vr_supply_config_update(projectid, scenarioid, vrinstid, supplyid, configid, data)



Create scenario supply data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 
supplyid = 56 # int | 
configid = 56 # int | 
data = powermeter_api.SupplyInstConfig() # SupplyInstConfig | 

    try:
        api_response = api_instance.project_scenario_vr_supply_config_update(projectid, scenarioid, vrinstid, supplyid, configid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_supply_config_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 
 **supplyid** | **int**|  | 
 **configid** | **int**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

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

# **project_scenario_vr_update**
> VRInstance project_scenario_vr_update(projectid, scenarioid, vrinstid, data)



Update a scenario VR instance

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
scenarioid = 56 # int | 
vrinstid = 56 # int | 
data = powermeter_api.VRInstance() # VRInstance | 

    try:
        api_response = api_instance.project_scenario_vr_update(projectid, scenarioid, vrinstid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_scenario_vr_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **scenarioid** | **int**|  | 
 **vrinstid** | **int**|  | 
 **data** | [**VRInstance**](VRInstance.md)|  | 

### Return type

[**VRInstance**](VRInstance.md)

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

# **project_simulation_clone_create**
> project_simulation_clone_create(projectid, simid)



Clone a simulation

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
simid = 56 # int | 

    try:
        api_instance.project_simulation_clone_create(projectid, simid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_simulation_clone_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **simid** | **int**|  | 

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
**202** | Accepted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_simulation_create**
> list[SimMaster] project_simulation_create(projectid, data)



Create a new simulation

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
data = powermeter_api.SimMaster() # SimMaster | 

    try:
        api_response = api_instance.project_simulation_create(projectid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_simulation_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **data** | [**SimMaster**](SimMaster.md)|  | 

### Return type

[**list[SimMaster]**](SimMaster.md)

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

# **project_simulation_delete**
> project_simulation_delete(projectid, simid)



Delete a simulation

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
simid = 56 # int | 

    try:
        api_instance.project_simulation_delete(projectid, simid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_simulation_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **simid** | **int**|  | 

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

# **project_simulation_list**
> list[SimMaster] project_simulation_list(projectid)



Get list of simulations

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_response = api_instance.project_simulation_list(projectid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_simulation_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

### Return type

[**list[SimMaster]**](SimMaster.md)

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

# **project_simulation_read**
> list[SimMaster] project_simulation_read(projectid, simid)



Get list of simulations

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
simid = 56 # int | 

    try:
        api_response = api_instance.project_simulation_read(projectid, simid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_simulation_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **simid** | **int**|  | 

### Return type

[**list[SimMaster]**](SimMaster.md)

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

# **project_simulation_update**
> SimMaster project_simulation_update(projectid, simid, data)



Update a simulation

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
simid = 56 # int | 
data = powermeter_api.SimMaster() # SimMaster | 

    try:
        api_response = api_instance.project_simulation_update(projectid, simid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_simulation_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **simid** | **int**|  | 
 **data** | [**SimMaster**](SimMaster.md)|  | 

### Return type

[**SimMaster**](SimMaster.md)

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

# **project_simulation_update_list**
> UpdateData project_simulation_update_list(projectid, simid)



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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
simid = 56 # int | 

    try:
        api_response = api_instance.project_simulation_update_list(projectid, simid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_simulation_update_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **simid** | **int**|  | 

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

# **project_update**
> Project project_update(projectid, data)



Update a project

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
data = powermeter_api.Project() # Project | 

    try:
        api_response = api_instance.project_update(projectid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **data** | [**Project**](Project.md)|  | 

### Return type

[**Project**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_update_times**
> UpdateData project_update_times(projectid)



Returns an array of {current, last update} times for current project

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_response = api_instance.project_update_times(projectid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_update_times: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

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

# **project_verilog_create**
> project_verilog_create(projectid)



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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 'projectid_example' # str | 

    try:
        api_instance.project_verilog_create(projectid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_verilog_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **str**|  | 

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
**201** |  |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_wire_load_create**
> WLMMaster project_wire_load_create(projectid, data)



Create a contributor devices

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
data = powermeter_api.WLMMaster() # WLMMaster | 

    try:
        api_response = api_instance.project_wire_load_create(projectid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_wire_load_create: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **data** | [**WLMMaster**](WLMMaster.md)|  | 

### Return type

[**WLMMaster**](WLMMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_wire_load_delete**
> project_wire_load_delete(projectid, wlmid)



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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
wlmid = 56 # int | 

    try:
        api_instance.project_wire_load_delete(projectid, wlmid)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_wire_load_delete: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **wlmid** | **int**|  | 

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
**400** | Bad request, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **project_wire_load_list**
> list[WLMMaster] project_wire_load_list(projectid)



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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 

    try:
        api_response = api_instance.project_wire_load_list(projectid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_wire_load_list: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 

### Return type

[**list[WLMMaster]**](WLMMaster.md)

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

# **project_wire_load_read**
> WLMMaster project_wire_load_read(projectid, wlmid)



Get wire load data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
wlmid = 56 # int | 

    try:
        api_response = api_instance.project_wire_load_read(projectid, wlmid)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_wire_load_read: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **wlmid** | **int**|  | 

### Return type

[**WLMMaster**](WLMMaster.md)

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

# **project_wire_load_update**
> WLMMaster project_wire_load_update(projectid, wlmid, data)



Update wireload data

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
    api_instance = powermeter_api.ProjectApi(api_client)
    projectid = 56 # int | 
wlmid = 56 # int | 
data = powermeter_api.WLMMaster() # WLMMaster | 

    try:
        api_response = api_instance.project_wire_load_update(projectid, wlmid, data)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->project_wire_load_update: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **int**|  | 
 **wlmid** | **int**|  | 
 **data** | [**WLMMaster**](WLMMaster.md)|  | 

### Return type

[**WLMMaster**](WLMMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **projects_update_times**
> UpdateData projects_update_times()



Returns an array of {current, last update} times for all projects

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
    api_instance = powermeter_api.ProjectApi(api_client)
    
    try:
        api_response = api_instance.projects_update_times()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling ProjectApi->projects_update_times: %s\n" % e)
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

