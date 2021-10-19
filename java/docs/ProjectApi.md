# ProjectApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**projectAccessCreate**](ProjectApi.md#projectAccessCreate) | **POST** /project/{projectid}/access/ | 
[**projectClone**](ProjectApi.md#projectClone) | **POST** /project/{projectid}/clone/ | 
[**projectContribDeviceComputeList**](ProjectApi.md#projectContribDeviceComputeList) | **GET** /project/{projectid}/contrib_device/{deviceid}/compute/ | 
[**projectContribDeviceCreate**](ProjectApi.md#projectContribDeviceCreate) | **POST** /project/{projectid}/contrib_device/ | 
[**projectContribDeviceDelete**](ProjectApi.md#projectContribDeviceDelete) | **DELETE** /project/{projectid}/contrib_device/{deviceid}/ | 
[**projectContribDeviceList**](ProjectApi.md#projectContribDeviceList) | **GET** /project/{projectid}/contrib_device/ | 
[**projectContribDeviceRead**](ProjectApi.md#projectContribDeviceRead) | **GET** /project/{projectid}/contrib_device/{deviceid}/ | 
[**projectContribDeviceUpdate**](ProjectApi.md#projectContribDeviceUpdate) | **PUT** /project/{projectid}/contrib_device/{deviceid}/ | 
[**projectCreate**](ProjectApi.md#projectCreate) | **POST** /project/ | 
[**projectDelete**](ProjectApi.md#projectDelete) | **DELETE** /project/{projectid}/ | 
[**projectDesignAccessCreate**](ProjectApi.md#projectDesignAccessCreate) | **POST** /project/{projectid}/design/{masterdesignid}/access/ | 
[**projectDesignClone**](ProjectApi.md#projectDesignClone) | **POST** /project/{projectid}/design/{masterdesignid}/clone/ | 
[**projectDesignCreate**](ProjectApi.md#projectDesignCreate) | **POST** /project/{projectid}/design/ | 
[**projectDesignDelete**](ProjectApi.md#projectDesignDelete) | **DELETE** /project/{projectid}/design/{masterdesignid}/ | 
[**projectDesignInstantiableList**](ProjectApi.md#projectDesignInstantiableList) | **GET** /project/{projectid}/design/instantiable/ | 
[**projectDesignList**](ProjectApi.md#projectDesignList) | **GET** /project/{projectid}/design/ | 
[**projectDesignRead**](ProjectApi.md#projectDesignRead) | **GET** /project/{projectid}/design/{masterdesignid}/ | 
[**projectDesignUpdate**](ProjectApi.md#projectDesignUpdate) | **PUT** /project/{projectid}/design/{masterdesignid}/ | 
[**projectDesignVersionsList**](ProjectApi.md#projectDesignVersionsList) | **GET** /project/{projectid}/design/{masterdesignid}/versions/ | 
[**projectList**](ProjectApi.md#projectList) | **GET** /project/ | 
[**projectPermissionsList**](ProjectApi.md#projectPermissionsList) | **GET** /project/{projectid}/permissions/ | 
[**projectPermissionsUpdate**](ProjectApi.md#projectPermissionsUpdate) | **PUT** /project/{projectid}/permissions/ | 
[**projectRead**](ProjectApi.md#projectRead) | **GET** /project/{projectid}/ | 
[**projectReferenceCreate**](ProjectApi.md#projectReferenceCreate) | **POST** /project/{projectid}/reference/ | 
[**projectReferenceDelete**](ProjectApi.md#projectReferenceDelete) | **DELETE** /project/{projectid}/reference/{refid}/ | 
[**projectReferenceList**](ProjectApi.md#projectReferenceList) | **GET** /project/{projectid}/reference/ | 
[**projectReferenceRead**](ProjectApi.md#projectReferenceRead) | **GET** /project/{projectid}/reference/{refid}/ | 
[**projectReferenceableList**](ProjectApi.md#projectReferenceableList) | **GET** /project/{projectid}/referenceable/ | 
[**projectScenarioAccessCreate**](ProjectApi.md#projectScenarioAccessCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/access/ | 
[**projectScenarioCommitCreate**](ProjectApi.md#projectScenarioCommitCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/commit/ | 
[**projectScenarioDelete**](ProjectApi.md#projectScenarioDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/ | 
[**projectScenarioDesignCreate**](ProjectApi.md#projectScenarioDesignCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/design/ | 
[**projectScenarioDesignDelete**](ProjectApi.md#projectScenarioDesignDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/ | 
[**projectScenarioDesignList**](ProjectApi.md#projectScenarioDesignList) | **GET** /project/{projectid}/scenario/{scenarioid}/design/ | 
[**projectScenarioDesignParamConfigCreate**](ProjectApi.md#projectScenarioDesignParamConfigCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/ | 
[**projectScenarioDesignParamConfigDelete**](ProjectApi.md#projectScenarioDesignParamConfigDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/{configid}/ | 
[**projectScenarioDesignParamConfigList**](ProjectApi.md#projectScenarioDesignParamConfigList) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/ | 
[**projectScenarioDesignParamConfigRead**](ProjectApi.md#projectScenarioDesignParamConfigRead) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/{configid}/ | 
[**projectScenarioDesignParamConfigUpdate**](ProjectApi.md#projectScenarioDesignParamConfigUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/config/{configid}/ | 
[**projectScenarioDesignParamCreate**](ProjectApi.md#projectScenarioDesignParamCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/ | 
[**projectScenarioDesignParamList**](ProjectApi.md#projectScenarioDesignParamList) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/ | 
[**projectScenarioDesignParamRead**](ProjectApi.md#projectScenarioDesignParamRead) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/ | 
[**projectScenarioDesignParamUpdate**](ProjectApi.md#projectScenarioDesignParamUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/param/{paramid}/ | 
[**projectScenarioDesignPowerList**](ProjectApi.md#projectScenarioDesignPowerList) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/power/ | 
[**projectScenarioDesignPowerdistributionList**](ProjectApi.md#projectScenarioDesignPowerdistributionList) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/powerdistribution/ | 
[**projectScenarioDesignRead**](ProjectApi.md#projectScenarioDesignRead) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/ | 
[**projectScenarioDesignSupplyConfigCreate**](ProjectApi.md#projectScenarioDesignSupplyConfigCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/ | 
[**projectScenarioDesignSupplyConfigDelete**](ProjectApi.md#projectScenarioDesignSupplyConfigDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioDesignSupplyConfigList**](ProjectApi.md#projectScenarioDesignSupplyConfigList) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/ | 
[**projectScenarioDesignSupplyConfigRead**](ProjectApi.md#projectScenarioDesignSupplyConfigRead) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioDesignSupplyConfigUpdate**](ProjectApi.md#projectScenarioDesignSupplyConfigUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioDesignSupplyCreate**](ProjectApi.md#projectScenarioDesignSupplyCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/ | 
[**projectScenarioDesignSupplyRead**](ProjectApi.md#projectScenarioDesignSupplyRead) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/supply/{supplyid}/ | 
[**projectScenarioDesignThermalList**](ProjectApi.md#projectScenarioDesignThermalList) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/thermal/ | 
[**projectScenarioDesignUpdate**](ProjectApi.md#projectScenarioDesignUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/ | 
[**projectScenarioDesignUtilizationConfigCreate**](ProjectApi.md#projectScenarioDesignUtilizationConfigCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/ | 
[**projectScenarioDesignUtilizationConfigDelete**](ProjectApi.md#projectScenarioDesignUtilizationConfigDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/{configid}/ | 
[**projectScenarioDesignUtilizationConfigList**](ProjectApi.md#projectScenarioDesignUtilizationConfigList) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/ | 
[**projectScenarioDesignUtilizationConfigRead**](ProjectApi.md#projectScenarioDesignUtilizationConfigRead) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/{configid}/ | 
[**projectScenarioDesignUtilizationConfigUpdate**](ProjectApi.md#projectScenarioDesignUtilizationConfigUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/config/{configid}/ | 
[**projectScenarioDesignUtilizationCreate**](ProjectApi.md#projectScenarioDesignUtilizationCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/ | 
[**projectScenarioDesignUtilizationList**](ProjectApi.md#projectScenarioDesignUtilizationList) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/ | 
[**projectScenarioDesignUtilizationRead**](ProjectApi.md#projectScenarioDesignUtilizationRead) | **GET** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/ | 
[**projectScenarioDesignUtilizationUpdate**](ProjectApi.md#projectScenarioDesignUtilizationUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/design/{designinstid}/utilization/{modeid}/ | 
[**projectScenarioHierarchyDesignSupplyRead**](ProjectApi.md#projectScenarioHierarchyDesignSupplyRead) | **GET** /project/{projectid}/scenario/{scenarioid}/hierarchy/design/{designinstid}/supply/{supplyinstid}/ | 
[**projectScenarioHierarchyDesignSupplyUpdate**](ProjectApi.md#projectScenarioHierarchyDesignSupplyUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/hierarchy/design/{designinstid}/supply/{supplyinstid}/ | 
[**projectScenarioHierarchyList**](ProjectApi.md#projectScenarioHierarchyList) | **GET** /project/{projectid}/scenario/{scenarioid}/hierarchy/ | 
[**projectScenarioHierarchyPackageSupplyRead**](ProjectApi.md#projectScenarioHierarchyPackageSupplyRead) | **GET** /project/{projectid}/scenario/{scenarioid}/hierarchy/package/{packinstid}/supply/{supplyinstid}/ | 
[**projectScenarioHierarchyPackageSupplyUpdate**](ProjectApi.md#projectScenarioHierarchyPackageSupplyUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/hierarchy/package/{packinstid}/supply/{supplyinstid}/ | 
[**projectScenarioHierarchyVrSupplyRead**](ProjectApi.md#projectScenarioHierarchyVrSupplyRead) | **GET** /project/{projectid}/scenario/{scenarioid}/hierarchy/vr/{vrinstid}/supply/{supplyinstid}/ | 
[**projectScenarioHierarchyVrSupplyUpdate**](ProjectApi.md#projectScenarioHierarchyVrSupplyUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/hierarchy/vr/{vrinstid}/supply/{supplyinstid}/ | 
[**projectScenarioLibraryClone**](ProjectApi.md#projectScenarioLibraryClone) | **POST** /project/{projectid}/scenario/library/{scenarioid}/clone/ | 
[**projectScenarioLibraryCreate**](ProjectApi.md#projectScenarioLibraryCreate) | **POST** /project/{projectid}/scenario/library/ | 
[**projectScenarioLibraryDelete**](ProjectApi.md#projectScenarioLibraryDelete) | **DELETE** /project/{projectid}/scenario/library/{scenarioid}/ | 
[**projectScenarioLibraryList**](ProjectApi.md#projectScenarioLibraryList) | **GET** /project/{projectid}/scenario/library/ | 
[**projectScenarioLibraryRead**](ProjectApi.md#projectScenarioLibraryRead) | **GET** /project/{projectid}/scenario/library/{scenarioid}/ | 
[**projectScenarioLibraryUpdate**](ProjectApi.md#projectScenarioLibraryUpdate) | **PUT** /project/{projectid}/scenario/library/{scenarioid}/ | 
[**projectScenarioLibraryVersionList**](ProjectApi.md#projectScenarioLibraryVersionList) | **GET** /project/{projectid}/scenario/library/{scenarioid}/version/ | 
[**projectScenarioPackageCreate**](ProjectApi.md#projectScenarioPackageCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/package/ | 
[**projectScenarioPackageDelete**](ProjectApi.md#projectScenarioPackageDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/ | 
[**projectScenarioPackageList**](ProjectApi.md#projectScenarioPackageList) | **GET** /project/{projectid}/scenario/{scenarioid}/package/ | 
[**projectScenarioPackagePowerList**](ProjectApi.md#projectScenarioPackagePowerList) | **GET** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/power/ | 
[**projectScenarioPackageRead**](ProjectApi.md#projectScenarioPackageRead) | **GET** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/ | 
[**projectScenarioPackageSupplyConfigCreate**](ProjectApi.md#projectScenarioPackageSupplyConfigCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/ | 
[**projectScenarioPackageSupplyConfigDelete**](ProjectApi.md#projectScenarioPackageSupplyConfigDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioPackageSupplyConfigList**](ProjectApi.md#projectScenarioPackageSupplyConfigList) | **GET** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/ | 
[**projectScenarioPackageSupplyConfigRead**](ProjectApi.md#projectScenarioPackageSupplyConfigRead) | **GET** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioPackageSupplyConfigUpdate**](ProjectApi.md#projectScenarioPackageSupplyConfigUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioPackageUpdate**](ProjectApi.md#projectScenarioPackageUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/package/{packinstid}/ | 
[**projectScenarioPcbCreate**](ProjectApi.md#projectScenarioPcbCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/pcb/ | 
[**projectScenarioPcbDelete**](ProjectApi.md#projectScenarioPcbDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/ | 
[**projectScenarioPcbList**](ProjectApi.md#projectScenarioPcbList) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/ | 
[**projectScenarioPcbPowerList**](ProjectApi.md#projectScenarioPcbPowerList) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/power/ | 
[**projectScenarioPcbRead**](ProjectApi.md#projectScenarioPcbRead) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/ | 
[**projectScenarioPcbSupplyConfigCreate**](ProjectApi.md#projectScenarioPcbSupplyConfigCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/ | 
[**projectScenarioPcbSupplyConfigDelete**](ProjectApi.md#projectScenarioPcbSupplyConfigDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioPcbSupplyConfigList**](ProjectApi.md#projectScenarioPcbSupplyConfigList) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/ | 
[**projectScenarioPcbSupplyConfigRead**](ProjectApi.md#projectScenarioPcbSupplyConfigRead) | **GET** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioPcbSupplyConfigUpdate**](ProjectApi.md#projectScenarioPcbSupplyConfigUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioPcbUpdate**](ProjectApi.md#projectScenarioPcbUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/pcb/{pcbinstid}/ | 
[**projectScenarioPowerList**](ProjectApi.md#projectScenarioPowerList) | **GET** /project/{projectid}/scenario/{scenarioid}/power/ | 
[**projectScenarioPowerdistributionDownloadRead**](ProjectApi.md#projectScenarioPowerdistributionDownloadRead) | **GET** /project/{projectid}/scenario/{scenarioid}/powerdistribution/download/{resolution}/ | 
[**projectScenarioRead**](ProjectApi.md#projectScenarioRead) | **GET** /project/{projectid}/scenario/{scenarioid}/ | 
[**projectScenarioTrendList**](ProjectApi.md#projectScenarioTrendList) | **GET** /project/{projectid}/scenario/{scenarioid}/trend/ | 
[**projectScenarioUpdate**](ProjectApi.md#projectScenarioUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/ | 
[**projectScenarioUpdateList**](ProjectApi.md#projectScenarioUpdateList) | **GET** /project/{projectid}/scenario/{scenarioid}/update/ | 
[**projectScenarioVersionList**](ProjectApi.md#projectScenarioVersionList) | **GET** /project/{projectid}/scenario/{scenarioid}/version/ | 
[**projectScenarioVrCreate**](ProjectApi.md#projectScenarioVrCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/vr/ | 
[**projectScenarioVrDelete**](ProjectApi.md#projectScenarioVrDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/ | 
[**projectScenarioVrList**](ProjectApi.md#projectScenarioVrList) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/ | 
[**projectScenarioVrPowerList**](ProjectApi.md#projectScenarioVrPowerList) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/power/ | 
[**projectScenarioVrRead**](ProjectApi.md#projectScenarioVrRead) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/ | 
[**projectScenarioVrSupplyConfigCreate**](ProjectApi.md#projectScenarioVrSupplyConfigCreate) | **POST** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/ | 
[**projectScenarioVrSupplyConfigDelete**](ProjectApi.md#projectScenarioVrSupplyConfigDelete) | **DELETE** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioVrSupplyConfigList**](ProjectApi.md#projectScenarioVrSupplyConfigList) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/ | 
[**projectScenarioVrSupplyConfigRead**](ProjectApi.md#projectScenarioVrSupplyConfigRead) | **GET** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioVrSupplyConfigUpdate**](ProjectApi.md#projectScenarioVrSupplyConfigUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/supply/{supplyid}/config/{configid}/ | 
[**projectScenarioVrUpdate**](ProjectApi.md#projectScenarioVrUpdate) | **PUT** /project/{projectid}/scenario/{scenarioid}/vr/{vrinstid}/ | 
[**projectSimulationCloneCreate**](ProjectApi.md#projectSimulationCloneCreate) | **POST** /project/{projectid}/simulation/{simid}/clone/ | 
[**projectSimulationCreate**](ProjectApi.md#projectSimulationCreate) | **POST** /project/{projectid}/simulation/ | 
[**projectSimulationDelete**](ProjectApi.md#projectSimulationDelete) | **DELETE** /project/{projectid}/simulation/{simid}/ | 
[**projectSimulationList**](ProjectApi.md#projectSimulationList) | **GET** /project/{projectid}/simulation/ | 
[**projectSimulationRead**](ProjectApi.md#projectSimulationRead) | **GET** /project/{projectid}/simulation/{simid}/ | 
[**projectSimulationUpdate**](ProjectApi.md#projectSimulationUpdate) | **PUT** /project/{projectid}/simulation/{simid}/ | 
[**projectSimulationUpdateList**](ProjectApi.md#projectSimulationUpdateList) | **GET** /project/{projectid}/simulation/{simid}/update/ | 
[**projectUpdate**](ProjectApi.md#projectUpdate) | **PUT** /project/{projectid}/ | 
[**projectUpdateTimes**](ProjectApi.md#projectUpdateTimes) | **GET** /project/{projectid}/update/ | 
[**projectVerilogCreate**](ProjectApi.md#projectVerilogCreate) | **POST** /project/{projectid}/verilog/ | 
[**projectWireLoadCreate**](ProjectApi.md#projectWireLoadCreate) | **POST** /project/{projectid}/wire_load/ | 
[**projectWireLoadDelete**](ProjectApi.md#projectWireLoadDelete) | **DELETE** /project/{projectid}/wire_load/{wlmid}/ | 
[**projectWireLoadList**](ProjectApi.md#projectWireLoadList) | **GET** /project/{projectid}/wire_load/ | 
[**projectWireLoadRead**](ProjectApi.md#projectWireLoadRead) | **GET** /project/{projectid}/wire_load/{wlmid}/ | 
[**projectWireLoadUpdate**](ProjectApi.md#projectWireLoadUpdate) | **PUT** /project/{projectid}/wire_load/{wlmid}/ | 
[**projectsUpdateTimes**](ProjectApi.md#projectsUpdateTimes) | **GET** /project/update/ | 


<a name="projectAccessCreate"></a>
# **projectAccessCreate**
> projectAccessCreate(projectid)



Update project access

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      apiInstance.projectAccessCreate(projectid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectAccessCreate");
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
 **projectid** | **Integer**|  |

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

<a name="projectClone"></a>
# **projectClone**
> projectClone(projectid)



Create a copy of project

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      apiInstance.projectClone(projectid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectClone");
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
 **projectid** | **Integer**|  |

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
**202** | Accepted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectContribDeviceComputeList"></a>
# **projectContribDeviceComputeList**
> SwaggerContrib projectContribDeviceComputeList(projectid, deviceid, p, v, t)



Compute a contributor device

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer deviceid = 56; // Integer | 
    BigDecimal p = new BigDecimal(); // BigDecimal | 
    BigDecimal v = new BigDecimal(); // BigDecimal | 
    Integer t = 56; // Integer | 
    try {
      SwaggerContrib result = apiInstance.projectContribDeviceComputeList(projectid, deviceid, p, v, t);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectContribDeviceComputeList");
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
 **projectid** | **Integer**|  |
 **deviceid** | **Integer**|  |
 **p** | **BigDecimal**|  | [optional]
 **v** | **BigDecimal**|  | [optional]
 **t** | **Integer**|  | [optional]

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

<a name="projectContribDeviceCreate"></a>
# **projectContribDeviceCreate**
> SwaggerContrib projectContribDeviceCreate(projectid, data)



Create a contributor devices

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    SwaggerContrib data = new SwaggerContrib(); // SwaggerContrib | 
    try {
      SwaggerContrib result = apiInstance.projectContribDeviceCreate(projectid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectContribDeviceCreate");
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
 **projectid** | **Integer**|  |
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

<a name="projectContribDeviceDelete"></a>
# **projectContribDeviceDelete**
> projectContribDeviceDelete(projectid, deviceid)



Delete a contributor devices

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer deviceid = 56; // Integer | 
    try {
      apiInstance.projectContribDeviceDelete(projectid, deviceid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectContribDeviceDelete");
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
 **projectid** | **Integer**|  |
 **deviceid** | **Integer**|  |

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

<a name="projectContribDeviceList"></a>
# **projectContribDeviceList**
> PagedContribDevice projectContribDeviceList(projectid, page, number)



Get list of contributor devices

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer page = 56; // Integer | 
    Integer number = 56; // Integer | 
    try {
      PagedContribDevice result = apiInstance.projectContribDeviceList(projectid, page, number);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectContribDeviceList");
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
 **projectid** | **Integer**|  |
 **page** | **Integer**|  | [optional]
 **number** | **Integer**|  | [optional]

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

<a name="projectContribDeviceRead"></a>
# **projectContribDeviceRead**
> SwaggerContrib projectContribDeviceRead(projectid, deviceid)



Get a contributor device

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer deviceid = 56; // Integer | 
    try {
      SwaggerContrib result = apiInstance.projectContribDeviceRead(projectid, deviceid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectContribDeviceRead");
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
 **projectid** | **Integer**|  |
 **deviceid** | **Integer**|  |

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

<a name="projectContribDeviceUpdate"></a>
# **projectContribDeviceUpdate**
> SwaggerContrib projectContribDeviceUpdate(projectid, deviceid, data)



Update a contributor devices

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer deviceid = 56; // Integer | 
    SwaggerContrib data = new SwaggerContrib(); // SwaggerContrib | 
    try {
      SwaggerContrib result = apiInstance.projectContribDeviceUpdate(projectid, deviceid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectContribDeviceUpdate");
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
 **projectid** | **Integer**|  |
 **deviceid** | **Integer**|  |
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

<a name="projectCreate"></a>
# **projectCreate**
> Project projectCreate(data)



Create a project

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Project data = new Project(); // Project | 
    try {
      Project result = apiInstance.projectCreate(data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectCreate");
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

<a name="projectDelete"></a>
# **projectDelete**
> projectDelete(projectid)



Delete a project

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      apiInstance.projectDelete(projectid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDelete");
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
 **projectid** | **Integer**|  |

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
**200** | Project deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectDesignAccessCreate"></a>
# **projectDesignAccessCreate**
> projectDesignAccessCreate(projectid, masterdesignid)



Update design access

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer masterdesignid = 56; // Integer | 
    try {
      apiInstance.projectDesignAccessCreate(projectid, masterdesignid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDesignAccessCreate");
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
 **projectid** | **Integer**|  |
 **masterdesignid** | **Integer**|  |

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

<a name="projectDesignClone"></a>
# **projectDesignClone**
> DesignMaster projectDesignClone(projectid, masterdesignid)



Create a copy of design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer masterdesignid = 56; // Integer | 
    try {
      DesignMaster result = apiInstance.projectDesignClone(projectid, masterdesignid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDesignClone");
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
 **projectid** | **Integer**|  |
 **masterdesignid** | **Integer**|  |

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

<a name="projectDesignCreate"></a>
# **projectDesignCreate**
> DesignMaster projectDesignCreate(projectid, data)



Create a design, return master design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Design data = new Design(); // Design | 
    try {
      DesignMaster result = apiInstance.projectDesignCreate(projectid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDesignCreate");
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
 **projectid** | **Integer**|  |
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

<a name="projectDesignDelete"></a>
# **projectDesignDelete**
> projectDesignDelete(projectid, masterdesignid)



Delete a master design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer masterdesignid = 56; // Integer | 
    try {
      apiInstance.projectDesignDelete(projectid, masterdesignid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDesignDelete");
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
 **projectid** | **Integer**|  |
 **masterdesignid** | **Integer**|  |

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
**200** | Delete |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectDesignInstantiableList"></a>
# **projectDesignInstantiableList**
> List&lt;DesignMaster&gt; projectDesignInstantiableList(projectid)



Get list of designs that can be instantiated in the given design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      List<DesignMaster> result = apiInstance.projectDesignInstantiableList(projectid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDesignInstantiableList");
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
 **projectid** | **Integer**|  |

### Return type

[**List&lt;DesignMaster&gt;**](DesignMaster.md)

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

<a name="projectDesignList"></a>
# **projectDesignList**
> List&lt;DesignMaster&gt; projectDesignList(projectid, name)



Get list of master designs in projects

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    String name = "name_example"; // String | Design name
    try {
      List<DesignMaster> result = apiInstance.projectDesignList(projectid, name);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDesignList");
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
 **projectid** | **Integer**|  |
 **name** | **String**| Design name | [optional]

### Return type

[**List&lt;DesignMaster&gt;**](DesignMaster.md)

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

<a name="projectDesignRead"></a>
# **projectDesignRead**
> DesignMaster projectDesignRead(projectid, masterdesignid)



Get a master design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer masterdesignid = 56; // Integer | 
    try {
      DesignMaster result = apiInstance.projectDesignRead(projectid, masterdesignid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDesignRead");
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
 **projectid** | **Integer**|  |
 **masterdesignid** | **Integer**|  |

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

<a name="projectDesignUpdate"></a>
# **projectDesignUpdate**
> DesignMaster projectDesignUpdate(projectid, masterdesignid, data)



Update a design master

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer masterdesignid = 56; // Integer | 
    DesignMaster data = new DesignMaster(); // DesignMaster | 
    try {
      DesignMaster result = apiInstance.projectDesignUpdate(projectid, masterdesignid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDesignUpdate");
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
 **projectid** | **Integer**|  |
 **masterdesignid** | **Integer**|  |
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

<a name="projectDesignVersionsList"></a>
# **projectDesignVersionsList**
> List&lt;DesignVersion&gt; projectDesignVersionsList(projectid, masterdesignid)



Get list of design versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer masterdesignid = 56; // Integer | 
    try {
      List<DesignVersion> result = apiInstance.projectDesignVersionsList(projectid, masterdesignid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectDesignVersionsList");
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
 **projectid** | **Integer**|  |
 **masterdesignid** | **Integer**|  |

### Return type

[**List&lt;DesignVersion&gt;**](DesignVersion.md)

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

<a name="projectList"></a>
# **projectList**
> List&lt;Project&gt; projectList(name)



Get list of projects

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    String name = "name_example"; // String | Project name
    try {
      List<Project> result = apiInstance.projectList(name);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectList");
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
 **name** | **String**| Project name | [optional]

### Return type

[**List&lt;Project&gt;**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

<a name="projectPermissionsList"></a>
# **projectPermissionsList**
> projectPermissionsList(projectid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      apiInstance.projectPermissionsList(projectid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectPermissionsList");
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
 **projectid** | **Integer**|  |

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

<a name="projectPermissionsUpdate"></a>
# **projectPermissionsUpdate**
> projectPermissionsUpdate(projectid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      apiInstance.projectPermissionsUpdate(projectid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectPermissionsUpdate");
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
 **projectid** | **Integer**|  |

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

<a name="projectRead"></a>
# **projectRead**
> Project projectRead(projectid)



Get a project

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      Project result = apiInstance.projectRead(projectid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectRead");
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
 **projectid** | **Integer**|  |

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

<a name="projectReferenceCreate"></a>
# **projectReferenceCreate**
> Project projectReferenceCreate(projectid, data)



Add a reference

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Project data = new Project(); // Project | 
    try {
      Project result = apiInstance.projectReferenceCreate(projectid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectReferenceCreate");
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
 **projectid** | **Integer**|  |
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

<a name="projectReferenceDelete"></a>
# **projectReferenceDelete**
> projectReferenceDelete(projectid, refid)



Delete a reference

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer refid = 56; // Integer | 
    try {
      apiInstance.projectReferenceDelete(projectid, refid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectReferenceDelete");
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
 **projectid** | **Integer**|  |
 **refid** | **Integer**|  |

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

<a name="projectReferenceList"></a>
# **projectReferenceList**
> List&lt;Project&gt; projectReferenceList(projectid)



Get list of refernced projects

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      List<Project> result = apiInstance.projectReferenceList(projectid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectReferenceList");
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
 **projectid** | **Integer**|  |

### Return type

[**List&lt;Project&gt;**](Project.md)

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

<a name="projectReferenceRead"></a>
# **projectReferenceRead**
> Project projectReferenceRead(projectid, refid)



Get a reference

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer refid = 56; // Integer | 
    try {
      Project result = apiInstance.projectReferenceRead(projectid, refid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectReferenceRead");
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
 **projectid** | **Integer**|  |
 **refid** | **Integer**|  |

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

<a name="projectReferenceableList"></a>
# **projectReferenceableList**
> List&lt;Project&gt; projectReferenceableList(projectid)



Get list of projects referenceable by this project

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      List<Project> result = apiInstance.projectReferenceableList(projectid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectReferenceableList");
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
 **projectid** | **Integer**|  |

### Return type

[**List&lt;Project&gt;**](Project.md)

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

<a name="projectScenarioAccessCreate"></a>
# **projectScenarioAccessCreate**
> projectScenarioAccessCreate(projectid, scenarioid)



Update project datasheet access

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      apiInstance.projectScenarioAccessCreate(projectid, scenarioid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioAccessCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

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

<a name="projectScenarioCommitCreate"></a>
# **projectScenarioCommitCreate**
> ScenarioVersion projectScenarioCommitCreate(projectid, scenarioid, data)



Commit a version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    ScenarioVersion data = new ScenarioVersion(); // ScenarioVersion | 
    try {
      ScenarioVersion result = apiInstance.projectScenarioCommitCreate(projectid, scenarioid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioCommitCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
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

<a name="projectScenarioDelete"></a>
# **projectScenarioDelete**
> projectScenarioDelete(projectid, scenarioid)



Delete a scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      apiInstance.projectScenarioDelete(projectid, scenarioid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

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

<a name="projectScenarioDesignCreate"></a>
# **projectScenarioDesignCreate**
> DesignInstance projectScenarioDesignCreate(projectid, scenarioid, data)



Create scenario PC instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    DesignInstance data = new DesignInstance(); // DesignInstance | 
    try {
      DesignInstance result = apiInstance.projectScenarioDesignCreate(projectid, scenarioid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
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

<a name="projectScenarioDesignDelete"></a>
# **projectScenarioDesignDelete**
> projectScenarioDesignDelete(projectid, scenarioid, designinstid)



Delete a scenario Design instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioDesignDelete(projectid, scenarioid, designinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |

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
**201** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectScenarioDesignList"></a>
# **projectScenarioDesignList**
> List&lt;DesignInstance&gt; projectScenarioDesignList(projectid, scenarioid)



Get scenario Designs

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      List<DesignInstance> result = apiInstance.projectScenarioDesignList(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**List&lt;DesignInstance&gt;**](DesignInstance.md)

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

<a name="projectScenarioDesignParamConfigCreate"></a>
# **projectScenarioDesignParamConfigCreate**
> ScenarioParamConfig projectScenarioDesignParamConfigCreate(projectid, scenarioid, designinstid, paramid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    ScenarioParamConfig data = new ScenarioParamConfig(); // ScenarioParamConfig | 
    try {
      ScenarioParamConfig result = apiInstance.projectScenarioDesignParamConfigCreate(projectid, scenarioid, designinstid, paramid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignParamConfigCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **paramid** | **Integer**|  |
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

<a name="projectScenarioDesignParamConfigDelete"></a>
# **projectScenarioDesignParamConfigDelete**
> projectScenarioDesignParamConfigDelete(projectid, scenarioid, designinstid, paramid, configid)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      apiInstance.projectScenarioDesignParamConfigDelete(projectid, scenarioid, designinstid, paramid, configid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignParamConfigDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **paramid** | **Integer**|  |
 **configid** | **Integer**|  |

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

<a name="projectScenarioDesignParamConfigList"></a>
# **projectScenarioDesignParamConfigList**
> List&lt;ScenarioParamConfig&gt; projectScenarioDesignParamConfigList(projectid, scenarioid, designinstid, paramid)



Get scenario design config data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    try {
      List<ScenarioParamConfig> result = apiInstance.projectScenarioDesignParamConfigList(projectid, scenarioid, designinstid, paramid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignParamConfigList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **paramid** | **Integer**|  |

### Return type

[**List&lt;ScenarioParamConfig&gt;**](ScenarioParamConfig.md)

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

<a name="projectScenarioDesignParamConfigRead"></a>
# **projectScenarioDesignParamConfigRead**
> ScenarioParamConfig projectScenarioDesignParamConfigRead(projectid, scenarioid, designinstid, paramid, configid)



Get scenario design config data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      ScenarioParamConfig result = apiInstance.projectScenarioDesignParamConfigRead(projectid, scenarioid, designinstid, paramid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignParamConfigRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **paramid** | **Integer**|  |
 **configid** | **Integer**|  |

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

<a name="projectScenarioDesignParamConfigUpdate"></a>
# **projectScenarioDesignParamConfigUpdate**
> ScenarioParamConfig projectScenarioDesignParamConfigUpdate(projectid, scenarioid, designinstid, paramid, configid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    ScenarioParamConfig data = new ScenarioParamConfig(); // ScenarioParamConfig | 
    try {
      ScenarioParamConfig result = apiInstance.projectScenarioDesignParamConfigUpdate(projectid, scenarioid, designinstid, paramid, configid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignParamConfigUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **paramid** | **Integer**|  |
 **configid** | **Integer**|  |
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

<a name="projectScenarioDesignParamCreate"></a>
# **projectScenarioDesignParamCreate**
> ScenarioParam projectScenarioDesignParamCreate(projectid, scenarioid, designinstid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    ScenarioParam data = new ScenarioParam(); // ScenarioParam | 
    try {
      ScenarioParam result = apiInstance.projectScenarioDesignParamCreate(projectid, scenarioid, designinstid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignParamCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
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

<a name="projectScenarioDesignParamList"></a>
# **projectScenarioDesignParamList**
> List&lt;ScenarioParam&gt; projectScenarioDesignParamList(projectid, scenarioid, designinstid)



Get scenario design config data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    try {
      List<ScenarioParam> result = apiInstance.projectScenarioDesignParamList(projectid, scenarioid, designinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignParamList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |

### Return type

[**List&lt;ScenarioParam&gt;**](ScenarioParam.md)

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

<a name="projectScenarioDesignParamRead"></a>
# **projectScenarioDesignParamRead**
> List&lt;ScenarioParam&gt; projectScenarioDesignParamRead(projectid, scenarioid, designinstid, paramid)



Get datasheet design config data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    try {
      List<ScenarioParam> result = apiInstance.projectScenarioDesignParamRead(projectid, scenarioid, designinstid, paramid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignParamRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **paramid** | **Integer**|  |

### Return type

[**List&lt;ScenarioParam&gt;**](ScenarioParam.md)

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

<a name="projectScenarioDesignParamUpdate"></a>
# **projectScenarioDesignParamUpdate**
> ScenarioParam projectScenarioDesignParamUpdate(projectid, scenarioid, designinstid, paramid, data)



Create datasheet supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    ScenarioParam data = new ScenarioParam(); // ScenarioParam | 
    try {
      ScenarioParam result = apiInstance.projectScenarioDesignParamUpdate(projectid, scenarioid, designinstid, paramid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignParamUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **paramid** | **Integer**|  |
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

<a name="projectScenarioDesignPowerList"></a>
# **projectScenarioDesignPowerList**
> projectScenarioDesignPowerList(projectid, scenarioid, designinstid)



Get project scenario power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioDesignPowerList(projectid, scenarioid, designinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignPowerList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |

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

<a name="projectScenarioDesignPowerdistributionList"></a>
# **projectScenarioDesignPowerdistributionList**
> projectScenarioDesignPowerdistributionList(projectid, scenarioid, designinstid)



Get project scenario power distribution

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioDesignPowerdistributionList(projectid, scenarioid, designinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignPowerdistributionList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |

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

<a name="projectScenarioDesignRead"></a>
# **projectScenarioDesignRead**
> DesignInstance projectScenarioDesignRead(projectid, scenarioid, designinstid)



Get a scenario Design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    try {
      DesignInstance result = apiInstance.projectScenarioDesignRead(projectid, scenarioid, designinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |

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

<a name="projectScenarioDesignSupplyConfigCreate"></a>
# **projectScenarioDesignSupplyConfigCreate**
> SupplyInstConfig projectScenarioDesignSupplyConfigCreate(designinstid, projectid, scenarioid, dsigninstid, supplyid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    String designinstid = "designinstid_example"; // String | 
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer dsigninstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioDesignSupplyConfigCreate(designinstid, projectid, scenarioid, dsigninstid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignSupplyConfigCreate");
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
 **designinstid** | **String**|  |
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **dsigninstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
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

<a name="projectScenarioDesignSupplyConfigDelete"></a>
# **projectScenarioDesignSupplyConfigDelete**
> projectScenarioDesignSupplyConfigDelete(projectid, scenarioid, designinstid, supplyid, configid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      apiInstance.projectScenarioDesignSupplyConfigDelete(projectid, scenarioid, designinstid, supplyid, configid, data);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignSupplyConfigDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  |

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
**200** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectScenarioDesignSupplyConfigList"></a>
# **projectScenarioDesignSupplyConfigList**
> List&lt;SupplyInstConfig&gt; projectScenarioDesignSupplyConfigList(projectid, scenarioid, designinstid, supplyid)



Get scenario design supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      List<SupplyInstConfig> result = apiInstance.projectScenarioDesignSupplyConfigList(projectid, scenarioid, designinstid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignSupplyConfigList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**List&lt;SupplyInstConfig&gt;**](SupplyInstConfig.md)

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

<a name="projectScenarioDesignSupplyConfigRead"></a>
# **projectScenarioDesignSupplyConfigRead**
> SupplyInstConfig projectScenarioDesignSupplyConfigRead(projectid, scenarioid, designinstid, supplyid, configid)



Get scenario design supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioDesignSupplyConfigRead(projectid, scenarioid, designinstid, supplyid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignSupplyConfigRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |

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

<a name="projectScenarioDesignSupplyConfigUpdate"></a>
# **projectScenarioDesignSupplyConfigUpdate**
> SupplyInstConfig projectScenarioDesignSupplyConfigUpdate(projectid, scenarioid, designinstid, supplyid, configid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioDesignSupplyConfigUpdate(projectid, scenarioid, designinstid, supplyid, configid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignSupplyConfigUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |
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

<a name="projectScenarioDesignSupplyCreate"></a>
# **projectScenarioDesignSupplyCreate**
> DesignSupplyInst projectScenarioDesignSupplyCreate(designinstid, projectid, scenarioid, dsigninstid, supplyid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    String designinstid = "designinstid_example"; // String | 
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer dsigninstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    DesignSupplyInst data = new DesignSupplyInst(); // DesignSupplyInst | 
    try {
      DesignSupplyInst result = apiInstance.projectScenarioDesignSupplyCreate(designinstid, projectid, scenarioid, dsigninstid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignSupplyCreate");
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
 **designinstid** | **String**|  |
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **dsigninstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
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

<a name="projectScenarioDesignSupplyRead"></a>
# **projectScenarioDesignSupplyRead**
> List&lt;DesignSupplyInst&gt; projectScenarioDesignSupplyRead(projectid, scenarioid, designinstid, supplyid)



Get scenario design supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      List<DesignSupplyInst> result = apiInstance.projectScenarioDesignSupplyRead(projectid, scenarioid, designinstid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignSupplyRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**List&lt;DesignSupplyInst&gt;**](DesignSupplyInst.md)

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

<a name="projectScenarioDesignThermalList"></a>
# **projectScenarioDesignThermalList**
> projectScenarioDesignThermalList(projectid, scenarioid, designinstid)



Compute project scenario steady state thermal

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioDesignThermalList(projectid, scenarioid, designinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignThermalList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |

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

<a name="projectScenarioDesignUpdate"></a>
# **projectScenarioDesignUpdate**
> DesignInstance projectScenarioDesignUpdate(projectid, scenarioid, designinstid, data)



Update a scenario Design instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    DesignInstance data = new DesignInstance(); // DesignInstance | 
    try {
      DesignInstance result = apiInstance.projectScenarioDesignUpdate(projectid, scenarioid, designinstid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
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

<a name="projectScenarioDesignUtilizationConfigCreate"></a>
# **projectScenarioDesignUtilizationConfigCreate**
> ScenarioModeUtilConfig projectScenarioDesignUtilizationConfigCreate(projectid, scenarioid, designinstid, modeid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    ScenarioModeUtilConfig data = new ScenarioModeUtilConfig(); // ScenarioModeUtilConfig | 
    try {
      ScenarioModeUtilConfig result = apiInstance.projectScenarioDesignUtilizationConfigCreate(projectid, scenarioid, designinstid, modeid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUtilizationConfigCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **modeid** | **Integer**|  |
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

<a name="projectScenarioDesignUtilizationConfigDelete"></a>
# **projectScenarioDesignUtilizationConfigDelete**
> projectScenarioDesignUtilizationConfigDelete(projectid, scenarioid, designinstid, modeid, configid)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      apiInstance.projectScenarioDesignUtilizationConfigDelete(projectid, scenarioid, designinstid, modeid, configid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUtilizationConfigDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **configid** | **Integer**|  |

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

<a name="projectScenarioDesignUtilizationConfigList"></a>
# **projectScenarioDesignUtilizationConfigList**
> List&lt;ScenarioModeUtilConfig&gt; projectScenarioDesignUtilizationConfigList(projectid, scenarioid, designinstid, modeid)



Get scenario design config data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      List<ScenarioModeUtilConfig> result = apiInstance.projectScenarioDesignUtilizationConfigList(projectid, scenarioid, designinstid, modeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUtilizationConfigList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **modeid** | **Integer**|  |

### Return type

[**List&lt;ScenarioModeUtilConfig&gt;**](ScenarioModeUtilConfig.md)

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

<a name="projectScenarioDesignUtilizationConfigRead"></a>
# **projectScenarioDesignUtilizationConfigRead**
> ScenarioModeUtilConfig projectScenarioDesignUtilizationConfigRead(projectid, scenarioid, designinstid, modeid, configid)



Get scenario design config data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      ScenarioModeUtilConfig result = apiInstance.projectScenarioDesignUtilizationConfigRead(projectid, scenarioid, designinstid, modeid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUtilizationConfigRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **configid** | **Integer**|  |

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

<a name="projectScenarioDesignUtilizationConfigUpdate"></a>
# **projectScenarioDesignUtilizationConfigUpdate**
> ScenarioModeUtilConfig projectScenarioDesignUtilizationConfigUpdate(projectid, scenarioid, designinstid, modeid, configid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    ScenarioModeUtilConfig data = new ScenarioModeUtilConfig(); // ScenarioModeUtilConfig | 
    try {
      ScenarioModeUtilConfig result = apiInstance.projectScenarioDesignUtilizationConfigUpdate(projectid, scenarioid, designinstid, modeid, configid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUtilizationConfigUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **configid** | **Integer**|  |
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

<a name="projectScenarioDesignUtilizationCreate"></a>
# **projectScenarioDesignUtilizationCreate**
> ScenarioModeUtil projectScenarioDesignUtilizationCreate(projectid, scenarioid, designinstid, modeid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    ScenarioModeUtil data = new ScenarioModeUtil(); // ScenarioModeUtil | 
    try {
      ScenarioModeUtil result = apiInstance.projectScenarioDesignUtilizationCreate(projectid, scenarioid, designinstid, modeid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUtilizationCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **modeid** | **Integer**|  |
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

<a name="projectScenarioDesignUtilizationList"></a>
# **projectScenarioDesignUtilizationList**
> List&lt;ScenarioModeUtil&gt; projectScenarioDesignUtilizationList(projectid, scenarioid, designinstid)



Get scenario design config data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    try {
      List<ScenarioModeUtil> result = apiInstance.projectScenarioDesignUtilizationList(projectid, scenarioid, designinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUtilizationList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |

### Return type

[**List&lt;ScenarioModeUtil&gt;**](ScenarioModeUtil.md)

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

<a name="projectScenarioDesignUtilizationRead"></a>
# **projectScenarioDesignUtilizationRead**
> ScenarioModeUtil projectScenarioDesignUtilizationRead(projectid, scenarioid, designinstid, modeid)



Get scenario design config data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      ScenarioModeUtil result = apiInstance.projectScenarioDesignUtilizationRead(projectid, scenarioid, designinstid, modeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUtilizationRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **modeid** | **Integer**|  |

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

<a name="projectScenarioDesignUtilizationUpdate"></a>
# **projectScenarioDesignUtilizationUpdate**
> ScenarioModeUtil projectScenarioDesignUtilizationUpdate(projectid, scenarioid, designinstid, modeid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    ScenarioModeUtil data = new ScenarioModeUtil(); // ScenarioModeUtil | 
    try {
      ScenarioModeUtil result = apiInstance.projectScenarioDesignUtilizationUpdate(projectid, scenarioid, designinstid, modeid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioDesignUtilizationUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **modeid** | **Integer**|  |
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

<a name="projectScenarioHierarchyDesignSupplyRead"></a>
# **projectScenarioHierarchyDesignSupplyRead**
> DesignSupplyInst projectScenarioHierarchyDesignSupplyRead(projectid, scenarioid, designinstid, supplyinstid)



Get scenario PCB package supply instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer supplyinstid = 56; // Integer | 
    try {
      DesignSupplyInst result = apiInstance.projectScenarioHierarchyDesignSupplyRead(projectid, scenarioid, designinstid, supplyinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioHierarchyDesignSupplyRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **supplyinstid** | **Integer**|  |

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

<a name="projectScenarioHierarchyDesignSupplyUpdate"></a>
# **projectScenarioHierarchyDesignSupplyUpdate**
> DesignSupplyInst projectScenarioHierarchyDesignSupplyUpdate(projectid, scenarioid, designinstid, supplyinstid)



Create scenario PCB package supply instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer designinstid = 56; // Integer | 
    Integer supplyinstid = 56; // Integer | 
    try {
      DesignSupplyInst result = apiInstance.projectScenarioHierarchyDesignSupplyUpdate(projectid, scenarioid, designinstid, supplyinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioHierarchyDesignSupplyUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **designinstid** | **Integer**|  |
 **supplyinstid** | **Integer**|  |

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

<a name="projectScenarioHierarchyList"></a>
# **projectScenarioHierarchyList**
> ScenarioHierarchy projectScenarioHierarchyList(projectid, scenarioid)



Get scenario PCBs

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      ScenarioHierarchy result = apiInstance.projectScenarioHierarchyList(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioHierarchyList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

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

<a name="projectScenarioHierarchyPackageSupplyRead"></a>
# **projectScenarioHierarchyPackageSupplyRead**
> PackageSupplyInst projectScenarioHierarchyPackageSupplyRead(projectid, scenarioid, packinstid, supplyinstid)



Get scenario PCB package supply instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    Integer supplyinstid = 56; // Integer | 
    try {
      PackageSupplyInst result = apiInstance.projectScenarioHierarchyPackageSupplyRead(projectid, scenarioid, packinstid, supplyinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioHierarchyPackageSupplyRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |
 **supplyinstid** | **Integer**|  |

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

<a name="projectScenarioHierarchyPackageSupplyUpdate"></a>
# **projectScenarioHierarchyPackageSupplyUpdate**
> PackageSupplyInst projectScenarioHierarchyPackageSupplyUpdate(projectid, scenarioid, packinstid, supplyinstid)



Update scenario PCB package supply instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    Integer supplyinstid = 56; // Integer | 
    try {
      PackageSupplyInst result = apiInstance.projectScenarioHierarchyPackageSupplyUpdate(projectid, scenarioid, packinstid, supplyinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioHierarchyPackageSupplyUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |
 **supplyinstid** | **Integer**|  |

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

<a name="projectScenarioHierarchyVrSupplyRead"></a>
# **projectScenarioHierarchyVrSupplyRead**
> VRSupplyInst projectScenarioHierarchyVrSupplyRead(projectid, scenarioid, vrinstid, supplyinstid)



Create datasheet PCB package supply instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    Integer supplyinstid = 56; // Integer | 
    try {
      VRSupplyInst result = apiInstance.projectScenarioHierarchyVrSupplyRead(projectid, scenarioid, vrinstid, supplyinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioHierarchyVrSupplyRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |
 **supplyinstid** | **Integer**|  |

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

<a name="projectScenarioHierarchyVrSupplyUpdate"></a>
# **projectScenarioHierarchyVrSupplyUpdate**
> VRSupplyInst projectScenarioHierarchyVrSupplyUpdate(projectid, scenarioid, vrinstid, supplyinstid)



Create datasheet PCB package supply instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    Integer supplyinstid = 56; // Integer | 
    try {
      VRSupplyInst result = apiInstance.projectScenarioHierarchyVrSupplyUpdate(projectid, scenarioid, vrinstid, supplyinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioHierarchyVrSupplyUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |
 **supplyinstid** | **Integer**|  |

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

<a name="projectScenarioLibraryClone"></a>
# **projectScenarioLibraryClone**
> ScenarioMaster projectScenarioLibraryClone(projectid, scenarioid)



Clone a scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      ScenarioMaster result = apiInstance.projectScenarioLibraryClone(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioLibraryClone");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

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

<a name="projectScenarioLibraryCreate"></a>
# **projectScenarioLibraryCreate**
> ScenarioMaster projectScenarioLibraryCreate(projectid, data)



Create a new scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    ScenarioMaster data = new ScenarioMaster(); // ScenarioMaster | 
    try {
      ScenarioMaster result = apiInstance.projectScenarioLibraryCreate(projectid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioLibraryCreate");
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
 **projectid** | **Integer**|  |
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

<a name="projectScenarioLibraryDelete"></a>
# **projectScenarioLibraryDelete**
> projectScenarioLibraryDelete(projectid, scenarioid)



Delete a scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      apiInstance.projectScenarioLibraryDelete(projectid, scenarioid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioLibraryDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

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

<a name="projectScenarioLibraryList"></a>
# **projectScenarioLibraryList**
> List&lt;ScenarioMaster&gt; projectScenarioLibraryList(projectid)



Get list of project scenarios

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      List<ScenarioMaster> result = apiInstance.projectScenarioLibraryList(projectid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioLibraryList");
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
 **projectid** | **Integer**|  |

### Return type

[**List&lt;ScenarioMaster&gt;**](ScenarioMaster.md)

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

<a name="projectScenarioLibraryRead"></a>
# **projectScenarioLibraryRead**
> List&lt;ScenarioMaster&gt; projectScenarioLibraryRead(projectid, scenarioid)



Get a scenarios

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      List<ScenarioMaster> result = apiInstance.projectScenarioLibraryRead(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioLibraryRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**List&lt;ScenarioMaster&gt;**](ScenarioMaster.md)

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

<a name="projectScenarioLibraryUpdate"></a>
# **projectScenarioLibraryUpdate**
> ScenarioMaster projectScenarioLibraryUpdate(projectid, scenarioid, data)



Update a scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    ScenarioMaster data = new ScenarioMaster(); // ScenarioMaster | 
    try {
      ScenarioMaster result = apiInstance.projectScenarioLibraryUpdate(projectid, scenarioid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioLibraryUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
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

<a name="projectScenarioLibraryVersionList"></a>
# **projectScenarioLibraryVersionList**
> List&lt;ScenarioVersion&gt; projectScenarioLibraryVersionList(projectid, scenarioid)



Get List of design versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      List<ScenarioVersion> result = apiInstance.projectScenarioLibraryVersionList(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioLibraryVersionList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**List&lt;ScenarioVersion&gt;**](ScenarioVersion.md)

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

<a name="projectScenarioPackageCreate"></a>
# **projectScenarioPackageCreate**
> PackageInstance projectScenarioPackageCreate(projectid, scenarioid, data)



Create scenario Package instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    PackageInstance data = new PackageInstance(); // PackageInstance | 
    try {
      PackageInstance result = apiInstance.projectScenarioPackageCreate(projectid, scenarioid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
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

<a name="projectScenarioPackageDelete"></a>
# **projectScenarioPackageDelete**
> projectScenarioPackageDelete(projectid, scenarioid, packinstid)



Delete a scenario Package instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioPackageDelete(projectid, scenarioid, packinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |

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

<a name="projectScenarioPackageList"></a>
# **projectScenarioPackageList**
> List&lt;PackageInstance&gt; projectScenarioPackageList(projectid, scenarioid)



Get scenario Packages

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      List<PackageInstance> result = apiInstance.projectScenarioPackageList(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**List&lt;PackageInstance&gt;**](PackageInstance.md)

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

<a name="projectScenarioPackagePowerList"></a>
# **projectScenarioPackagePowerList**
> projectScenarioPackagePowerList(projectid, scenarioid, packinstid)



Get project scenario power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioPackagePowerList(projectid, scenarioid, packinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackagePowerList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |

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

<a name="projectScenarioPackageRead"></a>
# **projectScenarioPackageRead**
> PackageInstance projectScenarioPackageRead(projectid, scenarioid, packinstid)



Get a scenario Pckage

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    try {
      PackageInstance result = apiInstance.projectScenarioPackageRead(projectid, scenarioid, packinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |

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

<a name="projectScenarioPackageSupplyConfigCreate"></a>
# **projectScenarioPackageSupplyConfigCreate**
> SupplyInstConfig projectScenarioPackageSupplyConfigCreate(projectid, scenarioid, packinstid, supplyid, data)



Create datasheet supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioPackageSupplyConfigCreate(projectid, scenarioid, packinstid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageSupplyConfigCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
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

<a name="projectScenarioPackageSupplyConfigDelete"></a>
# **projectScenarioPackageSupplyConfigDelete**
> projectScenarioPackageSupplyConfigDelete(projectid, scenarioid, packinstid, supplyid, configid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      apiInstance.projectScenarioPackageSupplyConfigDelete(projectid, scenarioid, packinstid, supplyid, configid, data);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageSupplyConfigDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  |

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
**200** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectScenarioPackageSupplyConfigList"></a>
# **projectScenarioPackageSupplyConfigList**
> List&lt;SupplyInstConfig&gt; projectScenarioPackageSupplyConfigList(projectid, scenarioid, packinstid, supplyid)



Get scenario design supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      List<SupplyInstConfig> result = apiInstance.projectScenarioPackageSupplyConfigList(projectid, scenarioid, packinstid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageSupplyConfigList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**List&lt;SupplyInstConfig&gt;**](SupplyInstConfig.md)

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

<a name="projectScenarioPackageSupplyConfigRead"></a>
# **projectScenarioPackageSupplyConfigRead**
> SupplyInstConfig projectScenarioPackageSupplyConfigRead(projectid, scenarioid, packinstid, supplyid, configid)



Get scenario design supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioPackageSupplyConfigRead(projectid, scenarioid, packinstid, supplyid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageSupplyConfigRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |

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

<a name="projectScenarioPackageSupplyConfigUpdate"></a>
# **projectScenarioPackageSupplyConfigUpdate**
> SupplyInstConfig projectScenarioPackageSupplyConfigUpdate(projectid, scenarioid, packinstid, supplyid, configid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioPackageSupplyConfigUpdate(projectid, scenarioid, packinstid, supplyid, configid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageSupplyConfigUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |
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

<a name="projectScenarioPackageUpdate"></a>
# **projectScenarioPackageUpdate**
> PackageInstance projectScenarioPackageUpdate(projectid, scenarioid, packinstid, data)



Update a scenario Package instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer packinstid = 56; // Integer | 
    PackageInstance data = new PackageInstance(); // PackageInstance | 
    try {
      PackageInstance result = apiInstance.projectScenarioPackageUpdate(projectid, scenarioid, packinstid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPackageUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **packinstid** | **Integer**|  |
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

<a name="projectScenarioPcbCreate"></a>
# **projectScenarioPcbCreate**
> PCBInstance projectScenarioPcbCreate(projectid, scenarioid, data)



Create scenario PC instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    PCBInstance data = new PCBInstance(); // PCBInstance | 
    try {
      PCBInstance result = apiInstance.projectScenarioPcbCreate(projectid, scenarioid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
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

<a name="projectScenarioPcbDelete"></a>
# **projectScenarioPcbDelete**
> projectScenarioPcbDelete(projectid, scenarioid, pcbinstid)



Delete a datasheet PCB instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer pcbinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioPcbDelete(projectid, scenarioid, pcbinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **pcbinstid** | **Integer**|  |

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
**201** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectScenarioPcbList"></a>
# **projectScenarioPcbList**
> List&lt;PCBInstance&gt; projectScenarioPcbList(projectid, scenarioid)



Get scenario PCBs

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      List<PCBInstance> result = apiInstance.projectScenarioPcbList(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**List&lt;PCBInstance&gt;**](PCBInstance.md)

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

<a name="projectScenarioPcbPowerList"></a>
# **projectScenarioPcbPowerList**
> projectScenarioPcbPowerList(projectid, scenarioid, pcbinstid)



Get project scenario power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer pcbinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioPcbPowerList(projectid, scenarioid, pcbinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbPowerList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **pcbinstid** | **Integer**|  |

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

<a name="projectScenarioPcbRead"></a>
# **projectScenarioPcbRead**
> PCBInstance projectScenarioPcbRead(projectid, scenarioid, pcbinstid)



Get a datasheet PCB

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer pcbinstid = 56; // Integer | 
    try {
      PCBInstance result = apiInstance.projectScenarioPcbRead(projectid, scenarioid, pcbinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **pcbinstid** | **Integer**|  |

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

<a name="projectScenarioPcbSupplyConfigCreate"></a>
# **projectScenarioPcbSupplyConfigCreate**
> SupplyInstConfig projectScenarioPcbSupplyConfigCreate(projectid, scenarioid, pcbinstid, supplyid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer pcbinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioPcbSupplyConfigCreate(projectid, scenarioid, pcbinstid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbSupplyConfigCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **pcbinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
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

<a name="projectScenarioPcbSupplyConfigDelete"></a>
# **projectScenarioPcbSupplyConfigDelete**
> projectScenarioPcbSupplyConfigDelete(projectid, scenarioid, pcbinstid, supplyid, configid, data)



Create datasheet supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer pcbinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      apiInstance.projectScenarioPcbSupplyConfigDelete(projectid, scenarioid, pcbinstid, supplyid, configid, data);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbSupplyConfigDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **pcbinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  |

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
**200** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectScenarioPcbSupplyConfigList"></a>
# **projectScenarioPcbSupplyConfigList**
> List&lt;SupplyInstConfig&gt; projectScenarioPcbSupplyConfigList(projectid, scenarioid, pcbinstid, supplyid)



Get scenario design supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer pcbinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      List<SupplyInstConfig> result = apiInstance.projectScenarioPcbSupplyConfigList(projectid, scenarioid, pcbinstid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbSupplyConfigList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **pcbinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**List&lt;SupplyInstConfig&gt;**](SupplyInstConfig.md)

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

<a name="projectScenarioPcbSupplyConfigRead"></a>
# **projectScenarioPcbSupplyConfigRead**
> SupplyInstConfig projectScenarioPcbSupplyConfigRead(projectid, scenarioid, pcbinstid, supplyid, configid)



Get datasheet design supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer pcbinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioPcbSupplyConfigRead(projectid, scenarioid, pcbinstid, supplyid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbSupplyConfigRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **pcbinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |

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

<a name="projectScenarioPcbSupplyConfigUpdate"></a>
# **projectScenarioPcbSupplyConfigUpdate**
> SupplyInstConfig projectScenarioPcbSupplyConfigUpdate(projectid, scenarioid, pcbinstid, supplyid, configid, data)



Create datasheet supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer pcbinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioPcbSupplyConfigUpdate(projectid, scenarioid, pcbinstid, supplyid, configid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbSupplyConfigUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **pcbinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |
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

<a name="projectScenarioPcbUpdate"></a>
# **projectScenarioPcbUpdate**
> PCBInstance projectScenarioPcbUpdate(projectid, scenarioid, pcbinstid, data)



Update a datasheet PCB instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer pcbinstid = 56; // Integer | 
    PCBInstance data = new PCBInstance(); // PCBInstance | 
    try {
      PCBInstance result = apiInstance.projectScenarioPcbUpdate(projectid, scenarioid, pcbinstid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPcbUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **pcbinstid** | **Integer**|  |
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

<a name="projectScenarioPowerList"></a>
# **projectScenarioPowerList**
> projectScenarioPowerList(projectid, scenarioid)



Get project scenario power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      apiInstance.projectScenarioPowerList(projectid, scenarioid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPowerList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

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

<a name="projectScenarioPowerdistributionDownloadRead"></a>
# **projectScenarioPowerdistributionDownloadRead**
> projectScenarioPowerdistributionDownloadRead(projectid, scenarioid, resolution)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer resolution = 56; // Integer | 
    try {
      apiInstance.projectScenarioPowerdistributionDownloadRead(projectid, scenarioid, resolution);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioPowerdistributionDownloadRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **resolution** | **Integer**|  |

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

<a name="projectScenarioRead"></a>
# **projectScenarioRead**
> Scenario projectScenarioRead(projectid, scenarioid)



Get scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      Scenario result = apiInstance.projectScenarioRead(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

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

<a name="projectScenarioTrendList"></a>
# **projectScenarioTrendList**
> projectScenarioTrendList(projectid, scenarioid)



Get a datasheet trend

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      apiInstance.projectScenarioTrendList(projectid, scenarioid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioTrendList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

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
**200** | Data |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectScenarioUpdate"></a>
# **projectScenarioUpdate**
> Scenario projectScenarioUpdate(projectid, scenarioid, data)



Update a scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Scenario data = new Scenario(); // Scenario | 
    try {
      Scenario result = apiInstance.projectScenarioUpdate(projectid, scenarioid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
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

<a name="projectScenarioUpdateList"></a>
# **projectScenarioUpdateList**
> UpdateData projectScenarioUpdateList(projectid, scenarioid)



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      UpdateData result = apiInstance.projectScenarioUpdateList(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioUpdateList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

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

<a name="projectScenarioVersionList"></a>
# **projectScenarioVersionList**
> List&lt;ScenarioVersion&gt; projectScenarioVersionList(projectid, scenarioid)



Get List of design versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      List<ScenarioVersion> result = apiInstance.projectScenarioVersionList(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVersionList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**List&lt;ScenarioVersion&gt;**](ScenarioVersion.md)

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

<a name="projectScenarioVrCreate"></a>
# **projectScenarioVrCreate**
> VRInstance projectScenarioVrCreate(projectid, scenarioid, data)



Create scenario PC instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    VRInstance data = new VRInstance(); // VRInstance | 
    try {
      VRInstance result = apiInstance.projectScenarioVrCreate(projectid, scenarioid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
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

<a name="projectScenarioVrDelete"></a>
# **projectScenarioVrDelete**
> projectScenarioVrDelete(projectid, scenarioid, vrinstid)



Delete a scenario VR instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioVrDelete(projectid, scenarioid, vrinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |

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
**201** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectScenarioVrList"></a>
# **projectScenarioVrList**
> List&lt;VRInstance&gt; projectScenarioVrList(projectid, scenarioid)



Get scenario VRs

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      List<VRInstance> result = apiInstance.projectScenarioVrList(projectid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**List&lt;VRInstance&gt;**](VRInstance.md)

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

<a name="projectScenarioVrPowerList"></a>
# **projectScenarioVrPowerList**
> projectScenarioVrPowerList(projectid, scenarioid, vrinstid)



Get project scenario power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    try {
      apiInstance.projectScenarioVrPowerList(projectid, scenarioid, vrinstid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrPowerList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |

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

<a name="projectScenarioVrRead"></a>
# **projectScenarioVrRead**
> VRInstance projectScenarioVrRead(projectid, scenarioid, vrinstid)



Get a scenario VR

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    try {
      VRInstance result = apiInstance.projectScenarioVrRead(projectid, scenarioid, vrinstid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |

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

<a name="projectScenarioVrSupplyConfigCreate"></a>
# **projectScenarioVrSupplyConfigCreate**
> SupplyInstConfig projectScenarioVrSupplyConfigCreate(projectid, scenarioid, vrinstid, supplyid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioVrSupplyConfigCreate(projectid, scenarioid, vrinstid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrSupplyConfigCreate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
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

<a name="projectScenarioVrSupplyConfigDelete"></a>
# **projectScenarioVrSupplyConfigDelete**
> projectScenarioVrSupplyConfigDelete(projectid, scenarioid, vrinstid, supplyid, configid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      apiInstance.projectScenarioVrSupplyConfigDelete(projectid, scenarioid, vrinstid, supplyid, configid, data);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrSupplyConfigDelete");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  |

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
**200** | Deleted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectScenarioVrSupplyConfigList"></a>
# **projectScenarioVrSupplyConfigList**
> List&lt;SupplyInstConfig&gt; projectScenarioVrSupplyConfigList(projectid, scenarioid, vrinstid, supplyid)



Get scenario design supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      List<SupplyInstConfig> result = apiInstance.projectScenarioVrSupplyConfigList(projectid, scenarioid, vrinstid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrSupplyConfigList");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**List&lt;SupplyInstConfig&gt;**](SupplyInstConfig.md)

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

<a name="projectScenarioVrSupplyConfigRead"></a>
# **projectScenarioVrSupplyConfigRead**
> SupplyInstConfig projectScenarioVrSupplyConfigRead(projectid, scenarioid, vrinstid, supplyid, configid)



Get scenario design supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioVrSupplyConfigRead(projectid, scenarioid, vrinstid, supplyid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrSupplyConfigRead");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |

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

<a name="projectScenarioVrSupplyConfigUpdate"></a>
# **projectScenarioVrSupplyConfigUpdate**
> SupplyInstConfig projectScenarioVrSupplyConfigUpdate(projectid, scenarioid, vrinstid, supplyid, configid, data)



Create scenario supply data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    SupplyInstConfig data = new SupplyInstConfig(); // SupplyInstConfig | 
    try {
      SupplyInstConfig result = apiInstance.projectScenarioVrSupplyConfigUpdate(projectid, scenarioid, vrinstid, supplyid, configid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrSupplyConfigUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |
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

<a name="projectScenarioVrUpdate"></a>
# **projectScenarioVrUpdate**
> VRInstance projectScenarioVrUpdate(projectid, scenarioid, vrinstid, data)



Update a scenario VR instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer vrinstid = 56; // Integer | 
    VRInstance data = new VRInstance(); // VRInstance | 
    try {
      VRInstance result = apiInstance.projectScenarioVrUpdate(projectid, scenarioid, vrinstid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectScenarioVrUpdate");
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
 **projectid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **vrinstid** | **Integer**|  |
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

<a name="projectSimulationCloneCreate"></a>
# **projectSimulationCloneCreate**
> projectSimulationCloneCreate(projectid, simid)



Clone a simulation

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer simid = 56; // Integer | 
    try {
      apiInstance.projectSimulationCloneCreate(projectid, simid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectSimulationCloneCreate");
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
 **projectid** | **Integer**|  |
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
**202** | Accepted |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectSimulationCreate"></a>
# **projectSimulationCreate**
> List&lt;SimMaster&gt; projectSimulationCreate(projectid, data)



Create a new simulation

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    SimMaster data = new SimMaster(); // SimMaster | 
    try {
      List<SimMaster> result = apiInstance.projectSimulationCreate(projectid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectSimulationCreate");
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
 **projectid** | **Integer**|  |
 **data** | [**SimMaster**](SimMaster.md)|  |

### Return type

[**List&lt;SimMaster&gt;**](SimMaster.md)

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

<a name="projectSimulationDelete"></a>
# **projectSimulationDelete**
> projectSimulationDelete(projectid, simid)



Delete a simulation

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer simid = 56; // Integer | 
    try {
      apiInstance.projectSimulationDelete(projectid, simid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectSimulationDelete");
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
 **projectid** | **Integer**|  |
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

<a name="projectSimulationList"></a>
# **projectSimulationList**
> List&lt;SimMaster&gt; projectSimulationList(projectid)



Get list of simulations

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      List<SimMaster> result = apiInstance.projectSimulationList(projectid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectSimulationList");
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
 **projectid** | **Integer**|  |

### Return type

[**List&lt;SimMaster&gt;**](SimMaster.md)

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

<a name="projectSimulationRead"></a>
# **projectSimulationRead**
> List&lt;SimMaster&gt; projectSimulationRead(projectid, simid)



Get list of simulations

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer simid = 56; // Integer | 
    try {
      List<SimMaster> result = apiInstance.projectSimulationRead(projectid, simid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectSimulationRead");
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
 **projectid** | **Integer**|  |
 **simid** | **Integer**|  |

### Return type

[**List&lt;SimMaster&gt;**](SimMaster.md)

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

<a name="projectSimulationUpdate"></a>
# **projectSimulationUpdate**
> SimMaster projectSimulationUpdate(projectid, simid, data)



Update a simulation

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer simid = 56; // Integer | 
    SimMaster data = new SimMaster(); // SimMaster | 
    try {
      SimMaster result = apiInstance.projectSimulationUpdate(projectid, simid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectSimulationUpdate");
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
 **projectid** | **Integer**|  |
 **simid** | **Integer**|  |
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

<a name="projectSimulationUpdateList"></a>
# **projectSimulationUpdateList**
> UpdateData projectSimulationUpdateList(projectid, simid)



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer simid = 56; // Integer | 
    try {
      UpdateData result = apiInstance.projectSimulationUpdateList(projectid, simid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectSimulationUpdateList");
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
 **projectid** | **Integer**|  |
 **simid** | **Integer**|  |

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

<a name="projectUpdate"></a>
# **projectUpdate**
> Project projectUpdate(projectid, data)



Update a project

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Project data = new Project(); // Project | 
    try {
      Project result = apiInstance.projectUpdate(projectid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectUpdate");
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
 **projectid** | **Integer**|  |
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

<a name="projectUpdateTimes"></a>
# **projectUpdateTimes**
> UpdateData projectUpdateTimes(projectid)



Returns an array of {current, last update} times for current project

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      UpdateData result = apiInstance.projectUpdateTimes(projectid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectUpdateTimes");
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
 **projectid** | **Integer**|  |

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

<a name="projectVerilogCreate"></a>
# **projectVerilogCreate**
> projectVerilogCreate(projectid)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    String projectid = "projectid_example"; // String | 
    try {
      apiInstance.projectVerilogCreate(projectid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectVerilogCreate");
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
 **projectid** | **String**|  |

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

<a name="projectWireLoadCreate"></a>
# **projectWireLoadCreate**
> WLMMaster projectWireLoadCreate(projectid, data)



Create a contributor devices

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    WLMMaster data = new WLMMaster(); // WLMMaster | 
    try {
      WLMMaster result = apiInstance.projectWireLoadCreate(projectid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectWireLoadCreate");
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
 **projectid** | **Integer**|  |
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

<a name="projectWireLoadDelete"></a>
# **projectWireLoadDelete**
> projectWireLoadDelete(projectid, wlmid)



Delete wire load data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer wlmid = 56; // Integer | 
    try {
      apiInstance.projectWireLoadDelete(projectid, wlmid);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectWireLoadDelete");
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
 **projectid** | **Integer**|  |
 **wlmid** | **Integer**|  |

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
**400** | Bad request, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="projectWireLoadList"></a>
# **projectWireLoadList**
> List&lt;WLMMaster&gt; projectWireLoadList(projectid)



Get list of wire load data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    try {
      List<WLMMaster> result = apiInstance.projectWireLoadList(projectid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectWireLoadList");
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
 **projectid** | **Integer**|  |

### Return type

[**List&lt;WLMMaster&gt;**](WLMMaster.md)

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

<a name="projectWireLoadRead"></a>
# **projectWireLoadRead**
> WLMMaster projectWireLoadRead(projectid, wlmid)



Get wire load data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer wlmid = 56; // Integer | 
    try {
      WLMMaster result = apiInstance.projectWireLoadRead(projectid, wlmid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectWireLoadRead");
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
 **projectid** | **Integer**|  |
 **wlmid** | **Integer**|  |

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

<a name="projectWireLoadUpdate"></a>
# **projectWireLoadUpdate**
> WLMMaster projectWireLoadUpdate(projectid, wlmid, data)



Update wireload data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    Integer projectid = 56; // Integer | 
    Integer wlmid = 56; // Integer | 
    WLMMaster data = new WLMMaster(); // WLMMaster | 
    try {
      WLMMaster result = apiInstance.projectWireLoadUpdate(projectid, wlmid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectWireLoadUpdate");
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
 **projectid** | **Integer**|  |
 **wlmid** | **Integer**|  |
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

<a name="projectsUpdateTimes"></a>
# **projectsUpdateTimes**
> UpdateData projectsUpdateTimes()



Returns an array of {current, last update} times for all projects

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.ProjectApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    ProjectApi apiInstance = new ProjectApi(defaultClient);
    try {
      UpdateData result = apiInstance.projectsUpdateTimes();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling ProjectApi#projectsUpdateTimes");
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

