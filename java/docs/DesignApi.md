# DesignApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**apiDesignHierarchyDeleteAll**](DesignApi.md#apiDesignHierarchyDeleteAll) | **DELETE** /design/{designid}/hierarchy/group/ | 
[**apiDesignInstanceDeleteAll**](DesignApi.md#apiDesignInstanceDeleteAll) | **DELETE** /design/{designid}/instance/ | 
[**apiDesignModeDeleteAll**](DesignApi.md#apiDesignModeDeleteAll) | **DELETE** /design/{designid}/mode/ | 
[**apiDesignParameterDeleteAll**](DesignApi.md#apiDesignParameterDeleteAll) | **DELETE** /design/{designid}/parameter/ | 
[**apiDesignSupplyDeleteAll**](DesignApi.md#apiDesignSupplyDeleteAll) | **DELETE** /design/{designid}/supply/ | 
[**designCommitCreate**](DesignApi.md#designCommitCreate) | **POST** /design/{designid}/commit/ | 
[**designComputepowerCreate**](DesignApi.md#designComputepowerCreate) | **POST** /design/{designid}/computepower/ | 
[**designComputepowerarcCreate**](DesignApi.md#designComputepowerarcCreate) | **POST** /design/{designid}/computepowerarc/ | 
[**designContribpowerCompute1List**](DesignApi.md#designContribpowerCompute1List) | **GET** /design/{designid}/contribpower/{powerid}/compute1/ | 
[**designContribpowerComputeList**](DesignApi.md#designContribpowerComputeList) | **GET** /design/{designid}/contribpower/{powerid}/compute/ | 
[**designContribpowerCreate**](DesignApi.md#designContribpowerCreate) | **POST** /design/{designid}/contribpower/ | 
[**designContribpowerDelete**](DesignApi.md#designContribpowerDelete) | **DELETE** /design/{designid}/contribpower/{powerid}/ | 
[**designContribpowerList**](DesignApi.md#designContribpowerList) | **GET** /design/{designid}/contribpower/ | 
[**designContribpowerRead**](DesignApi.md#designContribpowerRead) | **GET** /design/{designid}/contribpower/{powerid}/ | 
[**designContribpowerUpdate**](DesignApi.md#designContribpowerUpdate) | **PUT** /design/{designid}/contribpower/{powerid}/ | 
[**designDashboardAccessCreate**](DesignApi.md#designDashboardAccessCreate) | **POST** /design/{designid}/dashboard/{dashboardid}/access/ | 
[**designDashboardCloneCreate**](DesignApi.md#designDashboardCloneCreate) | **POST** /design/{designid}/dashboard/{dashboardid}/clone/ | 
[**designDashboardColumnCreate**](DesignApi.md#designDashboardColumnCreate) | **POST** /design/{designid}/dashboard/{dashboardid}/column/ | 
[**designDashboardColumnDelete**](DesignApi.md#designDashboardColumnDelete) | **DELETE** /design/{designid}/dashboard/{dashboardid}/column/{columnid}/ | 
[**designDashboardColumnList**](DesignApi.md#designDashboardColumnList) | **GET** /design/{designid}/dashboard/{dashboardid}/column/ | 
[**designDashboardColumnRead**](DesignApi.md#designDashboardColumnRead) | **GET** /design/{designid}/dashboard/{dashboardid}/column/{columnid}/ | 
[**designDashboardColumnUpdate**](DesignApi.md#designDashboardColumnUpdate) | **PUT** /design/{designid}/dashboard/{dashboardid}/column/{columnid}/ | 
[**designDashboardCreate**](DesignApi.md#designDashboardCreate) | **POST** /design/{designid}/dashboard/ | 
[**designDashboardDataList**](DesignApi.md#designDashboardDataList) | **GET** /design/{designid}/dashboard/{dashboardid}/data/ | 
[**designDashboardDelete**](DesignApi.md#designDashboardDelete) | **DELETE** /design/{designid}/dashboard/{dashboardid}/ | 
[**designDashboardList**](DesignApi.md#designDashboardList) | **GET** /design/{designid}/dashboard/ | 
[**designDashboardRead**](DesignApi.md#designDashboardRead) | **GET** /design/{designid}/dashboard/{dashboardid}/ | 
[**designDashboardRowCreate**](DesignApi.md#designDashboardRowCreate) | **POST** /design/{designid}/dashboard/{dashboardid}/row/ | 
[**designDashboardRowDelete**](DesignApi.md#designDashboardRowDelete) | **DELETE** /design/{designid}/dashboard/{dashboardid}/row/{rowid}/ | 
[**designDashboardRowList**](DesignApi.md#designDashboardRowList) | **GET** /design/{designid}/dashboard/{dashboardid}/row/ | 
[**designDashboardRowRead**](DesignApi.md#designDashboardRowRead) | **GET** /design/{designid}/dashboard/{dashboardid}/row/{rowid}/ | 
[**designDashboardRowUpdate**](DesignApi.md#designDashboardRowUpdate) | **PUT** /design/{designid}/dashboard/{dashboardid}/row/{rowid}/ | 
[**designDashboardUpdate**](DesignApi.md#designDashboardUpdate) | **PUT** /design/{designid}/dashboard/{dashboardid}/ | 
[**designDashboardUpdateList**](DesignApi.md#designDashboardUpdateList) | **GET** /design/{designid}/dashboard/{dashboardid}/update/ | 
[**designDataCreate**](DesignApi.md#designDataCreate) | **POST** /design/data/{uuid}/ | 
[**designDataDelete**](DesignApi.md#designDataDelete) | **DELETE** /design/{designid}/data/{dataid}/ | 
[**designDataList**](DesignApi.md#designDataList) | **GET** /design/{designid}/data/ | 
[**designDataRead**](DesignApi.md#designDataRead) | **GET** /design/{designid}/data/{dataid}/ | 
[**designDataUpdate**](DesignApi.md#designDataUpdate) | **PUT** /design/{designid}/data/{dataid}/ | 
[**designEnergyCreate**](DesignApi.md#designEnergyCreate) | **POST** /design/{designid}/energy/ | 
[**designEnergyList**](DesignApi.md#designEnergyList) | **GET** /design/{designid}/energy/ | 
[**designFfCreate**](DesignApi.md#designFfCreate) | **POST** /design/{designid}/ff/ | 
[**designFfDelete**](DesignApi.md#designFfDelete) | **DELETE** /design/{designid}/ff/{ffid}/ | 
[**designFfList**](DesignApi.md#designFfList) | **GET** /design/{designid}/ff/ | 
[**designFfRead**](DesignApi.md#designFfRead) | **GET** /design/{designid}/ff/{ffid}/ | 
[**designFfUpdate**](DesignApi.md#designFfUpdate) | **PUT** /design/{designid}/ff/{ffid}/ | 
[**designHierarchyGroupCreate**](DesignApi.md#designHierarchyGroupCreate) | **POST** /design/{designid}/hierarchy/group/ | 
[**designHierarchyGroupDelete**](DesignApi.md#designHierarchyGroupDelete) | **DELETE** /design/{designid}/hierarchy/group/{groupid}/ | 
[**designHierarchyGroupUpdate**](DesignApi.md#designHierarchyGroupUpdate) | **PUT** /design/{designid}/hierarchy/group/{groupid}/ | 
[**designHierarchyList**](DesignApi.md#designHierarchyList) | **GET** /design/{designid}/hierarchy/ | 
[**designHierarchyUpdate**](DesignApi.md#designHierarchyUpdate) | **PUT** /design/{designid}/hierarchy/ | 
[**designInstanceBulkCreate**](DesignApi.md#designInstanceBulkCreate) | **POST** /design/{designid}/instance/bulk/ | 
[**designInstanceClone**](DesignApi.md#designInstanceClone) | **POST** /design/{designid}/instance/{instanceid}/clone/ | 
[**designInstanceCreate**](DesignApi.md#designInstanceCreate) | **POST** /design/{designid}/instance/ | 
[**designInstanceDelete**](DesignApi.md#designInstanceDelete) | **DELETE** /design/{designid}/instance/{instanceid}/ | 
[**designInstanceList**](DesignApi.md#designInstanceList) | **GET** /design/{designid}/instance/ | 
[**designInstanceRead**](DesignApi.md#designInstanceRead) | **GET** /design/{designid}/instance/{instanceid}/ | 
[**designInstanceSupplyCreate**](DesignApi.md#designInstanceSupplyCreate) | **POST** /design/{designid}/instance/{instanceid}/supply/ | 
[**designInstanceSupplyList**](DesignApi.md#designInstanceSupplyList) | **GET** /design/{designid}/instance/{instanceid}/supply/ | 
[**designInstanceSupplyRead**](DesignApi.md#designInstanceSupplyRead) | **GET** /design/{designid}/instance/{instanceid}/supply/{supplyid}/ | 
[**designInstanceSupplyUpdate**](DesignApi.md#designInstanceSupplyUpdate) | **PUT** /design/{designid}/instance/{instanceid}/supply/{supplyid}/ | 
[**designInstanceUpdate**](DesignApi.md#designInstanceUpdate) | **PUT** /design/{designid}/instance/{instanceid}/ | 
[**designInstanceUpdatemasterCreate**](DesignApi.md#designInstanceUpdatemasterCreate) | **POST** /design/{designid}/instance/{instanceid}/updatemaster/{masterid}/ | 
[**designInstantiableList**](DesignApi.md#designInstantiableList) | **GET** /design/{designid}/instantiable/ | 
[**designLatchCreate**](DesignApi.md#designLatchCreate) | **POST** /design/{designid}/latch/ | 
[**designLatchDelete**](DesignApi.md#designLatchDelete) | **DELETE** /design/{designid}/latch/{latchid}/ | 
[**designLatchList**](DesignApi.md#designLatchList) | **GET** /design/{designid}/latch/ | 
[**designLatchRead**](DesignApi.md#designLatchRead) | **GET** /design/{designid}/latch/{latchid}/ | 
[**designLatchUpdate**](DesignApi.md#designLatchUpdate) | **PUT** /design/{designid}/latch/{latchid}/ | 
[**designLeakagepowerCreate**](DesignApi.md#designLeakagepowerCreate) | **POST** /design/{designid}/leakagepower/ | 
[**designLeakagepowerDelete**](DesignApi.md#designLeakagepowerDelete) | **DELETE** /design/{designid}/leakagepower/{powerid}/ | 
[**designLeakagepowerList**](DesignApi.md#designLeakagepowerList) | **GET** /design/{designid}/leakagepower/ | 
[**designLeakagepowerRead**](DesignApi.md#designLeakagepowerRead) | **GET** /design/{designid}/leakagepower/{powerid}/ | 
[**designLeakagepowerUpdate**](DesignApi.md#designLeakagepowerUpdate) | **PUT** /design/{designid}/leakagepower/{powerid}/ | 
[**designModeClone**](DesignApi.md#designModeClone) | **POST** /design/{designid}/mode/{modeid}/clone/ | 
[**designModeCreate**](DesignApi.md#designModeCreate) | **POST** /design/{designid}/mode/ | 
[**designModeDelete**](DesignApi.md#designModeDelete) | **DELETE** /design/{designid}/mode/{modeid}/ | 
[**designModeList**](DesignApi.md#designModeList) | **GET** /design/{designid}/mode/ | 
[**designModePowerList**](DesignApi.md#designModePowerList) | **GET** /design/{designid}/mode/{modeid}/power/ | 
[**designModePowerdistributionList**](DesignApi.md#designModePowerdistributionList) | **GET** /design/{designid}/mode/{modeid}/powerdistribution/ | 
[**designModeRead**](DesignApi.md#designModeRead) | **GET** /design/{designid}/mode/{modeid}/ | 
[**designModeSupplyComputepowerCreate**](DesignApi.md#designModeSupplyComputepowerCreate) | **POST** /design/{designid}/mode/{modeid}/supply/{supplyid}/computepower/ | 
[**designModeSupplyComputepowertableCreate**](DesignApi.md#designModeSupplyComputepowertableCreate) | **POST** /design/{designid}/mode/{modeid}/supply/{supplyid}/computepowertable/ | 
[**designModeSupplystateList**](DesignApi.md#designModeSupplystateList) | **GET** /design/{designid}/mode/{modeid}/supplystate/ | 
[**designModeSupplystateUpdate**](DesignApi.md#designModeSupplystateUpdate) | **PUT** /design/{designid}/mode/{modeid}/supplystate/ | 
[**designModeUpdate**](DesignApi.md#designModeUpdate) | **PUT** /design/{designid}/mode/{modeid}/ | 
[**designParameterClone**](DesignApi.md#designParameterClone) | **POST** /design/{designid}/parameter/{paramid}/clone/ | 
[**designParameterCreate**](DesignApi.md#designParameterCreate) | **POST** /design/{designid}/parameter/ | 
[**designParameterDelete**](DesignApi.md#designParameterDelete) | **DELETE** /design/{designid}/parameter/{paramid}/ | 
[**designParameterList**](DesignApi.md#designParameterList) | **GET** /design/{designid}/parameter/ | 
[**designParameterRead**](DesignApi.md#designParameterRead) | **GET** /design/{designid}/parameter/{paramid}/ | 
[**designParameterUpdate**](DesignApi.md#designParameterUpdate) | **PUT** /design/{designid}/parameter/{paramid}/ | 
[**designPermissionsList**](DesignApi.md#designPermissionsList) | **GET** /design/{designid}/permissions/ | 
[**designPermissionsUpdate**](DesignApi.md#designPermissionsUpdate) | **PUT** /design/{designid}/permissions/ | 
[**designPinCapsCreate**](DesignApi.md#designPinCapsCreate) | **POST** /design/{designid}/pin/{pinid}/caps/ | 
[**designPinCapsDelete**](DesignApi.md#designPinCapsDelete) | **DELETE** /design/{designid}/pin/{pinid}/caps/{capid}/ | 
[**designPinCapsList**](DesignApi.md#designPinCapsList) | **GET** /design/{designid}/pin/{pinid}/caps/ | 
[**designPinCapsRead**](DesignApi.md#designPinCapsRead) | **GET** /design/{designid}/pin/{pinid}/caps/{capid}/ | 
[**designPinCapsUpdate**](DesignApi.md#designPinCapsUpdate) | **PUT** /design/{designid}/pin/{pinid}/caps/{capid}/ | 
[**designPinCreate**](DesignApi.md#designPinCreate) | **POST** /design/{designid}/pin/ | 
[**designPinDelete**](DesignApi.md#designPinDelete) | **DELETE** /design/{designid}/pin/{pinid}/ | 
[**designPinEnergyCreate**](DesignApi.md#designPinEnergyCreate) | **POST** /design/{designid}/pin/{pinid}/energy/ | 
[**designPinEnergyDelete**](DesignApi.md#designPinEnergyDelete) | **DELETE** /design/{designid}/pin/{pinid}/energy/{powerid}/ | 
[**designPinEnergyList**](DesignApi.md#designPinEnergyList) | **GET** /design/{designid}/pin/{pinid}/energy/ | 
[**designPinEnergyRead**](DesignApi.md#designPinEnergyRead) | **GET** /design/{designid}/pin/{pinid}/energy/{powerid}/ | 
[**designPinEnergyUpdate**](DesignApi.md#designPinEnergyUpdate) | **PUT** /design/{designid}/pin/{pinid}/energy/{powerid}/ | 
[**designPinList**](DesignApi.md#designPinList) | **GET** /design/{designid}/pin/ | 
[**designPinRead**](DesignApi.md#designPinRead) | **GET** /design/{designid}/pin/{pinid}/ | 
[**designPinUpdate**](DesignApi.md#designPinUpdate) | **PUT** /design/{designid}/pin/{pinid}/ | 
[**designPowerCreate**](DesignApi.md#designPowerCreate) | **POST** /design/{designid}/power/ | 
[**designPowerDelete**](DesignApi.md#designPowerDelete) | **DELETE** /design/{designid}/power/{powerid}/ | 
[**designPowerList**](DesignApi.md#designPowerList) | **GET** /design/{designid}/power/ | 
[**designPowerRead**](DesignApi.md#designPowerRead) | **GET** /design/{designid}/power/{powerid}/ | 
[**designPowerUpdate**](DesignApi.md#designPowerUpdate) | **PUT** /design/{designid}/power/{powerid}/ | 
[**designRead**](DesignApi.md#designRead) | **GET** /design/{designid}/ | 
[**designRestoreCreate**](DesignApi.md#designRestoreCreate) | **POST** /design/{designid}/restore/ | 
[**designScenarioClone**](DesignApi.md#designScenarioClone) | **POST** /design/{designid}/scenario/{scenarioid}/clone/ | 
[**designScenarioCreate**](DesignApi.md#designScenarioCreate) | **POST** /design/{designid}/scenario/ | 
[**designScenarioDelete**](DesignApi.md#designScenarioDelete) | **DELETE** /design/{designid}/scenario/{scenarioid}/ | 
[**designScenarioList**](DesignApi.md#designScenarioList) | **GET** /design/{designid}/scenario/ | 
[**designScenarioModeConfigDelete**](DesignApi.md#designScenarioModeConfigDelete) | **DELETE** /design/{designid}/scenario/{scenarioid}/mode/{modeid}/config/{configid}/ | 
[**designScenarioModeConfigRead**](DesignApi.md#designScenarioModeConfigRead) | **GET** /design/{designid}/scenario/{scenarioid}/mode/{modeid}/config/{configid}/ | 
[**designScenarioModeConfigUpdate**](DesignApi.md#designScenarioModeConfigUpdate) | **PUT** /design/{designid}/scenario/{scenarioid}/mode/{modeid}/config/{configid}/ | 
[**designScenarioModeCreate**](DesignApi.md#designScenarioModeCreate) | **POST** /design/{designid}/scenario/{scenarioid}/mode/{modeid}/ | 
[**designScenarioModeRead**](DesignApi.md#designScenarioModeRead) | **GET** /design/{designid}/scenario/{scenarioid}/mode/{modeid}/ | 
[**designScenarioParamConfigDelete**](DesignApi.md#designScenarioParamConfigDelete) | **DELETE** /design/{designid}/scenario/{scenarioid}/param/{paramid}/config/{configid}/ | 
[**designScenarioParamConfigRead**](DesignApi.md#designScenarioParamConfigRead) | **GET** /design/{designid}/scenario/{scenarioid}/param/{paramid}/config/{configid}/ | 
[**designScenarioParamConfigUpdate**](DesignApi.md#designScenarioParamConfigUpdate) | **PUT** /design/{designid}/scenario/{scenarioid}/param/{paramid}/config/{configid}/ | 
[**designScenarioParamCreate**](DesignApi.md#designScenarioParamCreate) | **POST** /design/{designid}/scenario/{scenarioid}/param/{paramid}/ | 
[**designScenarioParamRead**](DesignApi.md#designScenarioParamRead) | **GET** /design/{designid}/scenario/{scenarioid}/param/{paramid}/ | 
[**designScenarioPowerList**](DesignApi.md#designScenarioPowerList) | **GET** /design/{designid}/scenario/{scenarioid}/power/ | 
[**designScenarioPowerdistributionList**](DesignApi.md#designScenarioPowerdistributionList) | **GET** /design/{designid}/scenario/{scenarioid}/powerdistribution/ | 
[**designScenarioRead**](DesignApi.md#designScenarioRead) | **GET** /design/{designid}/scenario/{scenarioid}/ | 
[**designScenarioSupplyConfigDelete**](DesignApi.md#designScenarioSupplyConfigDelete) | **DELETE** /design/{designid}/scenario/{scenarioid}/supply/{supplyid}/config/{configid}/ | 
[**designScenarioSupplyConfigRead**](DesignApi.md#designScenarioSupplyConfigRead) | **GET** /design/{designid}/scenario/{scenarioid}/supply/{supplyid}/config/{configid}/ | 
[**designScenarioSupplyConfigUpdate**](DesignApi.md#designScenarioSupplyConfigUpdate) | **PUT** /design/{designid}/scenario/{scenarioid}/supply/{supplyid}/config/{configid}/ | 
[**designScenarioSupplyCreate**](DesignApi.md#designScenarioSupplyCreate) | **POST** /design/{designid}/scenario/{scenarioid}/supply/{supplyid}/ | 
[**designScenarioSupplyRead**](DesignApi.md#designScenarioSupplyRead) | **GET** /design/{designid}/scenario/{scenarioid}/supply/{supplyid}/ | 
[**designScenarioTrendList**](DesignApi.md#designScenarioTrendList) | **GET** /design/{designid}/scenario/{scenarioid}/trend/ | 
[**designScenarioUpdate**](DesignApi.md#designScenarioUpdate) | **PUT** /design/{designid}/scenario/{scenarioid}/ | 
[**designScenarioUpdateList**](DesignApi.md#designScenarioUpdateList) | **GET** /design/{designid}/scenario/{scenarioid}/update/ | 
[**designSensorClone**](DesignApi.md#designSensorClone) | **POST** /design/{designid}/sensor/{sensorid}/clone/ | 
[**designSensorCreate**](DesignApi.md#designSensorCreate) | **POST** /design/{designid}/sensor/ | 
[**designSensorDelete**](DesignApi.md#designSensorDelete) | **DELETE** /design/{designid}/sensor/{sensorid}/ | 
[**designSensorList**](DesignApi.md#designSensorList) | **GET** /design/{designid}/sensor/ | 
[**designSensorRead**](DesignApi.md#designSensorRead) | **GET** /design/{designid}/sensor/{sensorid}/ | 
[**designSensorUpdate**](DesignApi.md#designSensorUpdate) | **PUT** /design/{designid}/sensor/{sensorid}/ | 
[**designStatetableCreate**](DesignApi.md#designStatetableCreate) | **POST** /design/{designid}/statetable/ | 
[**designStatetableDelete**](DesignApi.md#designStatetableDelete) | **DELETE** /design/{designid}/statetable/{statetableid}/ | 
[**designStatetableList**](DesignApi.md#designStatetableList) | **GET** /design/{designid}/statetable/ | 
[**designStatetableRead**](DesignApi.md#designStatetableRead) | **GET** /design/{designid}/statetable/{statetableid}/ | 
[**designStatetableUpdate**](DesignApi.md#designStatetableUpdate) | **PUT** /design/{designid}/statetable/{statetableid}/ | 
[**designSupplyClone**](DesignApi.md#designSupplyClone) | **POST** /design/{designid}/supply/{supplyid}/clone/ | 
[**designSupplyCreate**](DesignApi.md#designSupplyCreate) | **POST** /design/{designid}/supply/ | 
[**designSupplyDelete**](DesignApi.md#designSupplyDelete) | **DELETE** /design/{designid}/supply/{supplyid}/ | 
[**designSupplyList**](DesignApi.md#designSupplyList) | **GET** /design/{designid}/supply/ | 
[**designSupplyModestateList**](DesignApi.md#designSupplyModestateList) | **GET** /design/{designid}/supply/{supplyid}/modestate/ | 
[**designSupplyModestateUpdate**](DesignApi.md#designSupplyModestateUpdate) | **PUT** /design/{designid}/supply/{supplyid}/modestate/ | 
[**designSupplyRead**](DesignApi.md#designSupplyRead) | **GET** /design/{designid}/supply/{supplyid}/ | 
[**designSupplyUpdate**](DesignApi.md#designSupplyUpdate) | **PUT** /design/{designid}/supply/{supplyid}/ | 
[**designSupplymodestateList**](DesignApi.md#designSupplymodestateList) | **GET** /design/{designid}/supplymodestate/ | 
[**designSupplymodestateUpdate**](DesignApi.md#designSupplymodestateUpdate) | **PUT** /design/{designid}/supplymodestate/ | 
[**designTrendCreate**](DesignApi.md#designTrendCreate) | **POST** /design/{designid}/trend/ | 
[**designTrendDelete**](DesignApi.md#designTrendDelete) | **DELETE** /design/{designid}/trend/{trendid}/ | 
[**designTrendList**](DesignApi.md#designTrendList) | **GET** /design/{designid}/trend/ | 
[**designTrendRead**](DesignApi.md#designTrendRead) | **GET** /design/{designid}/trend/{trendid}/ | 
[**designTrendUpdate**](DesignApi.md#designTrendUpdate) | **PUT** /design/{designid}/trend/{trendid}/ | 
[**designUpdate**](DesignApi.md#designUpdate) | **PUT** /design/{designid}/ | 
[**designUpdateList**](DesignApi.md#designUpdateList) | **GET** /design/{designid}/update/ | 
[**designVerilogInstancesList**](DesignApi.md#designVerilogInstancesList) | **GET** /design/{designid}/verilog/{moduleid}/instances/ | 
[**designVerilogList**](DesignApi.md#designVerilogList) | **GET** /design/{designid}/verilog/ | 
[**designVerilogModuleStateList**](DesignApi.md#designVerilogModuleStateList) | **GET** /design/{designid}/verilog/module/{moduleid}/state/ | 
[**designVerilogModulesList**](DesignApi.md#designVerilogModulesList) | **GET** /design/{designid}/verilog/{moduleid}/modules/ | 
[**designVerilogWireStateList**](DesignApi.md#designVerilogWireStateList) | **GET** /design/{designid}/verilog/wire/{wireid}/state/ | 
[**designVerilogWiresList**](DesignApi.md#designVerilogWiresList) | **GET** /design/{designid}/verilog/{moduleid}/wires/ | 
[**designVersionList**](DesignApi.md#designVersionList) | **GET** /design/{designid}/version/ | 
[**designVersionRead**](DesignApi.md#designVersionRead) | **GET** /design/{designid}/version/{versionid}/ | 


<a name="apiDesignHierarchyDeleteAll"></a>
# **apiDesignHierarchyDeleteAll**
> apiDesignHierarchyDeleteAll(designid)



Delete hierarchy groups

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      apiInstance.apiDesignHierarchyDeleteAll(designid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#apiDesignHierarchyDeleteAll");
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
 **designid** | **Integer**|  |

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

<a name="apiDesignInstanceDeleteAll"></a>
# **apiDesignInstanceDeleteAll**
> apiDesignInstanceDeleteAll(designid)



Delete all instances

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      apiInstance.apiDesignInstanceDeleteAll(designid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#apiDesignInstanceDeleteAll");
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
 **designid** | **Integer**|  |

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

<a name="apiDesignModeDeleteAll"></a>
# **apiDesignModeDeleteAll**
> apiDesignModeDeleteAll(designid)



Delete design modes

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      apiInstance.apiDesignModeDeleteAll(designid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#apiDesignModeDeleteAll");
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
 **designid** | **Integer**|  |

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

<a name="apiDesignParameterDeleteAll"></a>
# **apiDesignParameterDeleteAll**
> apiDesignParameterDeleteAll(designid)



Delete params

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      apiInstance.apiDesignParameterDeleteAll(designid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#apiDesignParameterDeleteAll");
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
 **designid** | **Integer**|  |

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

<a name="apiDesignSupplyDeleteAll"></a>
# **apiDesignSupplyDeleteAll**
> apiDesignSupplyDeleteAll(designid)



Delete supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      apiInstance.apiDesignSupplyDeleteAll(designid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#apiDesignSupplyDeleteAll");
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
 **designid** | **Integer**|  |

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

<a name="designCommitCreate"></a>
# **designCommitCreate**
> DesignVersion designCommitCreate(designid, data)



Commit a version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    DesignVersion data = new DesignVersion(); // DesignVersion | 
    try {
      DesignVersion result = apiInstance.designCommitCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designCommitCreate");
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
 **designid** | **Integer**|  |
 **data** | [**DesignVersion**](DesignVersion.md)|  |

### Return type

[**DesignVersion**](DesignVersion.md)

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

<a name="designComputepowerCreate"></a>
# **designComputepowerCreate**
> List&lt;ComputedPower&gt; designComputepowerCreate(designid, process, rc, voltage, temperature, data)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    String process = "process_example"; // String | 
    String rc = "rc_example"; // String | 
    BigDecimal voltage = new BigDecimal(); // BigDecimal | 
    Integer temperature = 56; // Integer | 
    List<PinState> data = Arrays.asList(); // List<PinState> | 
    try {
      List<ComputedPower> result = apiInstance.designComputepowerCreate(designid, process, rc, voltage, temperature, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designComputepowerCreate");
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
 **designid** | **Integer**|  |
 **process** | **String**|  |
 **rc** | **String**|  |
 **voltage** | **BigDecimal**|  |
 **temperature** | **Integer**|  |
 **data** | [**List&lt;PinState&gt;**](PinState.md)|  |

### Return type

[**List&lt;ComputedPower&gt;**](ComputedPower.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Error. Message returned |  -  |
**403** | Not authorized |  -  |
**500** | Internal error |  -  |

<a name="designComputepowerarcCreate"></a>
# **designComputepowerarcCreate**
> ComputedPowerArc designComputepowerarcCreate(designid, process, rc, voltage, temperature, data)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    String process = "process_example"; // String | 
    String rc = "rc_example"; // String | 
    BigDecimal voltage = new BigDecimal(); // BigDecimal | 
    Integer temperature = 56; // Integer | 
    List<PinStateArc> data = Arrays.asList(); // List<PinStateArc> | 
    try {
      ComputedPowerArc result = apiInstance.designComputepowerarcCreate(designid, process, rc, voltage, temperature, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designComputepowerarcCreate");
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
 **designid** | **Integer**|  |
 **process** | **String**|  |
 **rc** | **String**|  |
 **voltage** | **BigDecimal**|  |
 **temperature** | **Integer**|  |
 **data** | [**List&lt;PinStateArc&gt;**](PinStateArc.md)|  |

### Return type

[**ComputedPowerArc**](ComputedPowerArc.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

<a name="designContribpowerCompute1List"></a>
# **designContribpowerCompute1List**
> ComputedContributorPower1 designContribpowerCompute1List(designid, powerid, p, v, t)



Get device data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    String p = "p_example"; // String | Process name
    BigDecimal v = new BigDecimal(); // BigDecimal | Voltage
    Integer t = 56; // Integer | Temperature
    try {
      ComputedContributorPower1 result = apiInstance.designContribpowerCompute1List(designid, powerid, p, v, t);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designContribpowerCompute1List");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |
 **p** | **String**| Process name |
 **v** | **BigDecimal**| Voltage |
 **t** | **Integer**| Temperature |

### Return type

[**ComputedContributorPower1**](ComputedContributorPower1.md)

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

<a name="designContribpowerComputeList"></a>
# **designContribpowerComputeList**
> ComputedContributorPower designContribpowerComputeList(designid, powerid, p, v, t)



Get device data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    String p = "p_example"; // String | Process name
    BigDecimal v = new BigDecimal(); // BigDecimal | Voltage
    Integer t = 56; // Integer | Temperature
    try {
      ComputedContributorPower result = apiInstance.designContribpowerComputeList(designid, powerid, p, v, t);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designContribpowerComputeList");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |
 **p** | **String**| Process name |
 **v** | **BigDecimal**| Voltage |
 **t** | **Integer**| Temperature |

### Return type

[**ComputedContributorPower**](ComputedContributorPower.md)

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

<a name="designContribpowerCreate"></a>
# **designContribpowerCreate**
> ContribPower designContribpowerCreate(designid, data)



Create a new contributor power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    ContribPower data = new ContribPower(); // ContribPower | 
    try {
      ContribPower result = apiInstance.designContribpowerCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designContribpowerCreate");
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
 **designid** | **Integer**|  |
 **data** | [**ContribPower**](ContribPower.md)|  |

### Return type

[**ContribPower**](ContribPower.md)

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

<a name="designContribpowerDelete"></a>
# **designContribpowerDelete**
> designContribpowerDelete(designid, powerid)



Delete a contributor power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    try {
      apiInstance.designContribpowerDelete(designid, powerid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designContribpowerDelete");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |

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

<a name="designContribpowerList"></a>
# **designContribpowerList**
> List&lt;ContribPower&gt; designContribpowerList(designid)



Get list of contributor powers

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<ContribPower> result = apiInstance.designContribpowerList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designContribpowerList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;ContribPower&gt;**](ContribPower.md)

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

<a name="designContribpowerRead"></a>
# **designContribpowerRead**
> ContribPower designContribpowerRead(designid, powerid)



Get a contributor power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    try {
      ContribPower result = apiInstance.designContribpowerRead(designid, powerid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designContribpowerRead");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |

### Return type

[**ContribPower**](ContribPower.md)

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

<a name="designContribpowerUpdate"></a>
# **designContribpowerUpdate**
> ContribPower designContribpowerUpdate(designid, powerid, data)



Update a contributor power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    ContribPower data = new ContribPower(); // ContribPower | 
    try {
      ContribPower result = apiInstance.designContribpowerUpdate(designid, powerid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designContribpowerUpdate");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |
 **data** | [**ContribPower**](ContribPower.md)|  |

### Return type

[**ContribPower**](ContribPower.md)

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

<a name="designDashboardAccessCreate"></a>
# **designDashboardAccessCreate**
> designDashboardAccessCreate(dashboardid, designid, projectid, masterdesignid)



Update design dashboard access

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String dashboardid = "dashboardid_example"; // String | 
    String designid = "designid_example"; // String | 
    Integer projectid = 56; // Integer | 
    Integer masterdesignid = 56; // Integer | 
    try {
      apiInstance.designDashboardAccessCreate(dashboardid, designid, projectid, masterdesignid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardAccessCreate");
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
 **dashboardid** | **String**|  |
 **designid** | **String**|  |
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

<a name="designDashboardCloneCreate"></a>
# **designDashboardCloneCreate**
> Dashboard designDashboardCloneCreate(designid, dashboardid)



Clone a dashboard

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    try {
      Dashboard result = apiInstance.designDashboardCloneCreate(designid, dashboardid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardCloneCreate");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |

### Return type

[**Dashboard**](Dashboard.md)

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

<a name="designDashboardColumnCreate"></a>
# **designDashboardColumnCreate**
> DashboardColumn designDashboardColumnCreate(designid, dashboardid, data)



Create a dashboard column

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    DashboardColumn data = new DashboardColumn(); // DashboardColumn | 
    try {
      DashboardColumn result = apiInstance.designDashboardColumnCreate(designid, dashboardid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardColumnCreate");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |
 **data** | [**DashboardColumn**](DashboardColumn.md)|  |

### Return type

[**DashboardColumn**](DashboardColumn.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designDashboardColumnDelete"></a>
# **designDashboardColumnDelete**
> DashboardColumn designDashboardColumnDelete(designid, dashboardid, columnid, data)



Delete a dashboard column

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    Integer columnid = 56; // Integer | 
    DashboardColumn data = new DashboardColumn(); // DashboardColumn | 
    try {
      DashboardColumn result = apiInstance.designDashboardColumnDelete(designid, dashboardid, columnid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardColumnDelete");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |
 **columnid** | **Integer**|  |
 **data** | [**DashboardColumn**](DashboardColumn.md)|  |

### Return type

[**DashboardColumn**](DashboardColumn.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designDashboardColumnList"></a>
# **designDashboardColumnList**
> List&lt;DashboardColumn&gt; designDashboardColumnList(designid, dashboardid)



Get dashboard columns

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    try {
      List<DashboardColumn> result = apiInstance.designDashboardColumnList(designid, dashboardid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardColumnList");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |

### Return type

[**List&lt;DashboardColumn&gt;**](DashboardColumn.md)

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

<a name="designDashboardColumnRead"></a>
# **designDashboardColumnRead**
> DashboardColumn designDashboardColumnRead(designid, dashboardid, columnid)



Get a dashboard column

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    Integer columnid = 56; // Integer | 
    try {
      DashboardColumn result = apiInstance.designDashboardColumnRead(designid, dashboardid, columnid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardColumnRead");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |
 **columnid** | **Integer**|  |

### Return type

[**DashboardColumn**](DashboardColumn.md)

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

<a name="designDashboardColumnUpdate"></a>
# **designDashboardColumnUpdate**
> DashboardColumn designDashboardColumnUpdate(designid, dashboardid, columnid, data)



Update a dashboard column

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    Integer columnid = 56; // Integer | 
    DashboardColumn data = new DashboardColumn(); // DashboardColumn | 
    try {
      DashboardColumn result = apiInstance.designDashboardColumnUpdate(designid, dashboardid, columnid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardColumnUpdate");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |
 **columnid** | **Integer**|  |
 **data** | [**DashboardColumn**](DashboardColumn.md)|  |

### Return type

[**DashboardColumn**](DashboardColumn.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designDashboardCreate"></a>
# **designDashboardCreate**
> Dashboard designDashboardCreate(designid, data)



Create a dashboards

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Dashboard data = new Dashboard(); // Dashboard | 
    try {
      Dashboard result = apiInstance.designDashboardCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardCreate");
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
 **designid** | **Integer**|  |
 **data** | [**Dashboard**](Dashboard.md)|  |

### Return type

[**Dashboard**](Dashboard.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designDashboardDataList"></a>
# **designDashboardDataList**
> Dashboard designDashboardDataList(designid, dashboardid)



Get a dashboard

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    try {
      Dashboard result = apiInstance.designDashboardDataList(designid, dashboardid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardDataList");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |

### Return type

[**Dashboard**](Dashboard.md)

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

<a name="designDashboardDelete"></a>
# **designDashboardDelete**
> designDashboardDelete(designid, dashboardid)



Delete a dashboards

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    try {
      apiInstance.designDashboardDelete(designid, dashboardid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardDelete");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |

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

<a name="designDashboardList"></a>
# **designDashboardList**
> List&lt;Dashboard&gt; designDashboardList(designid)



Get a list of dashboards

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<Dashboard> result = apiInstance.designDashboardList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;Dashboard&gt;**](Dashboard.md)

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

<a name="designDashboardRead"></a>
# **designDashboardRead**
> Dashboard designDashboardRead(designid, dashboardid)



Get a dashboard

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    try {
      Dashboard result = apiInstance.designDashboardRead(designid, dashboardid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardRead");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |

### Return type

[**Dashboard**](Dashboard.md)

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

<a name="designDashboardRowCreate"></a>
# **designDashboardRowCreate**
> DashboardRow designDashboardRowCreate(designid, dashboardid, data)



Create a dashboard row

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    DashboardRow data = new DashboardRow(); // DashboardRow | 
    try {
      DashboardRow result = apiInstance.designDashboardRowCreate(designid, dashboardid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardRowCreate");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |
 **data** | [**DashboardRow**](DashboardRow.md)|  |

### Return type

[**DashboardRow**](DashboardRow.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designDashboardRowDelete"></a>
# **designDashboardRowDelete**
> DashboardRow designDashboardRowDelete(designid, dashboardid, rowid, data)



Delete a dashboard column

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    Integer rowid = 56; // Integer | 
    DashboardRow data = new DashboardRow(); // DashboardRow | 
    try {
      DashboardRow result = apiInstance.designDashboardRowDelete(designid, dashboardid, rowid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardRowDelete");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |
 **rowid** | **Integer**|  |
 **data** | [**DashboardRow**](DashboardRow.md)|  |

### Return type

[**DashboardRow**](DashboardRow.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designDashboardRowList"></a>
# **designDashboardRowList**
> List&lt;DashboardRow&gt; designDashboardRowList(designid, dashboardid)



Get dashboard rows

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    try {
      List<DashboardRow> result = apiInstance.designDashboardRowList(designid, dashboardid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardRowList");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |

### Return type

[**List&lt;DashboardRow&gt;**](DashboardRow.md)

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

<a name="designDashboardRowRead"></a>
# **designDashboardRowRead**
> DashboardRow designDashboardRowRead(designid, dashboardid, rowid)



Get a dashboard row

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    Integer rowid = 56; // Integer | 
    try {
      DashboardRow result = apiInstance.designDashboardRowRead(designid, dashboardid, rowid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardRowRead");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |
 **rowid** | **Integer**|  |

### Return type

[**DashboardRow**](DashboardRow.md)

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

<a name="designDashboardRowUpdate"></a>
# **designDashboardRowUpdate**
> DashboardRow designDashboardRowUpdate(designid, dashboardid, rowid, data)



Update a dashboard row

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    Integer rowid = 56; // Integer | 
    DashboardRow data = new DashboardRow(); // DashboardRow | 
    try {
      DashboardRow result = apiInstance.designDashboardRowUpdate(designid, dashboardid, rowid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardRowUpdate");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |
 **rowid** | **Integer**|  |
 **data** | [**DashboardRow**](DashboardRow.md)|  |

### Return type

[**DashboardRow**](DashboardRow.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designDashboardUpdate"></a>
# **designDashboardUpdate**
> Dashboard designDashboardUpdate(designid, dashboardid, data)



Update a dashboards

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dashboardid = 56; // Integer | 
    Dashboard data = new Dashboard(); // Dashboard | 
    try {
      Dashboard result = apiInstance.designDashboardUpdate(designid, dashboardid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardUpdate");
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
 **designid** | **Integer**|  |
 **dashboardid** | **Integer**|  |
 **data** | [**Dashboard**](Dashboard.md)|  |

### Return type

[**Dashboard**](Dashboard.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Bad request, error returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designDashboardUpdateList"></a>
# **designDashboardUpdateList**
> UpdateData designDashboardUpdateList(designid, dashboardid)



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String designid = "designid_example"; // String | 
    Integer dashboardid = 56; // Integer | 
    try {
      UpdateData result = apiInstance.designDashboardUpdateList(designid, dashboardid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDashboardUpdateList");
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
 **designid** | **String**|  |
 **dashboardid** | **Integer**|  |

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

<a name="designDataCreate"></a>
# **designDataCreate**
> designDataCreate(uuid, data)



Upload design data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String uuid = "uuid_example"; // String | 
    String data = "data_example"; // String | 
    try {
      apiInstance.designDataCreate(uuid, data);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDataCreate");
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
 **uuid** | **String**|  |
 **data** | **String**|  |

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
**400** | Bad request |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designDataDelete"></a>
# **designDataDelete**
> designDataDelete(designid, dataid)



Delete design data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dataid = 56; // Integer | 
    try {
      apiInstance.designDataDelete(designid, dataid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDataDelete");
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
 **designid** | **Integer**|  |
 **dataid** | **Integer**|  |

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

<a name="designDataList"></a>
# **designDataList**
> List&lt;DesignData&gt; designDataList(designid, fields, filter)



Get design data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    String fields = "fields_example"; // String | 
    String filter = "filter_example"; // String | 
    try {
      List<DesignData> result = apiInstance.designDataList(designid, fields, filter);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDataList");
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
 **designid** | **Integer**|  |
 **fields** | **String**|  | [optional]
 **filter** | **String**|  | [optional]

### Return type

[**List&lt;DesignData&gt;**](DesignData.md)

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

<a name="designDataRead"></a>
# **designDataRead**
> DesignData designDataRead(designid, dataid)



Get design data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dataid = 56; // Integer | 
    try {
      DesignData result = apiInstance.designDataRead(designid, dataid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDataRead");
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
 **designid** | **Integer**|  |
 **dataid** | **Integer**|  |

### Return type

[**DesignData**](DesignData.md)

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

<a name="designDataUpdate"></a>
# **designDataUpdate**
> DesignData designDataUpdate(designid, dataid, data)



Update design data

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer dataid = 56; // Integer | 
    DesignData data = new DesignData(); // DesignData | 
    try {
      DesignData result = apiInstance.designDataUpdate(designid, dataid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designDataUpdate");
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
 **designid** | **Integer**|  |
 **dataid** | **Integer**|  |
 **data** | [**DesignData**](DesignData.md)|  |

### Return type

[**DesignData**](DesignData.md)

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

<a name="designEnergyCreate"></a>
# **designEnergyCreate**
> List&lt;DesignPinEnergy&gt; designEnergyCreate(designid, data)



Add pin powers

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    DesignPinEnergy data = new DesignPinEnergy(); // DesignPinEnergy | 
    try {
      List<DesignPinEnergy> result = apiInstance.designEnergyCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designEnergyCreate");
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
 **designid** | **Integer**|  |
 **data** | [**DesignPinEnergy**](DesignPinEnergy.md)|  |

### Return type

[**List&lt;DesignPinEnergy&gt;**](DesignPinEnergy.md)

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

<a name="designEnergyList"></a>
# **designEnergyList**
> PagedDesignPinEnergy designEnergyList(designid, page, number, process, rc, voltage, temperature)



Get list of all pin powers

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer page = 56; // Integer | 
    Integer number = 56; // Integer | 
    String process = "process_example"; // String | Model corner name
    String rc = "rc_example"; // String | RC corner name
    BigDecimal voltage = new BigDecimal(); // BigDecimal | Voltage
    Integer temperature = 56; // Integer | Temperature
    try {
      PagedDesignPinEnergy result = apiInstance.designEnergyList(designid, page, number, process, rc, voltage, temperature);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designEnergyList");
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
 **designid** | **Integer**|  |
 **page** | **Integer**|  | [optional]
 **number** | **Integer**|  | [optional]
 **process** | **String**| Model corner name | [optional]
 **rc** | **String**| RC corner name | [optional]
 **voltage** | **BigDecimal**| Voltage | [optional]
 **temperature** | **Integer**| Temperature | [optional]

### Return type

[**PagedDesignPinEnergy**](PagedDesignPinEnergy.md)

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

<a name="designFfCreate"></a>
# **designFfCreate**
> DesignFF designFfCreate(designid, data)



Create a new ff

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    DesignFF data = new DesignFF(); // DesignFF | 
    try {
      DesignFF result = apiInstance.designFfCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designFfCreate");
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
 **designid** | **Integer**|  |
 **data** | [**DesignFF**](DesignFF.md)|  |

### Return type

[**DesignFF**](DesignFF.md)

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

<a name="designFfDelete"></a>
# **designFfDelete**
> designFfDelete(designid, ffid)



Delete a ff

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer ffid = 56; // Integer | 
    try {
      apiInstance.designFfDelete(designid, ffid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designFfDelete");
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
 **designid** | **Integer**|  |
 **ffid** | **Integer**|  |

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

<a name="designFfList"></a>
# **designFfList**
> List&lt;DesignFF&gt; designFfList(designid)



Get list of ffs

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<DesignFF> result = apiInstance.designFfList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designFfList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;DesignFF&gt;**](DesignFF.md)

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

<a name="designFfRead"></a>
# **designFfRead**
> DesignFF designFfRead(designid, ffid)



Get a ff

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer ffid = 56; // Integer | 
    try {
      DesignFF result = apiInstance.designFfRead(designid, ffid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designFfRead");
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
 **designid** | **Integer**|  |
 **ffid** | **Integer**|  |

### Return type

[**DesignFF**](DesignFF.md)

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

<a name="designFfUpdate"></a>
# **designFfUpdate**
> DesignFF designFfUpdate(designid, ffid, data)



Update a ff

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer ffid = 56; // Integer | 
    DesignFF data = new DesignFF(); // DesignFF | 
    try {
      DesignFF result = apiInstance.designFfUpdate(designid, ffid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designFfUpdate");
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
 **designid** | **Integer**|  |
 **ffid** | **Integer**|  |
 **data** | [**DesignFF**](DesignFF.md)|  |

### Return type

[**DesignFF**](DesignFF.md)

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

<a name="designHierarchyGroupCreate"></a>
# **designHierarchyGroupCreate**
> Hier designHierarchyGroupCreate(designid, data)



Create new hierarchy group

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Hier data = new Hier(); // Hier | 
    try {
      Hier result = apiInstance.designHierarchyGroupCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designHierarchyGroupCreate");
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
 **designid** | **Integer**|  |
 **data** | [**Hier**](Hier.md)|  |

### Return type

[**Hier**](Hier.md)

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

<a name="designHierarchyGroupDelete"></a>
# **designHierarchyGroupDelete**
> designHierarchyGroupDelete(designid, groupid)



Delete a hierarchy group

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer groupid = 56; // Integer | 
    try {
      apiInstance.designHierarchyGroupDelete(designid, groupid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designHierarchyGroupDelete");
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
 **designid** | **Integer**|  |
 **groupid** | **Integer**|  |

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

<a name="designHierarchyGroupUpdate"></a>
# **designHierarchyGroupUpdate**
> Hier designHierarchyGroupUpdate(designid, groupid, data)



Update hierarchy group

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer groupid = 56; // Integer | 
    Hier data = new Hier(); // Hier | 
    try {
      Hier result = apiInstance.designHierarchyGroupUpdate(designid, groupid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designHierarchyGroupUpdate");
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
 **designid** | **Integer**|  |
 **groupid** | **Integer**|  |
 **data** | [**Hier**](Hier.md)|  |

### Return type

[**Hier**](Hier.md)

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

<a name="designHierarchyList"></a>
# **designHierarchyList**
> List&lt;Hier&gt; designHierarchyList(designid)



Get hierarchy

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<Hier> result = apiInstance.designHierarchyList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designHierarchyList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;Hier&gt;**](Hier.md)

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

<a name="designHierarchyUpdate"></a>
# **designHierarchyUpdate**
> List&lt;Hier&gt; designHierarchyUpdate(designid, data)



Update hierarchy

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Hier data = new Hier(); // Hier | 
    try {
      List<Hier> result = apiInstance.designHierarchyUpdate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designHierarchyUpdate");
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
 **designid** | **Integer**|  |
 **data** | [**Hier**](Hier.md)|  |

### Return type

[**List&lt;Hier&gt;**](Hier.md)

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

<a name="designInstanceBulkCreate"></a>
# **designInstanceBulkCreate**
> List&lt;Instance&gt; designInstanceBulkCreate(designid, data, _return)



Create a new instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    List<Instance> data = Arrays.asList(); // List<Instance> | 
    Boolean _return = false; // Boolean | 
    try {
      List<Instance> result = apiInstance.designInstanceBulkCreate(designid, data, _return);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceBulkCreate");
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
 **designid** | **Integer**|  |
 **data** | [**List&lt;Instance&gt;**](Instance.md)|  |
 **_return** | **Boolean**|  | [optional] [default to false]

### Return type

[**List&lt;Instance&gt;**](Instance.md)

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

<a name="designInstanceClone"></a>
# **designInstanceClone**
> Instance designInstanceClone(designid, instanceid)



Clone an instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer instanceid = 56; // Integer | 
    try {
      Instance result = apiInstance.designInstanceClone(designid, instanceid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceClone");
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
 **designid** | **Integer**|  |
 **instanceid** | **Integer**|  |

### Return type

[**Instance**](Instance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**403** | not authorized |  -  |
**404** | Not found |  -  |

<a name="designInstanceCreate"></a>
# **designInstanceCreate**
> Instance designInstanceCreate(designid, data)



Create a new instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Instance data = new Instance(); // Instance | 
    try {
      Instance result = apiInstance.designInstanceCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceCreate");
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
 **designid** | **Integer**|  |
 **data** | [**Instance**](Instance.md)|  |

### Return type

[**Instance**](Instance.md)

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

<a name="designInstanceDelete"></a>
# **designInstanceDelete**
> designInstanceDelete(designid, instanceid)



Delete instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer instanceid = 56; // Integer | 
    try {
      apiInstance.designInstanceDelete(designid, instanceid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceDelete");
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
 **designid** | **Integer**|  |
 **instanceid** | **Integer**|  |

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

<a name="designInstanceList"></a>
# **designInstanceList**
> PagedInstance designInstanceList(designid, page, number)



Get list of instances

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer page = 56; // Integer | 
    Integer number = 56; // Integer | 
    try {
      PagedInstance result = apiInstance.designInstanceList(designid, page, number);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceList");
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
 **designid** | **Integer**|  |
 **page** | **Integer**|  | [optional]
 **number** | **Integer**|  | [optional]

### Return type

[**PagedInstance**](PagedInstance.md)

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

<a name="designInstanceRead"></a>
# **designInstanceRead**
> Instance designInstanceRead(designid, instanceid)



Get a design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer instanceid = 56; // Integer | 
    try {
      Instance result = apiInstance.designInstanceRead(designid, instanceid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceRead");
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
 **designid** | **Integer**|  |
 **instanceid** | **Integer**|  |

### Return type

[**Instance**](Instance.md)

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

<a name="designInstanceSupplyCreate"></a>
# **designInstanceSupplyCreate**
> List&lt;InstanceSupply&gt; designInstanceSupplyCreate(designid, instanceid, data)



Update instance supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer instanceid = 56; // Integer | 
    InstanceSupply data = new InstanceSupply(); // InstanceSupply | 
    try {
      List<InstanceSupply> result = apiInstance.designInstanceSupplyCreate(designid, instanceid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceSupplyCreate");
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
 **designid** | **Integer**|  |
 **instanceid** | **Integer**|  |
 **data** | [**InstanceSupply**](InstanceSupply.md)|  |

### Return type

[**List&lt;InstanceSupply&gt;**](InstanceSupply.md)

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

<a name="designInstanceSupplyList"></a>
# **designInstanceSupplyList**
> List&lt;InstanceSupply&gt; designInstanceSupplyList(designid, instanceid)



Get instance supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer instanceid = 56; // Integer | 
    try {
      List<InstanceSupply> result = apiInstance.designInstanceSupplyList(designid, instanceid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceSupplyList");
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
 **designid** | **Integer**|  |
 **instanceid** | **Integer**|  |

### Return type

[**List&lt;InstanceSupply&gt;**](InstanceSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**403** | Not auhtorized |  -  |
**404** | Not found |  -  |

<a name="designInstanceSupplyRead"></a>
# **designInstanceSupplyRead**
> InstanceSupply designInstanceSupplyRead(designid, instanceid, supplyid)



Get an instance supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer instanceid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      InstanceSupply result = apiInstance.designInstanceSupplyRead(designid, instanceid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceSupplyRead");
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
 **designid** | **Integer**|  |
 **instanceid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**InstanceSupply**](InstanceSupply.md)

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

<a name="designInstanceSupplyUpdate"></a>
# **designInstanceSupplyUpdate**
> InstanceSupply designInstanceSupplyUpdate(designid, instanceid, supplyid, data)



Update an instance supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer instanceid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    InstanceSupply data = new InstanceSupply(); // InstanceSupply | 
    try {
      InstanceSupply result = apiInstance.designInstanceSupplyUpdate(designid, instanceid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceSupplyUpdate");
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
 **designid** | **Integer**|  |
 **instanceid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **data** | [**InstanceSupply**](InstanceSupply.md)|  |

### Return type

[**InstanceSupply**](InstanceSupply.md)

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

<a name="designInstanceUpdate"></a>
# **designInstanceUpdate**
> Instance designInstanceUpdate(designid, instanceid, data)



Update instance

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer instanceid = 56; // Integer | 
    Instance data = new Instance(); // Instance | 
    try {
      Instance result = apiInstance.designInstanceUpdate(designid, instanceid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceUpdate");
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
 **designid** | **Integer**|  |
 **instanceid** | **Integer**|  |
 **data** | [**Instance**](Instance.md)|  |

### Return type

[**Instance**](Instance.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inut data |  -  |
**403** | Not authoried |  -  |
**404** | Not found |  -  |

<a name="designInstanceUpdatemasterCreate"></a>
# **designInstanceUpdatemasterCreate**
> List&lt;Instance&gt; designInstanceUpdatemasterCreate(designid, instanceid, masterid)



Update instance master

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer instanceid = 56; // Integer | 
    Integer masterid = 56; // Integer | 
    try {
      List<Instance> result = apiInstance.designInstanceUpdatemasterCreate(designid, instanceid, masterid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstanceUpdatemasterCreate");
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
 **designid** | **Integer**|  |
 **instanceid** | **Integer**|  |
 **masterid** | **Integer**|  |

### Return type

[**List&lt;Instance&gt;**](Instance.md)

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

<a name="designInstantiableList"></a>
# **designInstantiableList**
> List&lt;DesignMaster&gt; designInstantiableList(designid)



Get list of designs that can be instantiated in the given design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<DesignMaster> result = apiInstance.designInstantiableList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designInstantiableList");
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
 **designid** | **Integer**|  |

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

<a name="designLatchCreate"></a>
# **designLatchCreate**
> DesignLatch designLatchCreate(designid, data)



Create a new latch

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    DesignLatch data = new DesignLatch(); // DesignLatch | 
    try {
      DesignLatch result = apiInstance.designLatchCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLatchCreate");
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
 **designid** | **Integer**|  |
 **data** | [**DesignLatch**](DesignLatch.md)|  |

### Return type

[**DesignLatch**](DesignLatch.md)

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

<a name="designLatchDelete"></a>
# **designLatchDelete**
> designLatchDelete(designid, latchid)



Delete a latch

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer latchid = 56; // Integer | 
    try {
      apiInstance.designLatchDelete(designid, latchid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLatchDelete");
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
 **designid** | **Integer**|  |
 **latchid** | **Integer**|  |

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

<a name="designLatchList"></a>
# **designLatchList**
> List&lt;DesignLatch&gt; designLatchList(designid)



Get list of latches

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<DesignLatch> result = apiInstance.designLatchList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLatchList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;DesignLatch&gt;**](DesignLatch.md)

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

<a name="designLatchRead"></a>
# **designLatchRead**
> DesignLatch designLatchRead(designid, latchid)



Get a latch

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer latchid = 56; // Integer | 
    try {
      DesignLatch result = apiInstance.designLatchRead(designid, latchid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLatchRead");
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
 **designid** | **Integer**|  |
 **latchid** | **Integer**|  |

### Return type

[**DesignLatch**](DesignLatch.md)

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

<a name="designLatchUpdate"></a>
# **designLatchUpdate**
> DesignLatch designLatchUpdate(designid, latchid, data)



Update a latch

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer latchid = 56; // Integer | 
    DesignLatch data = new DesignLatch(); // DesignLatch | 
    try {
      DesignLatch result = apiInstance.designLatchUpdate(designid, latchid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLatchUpdate");
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
 **designid** | **Integer**|  |
 **latchid** | **Integer**|  |
 **data** | [**DesignLatch**](DesignLatch.md)|  |

### Return type

[**DesignLatch**](DesignLatch.md)

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

<a name="designLeakagepowerCreate"></a>
# **designLeakagepowerCreate**
> LeakagePower designLeakagepowerCreate(designid, data)



Create a new leakage power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    LeakagePower data = new LeakagePower(); // LeakagePower | 
    try {
      LeakagePower result = apiInstance.designLeakagepowerCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLeakagepowerCreate");
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
 **designid** | **Integer**|  |
 **data** | [**LeakagePower**](LeakagePower.md)|  |

### Return type

[**LeakagePower**](LeakagePower.md)

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

<a name="designLeakagepowerDelete"></a>
# **designLeakagepowerDelete**
> designLeakagepowerDelete(designid, powerid)



Delete a parameter

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    try {
      apiInstance.designLeakagepowerDelete(designid, powerid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLeakagepowerDelete");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |

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

<a name="designLeakagepowerList"></a>
# **designLeakagepowerList**
> PagedLeakagePower designLeakagepowerList(designid, page, number, process, rc, voltage, temperature)



Get list of leakage powers

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer page = 56; // Integer | 
    Integer number = 56; // Integer | 
    String process = "process_example"; // String | Model corner name
    String rc = "rc_example"; // String | RC corner name
    BigDecimal voltage = new BigDecimal(); // BigDecimal | Voltage
    Integer temperature = 56; // Integer | Temperature
    try {
      PagedLeakagePower result = apiInstance.designLeakagepowerList(designid, page, number, process, rc, voltage, temperature);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLeakagepowerList");
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
 **designid** | **Integer**|  |
 **page** | **Integer**|  | [optional]
 **number** | **Integer**|  | [optional]
 **process** | **String**| Model corner name | [optional]
 **rc** | **String**| RC corner name | [optional]
 **voltage** | **BigDecimal**| Voltage | [optional]
 **temperature** | **Integer**| Temperature | [optional]

### Return type

[**PagedLeakagePower**](PagedLeakagePower.md)

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

<a name="designLeakagepowerRead"></a>
# **designLeakagepowerRead**
> LeakagePower designLeakagepowerRead(designid, powerid)



Get a parameter

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    try {
      LeakagePower result = apiInstance.designLeakagepowerRead(designid, powerid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLeakagepowerRead");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |

### Return type

[**LeakagePower**](LeakagePower.md)

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

<a name="designLeakagepowerUpdate"></a>
# **designLeakagepowerUpdate**
> LeakagePower designLeakagepowerUpdate(designid, powerid, data)



Update a parameter

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    LeakagePower data = new LeakagePower(); // LeakagePower | 
    try {
      LeakagePower result = apiInstance.designLeakagepowerUpdate(designid, powerid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designLeakagepowerUpdate");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |
 **data** | [**LeakagePower**](LeakagePower.md)|  |

### Return type

[**LeakagePower**](LeakagePower.md)

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

<a name="designModeClone"></a>
# **designModeClone**
> Mode designModeClone(designid, modeid)



Clone a design mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      Mode result = apiInstance.designModeClone(designid, modeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeClone");
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
 **designid** | **Integer**|  |
 **modeid** | **Integer**|  |

### Return type

[**Mode**](Mode.md)

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

<a name="designModeCreate"></a>
# **designModeCreate**
> Mode designModeCreate(designid, data)



Create a new mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Mode data = new Mode(); // Mode | 
    try {
      Mode result = apiInstance.designModeCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeCreate");
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
 **designid** | **Integer**|  |
 **data** | [**Mode**](Mode.md)|  |

### Return type

[**Mode**](Mode.md)

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

<a name="designModeDelete"></a>
# **designModeDelete**
> designModeDelete(designid, modeid)



Delete a design mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      apiInstance.designModeDelete(designid, modeid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeDelete");
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
 **designid** | **Integer**|  |
 **modeid** | **Integer**|  |

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

<a name="designModeList"></a>
# **designModeList**
> List&lt;Mode&gt; designModeList(designid)



Get list of design modes

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<Mode> result = apiInstance.designModeList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;Mode&gt;**](Mode.md)

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

<a name="designModePowerList"></a>
# **designModePowerList**
> designModePowerList(designid, modeid)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      apiInstance.designModePowerList(designid, modeid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModePowerList");
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
 **designid** | **Integer**|  |
 **modeid** | **Integer**|  |

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

<a name="designModePowerdistributionList"></a>
# **designModePowerdistributionList**
> designModePowerdistributionList(designid, modeid)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      apiInstance.designModePowerdistributionList(designid, modeid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModePowerdistributionList");
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
 **designid** | **Integer**|  |
 **modeid** | **Integer**|  |

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

<a name="designModeRead"></a>
# **designModeRead**
> Mode designModeRead(designid, modeid)



Get a design mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      Mode result = apiInstance.designModeRead(designid, modeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeRead");
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
 **designid** | **Integer**|  |
 **modeid** | **Integer**|  |

### Return type

[**Mode**](Mode.md)

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

<a name="designModeSupplyComputepowerCreate"></a>
# **designModeSupplyComputepowerCreate**
> designModeSupplyComputepowerCreate(designid, modeid, supplyid, data)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    ComputePower1 data = new ComputePower1(); // ComputePower1 | 
    try {
      apiInstance.designModeSupplyComputepowerCreate(designid, modeid, supplyid, data);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeSupplyComputepowerCreate");
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
 **designid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **data** | [**ComputePower1**](ComputePower1.md)|  |

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
**200** | Computed value(s) returned |  -  |
**400** | Error. Message returned |  -  |
**500** | Internal error |  -  |

<a name="designModeSupplyComputepowertableCreate"></a>
# **designModeSupplyComputepowertableCreate**
> designModeSupplyComputepowertableCreate(designid, modeid, supplyid, data)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    ComputePower2 data = new ComputePower2(); // ComputePower2 | 
    try {
      apiInstance.designModeSupplyComputepowertableCreate(designid, modeid, supplyid, data);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeSupplyComputepowertableCreate");
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
 **designid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **data** | [**ComputePower2**](ComputePower2.md)|  |

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
**200** | Computed value(s) returned |  -  |
**400** | Error. Message returned |  -  |
**500** | Internal error |  -  |

<a name="designModeSupplystateList"></a>
# **designModeSupplystateList**
> SupplyModeState designModeSupplystateList(designid, supplyid, modeid)



Get list of supply states per mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      SupplyModeState result = apiInstance.designModeSupplystateList(designid, supplyid, modeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeSupplystateList");
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
 **designid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **modeid** | **Integer**|  |

### Return type

[**SupplyModeState**](SupplyModeState.md)

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

<a name="designModeSupplystateUpdate"></a>
# **designModeSupplystateUpdate**
> List&lt;SupplyModeState&gt; designModeSupplystateUpdate(designid, supplyid, modeid, data)



Update a supply state per mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    SupplyModeState data = new SupplyModeState(); // SupplyModeState | 
    try {
      List<SupplyModeState> result = apiInstance.designModeSupplystateUpdate(designid, supplyid, modeid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeSupplystateUpdate");
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
 **designid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **data** | [**SupplyModeState**](SupplyModeState.md)|  |

### Return type

[**List&lt;SupplyModeState&gt;**](SupplyModeState.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inut data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not allowed |  -  |

<a name="designModeUpdate"></a>
# **designModeUpdate**
> Mode designModeUpdate(designid, modeid, data)



Update a design mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    Mode data = new Mode(); // Mode | 
    try {
      Mode result = apiInstance.designModeUpdate(designid, modeid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designModeUpdate");
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
 **designid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **data** | [**Mode**](Mode.md)|  |

### Return type

[**Mode**](Mode.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inut data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designParameterClone"></a>
# **designParameterClone**
> Param designParameterClone(designid, paramid)



Clode a mode param

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    try {
      Param result = apiInstance.designParameterClone(designid, paramid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designParameterClone");
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
 **designid** | **Integer**|  |
 **paramid** | **Integer**|  |

### Return type

[**Param**](Param.md)

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

<a name="designParameterCreate"></a>
# **designParameterCreate**
> Param designParameterCreate(designid, data)



Create a new parameter

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Param data = new Param(); // Param | 
    try {
      Param result = apiInstance.designParameterCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designParameterCreate");
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
 **designid** | **Integer**|  |
 **data** | [**Param**](Param.md)|  |

### Return type

[**Param**](Param.md)

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

<a name="designParameterDelete"></a>
# **designParameterDelete**
> designParameterDelete(designid, paramid)



Delete a parameter

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    try {
      apiInstance.designParameterDelete(designid, paramid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designParameterDelete");
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
 **designid** | **Integer**|  |
 **paramid** | **Integer**|  |

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

<a name="designParameterList"></a>
# **designParameterList**
> List&lt;Param&gt; designParameterList(designid)



Get list of params

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<Param> result = apiInstance.designParameterList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designParameterList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;Param&gt;**](Param.md)

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

<a name="designParameterRead"></a>
# **designParameterRead**
> Param designParameterRead(designid, paramid)



Get a parameter

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    try {
      Param result = apiInstance.designParameterRead(designid, paramid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designParameterRead");
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
 **designid** | **Integer**|  |
 **paramid** | **Integer**|  |

### Return type

[**Param**](Param.md)

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

<a name="designParameterUpdate"></a>
# **designParameterUpdate**
> Param designParameterUpdate(designid, paramid, data)



Update a parameter

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    Param data = new Param(); // Param | 
    try {
      Param result = apiInstance.designParameterUpdate(designid, paramid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designParameterUpdate");
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
 **designid** | **Integer**|  |
 **paramid** | **Integer**|  |
 **data** | [**Param**](Param.md)|  |

### Return type

[**Param**](Param.md)

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

<a name="designPermissionsList"></a>
# **designPermissionsList**
> designPermissionsList(designid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      apiInstance.designPermissionsList(designid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPermissionsList");
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
 **designid** | **Integer**|  |

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

<a name="designPermissionsUpdate"></a>
# **designPermissionsUpdate**
> designPermissionsUpdate(designid)



Get list of permissions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      apiInstance.designPermissionsUpdate(designid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPermissionsUpdate");
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
 **designid** | **Integer**|  |

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

<a name="designPinCapsCreate"></a>
# **designPinCapsCreate**
> PinCap designPinCapsCreate(designid, pinid, data)



Create a new pin cap

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    PinCap data = new PinCap(); // PinCap | 
    try {
      PinCap result = apiInstance.designPinCapsCreate(designid, pinid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinCapsCreate");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **data** | [**PinCap**](PinCap.md)|  |

### Return type

[**PinCap**](PinCap.md)

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

<a name="designPinCapsDelete"></a>
# **designPinCapsDelete**
> designPinCapsDelete(designid, pinid, capid)



Delete a pin cap

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    Integer capid = 56; // Integer | 
    try {
      apiInstance.designPinCapsDelete(designid, pinid, capid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinCapsDelete");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **capid** | **Integer**|  |

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

<a name="designPinCapsList"></a>
# **designPinCapsList**
> List&lt;PinCap&gt; designPinCapsList(designid, pinid, process, rc, voltage, temperature)



Get list of pin caps

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    String process = "process_example"; // String | Model corner name
    String rc = "rc_example"; // String | RC corner name
    BigDecimal voltage = new BigDecimal(); // BigDecimal | Voltage
    BigDecimal temperature = new BigDecimal(); // BigDecimal | Temperature
    try {
      List<PinCap> result = apiInstance.designPinCapsList(designid, pinid, process, rc, voltage, temperature);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinCapsList");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **process** | **String**| Model corner name | [optional]
 **rc** | **String**| RC corner name | [optional]
 **voltage** | **BigDecimal**| Voltage | [optional]
 **temperature** | **BigDecimal**| Temperature | [optional]

### Return type

[**List&lt;PinCap&gt;**](PinCap.md)

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

<a name="designPinCapsRead"></a>
# **designPinCapsRead**
> PinCap designPinCapsRead(designid, pinid, capid)



Get a pin cap

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    Integer capid = 56; // Integer | 
    try {
      PinCap result = apiInstance.designPinCapsRead(designid, pinid, capid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinCapsRead");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **capid** | **Integer**|  |

### Return type

[**PinCap**](PinCap.md)

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

<a name="designPinCapsUpdate"></a>
# **designPinCapsUpdate**
> PinCap designPinCapsUpdate(designid, pinid, capid, data)



Update a pin power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    Integer capid = 56; // Integer | 
    PinCap data = new PinCap(); // PinCap | 
    try {
      PinCap result = apiInstance.designPinCapsUpdate(designid, pinid, capid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinCapsUpdate");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **capid** | **Integer**|  |
 **data** | [**PinCap**](PinCap.md)|  |

### Return type

[**PinCap**](PinCap.md)

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

<a name="designPinCreate"></a>
# **designPinCreate**
> DesignPin designPinCreate(designid, data)



Create a new pin

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    DesignPin data = new DesignPin(); // DesignPin | 
    try {
      DesignPin result = apiInstance.designPinCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinCreate");
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
 **designid** | **Integer**|  |
 **data** | [**DesignPin**](DesignPin.md)|  |

### Return type

[**DesignPin**](DesignPin.md)

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

<a name="designPinDelete"></a>
# **designPinDelete**
> designPinDelete(designid, pinid)



Delete a pin

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    try {
      apiInstance.designPinDelete(designid, pinid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinDelete");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |

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

<a name="designPinEnergyCreate"></a>
# **designPinEnergyCreate**
> PinEnergy designPinEnergyCreate(designid, pinid, data)



Create a new pin power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    PinEnergy data = new PinEnergy(); // PinEnergy | 
    try {
      PinEnergy result = apiInstance.designPinEnergyCreate(designid, pinid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinEnergyCreate");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **data** | [**PinEnergy**](PinEnergy.md)|  |

### Return type

[**PinEnergy**](PinEnergy.md)

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

<a name="designPinEnergyDelete"></a>
# **designPinEnergyDelete**
> designPinEnergyDelete(designid, pinid, powerid)



Delete a pin power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    try {
      apiInstance.designPinEnergyDelete(designid, pinid, powerid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinEnergyDelete");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **powerid** | **Integer**|  |

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

<a name="designPinEnergyList"></a>
# **designPinEnergyList**
> List&lt;PinEnergy&gt; designPinEnergyList(designid, pinid, process, rc, voltage, temperature)



Get list of pin powers

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    String process = "process_example"; // String | Model corner name
    String rc = "rc_example"; // String | RC corner name
    BigDecimal voltage = new BigDecimal(); // BigDecimal | Voltage
    Integer temperature = 56; // Integer | Temperature
    try {
      List<PinEnergy> result = apiInstance.designPinEnergyList(designid, pinid, process, rc, voltage, temperature);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinEnergyList");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **process** | **String**| Model corner name | [optional]
 **rc** | **String**| RC corner name | [optional]
 **voltage** | **BigDecimal**| Voltage | [optional]
 **temperature** | **Integer**| Temperature | [optional]

### Return type

[**List&lt;PinEnergy&gt;**](PinEnergy.md)

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

<a name="designPinEnergyRead"></a>
# **designPinEnergyRead**
> PinEnergy designPinEnergyRead(designid, pinid, powerid)



Get a pin power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    try {
      PinEnergy result = apiInstance.designPinEnergyRead(designid, pinid, powerid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinEnergyRead");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **powerid** | **Integer**|  |

### Return type

[**PinEnergy**](PinEnergy.md)

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

<a name="designPinEnergyUpdate"></a>
# **designPinEnergyUpdate**
> PinEnergy designPinEnergyUpdate(designid, pinid, powerid, data)



Update a pin power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    PinEnergy data = new PinEnergy(); // PinEnergy | 
    try {
      PinEnergy result = apiInstance.designPinEnergyUpdate(designid, pinid, powerid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinEnergyUpdate");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **powerid** | **Integer**|  |
 **data** | [**PinEnergy**](PinEnergy.md)|  |

### Return type

[**PinEnergy**](PinEnergy.md)

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

<a name="designPinList"></a>
# **designPinList**
> List&lt;DesignPin&gt; designPinList(designid)



Get list of pins

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<DesignPin> result = apiInstance.designPinList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;DesignPin&gt;**](DesignPin.md)

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

<a name="designPinRead"></a>
# **designPinRead**
> DesignPin designPinRead(designid, pinid)



Get a pin

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    try {
      DesignPin result = apiInstance.designPinRead(designid, pinid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinRead");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |

### Return type

[**DesignPin**](DesignPin.md)

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

<a name="designPinUpdate"></a>
# **designPinUpdate**
> DesignPin designPinUpdate(designid, pinid, data)



Update a pin

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer pinid = 56; // Integer | 
    DesignPin data = new DesignPin(); // DesignPin | 
    try {
      DesignPin result = apiInstance.designPinUpdate(designid, pinid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPinUpdate");
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
 **designid** | **Integer**|  |
 **pinid** | **Integer**|  |
 **data** | [**DesignPin**](DesignPin.md)|  |

### Return type

[**DesignPin**](DesignPin.md)

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

<a name="designPowerCreate"></a>
# **designPowerCreate**
> Power designPowerCreate(designid, data)



Create a power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Power data = new Power(); // Power | 
    try {
      Power result = apiInstance.designPowerCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPowerCreate");
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
 **designid** | **Integer**|  |
 **data** | [**Power**](Power.md)|  |

### Return type

[**Power**](Power.md)

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

<a name="designPowerDelete"></a>
# **designPowerDelete**
> designPowerDelete(designid, powerid)



Delete a power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    try {
      apiInstance.designPowerDelete(designid, powerid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPowerDelete");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |

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

<a name="designPowerList"></a>
# **designPowerList**
> List&lt;Power&gt; designPowerList(designid)



Get list of powers

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<Power> result = apiInstance.designPowerList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPowerList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;Power&gt;**](Power.md)

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

<a name="designPowerRead"></a>
# **designPowerRead**
> Power designPowerRead(designid, powerid)



Get a power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    try {
      Power result = apiInstance.designPowerRead(designid, powerid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPowerRead");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |

### Return type

[**Power**](Power.md)

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

<a name="designPowerUpdate"></a>
# **designPowerUpdate**
> Power designPowerUpdate(designid, powerid, data)



Update a power

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer powerid = 56; // Integer | 
    Power data = new Power(); // Power | 
    try {
      Power result = apiInstance.designPowerUpdate(designid, powerid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designPowerUpdate");
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
 **designid** | **Integer**|  |
 **powerid** | **Integer**|  |
 **data** | [**Power**](Power.md)|  |

### Return type

[**Power**](Power.md)

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

<a name="designRead"></a>
# **designRead**
> Design designRead(designid)



Get design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      Design result = apiInstance.designRead(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designRead");
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
 **designid** | **Integer**|  |

### Return type

[**Design**](Design.md)

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

<a name="designRestoreCreate"></a>
# **designRestoreCreate**
> Design designRestoreCreate(designid)



Restore a design version as current version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      Design result = apiInstance.designRestoreCreate(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designRestoreCreate");
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
 **designid** | **Integer**|  |

### Return type

[**Design**](Design.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inut data, error mesage returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designScenarioClone"></a>
# **designScenarioClone**
> DesignScenario designScenarioClone(designid, scenarioid)



Clone a design scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      DesignScenario result = apiInstance.designScenarioClone(designid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioClone");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**DesignScenario**](DesignScenario.md)

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

<a name="designScenarioCreate"></a>
# **designScenarioCreate**
> DesignScenario designScenarioCreate(designid)



Create a scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      DesignScenario result = apiInstance.designScenarioCreate(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioCreate");
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
 **designid** | **Integer**|  |

### Return type

[**DesignScenario**](DesignScenario.md)

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

<a name="designScenarioDelete"></a>
# **designScenarioDelete**
> designScenarioDelete(designid, scenarioid)



Delete a scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      apiInstance.designScenarioDelete(designid, scenarioid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioDelete");
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
 **designid** | **Integer**|  |
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

<a name="designScenarioList"></a>
# **designScenarioList**
> List&lt;DesignScenario&gt; designScenarioList(designid)



Get list of scenarios

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<DesignScenario> result = apiInstance.designScenarioList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;DesignScenario&gt;**](DesignScenario.md)

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

<a name="designScenarioModeConfigDelete"></a>
# **designScenarioModeConfigDelete**
> DesignScenarioModeUtil designScenarioModeConfigDelete(designid, scenarioid, modeid, configid)



Delete a datasheet mode util

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      DesignScenarioModeUtil result = apiInstance.designScenarioModeConfigDelete(designid, scenarioid, modeid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioModeConfigDelete");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **configid** | **Integer**|  |

### Return type

[**DesignScenarioModeUtil**](DesignScenarioModeUtil.md)

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

<a name="designScenarioModeConfigRead"></a>
# **designScenarioModeConfigRead**
> DesignScenarioModeUtil designScenarioModeConfigRead(designid, scenarioid, modeid, configid)



Get datasheet mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      DesignScenarioModeUtil result = apiInstance.designScenarioModeConfigRead(designid, scenarioid, modeid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioModeConfigRead");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **configid** | **Integer**|  |

### Return type

[**DesignScenarioModeUtil**](DesignScenarioModeUtil.md)

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

<a name="designScenarioModeConfigUpdate"></a>
# **designScenarioModeConfigUpdate**
> DesignScenarioModeUtil designScenarioModeConfigUpdate(designid, scenarioid, modeid, configid)



Update a datasheet mode util

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      DesignScenarioModeUtil result = apiInstance.designScenarioModeConfigUpdate(designid, scenarioid, modeid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioModeConfigUpdate");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **configid** | **Integer**|  |

### Return type

[**DesignScenarioModeUtil**](DesignScenarioModeUtil.md)

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

<a name="designScenarioModeCreate"></a>
# **designScenarioModeCreate**
> DesignScenarioModeUtil designScenarioModeCreate(designid, scenarioid, modeid)



Create a scenario mode util

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      DesignScenarioModeUtil result = apiInstance.designScenarioModeCreate(designid, scenarioid, modeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioModeCreate");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **modeid** | **Integer**|  |

### Return type

[**DesignScenarioModeUtil**](DesignScenarioModeUtil.md)

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

<a name="designScenarioModeRead"></a>
# **designScenarioModeRead**
> List&lt;DesignScenarioModeUtil&gt; designScenarioModeRead(designid, scenarioid, modeid)



Get list of scenario modes

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      List<DesignScenarioModeUtil> result = apiInstance.designScenarioModeRead(designid, scenarioid, modeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioModeRead");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **modeid** | **Integer**|  |

### Return type

[**List&lt;DesignScenarioModeUtil&gt;**](DesignScenarioModeUtil.md)

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

<a name="designScenarioParamConfigDelete"></a>
# **designScenarioParamConfigDelete**
> DesignScenarioConfig designScenarioParamConfigDelete(configid, designid, scenarioid, paramid, confgiid)



Delete a scenario config

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String configid = "configid_example"; // String | 
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    Integer confgiid = 56; // Integer | 
    try {
      DesignScenarioConfig result = apiInstance.designScenarioParamConfigDelete(configid, designid, scenarioid, paramid, confgiid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioParamConfigDelete");
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
 **configid** | **String**|  |
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **paramid** | **Integer**|  |
 **confgiid** | **Integer**|  |

### Return type

[**DesignScenarioConfig**](DesignScenarioConfig.md)

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

<a name="designScenarioParamConfigRead"></a>
# **designScenarioParamConfigRead**
> DesignScenarioConfig designScenarioParamConfigRead(designid, scenarioid, paramid, configid)



Getscenario configs

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      DesignScenarioConfig result = apiInstance.designScenarioParamConfigRead(designid, scenarioid, paramid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioParamConfigRead");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **paramid** | **Integer**|  |
 **configid** | **Integer**|  |

### Return type

[**DesignScenarioConfig**](DesignScenarioConfig.md)

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

<a name="designScenarioParamConfigUpdate"></a>
# **designScenarioParamConfigUpdate**
> DesignScenarioConfig designScenarioParamConfigUpdate(configid, designid, scenarioid, paramid, confgiid)



Update a scenario config

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String configid = "configid_example"; // String | 
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    Integer confgiid = 56; // Integer | 
    try {
      DesignScenarioConfig result = apiInstance.designScenarioParamConfigUpdate(configid, designid, scenarioid, paramid, confgiid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioParamConfigUpdate");
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
 **configid** | **String**|  |
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **paramid** | **Integer**|  |
 **confgiid** | **Integer**|  |

### Return type

[**DesignScenarioConfig**](DesignScenarioConfig.md)

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

<a name="designScenarioParamCreate"></a>
# **designScenarioParamCreate**
> DesignScenarioConfig designScenarioParamCreate(designid, scenarioid, paramid)



Create a scenario config

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    try {
      DesignScenarioConfig result = apiInstance.designScenarioParamCreate(designid, scenarioid, paramid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioParamCreate");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **paramid** | **Integer**|  |

### Return type

[**DesignScenarioConfig**](DesignScenarioConfig.md)

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

<a name="designScenarioParamRead"></a>
# **designScenarioParamRead**
> List&lt;DesignScenarioConfig&gt; designScenarioParamRead(designid, scenarioid, paramid)



Get list of scenario configs

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer paramid = 56; // Integer | 
    try {
      List<DesignScenarioConfig> result = apiInstance.designScenarioParamRead(designid, scenarioid, paramid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioParamRead");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **paramid** | **Integer**|  |

### Return type

[**List&lt;DesignScenarioConfig&gt;**](DesignScenarioConfig.md)

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

<a name="designScenarioPowerList"></a>
# **designScenarioPowerList**
> designScenarioPowerList(designid, scenarioid)



Get power of design scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      apiInstance.designScenarioPowerList(designid, scenarioid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioPowerList");
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
 **designid** | **Integer**|  |
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

<a name="designScenarioPowerdistributionList"></a>
# **designScenarioPowerdistributionList**
> designScenarioPowerdistributionList(designid, scenarioid)



Get power distribution of a design scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      apiInstance.designScenarioPowerdistributionList(designid, scenarioid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioPowerdistributionList");
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
 **designid** | **Integer**|  |
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

<a name="designScenarioRead"></a>
# **designScenarioRead**
> DesignScenario designScenarioRead(designid, scenarioid)



Get a scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      DesignScenario result = apiInstance.designScenarioRead(designid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioRead");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**DesignScenario**](DesignScenario.md)

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

<a name="designScenarioSupplyConfigDelete"></a>
# **designScenarioSupplyConfigDelete**
> DesignScenarioSupply designScenarioSupplyConfigDelete(designid, scenarioid, supplyid, configid)



Delete a scenario config

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      DesignScenarioSupply result = apiInstance.designScenarioSupplyConfigDelete(designid, scenarioid, supplyid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioSupplyConfigDelete");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |

### Return type

[**DesignScenarioSupply**](DesignScenarioSupply.md)

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

<a name="designScenarioSupplyConfigRead"></a>
# **designScenarioSupplyConfigRead**
> DesignScenarioSupply designScenarioSupplyConfigRead(designid, scenarioid, supplyid, configid)



Get list of scenario supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      DesignScenarioSupply result = apiInstance.designScenarioSupplyConfigRead(designid, scenarioid, supplyid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioSupplyConfigRead");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |

### Return type

[**DesignScenarioSupply**](DesignScenarioSupply.md)

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

<a name="designScenarioSupplyConfigUpdate"></a>
# **designScenarioSupplyConfigUpdate**
> DesignScenarioSupply designScenarioSupplyConfigUpdate(designid, scenarioid, supplyid, configid)



Update a scenario config

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer configid = 56; // Integer | 
    try {
      DesignScenarioSupply result = apiInstance.designScenarioSupplyConfigUpdate(designid, scenarioid, supplyid, configid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioSupplyConfigUpdate");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **configid** | **Integer**|  |

### Return type

[**DesignScenarioSupply**](DesignScenarioSupply.md)

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

<a name="designScenarioSupplyCreate"></a>
# **designScenarioSupplyCreate**
> DesignScenarioSupply designScenarioSupplyCreate(designid, scenarioid, supplyid)



Create a scenario config

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      DesignScenarioSupply result = apiInstance.designScenarioSupplyCreate(designid, scenarioid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioSupplyCreate");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**DesignScenarioSupply**](DesignScenarioSupply.md)

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

<a name="designScenarioSupplyRead"></a>
# **designScenarioSupplyRead**
> List&lt;DesignScenarioSupply&gt; designScenarioSupplyRead(designid, scenarioid, supplyid)



Get list of scenario supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      List<DesignScenarioSupply> result = apiInstance.designScenarioSupplyRead(designid, scenarioid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioSupplyRead");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**List&lt;DesignScenarioSupply&gt;**](DesignScenarioSupply.md)

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

<a name="designScenarioTrendList"></a>
# **designScenarioTrendList**
> designScenarioTrendList(designid, scenarioid)



Get a scenario power trend

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      apiInstance.designScenarioTrendList(designid, scenarioid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioTrendList");
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
 **designid** | **Integer**|  |
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

<a name="designScenarioUpdate"></a>
# **designScenarioUpdate**
> DesignScenario designScenarioUpdate(designid, scenarioid, data)



Update a scenario

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    DesignScenario data = new DesignScenario(); // DesignScenario | 
    try {
      DesignScenario result = apiInstance.designScenarioUpdate(designid, scenarioid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioUpdate");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |
 **data** | [**DesignScenario**](DesignScenario.md)|  |

### Return type

[**DesignScenario**](DesignScenario.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**400** | Issue with input data, erro message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designScenarioUpdateList"></a>
# **designScenarioUpdateList**
> List&lt;BigDecimal&gt; designScenarioUpdateList(designid, scenarioid)



Returns an array of [current, last update] times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer scenarioid = 56; // Integer | 
    try {
      List<BigDecimal> result = apiInstance.designScenarioUpdateList(designid, scenarioid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designScenarioUpdateList");
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
 **designid** | **Integer**|  |
 **scenarioid** | **Integer**|  |

### Return type

[**List&lt;BigDecimal&gt;**](BigDecimal.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |

<a name="designSensorClone"></a>
# **designSensorClone**
> DesignSensor designSensorClone(designid, sensorid)



Clode a sensor

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer sensorid = 56; // Integer | 
    try {
      DesignSensor result = apiInstance.designSensorClone(designid, sensorid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSensorClone");
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
 **designid** | **Integer**|  |
 **sensorid** | **Integer**|  |

### Return type

[**DesignSensor**](DesignSensor.md)

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

<a name="designSensorCreate"></a>
# **designSensorCreate**
> DesignSensor designSensorCreate(designid, data)



Create a new sensor

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    DesignSensor data = new DesignSensor(); // DesignSensor | 
    try {
      DesignSensor result = apiInstance.designSensorCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSensorCreate");
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
 **designid** | **Integer**|  |
 **data** | [**DesignSensor**](DesignSensor.md)|  |

### Return type

[**DesignSensor**](DesignSensor.md)

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

<a name="designSensorDelete"></a>
# **designSensorDelete**
> designSensorDelete(designid, sensorid)



Delete a sensor

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer sensorid = 56; // Integer | 
    try {
      apiInstance.designSensorDelete(designid, sensorid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSensorDelete");
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
 **designid** | **Integer**|  |
 **sensorid** | **Integer**|  |

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

<a name="designSensorList"></a>
# **designSensorList**
> List&lt;DesignSensor&gt; designSensorList(designid)



Get list of sensors

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<DesignSensor> result = apiInstance.designSensorList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSensorList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;DesignSensor&gt;**](DesignSensor.md)

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

<a name="designSensorRead"></a>
# **designSensorRead**
> DesignSensor designSensorRead(designid, sensorid)



Get a sensor

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer sensorid = 56; // Integer | 
    try {
      DesignSensor result = apiInstance.designSensorRead(designid, sensorid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSensorRead");
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
 **designid** | **Integer**|  |
 **sensorid** | **Integer**|  |

### Return type

[**DesignSensor**](DesignSensor.md)

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

<a name="designSensorUpdate"></a>
# **designSensorUpdate**
> DesignSensor designSensorUpdate(designid, sensorid, data)



Update a sensor

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer sensorid = 56; // Integer | 
    DesignSensor data = new DesignSensor(); // DesignSensor | 
    try {
      DesignSensor result = apiInstance.designSensorUpdate(designid, sensorid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSensorUpdate");
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
 **designid** | **Integer**|  |
 **sensorid** | **Integer**|  |
 **data** | [**DesignSensor**](DesignSensor.md)|  |

### Return type

[**DesignSensor**](DesignSensor.md)

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

<a name="designStatetableCreate"></a>
# **designStatetableCreate**
> DesignStateTable designStatetableCreate(designid, data)



Create a new ff

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    DesignStateTable data = new DesignStateTable(); // DesignStateTable | 
    try {
      DesignStateTable result = apiInstance.designStatetableCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designStatetableCreate");
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
 **designid** | **Integer**|  |
 **data** | [**DesignStateTable**](DesignStateTable.md)|  |

### Return type

[**DesignStateTable**](DesignStateTable.md)

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

<a name="designStatetableDelete"></a>
# **designStatetableDelete**
> designStatetableDelete(designid, statetableid)



Delete a ff

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer statetableid = 56; // Integer | 
    try {
      apiInstance.designStatetableDelete(designid, statetableid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designStatetableDelete");
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
 **designid** | **Integer**|  |
 **statetableid** | **Integer**|  |

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

<a name="designStatetableList"></a>
# **designStatetableList**
> List&lt;DesignStateTable&gt; designStatetableList(designid)



Get list of statetables

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<DesignStateTable> result = apiInstance.designStatetableList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designStatetableList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;DesignStateTable&gt;**](DesignStateTable.md)

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

<a name="designStatetableRead"></a>
# **designStatetableRead**
> DesignStateTable designStatetableRead(designid, statetableid)



Get a statetable

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer statetableid = 56; // Integer | 
    try {
      DesignStateTable result = apiInstance.designStatetableRead(designid, statetableid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designStatetableRead");
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
 **designid** | **Integer**|  |
 **statetableid** | **Integer**|  |

### Return type

[**DesignStateTable**](DesignStateTable.md)

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

<a name="designStatetableUpdate"></a>
# **designStatetableUpdate**
> DesignStateTable designStatetableUpdate(designid, statetableid, data)



Update a ff

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer statetableid = 56; // Integer | 
    DesignStateTable data = new DesignStateTable(); // DesignStateTable | 
    try {
      DesignStateTable result = apiInstance.designStatetableUpdate(designid, statetableid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designStatetableUpdate");
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
 **designid** | **Integer**|  |
 **statetableid** | **Integer**|  |
 **data** | [**DesignStateTable**](DesignStateTable.md)|  |

### Return type

[**DesignStateTable**](DesignStateTable.md)

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

<a name="designSupplyClone"></a>
# **designSupplyClone**
> Supply designSupplyClone(designid, supplyid)



Clode a mode param

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      Supply result = apiInstance.designSupplyClone(designid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplyClone");
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
 **designid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**Supply**](Supply.md)

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

<a name="designSupplyCreate"></a>
# **designSupplyCreate**
> Supply designSupplyCreate(designid, data)



Create a supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Supply data = new Supply(); // Supply | 
    try {
      Supply result = apiInstance.designSupplyCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplyCreate");
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
 **designid** | **Integer**|  |
 **data** | [**Supply**](Supply.md)|  |

### Return type

[**Supply**](Supply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with input data |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designSupplyDelete"></a>
# **designSupplyDelete**
> designSupplyDelete(designid, supplyid)



Delete a supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      apiInstance.designSupplyDelete(designid, supplyid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplyDelete");
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
 **designid** | **Integer**|  |
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

<a name="designSupplyList"></a>
# **designSupplyList**
> List&lt;Supply&gt; designSupplyList(designid, name)



Get a list of supplies

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    String name = "name_example"; // String | Design name
    try {
      List<Supply> result = apiInstance.designSupplyList(designid, name);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplyList");
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
 **designid** | **Integer**|  |
 **name** | **String**| Design name | [optional]

### Return type

[**List&lt;Supply&gt;**](Supply.md)

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

<a name="designSupplyModestateList"></a>
# **designSupplyModestateList**
> SupplyModeState designSupplyModestateList(designid, supplyid, modeid)



Get list of supply states per mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      SupplyModeState result = apiInstance.designSupplyModestateList(designid, supplyid, modeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplyModestateList");
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
 **designid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **modeid** | **Integer**|  |

### Return type

[**SupplyModeState**](SupplyModeState.md)

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

<a name="designSupplyModestateUpdate"></a>
# **designSupplyModestateUpdate**
> List&lt;SupplyModeState&gt; designSupplyModestateUpdate(designid, supplyid, modeid, data)



Update a supply state per mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    SupplyModeState data = new SupplyModeState(); // SupplyModeState | 
    try {
      List<SupplyModeState> result = apiInstance.designSupplyModestateUpdate(designid, supplyid, modeid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplyModestateUpdate");
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
 **designid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **data** | [**SupplyModeState**](SupplyModeState.md)|  |

### Return type

[**List&lt;SupplyModeState&gt;**](SupplyModeState.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inut data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not allowed |  -  |

<a name="designSupplyRead"></a>
# **designSupplyRead**
> Supply designSupplyRead(designid, supplyid)



Get a supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    try {
      Supply result = apiInstance.designSupplyRead(designid, supplyid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplyRead");
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
 **designid** | **Integer**|  |
 **supplyid** | **Integer**|  |

### Return type

[**Supply**](Supply.md)

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

<a name="designSupplyUpdate"></a>
# **designSupplyUpdate**
> Supply designSupplyUpdate(designid, supplyid, data)



Update a supply

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Supply data = new Supply(); // Supply | 
    try {
      Supply result = apiInstance.designSupplyUpdate(designid, supplyid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplyUpdate");
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
 **designid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **data** | [**Supply**](Supply.md)|  |

### Return type

[**Supply**](Supply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | issue with input data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designSupplymodestateList"></a>
# **designSupplymodestateList**
> SupplyModeState designSupplymodestateList(designid, supplyid, modeid)



Get list of supply states per mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    try {
      SupplyModeState result = apiInstance.designSupplymodestateList(designid, supplyid, modeid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplymodestateList");
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
 **designid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **modeid** | **Integer**|  |

### Return type

[**SupplyModeState**](SupplyModeState.md)

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

<a name="designSupplymodestateUpdate"></a>
# **designSupplymodestateUpdate**
> List&lt;SupplyModeState&gt; designSupplymodestateUpdate(designid, supplyid, modeid, data)



Update a supply state per mode

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer supplyid = 56; // Integer | 
    Integer modeid = 56; // Integer | 
    SupplyModeState data = new SupplyModeState(); // SupplyModeState | 
    try {
      List<SupplyModeState> result = apiInstance.designSupplymodestateUpdate(designid, supplyid, modeid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designSupplymodestateUpdate");
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
 **designid** | **Integer**|  |
 **supplyid** | **Integer**|  |
 **modeid** | **Integer**|  |
 **data** | [**SupplyModeState**](SupplyModeState.md)|  |

### Return type

[**List&lt;SupplyModeState&gt;**](SupplyModeState.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inut data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not allowed |  -  |

<a name="designTrendCreate"></a>
# **designTrendCreate**
> DesignTrend designTrendCreate(designid, data)



Create a trend

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    DesignTrend data = new DesignTrend(); // DesignTrend | 
    try {
      DesignTrend result = apiInstance.designTrendCreate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designTrendCreate");
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
 **designid** | **Integer**|  |
 **data** | [**DesignTrend**](DesignTrend.md)|  |

### Return type

[**DesignTrend**](DesignTrend.md)

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

<a name="designTrendDelete"></a>
# **designTrendDelete**
> designTrendDelete(designid, trendid)



Delete a trend

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer trendid = 56; // Integer | 
    try {
      apiInstance.designTrendDelete(designid, trendid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designTrendDelete");
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
 **designid** | **Integer**|  |
 **trendid** | **Integer**|  |

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
**403** | not authorized |  -  |
**404** | Not found |  -  |

<a name="designTrendList"></a>
# **designTrendList**
> List&lt;DesignTrend&gt; designTrendList(designid)



Get list of saved trends

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<DesignTrend> result = apiInstance.designTrendList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designTrendList");
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
 **designid** | **Integer**|  |

### Return type

[**List&lt;DesignTrend&gt;**](DesignTrend.md)

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

<a name="designTrendRead"></a>
# **designTrendRead**
> DesignTrend designTrendRead(designid, trendid)



Get a trend

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer trendid = 56; // Integer | 
    try {
      DesignTrend result = apiInstance.designTrendRead(designid, trendid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designTrendRead");
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
 **designid** | **Integer**|  |
 **trendid** | **Integer**|  |

### Return type

[**DesignTrend**](DesignTrend.md)

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

<a name="designTrendUpdate"></a>
# **designTrendUpdate**
> DesignTrend designTrendUpdate(designid, trendid, data)



Update a trend

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer trendid = 56; // Integer | 
    DesignTrend data = new DesignTrend(); // DesignTrend | 
    try {
      DesignTrend result = apiInstance.designTrendUpdate(designid, trendid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designTrendUpdate");
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
 **designid** | **Integer**|  |
 **trendid** | **Integer**|  |
 **data** | [**DesignTrend**](DesignTrend.md)|  |

### Return type

[**DesignTrend**](DesignTrend.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inupt data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designUpdate"></a>
# **designUpdate**
> Design designUpdate(designid, data)



Update design

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Design data = new Design(); // Design | 
    try {
      Design result = apiInstance.designUpdate(designid, data);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designUpdate");
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
 **designid** | **Integer**|  |
 **data** | [**Design**](Design.md)|  |

### Return type

[**Design**](Design.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**201** |  |  -  |
**400** | Issue with inut data, error message returned |  -  |
**403** | Not authorized |  -  |
**404** | Not found |  -  |

<a name="designUpdateList"></a>
# **designUpdateList**
> UpdateData designUpdateList(designid)



Returns an array of {current, last update} times

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      UpdateData result = apiInstance.designUpdateList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designUpdateList");
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
 **designid** | **Integer**|  |

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

<a name="designVerilogInstancesList"></a>
# **designVerilogInstancesList**
> designVerilogInstancesList(designid, moduleid)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String designid = "designid_example"; // String | 
    String moduleid = "moduleid_example"; // String | 
    try {
      apiInstance.designVerilogInstancesList(designid, moduleid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designVerilogInstancesList");
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
 **designid** | **String**|  |
 **moduleid** | **String**|  |

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

<a name="designVerilogList"></a>
# **designVerilogList**
> designVerilogList(designid)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String designid = "designid_example"; // String | 
    try {
      apiInstance.designVerilogList(designid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designVerilogList");
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
 **designid** | **String**|  |

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

<a name="designVerilogModuleStateList"></a>
# **designVerilogModuleStateList**
> designVerilogModuleStateList(designid, moduleid)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String designid = "designid_example"; // String | 
    String moduleid = "moduleid_example"; // String | 
    try {
      apiInstance.designVerilogModuleStateList(designid, moduleid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designVerilogModuleStateList");
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
 **designid** | **String**|  |
 **moduleid** | **String**|  |

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

<a name="designVerilogModulesList"></a>
# **designVerilogModulesList**
> designVerilogModulesList(designid, moduleid)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String designid = "designid_example"; // String | 
    String moduleid = "moduleid_example"; // String | 
    try {
      apiInstance.designVerilogModulesList(designid, moduleid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designVerilogModulesList");
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
 **designid** | **String**|  |
 **moduleid** | **String**|  |

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

<a name="designVerilogWireStateList"></a>
# **designVerilogWireStateList**
> designVerilogWireStateList(designid, wireid)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String designid = "designid_example"; // String | 
    String wireid = "wireid_example"; // String | 
    try {
      apiInstance.designVerilogWireStateList(designid, wireid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designVerilogWireStateList");
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
 **designid** | **String**|  |
 **wireid** | **String**|  |

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

<a name="designVerilogWiresList"></a>
# **designVerilogWiresList**
> designVerilogWiresList(designid, moduleid)



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    String designid = "designid_example"; // String | 
    String moduleid = "moduleid_example"; // String | 
    try {
      apiInstance.designVerilogWiresList(designid, moduleid);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designVerilogWiresList");
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
 **designid** | **String**|  |
 **moduleid** | **String**|  |

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

<a name="designVersionList"></a>
# **designVersionList**
> List&lt;DesignVersion&gt; designVersionList(designid)



Get List of design versions

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    try {
      List<DesignVersion> result = apiInstance.designVersionList(designid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designVersionList");
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
 **designid** | **Integer**|  |

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

<a name="designVersionRead"></a>
# **designVersionRead**
> List&lt;DesignVersion&gt; designVersionRead(designid, versionid)



Get a design version

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DesignApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://thracesystems.com/api");
    
    // Configure API key authorization: Basic
    ApiKeyAuth Basic = (ApiKeyAuth) defaultClient.getAuthentication("Basic");
    Basic.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //Basic.setApiKeyPrefix("Token");

    DesignApi apiInstance = new DesignApi(defaultClient);
    Integer designid = 56; // Integer | 
    Integer versionid = 56; // Integer | 
    try {
      List<DesignVersion> result = apiInstance.designVersionRead(designid, versionid);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling DesignApi#designVersionRead");
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
 **designid** | **Integer**|  |
 **versionid** | **Integer**|  |

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

