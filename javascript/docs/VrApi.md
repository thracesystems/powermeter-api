# PowermeterApi.VrApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**vrCommitCreate**](VrApi.md#vrCommitCreate) | **POST** /vr/{vrid}/commit/ | 
[**vrComputeList**](VrApi.md#vrComputeList) | **GET** /vr/{vrid}/compute/ | 
[**vrLibraryClone**](VrApi.md#vrLibraryClone) | **POST** /vr/library/{vrmasterid}/clone/ | 
[**vrLibraryCreate**](VrApi.md#vrLibraryCreate) | **POST** /vr/library/ | 
[**vrLibraryDelete**](VrApi.md#vrLibraryDelete) | **DELETE** /vr/library/{vrmasterid}/ | 
[**vrLibraryList**](VrApi.md#vrLibraryList) | **GET** /vr/library/ | 
[**vrLibraryUpdate**](VrApi.md#vrLibraryUpdate) | **PUT** /vr/library/{vrmasterid}/ | 
[**vrLibraryUpdateList**](VrApi.md#vrLibraryUpdateList) | **GET** /vr/library/update/ | 
[**vrLibraryVersionList**](VrApi.md#vrLibraryVersionList) | **GET** /vr/library/{vrmasterid}/version/ | 
[**vrPermissionsList**](VrApi.md#vrPermissionsList) | **GET** /vr/{vrid}/permissions/ | 
[**vrPermissionsUpdate**](VrApi.md#vrPermissionsUpdate) | **PUT** /vr/{vrid}/permissions/ | 
[**vrRead**](VrApi.md#vrRead) | **GET** /vr/{vrid}/ | 
[**vrRestoreCreate**](VrApi.md#vrRestoreCreate) | **POST** /vr/{vrid}/restore/ | 
[**vrSupplyClone**](VrApi.md#vrSupplyClone) | **POST** /vr/{vrid}/supply/{supplyid}/clone/ | 
[**vrSupplyCreate**](VrApi.md#vrSupplyCreate) | **POST** /vr/{vrid}/supply/ | 
[**vrSupplyDelete**](VrApi.md#vrSupplyDelete) | **DELETE** /vr/{vrid}/supply/{supplyid}/ | 
[**vrSupplyList**](VrApi.md#vrSupplyList) | **GET** /vr/{vrid}/supply/ | 
[**vrSupplyRead**](VrApi.md#vrSupplyRead) | **GET** /vr/{vrid}/supply/{supplyid}/ | 
[**vrSupplyUpdate**](VrApi.md#vrSupplyUpdate) | **PUT** /vr/{vrid}/supply/{supplyid}/ | 
[**vrUpdate**](VrApi.md#vrUpdate) | **PUT** /vr/{vrid}/ | 
[**vrUpdateList**](VrApi.md#vrUpdateList) | **GET** /vr/{vrid}/update/ | 
[**vrVersionList**](VrApi.md#vrVersionList) | **GET** /vr/{vrid}/version/ | 



## vrCommitCreate

> VRVersion vrCommitCreate(vrid, data)



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

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
let data = new PowermeterApi.VRVersion(); // VRVersion | 
apiInstance.vrCommitCreate(vrid, data, (error, data, response) => {
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
 **vrid** | **Number**|  | 
 **data** | [**VRVersion**](VRVersion.md)|  | 

### Return type

[**VRVersion**](VRVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## vrComputeList

> ComputedVR vrComputeList(vrid, vin, vout, iload)



Compute VR

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
let vin = 3.4; // Number | 
let vout = 3.4; // Number | 
let iload = 3.4; // Number | 
apiInstance.vrComputeList(vrid, vin, vout, iload, (error, data, response) => {
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
 **vrid** | **Number**|  | 
 **vin** | **Number**|  | 
 **vout** | **Number**|  | 
 **iload** | **Number**|  | 

### Return type

[**ComputedVR**](ComputedVR.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrLibraryClone

> VRMaster vrLibraryClone(vrmasterid)



Copy a VR

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrmasterid = 56; // Number | 
apiInstance.vrLibraryClone(vrmasterid, (error, data, response) => {
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
 **vrmasterid** | **Number**|  | 

### Return type

[**VRMaster**](VRMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrLibraryCreate

> VRMaster vrLibraryCreate(data)



Create a VR

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let data = new PowermeterApi.VRMaster(); // VRMaster | 
apiInstance.vrLibraryCreate(data, (error, data, response) => {
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
 **data** | [**VRMaster**](VRMaster.md)|  | 

### Return type

[**VRMaster**](VRMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## vrLibraryDelete

> vrLibraryDelete(vrmasterid)



Delete VR

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrmasterid = 56; // Number | 
apiInstance.vrLibraryDelete(vrmasterid, (error, data, response) => {
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
 **vrmasterid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## vrLibraryList

> [VRMaster] vrLibraryList()



Get list of VR

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
apiInstance.vrLibraryList((error, data, response) => {
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

[**[VRMaster]**](VRMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrLibraryUpdate

> VRMaster vrLibraryUpdate(vrmasterid, data)



Update VR

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrmasterid = 56; // Number | 
let data = new PowermeterApi.VRMaster(); // VRMaster | 
apiInstance.vrLibraryUpdate(vrmasterid, data, (error, data, response) => {
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
 **vrmasterid** | **Number**|  | 
 **data** | [**VRMaster**](VRMaster.md)|  | 

### Return type

[**VRMaster**](VRMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## vrLibraryUpdateList

> UpdateData vrLibraryUpdateList()



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

let apiInstance = new PowermeterApi.VrApi();
apiInstance.vrLibraryUpdateList((error, data, response) => {
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


## vrLibraryVersionList

> VRVersion vrLibraryVersionList(vrmasterid)



Get VR master versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrmasterid = 56; // Number | 
apiInstance.vrLibraryVersionList(vrmasterid, (error, data, response) => {
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
 **vrmasterid** | **Number**|  | 

### Return type

[**VRVersion**](VRVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrPermissionsList

> vrPermissionsList(vrid)



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

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
apiInstance.vrPermissionsList(vrid, (error, data, response) => {
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
 **vrid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## vrPermissionsUpdate

> vrPermissionsUpdate(vrid)



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

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
apiInstance.vrPermissionsUpdate(vrid, (error, data, response) => {
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
 **vrid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## vrRead

> VR vrRead(vrid)



Get a VR

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
apiInstance.vrRead(vrid, (error, data, response) => {
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
 **vrid** | **Number**|  | 

### Return type

[**VR**](VR.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrRestoreCreate

> VR vrRestoreCreate(vrid)



Restore a VR version as current version

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
apiInstance.vrRestoreCreate(vrid, (error, data, response) => {
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
 **vrid** | **Number**|  | 

### Return type

[**VR**](VR.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrSupplyClone

> VRSupply vrSupplyClone(vrid, supplyid)



Copy a VR supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.vrSupplyClone(vrid, supplyid, (error, data, response) => {
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
 **vrid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**VRSupply**](VRSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrSupplyCreate

> VRSupply vrSupplyCreate(vrid, data)



Create VR supplies

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
let data = new PowermeterApi.VRSupply(); // VRSupply | 
apiInstance.vrSupplyCreate(vrid, data, (error, data, response) => {
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
 **vrid** | **Number**|  | 
 **data** | [**VRSupply**](VRSupply.md)|  | 

### Return type

[**VRSupply**](VRSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## vrSupplyDelete

> vrSupplyDelete(vrid, supplyid)



Delete VR supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.vrSupplyDelete(vrid, supplyid, (error, data, response) => {
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
 **vrid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## vrSupplyList

> [VRSupply] vrSupplyList(vrid)



Get list of VR supplies

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
apiInstance.vrSupplyList(vrid, (error, data, response) => {
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
 **vrid** | **Number**|  | 

### Return type

[**[VRSupply]**](VRSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrSupplyRead

> VRSupply vrSupplyRead(vrid, supplyid)



Get a VR supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.vrSupplyRead(vrid, supplyid, (error, data, response) => {
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
 **vrid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**VRSupply**](VRSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrSupplyUpdate

> VRSupply vrSupplyUpdate(vrid, supplyid, data)



Update VR supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
let supplyid = 56; // Number | 
let data = new PowermeterApi.VRSupply(); // VRSupply | 
apiInstance.vrSupplyUpdate(vrid, supplyid, data, (error, data, response) => {
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
 **vrid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **data** | [**VRSupply**](VRSupply.md)|  | 

### Return type

[**VRSupply**](VRSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## vrUpdate

> VR vrUpdate(vrid, data)



Update a VR

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
let data = new PowermeterApi.VR(); // VR | 
apiInstance.vrUpdate(vrid, data, (error, data, response) => {
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
 **vrid** | **Number**|  | 
 **data** | [**VR**](VR.md)|  | 

### Return type

[**VR**](VR.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## vrUpdateList

> UpdateData vrUpdateList(vrid)



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

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
apiInstance.vrUpdateList(vrid, (error, data, response) => {
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
 **vrid** | **Number**|  | 

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## vrVersionList

> [VRVersion] vrVersionList(vrid)



Get VR versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.VrApi();
let vrid = 56; // Number | 
apiInstance.vrVersionList(vrid, (error, data, response) => {
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
 **vrid** | **Number**|  | 

### Return type

[**[VRVersion]**](VRVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

