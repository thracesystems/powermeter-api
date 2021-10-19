# PowermeterApi.TechnologyApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**apiTechnologyDeviceDataDeleteAll**](TechnologyApi.md#apiTechnologyDeviceDataDeleteAll) | **DELETE** /technology/{techid}/device/{deviceid}/data/ | 
[**apiTechnologyDeviceDeleteAll**](TechnologyApi.md#apiTechnologyDeviceDeleteAll) | **DELETE** /technology/{techid}/device/ | 
[**technologyCommitCreate**](TechnologyApi.md#technologyCommitCreate) | **POST** /technology/{techid}/commit/ | 
[**technologyD0Create**](TechnologyApi.md#technologyD0Create) | **POST** /technology/{techid}/d0/ | 
[**technologyD0Delete**](TechnologyApi.md#technologyD0Delete) | **DELETE** /technology/{techid}/d0/{d0id}/ | 
[**technologyD0List**](TechnologyApi.md#technologyD0List) | **GET** /technology/{techid}/d0/ | 
[**technologyD0Read**](TechnologyApi.md#technologyD0Read) | **GET** /technology/{techid}/d0/{d0id}/ | 
[**technologyD0Update**](TechnologyApi.md#technologyD0Update) | **PUT** /technology/{techid}/d0/{d0id}/ | 
[**technologyDeviceCreate**](TechnologyApi.md#technologyDeviceCreate) | **POST** /technology/{techid}/device/ | 
[**technologyDeviceDataBulkCreate**](TechnologyApi.md#technologyDeviceDataBulkCreate) | **POST** /technology/{techid}/device/{deviceid}/data/bulk/ | 
[**technologyDeviceDataComputeList**](TechnologyApi.md#technologyDeviceDataComputeList) | **GET** /technology/{techid}/device/{deviceid}/data/compute/ | 
[**technologyDeviceDataCreate**](TechnologyApi.md#technologyDeviceDataCreate) | **POST** /technology/{techid}/device/{deviceid}/data/ | 
[**technologyDeviceDataDelete**](TechnologyApi.md#technologyDeviceDataDelete) | **DELETE** /technology/{techid}/device/{deviceid}/data/{dataid}/ | 
[**technologyDeviceDataList**](TechnologyApi.md#technologyDeviceDataList) | **GET** /technology/{techid}/device/{deviceid}/data/ | 
[**technologyDeviceDataRead**](TechnologyApi.md#technologyDeviceDataRead) | **GET** /technology/{techid}/device/{deviceid}/data/{dataid}/ | 
[**technologyDeviceDataTrainCreate**](TechnologyApi.md#technologyDeviceDataTrainCreate) | **POST** /technology/{techid}/device/{deviceid}/data/train/ | 
[**technologyDeviceDataUpdate**](TechnologyApi.md#technologyDeviceDataUpdate) | **PUT** /technology/{techid}/device/{deviceid}/data/{dataid}/ | 
[**technologyDeviceDelete**](TechnologyApi.md#technologyDeviceDelete) | **DELETE** /technology/{techid}/device/{deviceid}/ | 
[**technologyDeviceList**](TechnologyApi.md#technologyDeviceList) | **GET** /technology/{techid}/device/ | 
[**technologyDeviceRead**](TechnologyApi.md#technologyDeviceRead) | **GET** /technology/{techid}/device/{deviceid}/ | 
[**technologyDeviceUpdate**](TechnologyApi.md#technologyDeviceUpdate) | **PUT** /technology/{techid}/device/{deviceid}/ | 
[**technologyLayerstackClone**](TechnologyApi.md#technologyLayerstackClone) | **POST** /technology/{techid}/layerstack/{stackid}/clone/ | 
[**technologyLayerstackCreate**](TechnologyApi.md#technologyLayerstackCreate) | **POST** /technology/{techid}/layerstack/ | 
[**technologyLayerstackDelete**](TechnologyApi.md#technologyLayerstackDelete) | **DELETE** /technology/{techid}/layerstack/{stackid}/ | 
[**technologyLayerstackLayerClone**](TechnologyApi.md#technologyLayerstackLayerClone) | **POST** /technology/{techid}/layerstack/{stackid}/layer/{layerid}/clone/ | 
[**technologyLayerstackLayerCreate**](TechnologyApi.md#technologyLayerstackLayerCreate) | **POST** /technology/{techid}/layerstack/{stackid}/layer/ | 
[**technologyLayerstackLayerDelete**](TechnologyApi.md#technologyLayerstackLayerDelete) | **DELETE** /technology/{techid}/layerstack/{stackid}/layer/{layerid}/ | 
[**technologyLayerstackLayerList**](TechnologyApi.md#technologyLayerstackLayerList) | **GET** /technology/{techid}/layerstack/{stackid}/layer/ | 
[**technologyLayerstackLayerRead**](TechnologyApi.md#technologyLayerstackLayerRead) | **GET** /technology/{techid}/layerstack/{stackid}/layer/{layerid}/ | 
[**technologyLayerstackLayerUpdate**](TechnologyApi.md#technologyLayerstackLayerUpdate) | **PUT** /technology/{techid}/layerstack/{stackid}/layer/{layerid}/ | 
[**technologyLayerstackList**](TechnologyApi.md#technologyLayerstackList) | **GET** /technology/{techid}/layerstack/ | 
[**technologyLayerstackRead**](TechnologyApi.md#technologyLayerstackRead) | **GET** /technology/{techid}/layerstack/{stackid}/ | 
[**technologyLayerstackUpdate**](TechnologyApi.md#technologyLayerstackUpdate) | **PUT** /technology/{techid}/layerstack/{stackid}/ | 
[**technologyLayerstackUpdateList**](TechnologyApi.md#technologyLayerstackUpdateList) | **GET** /technology/{techid}/layerstack/{stackid}/update/ | 
[**technologyLibraryClone**](TechnologyApi.md#technologyLibraryClone) | **POST** /technology/library/{techmasterid}/clone/ | 
[**technologyLibraryCreate**](TechnologyApi.md#technologyLibraryCreate) | **POST** /technology/library/ | 
[**technologyLibraryDelete**](TechnologyApi.md#technologyLibraryDelete) | **DELETE** /technology/library/{techmasterid}/ | 
[**technologyLibraryList**](TechnologyApi.md#technologyLibraryList) | **GET** /technology/library/ | 
[**technologyLibraryRead**](TechnologyApi.md#technologyLibraryRead) | **GET** /technology/library/{techmasterid}/ | 
[**technologyLibraryUpdate**](TechnologyApi.md#technologyLibraryUpdate) | **PUT** /technology/library/{techmasterid}/ | 
[**technologyLibraryUpdateList**](TechnologyApi.md#technologyLibraryUpdateList) | **GET** /technology/library/update/ | 
[**technologyLibraryVersionList**](TechnologyApi.md#technologyLibraryVersionList) | **GET** /technology/library/{techmasterid}/version/ | 
[**technologyModelCornerCreate**](TechnologyApi.md#technologyModelCornerCreate) | **POST** /technology/{techid}/model_corner/ | 
[**technologyModelCornerDelete**](TechnologyApi.md#technologyModelCornerDelete) | **DELETE** /technology/{techid}/model_corner/{cornerid}/ | 
[**technologyModelCornerList**](TechnologyApi.md#technologyModelCornerList) | **GET** /technology/{techid}/model_corner/ | 
[**technologyModelCornerRead**](TechnologyApi.md#technologyModelCornerRead) | **GET** /technology/{techid}/model_corner/{cornerid}/ | 
[**technologyModelCornerUpdate**](TechnologyApi.md#technologyModelCornerUpdate) | **PUT** /technology/{techid}/model_corner/{cornerid}/ | 
[**technologyPermissionsList**](TechnologyApi.md#technologyPermissionsList) | **GET** /technology/{techid}/permissions/ | 
[**technologyPermissionsUpdate**](TechnologyApi.md#technologyPermissionsUpdate) | **PUT** /technology/{techid}/permissions/ | 
[**technologyRcCornerCreate**](TechnologyApi.md#technologyRcCornerCreate) | **POST** /technology/{techid}/rc_corner/ | 
[**technologyRcCornerDelete**](TechnologyApi.md#technologyRcCornerDelete) | **DELETE** /technology/{techid}/rc_corner/{cornerid}/ | 
[**technologyRcCornerList**](TechnologyApi.md#technologyRcCornerList) | **GET** /technology/{techid}/rc_corner/ | 
[**technologyRcCornerRead**](TechnologyApi.md#technologyRcCornerRead) | **GET** /technology/{techid}/rc_corner/{cornerid}/ | 
[**technologyRcCornerUpdate**](TechnologyApi.md#technologyRcCornerUpdate) | **PUT** /technology/{techid}/rc_corner/{cornerid}/ | 
[**technologyRead**](TechnologyApi.md#technologyRead) | **GET** /technology/{techid}/ | 
[**technologyRestoreCreate**](TechnologyApi.md#technologyRestoreCreate) | **POST** /technology/{techid}/restore/ | 
[**technologySourceCreate**](TechnologyApi.md#technologySourceCreate) | **POST** /technology/{techid}/source/ | 
[**technologySourceDelete**](TechnologyApi.md#technologySourceDelete) | **DELETE** /technology/{techid}/source/{sourceid}/ | 
[**technologySourceList**](TechnologyApi.md#technologySourceList) | **GET** /technology/{techid}/source/ | 
[**technologySourceRead**](TechnologyApi.md#technologySourceRead) | **GET** /technology/{techid}/source/{sourceid}/ | 
[**technologySourceUpdate**](TechnologyApi.md#technologySourceUpdate) | **PUT** /technology/{techid}/source/{sourceid}/ | 
[**technologyUpdate**](TechnologyApi.md#technologyUpdate) | **PUT** /technology/{techid}/ | 
[**technologyUpdateList**](TechnologyApi.md#technologyUpdateList) | **GET** /technology/{techid}/update/ | 
[**technologyVersionList**](TechnologyApi.md#technologyVersionList) | **GET** /technology/{techid}/version/ | 
[**technologyVersionRead**](TechnologyApi.md#technologyVersionRead) | **GET** /technology/{techid}/version/{versionid}/ | 



## apiTechnologyDeviceDataDeleteAll

> apiTechnologyDeviceDataDeleteAll(techid, deviceid)



Delete device data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
apiInstance.apiTechnologyDeviceDataDeleteAll(techid, deviceid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## apiTechnologyDeviceDeleteAll

> apiTechnologyDeviceDeleteAll(techid)



Delete all devices

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.apiTechnologyDeviceDeleteAll(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyCommitCreate

> TechnologyVersion technologyCommitCreate(techid, data)



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

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let data = new PowermeterApi.TechnologyVersion(); // TechnologyVersion | 
apiInstance.technologyCommitCreate(techid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **data** | [**TechnologyVersion**](TechnologyVersion.md)|  | 

### Return type

[**TechnologyVersion**](TechnologyVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyD0Create

> Defect0 technologyD0Create(techid, data)



Create a d0 data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let data = new PowermeterApi.Defect0(); // Defect0 | 
apiInstance.technologyD0Create(techid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **data** | [**Defect0**](Defect0.md)|  | 

### Return type

[**Defect0**](Defect0.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyD0Delete

> technologyD0Delete(techid, d0id)



Delete a d0 data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let d0id = 56; // Number | 
apiInstance.technologyD0Delete(techid, d0id, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **d0id** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyD0List

> [Defect0] technologyD0List(techid)



Get list of d0 data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyD0List(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

[**[Defect0]**](Defect0.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyD0Read

> Defect0 technologyD0Read(techid, d0id)



Get a d0 data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let d0id = 56; // Number | 
apiInstance.technologyD0Read(techid, d0id, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **d0id** | **Number**|  | 

### Return type

[**Defect0**](Defect0.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyD0Update

> Defect0 technologyD0Update(techid, d0id, data)



Update a d0 data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let d0id = 56; // Number | 
let data = new PowermeterApi.Defect0(); // Defect0 | 
apiInstance.technologyD0Update(techid, d0id, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **d0id** | **Number**|  | 
 **data** | [**Defect0**](Defect0.md)|  | 

### Return type

[**Defect0**](Defect0.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyDeviceCreate

> Device technologyDeviceCreate(techid, data)



Create a device

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let data = new PowermeterApi.Device(); // Device | 
apiInstance.technologyDeviceCreate(techid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **data** | [**Device**](Device.md)|  | 

### Return type

[**Device**](Device.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyDeviceDataBulkCreate

> technologyDeviceDataBulkCreate(techid, deviceid, data)



Create device data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
let data = [new PowermeterApi.DeviceDataBulk()]; // [DeviceDataBulk] | 
apiInstance.technologyDeviceDataBulkCreate(techid, deviceid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **data** | [**[DeviceDataBulk]**](DeviceDataBulk.md)|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## technologyDeviceDataComputeList

> ComputedDeviceData technologyDeviceDataComputeList(techid, deviceid, p, vds, vgs, vbs, t)



Get device data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
let p = "p_example"; // String | Process name
let vds = 3.4; // Number | Drain-Source voltage
let vgs = 3.4; // Number | Gate-Source voltage
let vbs = 3.4; // Number | Body-Source voltage
let t = 56; // Number | Temperature
apiInstance.technologyDeviceDataComputeList(techid, deviceid, p, vds, vgs, vbs, t, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **p** | **String**| Process name | 
 **vds** | **Number**| Drain-Source voltage | 
 **vgs** | **Number**| Gate-Source voltage | 
 **vbs** | **Number**| Body-Source voltage | 
 **t** | **Number**| Temperature | 

### Return type

[**ComputedDeviceData**](ComputedDeviceData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyDeviceDataCreate

> DeviceData technologyDeviceDataCreate(techid, deviceid, data)



Create device data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
let data = new PowermeterApi.DeviceData(); // DeviceData | 
apiInstance.technologyDeviceDataCreate(techid, deviceid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **data** | [**DeviceData**](DeviceData.md)|  | 

### Return type

[**DeviceData**](DeviceData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyDeviceDataDelete

> DeviceData technologyDeviceDataDelete(techid, deviceid, dataid, data)



Delete device data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
let dataid = 56; // Number | 
let data = new PowermeterApi.DeviceData(); // DeviceData | 
apiInstance.technologyDeviceDataDelete(techid, deviceid, dataid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **dataid** | **Number**|  | 
 **data** | [**DeviceData**](DeviceData.md)|  | 

### Return type

[**DeviceData**](DeviceData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyDeviceDataList

> [DeviceData] technologyDeviceDataList(techid, deviceid, opts)



Get device data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
let opts = {
  'p': "p_example", // String | Process name
  't': 56 // Number | Temperature
};
apiInstance.technologyDeviceDataList(techid, deviceid, opts, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **p** | **String**| Process name | [optional] 
 **t** | **Number**| Temperature | [optional] 

### Return type

[**[DeviceData]**](DeviceData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyDeviceDataRead

> DeviceData technologyDeviceDataRead(techid, deviceid, dataid)



Get device data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
let dataid = 56; // Number | 
apiInstance.technologyDeviceDataRead(techid, deviceid, dataid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **dataid** | **Number**|  | 

### Return type

[**DeviceData**](DeviceData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyDeviceDataTrainCreate

> technologyDeviceDataTrainCreate(techid, deviceid)



Create device data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
apiInstance.technologyDeviceDataTrainCreate(techid, deviceid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyDeviceDataUpdate

> DeviceData technologyDeviceDataUpdate(techid, deviceid, dataid, data)



Update device data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
let dataid = 56; // Number | 
let data = new PowermeterApi.DeviceData(); // DeviceData | 
apiInstance.technologyDeviceDataUpdate(techid, deviceid, dataid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **dataid** | **Number**|  | 
 **data** | [**DeviceData**](DeviceData.md)|  | 

### Return type

[**DeviceData**](DeviceData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyDeviceDelete

> technologyDeviceDelete(techid, deviceid)



Delete a device

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
apiInstance.technologyDeviceDelete(techid, deviceid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyDeviceList

> [Device] technologyDeviceList(techid, opts)



Get list of devices

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let opts = {
  'name': "name_example", // String | Device name
  'l': 56, // Number | Device length
  'w': 56, // Number | Device width
  'nfin': 56 // Number | Device nfin
};
apiInstance.technologyDeviceList(techid, opts, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **name** | **String**| Device name | [optional] 
 **l** | **Number**| Device length | [optional] 
 **w** | **Number**| Device width | [optional] 
 **nfin** | **Number**| Device nfin | [optional] 

### Return type

[**[Device]**](Device.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyDeviceRead

> Device technologyDeviceRead(techid, deviceid)



Get a device

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
apiInstance.technologyDeviceRead(techid, deviceid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 

### Return type

[**Device**](Device.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyDeviceUpdate

> Device technologyDeviceUpdate(techid, deviceid, data)



Update a device

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let deviceid = 56; // Number | 
let data = new PowermeterApi.Device(); // Device | 
apiInstance.technologyDeviceUpdate(techid, deviceid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **deviceid** | **Number**|  | 
 **data** | [**Device**](Device.md)|  | 

### Return type

[**Device**](Device.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyLayerstackClone

> LayerStack technologyLayerstackClone(techid, stackid)



Copy a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
apiInstance.technologyLayerstackClone(techid, stackid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 

### Return type

[**LayerStack**](LayerStack.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLayerstackCreate

> LayerStack technologyLayerstackCreate(techid, data)



Create a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let data = new PowermeterApi.LayerStack(); // LayerStack | 
apiInstance.technologyLayerstackCreate(techid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **data** | [**LayerStack**](LayerStack.md)|  | 

### Return type

[**LayerStack**](LayerStack.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyLayerstackDelete

> technologyLayerstackDelete(techid, stackid)



Delete a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
apiInstance.technologyLayerstackDelete(techid, stackid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyLayerstackLayerClone

> Layer technologyLayerstackLayerClone(techid, stackid, layerid)



Copy a layer

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
let layerid = 56; // Number | 
apiInstance.technologyLayerstackLayerClone(techid, stackid, layerid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 
 **layerid** | **Number**|  | 

### Return type

[**Layer**](Layer.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLayerstackLayerCreate

> Layer technologyLayerstackLayerCreate(techid, stackid, data)



Create a layer

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
let data = new PowermeterApi.Layer(); // Layer | 
apiInstance.technologyLayerstackLayerCreate(techid, stackid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 
 **data** | [**Layer**](Layer.md)|  | 

### Return type

[**Layer**](Layer.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyLayerstackLayerDelete

> technologyLayerstackLayerDelete(techid, stackid, layerid)



Delete a layer

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
let layerid = 56; // Number | 
apiInstance.technologyLayerstackLayerDelete(techid, stackid, layerid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 
 **layerid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyLayerstackLayerList

> [Layer] technologyLayerstackLayerList(techid, stackid)



Get list of layers

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
apiInstance.technologyLayerstackLayerList(techid, stackid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 

### Return type

[**[Layer]**](Layer.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLayerstackLayerRead

> Layer technologyLayerstackLayerRead(techid, stackid, layerid)



Get a layer

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
let layerid = 56; // Number | 
apiInstance.technologyLayerstackLayerRead(techid, stackid, layerid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 
 **layerid** | **Number**|  | 

### Return type

[**Layer**](Layer.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLayerstackLayerUpdate

> Layer technologyLayerstackLayerUpdate(techid, stackid, layerid, data)



Update a layer

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
let layerid = 56; // Number | 
let data = new PowermeterApi.Layer(); // Layer | 
apiInstance.technologyLayerstackLayerUpdate(techid, stackid, layerid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 
 **layerid** | **Number**|  | 
 **data** | [**Layer**](Layer.md)|  | 

### Return type

[**Layer**](Layer.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyLayerstackList

> [LayerStack] technologyLayerstackList(techid)



Get list of layer stacks

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyLayerstackList(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

[**[LayerStack]**](LayerStack.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLayerstackRead

> LayerStack technologyLayerstackRead(techid, stackid)



get a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
apiInstance.technologyLayerstackRead(techid, stackid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 

### Return type

[**LayerStack**](LayerStack.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLayerstackUpdate

> LayerStack technologyLayerstackUpdate(techid, stackid, data)



Update a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
let data = new PowermeterApi.LayerStack(); // LayerStack | 
apiInstance.technologyLayerstackUpdate(techid, stackid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 
 **data** | [**LayerStack**](LayerStack.md)|  | 

### Return type

[**LayerStack**](LayerStack.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyLayerstackUpdateList

> UpdateData technologyLayerstackUpdateList(techid, stackid)



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

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let stackid = 56; // Number | 
apiInstance.technologyLayerstackUpdateList(techid, stackid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **stackid** | **Number**|  | 

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLibraryClone

> TechnologyMaster technologyLibraryClone(techmasterid)



Creates a copy of technology

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techmasterid = 56; // Number | 
apiInstance.technologyLibraryClone(techmasterid, (error, data, response) => {
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
 **techmasterid** | **Number**|  | 

### Return type

[**TechnologyMaster**](TechnologyMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLibraryCreate

> TechnologyMaster technologyLibraryCreate(data)



Create new technology

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let data = new PowermeterApi.TechnologyMaster(); // TechnologyMaster | 
apiInstance.technologyLibraryCreate(data, (error, data, response) => {
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
 **data** | [**TechnologyMaster**](TechnologyMaster.md)|  | 

### Return type

[**TechnologyMaster**](TechnologyMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyLibraryDelete

> technologyLibraryDelete(techmasterid)



Delete a technology

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techmasterid = 56; // Number | 
apiInstance.technologyLibraryDelete(techmasterid, (error, data, response) => {
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
 **techmasterid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyLibraryList

> [TechnologyMaster] technologyLibraryList(opts)



Get list of technologies

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let opts = {
  'name': "name_example" // String | Project name
};
apiInstance.technologyLibraryList(opts, (error, data, response) => {
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

[**[TechnologyMaster]**](TechnologyMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLibraryRead

> TechnologyMaster technologyLibraryRead(techmasterid)



Get a technology

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techmasterid = 56; // Number | 
apiInstance.technologyLibraryRead(techmasterid, (error, data, response) => {
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
 **techmasterid** | **Number**|  | 

### Return type

[**TechnologyMaster**](TechnologyMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyLibraryUpdate

> TechnologyMaster technologyLibraryUpdate(techmasterid, data)



Update a technology

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techmasterid = 56; // Number | 
let data = new PowermeterApi.TechnologyMaster(); // TechnologyMaster | 
apiInstance.technologyLibraryUpdate(techmasterid, data, (error, data, response) => {
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
 **techmasterid** | **Number**|  | 
 **data** | [**TechnologyMaster**](TechnologyMaster.md)|  | 

### Return type

[**TechnologyMaster**](TechnologyMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyLibraryUpdateList

> UpdateData technologyLibraryUpdateList()



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

let apiInstance = new PowermeterApi.TechnologyApi();
apiInstance.technologyLibraryUpdateList((error, data, response) => {
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


## technologyLibraryVersionList

> [TechnologyVersion] technologyLibraryVersionList(techmasterid)



Get technology versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techmasterid = 56; // Number | 
apiInstance.technologyLibraryVersionList(techmasterid, (error, data, response) => {
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
 **techmasterid** | **Number**|  | 

### Return type

[**[TechnologyVersion]**](TechnologyVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyModelCornerCreate

> ModelCorner technologyModelCornerCreate(techid, data)



Create a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let data = new PowermeterApi.ModelCorner(); // ModelCorner | 
apiInstance.technologyModelCornerCreate(techid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **data** | [**ModelCorner**](ModelCorner.md)|  | 

### Return type

[**ModelCorner**](ModelCorner.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyModelCornerDelete

> technologyModelCornerDelete(techid, cornerid)



Delete a model corner

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let cornerid = 56; // Number | 
apiInstance.technologyModelCornerDelete(techid, cornerid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **cornerid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyModelCornerList

> [ModelCorner] technologyModelCornerList(techid)



Get list of model corner

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyModelCornerList(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

[**[ModelCorner]**](ModelCorner.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyModelCornerRead

> ModelCorner technologyModelCornerRead(techid, cornerid)



Get a model corner

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let cornerid = 56; // Number | 
apiInstance.technologyModelCornerRead(techid, cornerid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **cornerid** | **Number**|  | 

### Return type

[**ModelCorner**](ModelCorner.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyModelCornerUpdate

> ModelCorner technologyModelCornerUpdate(techid, cornerid, data)



Update a model corner

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let cornerid = 56; // Number | 
let data = new PowermeterApi.ModelCorner(); // ModelCorner | 
apiInstance.technologyModelCornerUpdate(techid, cornerid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **cornerid** | **Number**|  | 
 **data** | [**ModelCorner**](ModelCorner.md)|  | 

### Return type

[**ModelCorner**](ModelCorner.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyPermissionsList

> technologyPermissionsList(techid)



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

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyPermissionsList(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyPermissionsUpdate

> technologyPermissionsUpdate(techid)



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

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyPermissionsUpdate(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyRcCornerCreate

> RCCorner technologyRcCornerCreate(techid, data)



Create a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let data = new PowermeterApi.RCCorner(); // RCCorner | 
apiInstance.technologyRcCornerCreate(techid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **data** | [**RCCorner**](RCCorner.md)|  | 

### Return type

[**RCCorner**](RCCorner.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyRcCornerDelete

> technologyRcCornerDelete(techid, cornerid)



Delete a model corner

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let cornerid = 56; // Number | 
apiInstance.technologyRcCornerDelete(techid, cornerid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **cornerid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologyRcCornerList

> [RCCorner] technologyRcCornerList(techid)



Get list of RC corner

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyRcCornerList(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

[**[RCCorner]**](RCCorner.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyRcCornerRead

> RCCorner technologyRcCornerRead(techid, cornerid)



Get a RC corner

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let cornerid = 56; // Number | 
apiInstance.technologyRcCornerRead(techid, cornerid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **cornerid** | **Number**|  | 

### Return type

[**RCCorner**](RCCorner.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyRcCornerUpdate

> RCCorner technologyRcCornerUpdate(techid, cornerid, data)



Update a model corner

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let cornerid = 56; // Number | 
let data = new PowermeterApi.RCCorner(); // RCCorner | 
apiInstance.technologyRcCornerUpdate(techid, cornerid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **cornerid** | **Number**|  | 
 **data** | [**RCCorner**](RCCorner.md)|  | 

### Return type

[**RCCorner**](RCCorner.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyRead

> Technology technologyRead(techid)



Get a technology

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyRead(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

[**Technology**](Technology.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyRestoreCreate

> Technology technologyRestoreCreate(techid)



Restore a technology version as current version

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyRestoreCreate(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

[**Technology**](Technology.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologySourceCreate

> PowerSource technologySourceCreate(techid, data)



Create a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let data = new PowermeterApi.PowerSource(); // PowerSource | 
apiInstance.technologySourceCreate(techid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **data** | [**PowerSource**](PowerSource.md)|  | 

### Return type

[**PowerSource**](PowerSource.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologySourceDelete

> technologySourceDelete(techid, sourceid)



Delete a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let sourceid = 56; // Number | 
apiInstance.technologySourceDelete(techid, sourceid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **sourceid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## technologySourceList

> [PowerSource] technologySourceList(techid)



Get list of layer stacks

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologySourceList(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

[**[PowerSource]**](PowerSource.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologySourceRead

> PowerSource technologySourceRead(techid, sourceid)



get a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let sourceid = 56; // Number | 
apiInstance.technologySourceRead(techid, sourceid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **sourceid** | **Number**|  | 

### Return type

[**PowerSource**](PowerSource.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologySourceUpdate

> PowerSource technologySourceUpdate(techid, sourceid, data)



Update a layer stack

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let sourceid = 56; // Number | 
let data = new PowermeterApi.PowerSource(); // PowerSource | 
apiInstance.technologySourceUpdate(techid, sourceid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **sourceid** | **Number**|  | 
 **data** | [**PowerSource**](PowerSource.md)|  | 

### Return type

[**PowerSource**](PowerSource.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyUpdate

> Technology technologyUpdate(techid, data)



Update a technology

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let data = new PowermeterApi.Technology(); // Technology | 
apiInstance.technologyUpdate(techid, data, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **data** | [**Technology**](Technology.md)|  | 

### Return type

[**Technology**](Technology.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## technologyUpdateList

> UpdateData technologyUpdateList(techid)



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

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyUpdateList(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyVersionList

> [TechnologyVersion] technologyVersionList(techid)



Get technology versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
apiInstance.technologyVersionList(techid, (error, data, response) => {
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
 **techid** | **Number**|  | 

### Return type

[**[TechnologyVersion]**](TechnologyVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## technologyVersionRead

> TechnologyVersion technologyVersionRead(techid, versionid)



Get technology versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.TechnologyApi();
let techid = 56; // Number | 
let versionid = 56; // Number | 
apiInstance.technologyVersionRead(techid, versionid, (error, data, response) => {
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
 **techid** | **Number**|  | 
 **versionid** | **Number**|  | 

### Return type

[**TechnologyVersion**](TechnologyVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

