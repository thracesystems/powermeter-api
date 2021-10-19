# PowermeterApi.ProjectApi

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



## projectAccessCreate

> projectAccessCreate(projectid)



Update project access

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectAccessCreate(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectClone

> projectClone(projectid)



Create a copy of project

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectClone(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectContribDeviceComputeList

> SwaggerContrib projectContribDeviceComputeList(projectid, deviceid, opts)



Compute a contributor device

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let deviceid = 56; // Number | 
let opts = {
  'p': 3.4, // Number | 
  'v': 3.4, // Number | 
  't': 56 // Number | 
};
apiInstance.projectContribDeviceComputeList(projectid, deviceid, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **p** | **Number**|  | [optional] 
 **v** | **Number**|  | [optional] 
 **t** | **Number**|  | [optional] 

### Return type

[**SwaggerContrib**](SwaggerContrib.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectContribDeviceCreate

> SwaggerContrib projectContribDeviceCreate(projectid, data)



Create a contributor devices

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let data = new PowermeterApi.SwaggerContrib(); // SwaggerContrib | 
apiInstance.projectContribDeviceCreate(projectid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **data** | [**SwaggerContrib**](SwaggerContrib.md)|  | 

### Return type

[**SwaggerContrib**](SwaggerContrib.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectContribDeviceDelete

> projectContribDeviceDelete(projectid, deviceid)



Delete a contributor devices

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let deviceid = 56; // Number | 
apiInstance.projectContribDeviceDelete(projectid, deviceid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **deviceid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectContribDeviceList

> PagedContribDevice projectContribDeviceList(projectid, opts)



Get list of contributor devices

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let opts = {
  'page': 56, // Number | 
  '_number': 56 // Number | 
};
apiInstance.projectContribDeviceList(projectid, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **page** | **Number**|  | [optional] 
 **_number** | **Number**|  | [optional] 

### Return type

[**PagedContribDevice**](PagedContribDevice.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectContribDeviceRead

> SwaggerContrib projectContribDeviceRead(projectid, deviceid)



Get a contributor device

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let deviceid = 56; // Number | 
apiInstance.projectContribDeviceRead(projectid, deviceid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **deviceid** | **Number**|  | 

### Return type

[**SwaggerContrib**](SwaggerContrib.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectContribDeviceUpdate

> SwaggerContrib projectContribDeviceUpdate(projectid, deviceid, data)



Update a contributor devices

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let deviceid = 56; // Number | 
let data = new PowermeterApi.SwaggerContrib(); // SwaggerContrib | 
apiInstance.projectContribDeviceUpdate(projectid, deviceid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **data** | [**SwaggerContrib**](SwaggerContrib.md)|  | 

### Return type

[**SwaggerContrib**](SwaggerContrib.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectCreate

> Project projectCreate(data)



Create a project

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let data = new PowermeterApi.Project(); // Project | 
apiInstance.projectCreate(data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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


## projectDelete

> projectDelete(projectid)



Delete a project

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectDelete(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectDesignAccessCreate

> projectDesignAccessCreate(projectid, masterdesignid)



Update design access

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let masterdesignid = 56; // Number | 
apiInstance.projectDesignAccessCreate(projectid, masterdesignid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **masterdesignid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectDesignClone

> DesignMaster projectDesignClone(projectid, masterdesignid)



Create a copy of design

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let masterdesignid = 56; // Number | 
apiInstance.projectDesignClone(projectid, masterdesignid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **masterdesignid** | **Number**|  | 

### Return type

[**DesignMaster**](DesignMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectDesignCreate

> DesignMaster projectDesignCreate(projectid, data)



Create a design, return master design

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let data = new PowermeterApi.Design(); // Design | 
apiInstance.projectDesignCreate(projectid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **data** | [**Design**](Design.md)|  | 

### Return type

[**DesignMaster**](DesignMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectDesignDelete

> projectDesignDelete(projectid, masterdesignid)



Delete a master design

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let masterdesignid = 56; // Number | 
apiInstance.projectDesignDelete(projectid, masterdesignid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **masterdesignid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectDesignInstantiableList

> [DesignMaster] projectDesignInstantiableList(projectid)



Get list of designs that can be instantiated in the given design

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectDesignInstantiableList(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

[**[DesignMaster]**](DesignMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectDesignList

> [DesignMaster] projectDesignList(projectid, opts)



Get list of master designs in projects

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let opts = {
  'name': "name_example" // String | Design name
};
apiInstance.projectDesignList(projectid, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **name** | **String**| Design name | [optional] 

### Return type

[**[DesignMaster]**](DesignMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectDesignRead

> DesignMaster projectDesignRead(projectid, masterdesignid)



Get a master design

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let masterdesignid = 56; // Number | 
apiInstance.projectDesignRead(projectid, masterdesignid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **masterdesignid** | **Number**|  | 

### Return type

[**DesignMaster**](DesignMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectDesignUpdate

> DesignMaster projectDesignUpdate(projectid, masterdesignid, data)



Update a design master

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let masterdesignid = 56; // Number | 
let data = new PowermeterApi.DesignMaster(); // DesignMaster | 
apiInstance.projectDesignUpdate(projectid, masterdesignid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **masterdesignid** | **Number**|  | 
 **data** | [**DesignMaster**](DesignMaster.md)|  | 

### Return type

[**DesignMaster**](DesignMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectDesignVersionsList

> [DesignVersion] projectDesignVersionsList(projectid, masterdesignid)



Get list of design versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let masterdesignid = 56; // Number | 
apiInstance.projectDesignVersionsList(projectid, masterdesignid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **masterdesignid** | **Number**|  | 

### Return type

[**[DesignVersion]**](DesignVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectList

> [Project] projectList(opts)



Get list of projects

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let opts = {
  'name': "name_example" // String | Project name
};
apiInstance.projectList(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**| Project name | [optional] 

### Return type

[**[Project]**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectPermissionsList

> projectPermissionsList(projectid)



Get list of permissions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectPermissionsList(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectPermissionsUpdate

> projectPermissionsUpdate(projectid)



Get list of permissions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectPermissionsUpdate(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectRead

> Project projectRead(projectid)



Get a project

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectRead(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

[**Project**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectReferenceCreate

> Project projectReferenceCreate(projectid, data)



Add a reference

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let data = new PowermeterApi.Project(); // Project | 
apiInstance.projectReferenceCreate(projectid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **data** | [**Project**](Project.md)|  | 

### Return type

[**Project**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectReferenceDelete

> projectReferenceDelete(projectid, refid)



Delete a reference

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let refid = 56; // Number | 
apiInstance.projectReferenceDelete(projectid, refid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **refid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectReferenceList

> [Project] projectReferenceList(projectid)



Get list of refernced projects

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectReferenceList(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

[**[Project]**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectReferenceRead

> Project projectReferenceRead(projectid, refid)



Get a reference

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let refid = 56; // Number | 
apiInstance.projectReferenceRead(projectid, refid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **refid** | **Number**|  | 

### Return type

[**Project**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectReferenceableList

> [Project] projectReferenceableList(projectid)



Get list of projects referenceable by this project

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectReferenceableList(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

[**[Project]**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioAccessCreate

> projectScenarioAccessCreate(projectid, scenarioid)



Update project datasheet access

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioAccessCreate(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioCommitCreate

> ScenarioVersion projectScenarioCommitCreate(projectid, scenarioid, data)



Commit a version

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let data = new PowermeterApi.ScenarioVersion(); // ScenarioVersion | 
apiInstance.projectScenarioCommitCreate(projectid, scenarioid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **data** | [**ScenarioVersion**](ScenarioVersion.md)|  | 

### Return type

[**ScenarioVersion**](ScenarioVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDelete

> projectScenarioDelete(projectid, scenarioid)



Delete a scenario

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioDelete(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioDesignCreate

> DesignInstance projectScenarioDesignCreate(projectid, scenarioid, data)



Create scenario PC instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let data = new PowermeterApi.DesignInstance(); // DesignInstance | 
apiInstance.projectScenarioDesignCreate(projectid, scenarioid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **data** | [**DesignInstance**](DesignInstance.md)|  | 

### Return type

[**DesignInstance**](DesignInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignDelete

> projectScenarioDesignDelete(projectid, scenarioid, designinstid)



Delete a scenario Design instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
apiInstance.projectScenarioDesignDelete(projectid, scenarioid, designinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioDesignList

> [DesignInstance] projectScenarioDesignList(projectid, scenarioid)



Get scenario Designs

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioDesignList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**[DesignInstance]**](DesignInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignParamConfigCreate

> ScenarioParamConfig projectScenarioDesignParamConfigCreate(projectid, scenarioid, designinstid, paramid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let paramid = 56; // Number | 
let data = new PowermeterApi.ScenarioParamConfig(); // ScenarioParamConfig | 
apiInstance.projectScenarioDesignParamConfigCreate(projectid, scenarioid, designinstid, paramid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **paramid** | **Number**|  | 
 **data** | [**ScenarioParamConfig**](ScenarioParamConfig.md)|  | 

### Return type

[**ScenarioParamConfig**](ScenarioParamConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignParamConfigDelete

> projectScenarioDesignParamConfigDelete(projectid, scenarioid, designinstid, paramid, configid)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let paramid = 56; // Number | 
let configid = 56; // Number | 
apiInstance.projectScenarioDesignParamConfigDelete(projectid, scenarioid, designinstid, paramid, configid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **paramid** | **Number**|  | 
 **configid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioDesignParamConfigList

> [ScenarioParamConfig] projectScenarioDesignParamConfigList(projectid, scenarioid, designinstid, paramid)



Get scenario design config data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let paramid = 56; // Number | 
apiInstance.projectScenarioDesignParamConfigList(projectid, scenarioid, designinstid, paramid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **paramid** | **Number**|  | 

### Return type

[**[ScenarioParamConfig]**](ScenarioParamConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignParamConfigRead

> ScenarioParamConfig projectScenarioDesignParamConfigRead(projectid, scenarioid, designinstid, paramid, configid)



Get scenario design config data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let paramid = 56; // Number | 
let configid = 56; // Number | 
apiInstance.projectScenarioDesignParamConfigRead(projectid, scenarioid, designinstid, paramid, configid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **paramid** | **Number**|  | 
 **configid** | **Number**|  | 

### Return type

[**ScenarioParamConfig**](ScenarioParamConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignParamConfigUpdate

> ScenarioParamConfig projectScenarioDesignParamConfigUpdate(projectid, scenarioid, designinstid, paramid, configid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let paramid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.ScenarioParamConfig(); // ScenarioParamConfig | 
apiInstance.projectScenarioDesignParamConfigUpdate(projectid, scenarioid, designinstid, paramid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **paramid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**ScenarioParamConfig**](ScenarioParamConfig.md)|  | 

### Return type

[**ScenarioParamConfig**](ScenarioParamConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignParamCreate

> ScenarioParam projectScenarioDesignParamCreate(projectid, scenarioid, designinstid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let data = new PowermeterApi.ScenarioParam(); // ScenarioParam | 
apiInstance.projectScenarioDesignParamCreate(projectid, scenarioid, designinstid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **data** | [**ScenarioParam**](ScenarioParam.md)|  | 

### Return type

[**ScenarioParam**](ScenarioParam.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignParamList

> [ScenarioParam] projectScenarioDesignParamList(projectid, scenarioid, designinstid)



Get scenario design config data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
apiInstance.projectScenarioDesignParamList(projectid, scenarioid, designinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 

### Return type

[**[ScenarioParam]**](ScenarioParam.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignParamRead

> [ScenarioParam] projectScenarioDesignParamRead(projectid, scenarioid, designinstid, paramid)



Get datasheet design config data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let paramid = 56; // Number | 
apiInstance.projectScenarioDesignParamRead(projectid, scenarioid, designinstid, paramid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **paramid** | **Number**|  | 

### Return type

[**[ScenarioParam]**](ScenarioParam.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignParamUpdate

> ScenarioParam projectScenarioDesignParamUpdate(projectid, scenarioid, designinstid, paramid, data)



Create datasheet supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let paramid = 56; // Number | 
let data = new PowermeterApi.ScenarioParam(); // ScenarioParam | 
apiInstance.projectScenarioDesignParamUpdate(projectid, scenarioid, designinstid, paramid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **paramid** | **Number**|  | 
 **data** | [**ScenarioParam**](ScenarioParam.md)|  | 

### Return type

[**ScenarioParam**](ScenarioParam.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignPowerList

> projectScenarioDesignPowerList(projectid, scenarioid, designinstid)



Get project scenario power

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
apiInstance.projectScenarioDesignPowerList(projectid, scenarioid, designinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioDesignPowerdistributionList

> projectScenarioDesignPowerdistributionList(projectid, scenarioid, designinstid)



Get project scenario power distribution

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
apiInstance.projectScenarioDesignPowerdistributionList(projectid, scenarioid, designinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioDesignRead

> DesignInstance projectScenarioDesignRead(projectid, scenarioid, designinstid)



Get a scenario Design

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
apiInstance.projectScenarioDesignRead(projectid, scenarioid, designinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 

### Return type

[**DesignInstance**](DesignInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignSupplyConfigCreate

> SupplyInstConfig projectScenarioDesignSupplyConfigCreate(designinstid, projectid, scenarioid, dsigninstid, supplyid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let designinstid = "designinstid_example"; // String | 
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let dsigninstid = 56; // Number | 
let supplyid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioDesignSupplyConfigCreate(designinstid, projectid, scenarioid, dsigninstid, supplyid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **designinstid** | **String**|  | 
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **dsigninstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignSupplyConfigDelete

> projectScenarioDesignSupplyConfigDelete(projectid, scenarioid, designinstid, supplyid, configid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioDesignSupplyConfigDelete(projectid, scenarioid, designinstid, supplyid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## projectScenarioDesignSupplyConfigList

> [SupplyInstConfig] projectScenarioDesignSupplyConfigList(projectid, scenarioid, designinstid, supplyid)



Get scenario design supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.projectScenarioDesignSupplyConfigList(projectid, scenarioid, designinstid, supplyid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**[SupplyInstConfig]**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignSupplyConfigRead

> SupplyInstConfig projectScenarioDesignSupplyConfigRead(projectid, scenarioid, designinstid, supplyid, configid)



Get scenario design supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
apiInstance.projectScenarioDesignSupplyConfigRead(projectid, scenarioid, designinstid, supplyid, configid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignSupplyConfigUpdate

> SupplyInstConfig projectScenarioDesignSupplyConfigUpdate(projectid, scenarioid, designinstid, supplyid, configid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioDesignSupplyConfigUpdate(projectid, scenarioid, designinstid, supplyid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignSupplyCreate

> DesignSupplyInst projectScenarioDesignSupplyCreate(designinstid, projectid, scenarioid, dsigninstid, supplyid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let designinstid = "designinstid_example"; // String | 
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let dsigninstid = 56; // Number | 
let supplyid = 56; // Number | 
let data = new PowermeterApi.DesignSupplyInst(); // DesignSupplyInst | 
apiInstance.projectScenarioDesignSupplyCreate(designinstid, projectid, scenarioid, dsigninstid, supplyid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **designinstid** | **String**|  | 
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **dsigninstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **data** | [**DesignSupplyInst**](DesignSupplyInst.md)|  | 

### Return type

[**DesignSupplyInst**](DesignSupplyInst.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignSupplyRead

> [DesignSupplyInst] projectScenarioDesignSupplyRead(projectid, scenarioid, designinstid, supplyid)



Get scenario design supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.projectScenarioDesignSupplyRead(projectid, scenarioid, designinstid, supplyid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**[DesignSupplyInst]**](DesignSupplyInst.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignThermalList

> projectScenarioDesignThermalList(projectid, scenarioid, designinstid)



Compute project scenario steady state thermal

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
apiInstance.projectScenarioDesignThermalList(projectid, scenarioid, designinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioDesignUpdate

> DesignInstance projectScenarioDesignUpdate(projectid, scenarioid, designinstid, data)



Update a scenario Design instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let data = new PowermeterApi.DesignInstance(); // DesignInstance | 
apiInstance.projectScenarioDesignUpdate(projectid, scenarioid, designinstid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **data** | [**DesignInstance**](DesignInstance.md)|  | 

### Return type

[**DesignInstance**](DesignInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignUtilizationConfigCreate

> ScenarioModeUtilConfig projectScenarioDesignUtilizationConfigCreate(projectid, scenarioid, designinstid, modeid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let modeid = 56; // Number | 
let data = new PowermeterApi.ScenarioModeUtilConfig(); // ScenarioModeUtilConfig | 
apiInstance.projectScenarioDesignUtilizationConfigCreate(projectid, scenarioid, designinstid, modeid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **modeid** | **Number**|  | 
 **data** | [**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)|  | 

### Return type

[**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignUtilizationConfigDelete

> projectScenarioDesignUtilizationConfigDelete(projectid, scenarioid, designinstid, modeid, configid)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let modeid = 56; // Number | 
let configid = 56; // Number | 
apiInstance.projectScenarioDesignUtilizationConfigDelete(projectid, scenarioid, designinstid, modeid, configid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **modeid** | **Number**|  | 
 **configid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioDesignUtilizationConfigList

> [ScenarioModeUtilConfig] projectScenarioDesignUtilizationConfigList(projectid, scenarioid, designinstid, modeid)



Get scenario design config data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let modeid = 56; // Number | 
apiInstance.projectScenarioDesignUtilizationConfigList(projectid, scenarioid, designinstid, modeid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **modeid** | **Number**|  | 

### Return type

[**[ScenarioModeUtilConfig]**](ScenarioModeUtilConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignUtilizationConfigRead

> ScenarioModeUtilConfig projectScenarioDesignUtilizationConfigRead(projectid, scenarioid, designinstid, modeid, configid)



Get scenario design config data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let modeid = 56; // Number | 
let configid = 56; // Number | 
apiInstance.projectScenarioDesignUtilizationConfigRead(projectid, scenarioid, designinstid, modeid, configid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **modeid** | **Number**|  | 
 **configid** | **Number**|  | 

### Return type

[**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignUtilizationConfigUpdate

> ScenarioModeUtilConfig projectScenarioDesignUtilizationConfigUpdate(projectid, scenarioid, designinstid, modeid, configid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let modeid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.ScenarioModeUtilConfig(); // ScenarioModeUtilConfig | 
apiInstance.projectScenarioDesignUtilizationConfigUpdate(projectid, scenarioid, designinstid, modeid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **modeid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)|  | 

### Return type

[**ScenarioModeUtilConfig**](ScenarioModeUtilConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignUtilizationCreate

> ScenarioModeUtil projectScenarioDesignUtilizationCreate(projectid, scenarioid, designinstid, modeid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let modeid = 56; // Number | 
let data = new PowermeterApi.ScenarioModeUtil(); // ScenarioModeUtil | 
apiInstance.projectScenarioDesignUtilizationCreate(projectid, scenarioid, designinstid, modeid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **modeid** | **Number**|  | 
 **data** | [**ScenarioModeUtil**](ScenarioModeUtil.md)|  | 

### Return type

[**ScenarioModeUtil**](ScenarioModeUtil.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioDesignUtilizationList

> [ScenarioModeUtil] projectScenarioDesignUtilizationList(projectid, scenarioid, designinstid)



Get scenario design config data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
apiInstance.projectScenarioDesignUtilizationList(projectid, scenarioid, designinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 

### Return type

[**[ScenarioModeUtil]**](ScenarioModeUtil.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignUtilizationRead

> ScenarioModeUtil projectScenarioDesignUtilizationRead(projectid, scenarioid, designinstid, modeid)



Get scenario design config data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let modeid = 56; // Number | 
apiInstance.projectScenarioDesignUtilizationRead(projectid, scenarioid, designinstid, modeid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **modeid** | **Number**|  | 

### Return type

[**ScenarioModeUtil**](ScenarioModeUtil.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioDesignUtilizationUpdate

> ScenarioModeUtil projectScenarioDesignUtilizationUpdate(projectid, scenarioid, designinstid, modeid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let modeid = 56; // Number | 
let data = new PowermeterApi.ScenarioModeUtil(); // ScenarioModeUtil | 
apiInstance.projectScenarioDesignUtilizationUpdate(projectid, scenarioid, designinstid, modeid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **modeid** | **Number**|  | 
 **data** | [**ScenarioModeUtil**](ScenarioModeUtil.md)|  | 

### Return type

[**ScenarioModeUtil**](ScenarioModeUtil.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioHierarchyDesignSupplyRead

> DesignSupplyInst projectScenarioHierarchyDesignSupplyRead(projectid, scenarioid, designinstid, supplyinstid)



Get scenario PCB package supply instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let supplyinstid = 56; // Number | 
apiInstance.projectScenarioHierarchyDesignSupplyRead(projectid, scenarioid, designinstid, supplyinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **supplyinstid** | **Number**|  | 

### Return type

[**DesignSupplyInst**](DesignSupplyInst.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioHierarchyDesignSupplyUpdate

> DesignSupplyInst projectScenarioHierarchyDesignSupplyUpdate(projectid, scenarioid, designinstid, supplyinstid)



Create scenario PCB package supply instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let designinstid = 56; // Number | 
let supplyinstid = 56; // Number | 
apiInstance.projectScenarioHierarchyDesignSupplyUpdate(projectid, scenarioid, designinstid, supplyinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **designinstid** | **Number**|  | 
 **supplyinstid** | **Number**|  | 

### Return type

[**DesignSupplyInst**](DesignSupplyInst.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioHierarchyList

> ScenarioHierarchy projectScenarioHierarchyList(projectid, scenarioid)



Get scenario PCBs

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioHierarchyList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**ScenarioHierarchy**](ScenarioHierarchy.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioHierarchyPackageSupplyRead

> PackageSupplyInst projectScenarioHierarchyPackageSupplyRead(projectid, scenarioid, packinstid, supplyinstid)



Get scenario PCB package supply instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
let supplyinstid = 56; // Number | 
apiInstance.projectScenarioHierarchyPackageSupplyRead(projectid, scenarioid, packinstid, supplyinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 
 **supplyinstid** | **Number**|  | 

### Return type

[**PackageSupplyInst**](PackageSupplyInst.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioHierarchyPackageSupplyUpdate

> PackageSupplyInst projectScenarioHierarchyPackageSupplyUpdate(projectid, scenarioid, packinstid, supplyinstid)



Update scenario PCB package supply instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
let supplyinstid = 56; // Number | 
apiInstance.projectScenarioHierarchyPackageSupplyUpdate(projectid, scenarioid, packinstid, supplyinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 
 **supplyinstid** | **Number**|  | 

### Return type

[**PackageSupplyInst**](PackageSupplyInst.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioHierarchyVrSupplyRead

> VRSupplyInst projectScenarioHierarchyVrSupplyRead(projectid, scenarioid, vrinstid, supplyinstid)



Create datasheet PCB package supply instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
let supplyinstid = 56; // Number | 
apiInstance.projectScenarioHierarchyVrSupplyRead(projectid, scenarioid, vrinstid, supplyinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 
 **supplyinstid** | **Number**|  | 

### Return type

[**VRSupplyInst**](VRSupplyInst.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioHierarchyVrSupplyUpdate

> VRSupplyInst projectScenarioHierarchyVrSupplyUpdate(projectid, scenarioid, vrinstid, supplyinstid)



Create datasheet PCB package supply instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
let supplyinstid = 56; // Number | 
apiInstance.projectScenarioHierarchyVrSupplyUpdate(projectid, scenarioid, vrinstid, supplyinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 
 **supplyinstid** | **Number**|  | 

### Return type

[**VRSupplyInst**](VRSupplyInst.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioLibraryClone

> ScenarioMaster projectScenarioLibraryClone(projectid, scenarioid)



Clone a scenario

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioLibraryClone(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**ScenarioMaster**](ScenarioMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioLibraryCreate

> ScenarioMaster projectScenarioLibraryCreate(projectid, data)



Create a new scenario

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let data = new PowermeterApi.ScenarioMaster(); // ScenarioMaster | 
apiInstance.projectScenarioLibraryCreate(projectid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **data** | [**ScenarioMaster**](ScenarioMaster.md)|  | 

### Return type

[**ScenarioMaster**](ScenarioMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioLibraryDelete

> projectScenarioLibraryDelete(projectid, scenarioid)



Delete a scenario

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioLibraryDelete(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioLibraryList

> [ScenarioMaster] projectScenarioLibraryList(projectid)



Get list of project scenarios

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectScenarioLibraryList(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

[**[ScenarioMaster]**](ScenarioMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioLibraryRead

> [ScenarioMaster] projectScenarioLibraryRead(projectid, scenarioid)



Get a scenarios

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioLibraryRead(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**[ScenarioMaster]**](ScenarioMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioLibraryUpdate

> ScenarioMaster projectScenarioLibraryUpdate(projectid, scenarioid, data)



Update a scenario

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let data = new PowermeterApi.ScenarioMaster(); // ScenarioMaster | 
apiInstance.projectScenarioLibraryUpdate(projectid, scenarioid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **data** | [**ScenarioMaster**](ScenarioMaster.md)|  | 

### Return type

[**ScenarioMaster**](ScenarioMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioLibraryVersionList

> [ScenarioVersion] projectScenarioLibraryVersionList(projectid, scenarioid)



Get List of design versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioLibraryVersionList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**[ScenarioVersion]**](ScenarioVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioPackageCreate

> PackageInstance projectScenarioPackageCreate(projectid, scenarioid, data)



Create scenario Package instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let data = new PowermeterApi.PackageInstance(); // PackageInstance | 
apiInstance.projectScenarioPackageCreate(projectid, scenarioid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **data** | [**PackageInstance**](PackageInstance.md)|  | 

### Return type

[**PackageInstance**](PackageInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioPackageDelete

> projectScenarioPackageDelete(projectid, scenarioid, packinstid)



Delete a scenario Package instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
apiInstance.projectScenarioPackageDelete(projectid, scenarioid, packinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioPackageList

> [PackageInstance] projectScenarioPackageList(projectid, scenarioid)



Get scenario Packages

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioPackageList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**[PackageInstance]**](PackageInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioPackagePowerList

> projectScenarioPackagePowerList(projectid, scenarioid, packinstid)



Get project scenario power

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
apiInstance.projectScenarioPackagePowerList(projectid, scenarioid, packinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioPackageRead

> PackageInstance projectScenarioPackageRead(projectid, scenarioid, packinstid)



Get a scenario Pckage

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
apiInstance.projectScenarioPackageRead(projectid, scenarioid, packinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 

### Return type

[**PackageInstance**](PackageInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioPackageSupplyConfigCreate

> SupplyInstConfig projectScenarioPackageSupplyConfigCreate(projectid, scenarioid, packinstid, supplyid, data)



Create datasheet supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
let supplyid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioPackageSupplyConfigCreate(projectid, scenarioid, packinstid, supplyid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioPackageSupplyConfigDelete

> projectScenarioPackageSupplyConfigDelete(projectid, scenarioid, packinstid, supplyid, configid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioPackageSupplyConfigDelete(projectid, scenarioid, packinstid, supplyid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## projectScenarioPackageSupplyConfigList

> [SupplyInstConfig] projectScenarioPackageSupplyConfigList(projectid, scenarioid, packinstid, supplyid)



Get scenario design supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.projectScenarioPackageSupplyConfigList(projectid, scenarioid, packinstid, supplyid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**[SupplyInstConfig]**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioPackageSupplyConfigRead

> SupplyInstConfig projectScenarioPackageSupplyConfigRead(projectid, scenarioid, packinstid, supplyid, configid)



Get scenario design supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
apiInstance.projectScenarioPackageSupplyConfigRead(projectid, scenarioid, packinstid, supplyid, configid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioPackageSupplyConfigUpdate

> SupplyInstConfig projectScenarioPackageSupplyConfigUpdate(projectid, scenarioid, packinstid, supplyid, configid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioPackageSupplyConfigUpdate(projectid, scenarioid, packinstid, supplyid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioPackageUpdate

> PackageInstance projectScenarioPackageUpdate(projectid, scenarioid, packinstid, data)



Update a scenario Package instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let packinstid = 56; // Number | 
let data = new PowermeterApi.PackageInstance(); // PackageInstance | 
apiInstance.projectScenarioPackageUpdate(projectid, scenarioid, packinstid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **packinstid** | **Number**|  | 
 **data** | [**PackageInstance**](PackageInstance.md)|  | 

### Return type

[**PackageInstance**](PackageInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioPcbCreate

> PCBInstance projectScenarioPcbCreate(projectid, scenarioid, data)



Create scenario PC instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let data = new PowermeterApi.PCBInstance(); // PCBInstance | 
apiInstance.projectScenarioPcbCreate(projectid, scenarioid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **data** | [**PCBInstance**](PCBInstance.md)|  | 

### Return type

[**PCBInstance**](PCBInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioPcbDelete

> projectScenarioPcbDelete(projectid, scenarioid, pcbinstid)



Delete a datasheet PCB instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let pcbinstid = 56; // Number | 
apiInstance.projectScenarioPcbDelete(projectid, scenarioid, pcbinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **pcbinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioPcbList

> [PCBInstance] projectScenarioPcbList(projectid, scenarioid)



Get scenario PCBs

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioPcbList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**[PCBInstance]**](PCBInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioPcbPowerList

> projectScenarioPcbPowerList(projectid, scenarioid, pcbinstid)



Get project scenario power

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let pcbinstid = 56; // Number | 
apiInstance.projectScenarioPcbPowerList(projectid, scenarioid, pcbinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **pcbinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioPcbRead

> PCBInstance projectScenarioPcbRead(projectid, scenarioid, pcbinstid)



Get a datasheet PCB

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let pcbinstid = 56; // Number | 
apiInstance.projectScenarioPcbRead(projectid, scenarioid, pcbinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **pcbinstid** | **Number**|  | 

### Return type

[**PCBInstance**](PCBInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioPcbSupplyConfigCreate

> SupplyInstConfig projectScenarioPcbSupplyConfigCreate(projectid, scenarioid, pcbinstid, supplyid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let pcbinstid = 56; // Number | 
let supplyid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioPcbSupplyConfigCreate(projectid, scenarioid, pcbinstid, supplyid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **pcbinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioPcbSupplyConfigDelete

> projectScenarioPcbSupplyConfigDelete(projectid, scenarioid, pcbinstid, supplyid, configid, data)



Create datasheet supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let pcbinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioPcbSupplyConfigDelete(projectid, scenarioid, pcbinstid, supplyid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **pcbinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## projectScenarioPcbSupplyConfigList

> [SupplyInstConfig] projectScenarioPcbSupplyConfigList(projectid, scenarioid, pcbinstid, supplyid)



Get scenario design supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let pcbinstid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.projectScenarioPcbSupplyConfigList(projectid, scenarioid, pcbinstid, supplyid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **pcbinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**[SupplyInstConfig]**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioPcbSupplyConfigRead

> SupplyInstConfig projectScenarioPcbSupplyConfigRead(projectid, scenarioid, pcbinstid, supplyid, configid)



Get datasheet design supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let pcbinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
apiInstance.projectScenarioPcbSupplyConfigRead(projectid, scenarioid, pcbinstid, supplyid, configid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **pcbinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioPcbSupplyConfigUpdate

> SupplyInstConfig projectScenarioPcbSupplyConfigUpdate(projectid, scenarioid, pcbinstid, supplyid, configid, data)



Create datasheet supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let pcbinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioPcbSupplyConfigUpdate(projectid, scenarioid, pcbinstid, supplyid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **pcbinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioPcbUpdate

> PCBInstance projectScenarioPcbUpdate(projectid, scenarioid, pcbinstid, data)



Update a datasheet PCB instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let pcbinstid = 56; // Number | 
let data = new PowermeterApi.PCBInstance(); // PCBInstance | 
apiInstance.projectScenarioPcbUpdate(projectid, scenarioid, pcbinstid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **pcbinstid** | **Number**|  | 
 **data** | [**PCBInstance**](PCBInstance.md)|  | 

### Return type

[**PCBInstance**](PCBInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioPowerList

> projectScenarioPowerList(projectid, scenarioid)



Get project scenario power

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioPowerList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioPowerdistributionDownloadRead

> projectScenarioPowerdistributionDownloadRead(projectid, scenarioid, resolution)



### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let resolution = 56; // Number | 
apiInstance.projectScenarioPowerdistributionDownloadRead(projectid, scenarioid, resolution, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **resolution** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioRead

> Scenario projectScenarioRead(projectid, scenarioid)



Get scenario

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioRead(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**Scenario**](Scenario.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioTrendList

> projectScenarioTrendList(projectid, scenarioid)



Get a datasheet trend

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioTrendList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioUpdate

> Scenario projectScenarioUpdate(projectid, scenarioid, data)



Update a scenario

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let data = new PowermeterApi.Scenario(); // Scenario | 
apiInstance.projectScenarioUpdate(projectid, scenarioid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **data** | [**Scenario**](Scenario.md)|  | 

### Return type

[**Scenario**](Scenario.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioUpdateList

> UpdateData projectScenarioUpdateList(projectid, scenarioid)



Returns an array of [current, last update] times

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioUpdateList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioVersionList

> [ScenarioVersion] projectScenarioVersionList(projectid, scenarioid)



Get List of design versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioVersionList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**[ScenarioVersion]**](ScenarioVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioVrCreate

> VRInstance projectScenarioVrCreate(projectid, scenarioid, data)



Create scenario PC instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let data = new PowermeterApi.VRInstance(); // VRInstance | 
apiInstance.projectScenarioVrCreate(projectid, scenarioid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **data** | [**VRInstance**](VRInstance.md)|  | 

### Return type

[**VRInstance**](VRInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioVrDelete

> projectScenarioVrDelete(projectid, scenarioid, vrinstid)



Delete a scenario VR instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
apiInstance.projectScenarioVrDelete(projectid, scenarioid, vrinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioVrList

> [VRInstance] projectScenarioVrList(projectid, scenarioid)



Get scenario VRs

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
apiInstance.projectScenarioVrList(projectid, scenarioid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 

### Return type

[**[VRInstance]**](VRInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioVrPowerList

> projectScenarioVrPowerList(projectid, scenarioid, vrinstid)



Get project scenario power

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
apiInstance.projectScenarioVrPowerList(projectid, scenarioid, vrinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectScenarioVrRead

> VRInstance projectScenarioVrRead(projectid, scenarioid, vrinstid)



Get a scenario VR

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
apiInstance.projectScenarioVrRead(projectid, scenarioid, vrinstid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 

### Return type

[**VRInstance**](VRInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioVrSupplyConfigCreate

> SupplyInstConfig projectScenarioVrSupplyConfigCreate(projectid, scenarioid, vrinstid, supplyid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
let supplyid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioVrSupplyConfigCreate(projectid, scenarioid, vrinstid, supplyid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioVrSupplyConfigDelete

> projectScenarioVrSupplyConfigDelete(projectid, scenarioid, vrinstid, supplyid, configid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioVrSupplyConfigDelete(projectid, scenarioid, vrinstid, supplyid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## projectScenarioVrSupplyConfigList

> [SupplyInstConfig] projectScenarioVrSupplyConfigList(projectid, scenarioid, vrinstid, supplyid)



Get scenario design supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.projectScenarioVrSupplyConfigList(projectid, scenarioid, vrinstid, supplyid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**[SupplyInstConfig]**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioVrSupplyConfigRead

> SupplyInstConfig projectScenarioVrSupplyConfigRead(projectid, scenarioid, vrinstid, supplyid, configid)



Get scenario design supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
apiInstance.projectScenarioVrSupplyConfigRead(projectid, scenarioid, vrinstid, supplyid, configid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectScenarioVrSupplyConfigUpdate

> SupplyInstConfig projectScenarioVrSupplyConfigUpdate(projectid, scenarioid, vrinstid, supplyid, configid, data)



Create scenario supply data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
let supplyid = 56; // Number | 
let configid = 56; // Number | 
let data = new PowermeterApi.SupplyInstConfig(); // SupplyInstConfig | 
apiInstance.projectScenarioVrSupplyConfigUpdate(projectid, scenarioid, vrinstid, supplyid, configid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **configid** | **Number**|  | 
 **data** | [**SupplyInstConfig**](SupplyInstConfig.md)|  | 

### Return type

[**SupplyInstConfig**](SupplyInstConfig.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectScenarioVrUpdate

> VRInstance projectScenarioVrUpdate(projectid, scenarioid, vrinstid, data)



Update a scenario VR instance

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let scenarioid = 56; // Number | 
let vrinstid = 56; // Number | 
let data = new PowermeterApi.VRInstance(); // VRInstance | 
apiInstance.projectScenarioVrUpdate(projectid, scenarioid, vrinstid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **scenarioid** | **Number**|  | 
 **vrinstid** | **Number**|  | 
 **data** | [**VRInstance**](VRInstance.md)|  | 

### Return type

[**VRInstance**](VRInstance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectSimulationCloneCreate

> projectSimulationCloneCreate(projectid, simid)



Clone a simulation

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let simid = 56; // Number | 
apiInstance.projectSimulationCloneCreate(projectid, simid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **simid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectSimulationCreate

> [SimMaster] projectSimulationCreate(projectid, data)



Create a new simulation

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let data = new PowermeterApi.SimMaster(); // SimMaster | 
apiInstance.projectSimulationCreate(projectid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **data** | [**SimMaster**](SimMaster.md)|  | 

### Return type

[**[SimMaster]**](SimMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectSimulationDelete

> projectSimulationDelete(projectid, simid)



Delete a simulation

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let simid = 56; // Number | 
apiInstance.projectSimulationDelete(projectid, simid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **simid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectSimulationList

> [SimMaster] projectSimulationList(projectid)



Get list of simulations

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectSimulationList(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

[**[SimMaster]**](SimMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectSimulationRead

> [SimMaster] projectSimulationRead(projectid, simid)



Get list of simulations

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let simid = 56; // Number | 
apiInstance.projectSimulationRead(projectid, simid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **simid** | **Number**|  | 

### Return type

[**[SimMaster]**](SimMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectSimulationUpdate

> SimMaster projectSimulationUpdate(projectid, simid, data)



Update a simulation

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let simid = 56; // Number | 
let data = new PowermeterApi.SimMaster(); // SimMaster | 
apiInstance.projectSimulationUpdate(projectid, simid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **simid** | **Number**|  | 
 **data** | [**SimMaster**](SimMaster.md)|  | 

### Return type

[**SimMaster**](SimMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectSimulationUpdateList

> UpdateData projectSimulationUpdateList(projectid, simid)



Returns an array of [current, last update] times

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let simid = 56; // Number | 
apiInstance.projectSimulationUpdateList(projectid, simid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **simid** | **Number**|  | 

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectUpdate

> Project projectUpdate(projectid, data)



Update a project

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let data = new PowermeterApi.Project(); // Project | 
apiInstance.projectUpdate(projectid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **data** | [**Project**](Project.md)|  | 

### Return type

[**Project**](Project.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectUpdateTimes

> UpdateData projectUpdateTimes(projectid)



Returns an array of {current, last update} times for current project

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectUpdateTimes(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectVerilogCreate

> projectVerilogCreate(projectid)



### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = "projectid_example"; // String | 
apiInstance.projectVerilogCreate(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
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


## projectWireLoadCreate

> WLMMaster projectWireLoadCreate(projectid, data)



Create a contributor devices

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let data = new PowermeterApi.WLMMaster(); // WLMMaster | 
apiInstance.projectWireLoadCreate(projectid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **data** | [**WLMMaster**](WLMMaster.md)|  | 

### Return type

[**WLMMaster**](WLMMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectWireLoadDelete

> projectWireLoadDelete(projectid, wlmid)



Delete wire load data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let wlmid = 56; // Number | 
apiInstance.projectWireLoadDelete(projectid, wlmid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **wlmid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## projectWireLoadList

> [WLMMaster] projectWireLoadList(projectid)



Get list of wire load data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
apiInstance.projectWireLoadList(projectid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 

### Return type

[**[WLMMaster]**](WLMMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectWireLoadRead

> WLMMaster projectWireLoadRead(projectid, wlmid)



Get wire load data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let wlmid = 56; // Number | 
apiInstance.projectWireLoadRead(projectid, wlmid, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **wlmid** | **Number**|  | 

### Return type

[**WLMMaster**](WLMMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## projectWireLoadUpdate

> WLMMaster projectWireLoadUpdate(projectid, wlmid, data)



Update wireload data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
let projectid = 56; // Number | 
let wlmid = 56; // Number | 
let data = new PowermeterApi.WLMMaster(); // WLMMaster | 
apiInstance.projectWireLoadUpdate(projectid, wlmid, data, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **projectid** | **Number**|  | 
 **wlmid** | **Number**|  | 
 **data** | [**WLMMaster**](WLMMaster.md)|  | 

### Return type

[**WLMMaster**](WLMMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## projectsUpdateTimes

> UpdateData projectsUpdateTimes()



Returns an array of {current, last update} times for all projects

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.ProjectApi();
apiInstance.projectsUpdateTimes((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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

