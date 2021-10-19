# PowermeterApi.PcbApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**pcbCommitCreate**](PcbApi.md#pcbCommitCreate) | **POST** /pcb/{pcbid}/commit/ | 
[**pcbLibraryClone**](PcbApi.md#pcbLibraryClone) | **POST** /pcb/library/{pcbmasterid}/clone/ | 
[**pcbLibraryCreate**](PcbApi.md#pcbLibraryCreate) | **POST** /pcb/library/ | 
[**pcbLibraryDelete**](PcbApi.md#pcbLibraryDelete) | **DELETE** /pcb/library/{pcbmasterid}/ | 
[**pcbLibraryList**](PcbApi.md#pcbLibraryList) | **GET** /pcb/library/ | 
[**pcbLibraryRead**](PcbApi.md#pcbLibraryRead) | **GET** /pcb/library/{pcbmasterid}/ | 
[**pcbLibraryUpdate**](PcbApi.md#pcbLibraryUpdate) | **PUT** /pcb/library/{pcbmasterid}/ | 
[**pcbLibraryUpdateList**](PcbApi.md#pcbLibraryUpdateList) | **GET** /pcb/library/update/ | 
[**pcbLibraryVersionList**](PcbApi.md#pcbLibraryVersionList) | **GET** /pcb/library/{pcbmasterid}/version/ | 
[**pcbPermissionsList**](PcbApi.md#pcbPermissionsList) | **GET** /pcb/{pcbid}/permissions/ | 
[**pcbPermissionsUpdate**](PcbApi.md#pcbPermissionsUpdate) | **PUT** /pcb/{pcbid}/permissions/ | 
[**pcbRead**](PcbApi.md#pcbRead) | **GET** /pcb/{pcbid}/ | 
[**pcbRestoreCreate**](PcbApi.md#pcbRestoreCreate) | **POST** /pcb/{pcbid}/restore/ | 
[**pcbSupplyClone**](PcbApi.md#pcbSupplyClone) | **POST** /pcb/{pcbid}/supply/{supplyid}/clone/ | 
[**pcbSupplyCreate**](PcbApi.md#pcbSupplyCreate) | **POST** /pcb/{pcbid}/supply/ | 
[**pcbSupplyDelete**](PcbApi.md#pcbSupplyDelete) | **DELETE** /pcb/{pcbid}/supply/{supplyid}/ | 
[**pcbSupplyList**](PcbApi.md#pcbSupplyList) | **GET** /pcb/{pcbid}/supply/ | 
[**pcbSupplyRead**](PcbApi.md#pcbSupplyRead) | **GET** /pcb/{pcbid}/supply/{supplyid}/ | 
[**pcbSupplyUpdate**](PcbApi.md#pcbSupplyUpdate) | **PUT** /pcb/{pcbid}/supply/{supplyid}/ | 
[**pcbUpdate**](PcbApi.md#pcbUpdate) | **PUT** /pcb/{pcbid}/ | 
[**pcbUpdateList**](PcbApi.md#pcbUpdateList) | **GET** /pcb/{pcbid}/update/ | 
[**pcbVersionList**](PcbApi.md#pcbVersionList) | **GET** /pcb/{pcbid}/version/ | 



## pcbCommitCreate

> PCBVersionSerialzer pcbCommitCreate(pcbid, data)



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

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
let data = new PowermeterApi.PCBVersionSerialzer(); // PCBVersionSerialzer | 
apiInstance.pcbCommitCreate(pcbid, data, (error, data, response) => {
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
 **pcbid** | **Number**|  | 
 **data** | [**PCBVersionSerialzer**](PCBVersionSerialzer.md)|  | 

### Return type

[**PCBVersionSerialzer**](PCBVersionSerialzer.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pcbLibraryClone

> PCBMaster pcbLibraryClone(pcbmasterid)



Copy a PCB

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbmasterid = 56; // Number | 
apiInstance.pcbLibraryClone(pcbmasterid, (error, data, response) => {
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
 **pcbmasterid** | **Number**|  | 

### Return type

[**PCBMaster**](PCBMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbLibraryCreate

> PCBMaster pcbLibraryCreate(data)



Create a PCB

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let data = new PowermeterApi.PCBMaster(); // PCBMaster | 
apiInstance.pcbLibraryCreate(data, (error, data, response) => {
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
 **data** | [**PCBMaster**](PCBMaster.md)|  | 

### Return type

[**PCBMaster**](PCBMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pcbLibraryDelete

> pcbLibraryDelete(pcbmasterid)



Delete PCB

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbmasterid = 56; // Number | 
apiInstance.pcbLibraryDelete(pcbmasterid, (error, data, response) => {
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
 **pcbmasterid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## pcbLibraryList

> [PCBMaster] pcbLibraryList()



Get list of PCB

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
apiInstance.pcbLibraryList((error, data, response) => {
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

[**[PCBMaster]**](PCBMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbLibraryRead

> PCBMaster pcbLibraryRead(pcbmasterid)



Get a PCB

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbmasterid = 56; // Number | 
apiInstance.pcbLibraryRead(pcbmasterid, (error, data, response) => {
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
 **pcbmasterid** | **Number**|  | 

### Return type

[**PCBMaster**](PCBMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbLibraryUpdate

> PCBMaster pcbLibraryUpdate(pcbmasterid, data)



Update PCB

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbmasterid = 56; // Number | 
let data = new PowermeterApi.PCBMaster(); // PCBMaster | 
apiInstance.pcbLibraryUpdate(pcbmasterid, data, (error, data, response) => {
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
 **pcbmasterid** | **Number**|  | 
 **data** | [**PCBMaster**](PCBMaster.md)|  | 

### Return type

[**PCBMaster**](PCBMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pcbLibraryUpdateList

> UpdateData pcbLibraryUpdateList()



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

let apiInstance = new PowermeterApi.PcbApi();
apiInstance.pcbLibraryUpdateList((error, data, response) => {
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


## pcbLibraryVersionList

> PCBVersionSerialzer pcbLibraryVersionList(pcbmasterid)



Get PCB versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbmasterid = 56; // Number | 
apiInstance.pcbLibraryVersionList(pcbmasterid, (error, data, response) => {
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
 **pcbmasterid** | **Number**|  | 

### Return type

[**PCBVersionSerialzer**](PCBVersionSerialzer.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbPermissionsList

> pcbPermissionsList(pcbid)



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

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
apiInstance.pcbPermissionsList(pcbid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## pcbPermissionsUpdate

> pcbPermissionsUpdate(pcbid)



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

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
apiInstance.pcbPermissionsUpdate(pcbid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## pcbRead

> PCB pcbRead(pcbid)



Get a PCB

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
apiInstance.pcbRead(pcbid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 

### Return type

[**PCB**](PCB.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbRestoreCreate

> PCB pcbRestoreCreate(pcbid)



Restore a pcb version as current version

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
apiInstance.pcbRestoreCreate(pcbid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 

### Return type

[**PCB**](PCB.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbSupplyClone

> PCBSupply pcbSupplyClone(pcbid, supplyid)



Copy a PCB supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.pcbSupplyClone(pcbid, supplyid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**PCBSupply**](PCBSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbSupplyCreate

> PCBSupply pcbSupplyCreate(pcbid)



Create PCB supplies

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
apiInstance.pcbSupplyCreate(pcbid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 

### Return type

[**PCBSupply**](PCBSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbSupplyDelete

> pcbSupplyDelete(pcbid, supplyid)



Delete PCB supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.pcbSupplyDelete(pcbid, supplyid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## pcbSupplyList

> [PCBSupply] pcbSupplyList(pcbid)



Get list of PCB supplies

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
apiInstance.pcbSupplyList(pcbid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 

### Return type

[**[PCBSupply]**](PCBSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbSupplyRead

> PCBSupply pcbSupplyRead(pcbid, supplyid)



Get a PCB supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.pcbSupplyRead(pcbid, supplyid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**PCBSupply**](PCBSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbSupplyUpdate

> PCBSupply pcbSupplyUpdate(pcbid, supplyid, data)



Update PCB supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
let supplyid = 56; // Number | 
let data = new PowermeterApi.PCBSupply(); // PCBSupply | 
apiInstance.pcbSupplyUpdate(pcbid, supplyid, data, (error, data, response) => {
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
 **pcbid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **data** | [**PCBSupply**](PCBSupply.md)|  | 

### Return type

[**PCBSupply**](PCBSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pcbUpdate

> PCB pcbUpdate(pcbid, data)



Update a PCB

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
let data = new PowermeterApi.PCB(); // PCB | 
apiInstance.pcbUpdate(pcbid, data, (error, data, response) => {
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
 **pcbid** | **Number**|  | 
 **data** | [**PCB**](PCB.md)|  | 

### Return type

[**PCB**](PCB.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## pcbUpdateList

> UpdateData pcbUpdateList(pcbid)



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

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
apiInstance.pcbUpdateList(pcbid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## pcbVersionList

> [PCBVersionSerialzer] pcbVersionList(pcbid)



Get PCB versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PcbApi();
let pcbid = 56; // Number | 
apiInstance.pcbVersionList(pcbid, (error, data, response) => {
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
 **pcbid** | **Number**|  | 

### Return type

[**[PCBVersionSerialzer]**](PCBVersionSerialzer.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

