# PowermeterApi.HeatsinkApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**haetsinkLibraryClone**](HeatsinkApi.md#haetsinkLibraryClone) | **POST** /heatsink/library/{heatsinkmasterid}/clone/ | 
[**heatsinkCommitCreate**](HeatsinkApi.md#heatsinkCommitCreate) | **POST** /heatsink/{heatsinkid}/commit/ | 
[**heatsinkLibraryCreate**](HeatsinkApi.md#heatsinkLibraryCreate) | **POST** /heatsink/library/ | 
[**heatsinkLibraryDelete**](HeatsinkApi.md#heatsinkLibraryDelete) | **DELETE** /heatsink/library/{heatsinkmasterid}/ | 
[**heatsinkLibraryList**](HeatsinkApi.md#heatsinkLibraryList) | **GET** /heatsink/library/ | 
[**heatsinkLibraryRead**](HeatsinkApi.md#heatsinkLibraryRead) | **GET** /heatsink/library/{heatsinkmasterid}/ | 
[**heatsinkLibraryUpdate**](HeatsinkApi.md#heatsinkLibraryUpdate) | **PUT** /heatsink/library/{heatsinkmasterid}/ | 
[**heatsinkLibraryUpdateList**](HeatsinkApi.md#heatsinkLibraryUpdateList) | **GET** /heatsink/library/update/ | 
[**heatsinkLibraryVersionList**](HeatsinkApi.md#heatsinkLibraryVersionList) | **GET** /heatsink/library/{heatsinkmasterid}/version/ | 
[**heatsinkPermissionsList**](HeatsinkApi.md#heatsinkPermissionsList) | **GET** /heatsink/{heatsinkid}/permissions/ | 
[**heatsinkPermissionsUpdate**](HeatsinkApi.md#heatsinkPermissionsUpdate) | **PUT** /heatsink/{heatsinkid}/permissions/ | 
[**heatsinkRead**](HeatsinkApi.md#heatsinkRead) | **GET** /heatsink/{heatsinkid}/ | 
[**heatsinkRestoreCreate**](HeatsinkApi.md#heatsinkRestoreCreate) | **POST** /heatsink/{heatsinkid}/restore/ | 
[**heatsinkUpdate**](HeatsinkApi.md#heatsinkUpdate) | **PUT** /heatsink/{heatsinkid}/ | 
[**heatsinkUpdateList**](HeatsinkApi.md#heatsinkUpdateList) | **GET** /heatsink/{heatsinkid}/update/ | 
[**heatsinkVersionList**](HeatsinkApi.md#heatsinkVersionList) | **GET** /heatsink/{heatsinkid}/version/ | 



## haetsinkLibraryClone

> HeatsinkMaster haetsinkLibraryClone(heatsinkmasterid)



Clone a heat sink

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkmasterid = 56; // Number | 
apiInstance.haetsinkLibraryClone(heatsinkmasterid, (error, data, response) => {
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
 **heatsinkmasterid** | **Number**|  | 

### Return type

[**HeatsinkMaster**](HeatsinkMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## heatsinkCommitCreate

> HeatsinkVersion heatsinkCommitCreate(heatsinkid, data)



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

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkid = 56; // Number | 
let data = new PowermeterApi.HeatsinkVersion(); // HeatsinkVersion | 
apiInstance.heatsinkCommitCreate(heatsinkid, data, (error, data, response) => {
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
 **heatsinkid** | **Number**|  | 
 **data** | [**HeatsinkVersion**](HeatsinkVersion.md)|  | 

### Return type

[**HeatsinkVersion**](HeatsinkVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## heatsinkLibraryCreate

> HeatsinkMaster heatsinkLibraryCreate(data)



Create a heatsink

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let data = new PowermeterApi.HeatsinkMaster(); // HeatsinkMaster | 
apiInstance.heatsinkLibraryCreate(data, (error, data, response) => {
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
 **data** | [**HeatsinkMaster**](HeatsinkMaster.md)|  | 

### Return type

[**HeatsinkMaster**](HeatsinkMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## heatsinkLibraryDelete

> heatsinkLibraryDelete(heatsinkmasterid)



Delete a heatsink

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkmasterid = 56; // Number | 
apiInstance.heatsinkLibraryDelete(heatsinkmasterid, (error, data, response) => {
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
 **heatsinkmasterid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## heatsinkLibraryList

> [HeatsinkMaster] heatsinkLibraryList()



Get list of heat sinks

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
apiInstance.heatsinkLibraryList((error, data, response) => {
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

[**[HeatsinkMaster]**](HeatsinkMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## heatsinkLibraryRead

> HeatsinkMaster heatsinkLibraryRead(heatsinkmasterid)



Get a heatsink

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkmasterid = 56; // Number | 
apiInstance.heatsinkLibraryRead(heatsinkmasterid, (error, data, response) => {
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
 **heatsinkmasterid** | **Number**|  | 

### Return type

[**HeatsinkMaster**](HeatsinkMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## heatsinkLibraryUpdate

> HeatsinkMaster heatsinkLibraryUpdate(heatsinkmasterid, data)



Update a heatsink

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkmasterid = 56; // Number | 
let data = new PowermeterApi.HeatsinkMaster(); // HeatsinkMaster | 
apiInstance.heatsinkLibraryUpdate(heatsinkmasterid, data, (error, data, response) => {
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
 **heatsinkmasterid** | **Number**|  | 
 **data** | [**HeatsinkMaster**](HeatsinkMaster.md)|  | 

### Return type

[**HeatsinkMaster**](HeatsinkMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## heatsinkLibraryUpdateList

> UpdateData heatsinkLibraryUpdateList()



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

let apiInstance = new PowermeterApi.HeatsinkApi();
apiInstance.heatsinkLibraryUpdateList((error, data, response) => {
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


## heatsinkLibraryVersionList

> HeatsinkVersion heatsinkLibraryVersionList(heatsinkmasterid)



Get Heatsink versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkmasterid = 56; // Number | 
apiInstance.heatsinkLibraryVersionList(heatsinkmasterid, (error, data, response) => {
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
 **heatsinkmasterid** | **Number**|  | 

### Return type

[**HeatsinkVersion**](HeatsinkVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## heatsinkPermissionsList

> heatsinkPermissionsList(heatsinkid)



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

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkid = 56; // Number | 
apiInstance.heatsinkPermissionsList(heatsinkid, (error, data, response) => {
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
 **heatsinkid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## heatsinkPermissionsUpdate

> heatsinkPermissionsUpdate(heatsinkid)



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

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkid = 56; // Number | 
apiInstance.heatsinkPermissionsUpdate(heatsinkid, (error, data, response) => {
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
 **heatsinkid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## heatsinkRead

> Heatsink heatsinkRead(heatsinkid)



Get a heatsink

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkid = 56; // Number | 
apiInstance.heatsinkRead(heatsinkid, (error, data, response) => {
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
 **heatsinkid** | **Number**|  | 

### Return type

[**Heatsink**](Heatsink.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## heatsinkRestoreCreate

> Heatsink heatsinkRestoreCreate(heatsinkid)



Restore a heatsink version as current version

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkid = 56; // Number | 
apiInstance.heatsinkRestoreCreate(heatsinkid, (error, data, response) => {
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
 **heatsinkid** | **Number**|  | 

### Return type

[**Heatsink**](Heatsink.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## heatsinkUpdate

> Heatsink heatsinkUpdate(heatsinkid, data)



Update a heatsink

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkid = 56; // Number | 
let data = new PowermeterApi.Heatsink(); // Heatsink | 
apiInstance.heatsinkUpdate(heatsinkid, data, (error, data, response) => {
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
 **heatsinkid** | **Number**|  | 
 **data** | [**Heatsink**](Heatsink.md)|  | 

### Return type

[**Heatsink**](Heatsink.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## heatsinkUpdateList

> UpdateData heatsinkUpdateList(heatsinkid)



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

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkid = 56; // Number | 
apiInstance.heatsinkUpdateList(heatsinkid, (error, data, response) => {
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
 **heatsinkid** | **Number**|  | 

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## heatsinkVersionList

> [HeatsinkVersion] heatsinkVersionList(heatsinkid)



Get Heatsink versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.HeatsinkApi();
let heatsinkid = 56; // Number | 
apiInstance.heatsinkVersionList(heatsinkid, (error, data, response) => {
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
 **heatsinkid** | **Number**|  | 

### Return type

[**[HeatsinkVersion]**](HeatsinkVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

