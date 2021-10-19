# PowermeterApi.PackageApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**packageCommitCreate**](PackageApi.md#packageCommitCreate) | **POST** /package/{packageid}/commit/ | 
[**packageLibraryClone**](PackageApi.md#packageLibraryClone) | **POST** /package/library/{packagemasterid}/clone/ | 
[**packageLibraryCreate**](PackageApi.md#packageLibraryCreate) | **POST** /package/library/ | 
[**packageLibraryDelete**](PackageApi.md#packageLibraryDelete) | **DELETE** /package/library/{packagemasterid}/ | 
[**packageLibraryList**](PackageApi.md#packageLibraryList) | **GET** /package/library/ | 
[**packageLibraryRead**](PackageApi.md#packageLibraryRead) | **GET** /package/library/{packagemasterid}/ | 
[**packageLibraryUpdate**](PackageApi.md#packageLibraryUpdate) | **PUT** /package/library/{packagemasterid}/ | 
[**packageLibraryUpdateList**](PackageApi.md#packageLibraryUpdateList) | **GET** /package/library/update/ | 
[**packageLibraryVersionList**](PackageApi.md#packageLibraryVersionList) | **GET** /package/library/{packagemasterid}/version/ | 
[**packagePermissionsList**](PackageApi.md#packagePermissionsList) | **GET** /package/{packageid}/permissions/ | 
[**packagePermissionsUpdate**](PackageApi.md#packagePermissionsUpdate) | **PUT** /package/{packageid}/permissions/ | 
[**packageRead**](PackageApi.md#packageRead) | **GET** /package/{packageid}/ | 
[**packageRestoreCreate**](PackageApi.md#packageRestoreCreate) | **POST** /package/{packageid}/restore/ | 
[**packageSupplyClone**](PackageApi.md#packageSupplyClone) | **POST** /package/{packageid}/supply/{supplyid}/clone/ | 
[**packageSupplyCreate**](PackageApi.md#packageSupplyCreate) | **POST** /package/{packageid}/supply/ | 
[**packageSupplyDelete**](PackageApi.md#packageSupplyDelete) | **DELETE** /package/{packageid}/supply/{supplyid}/ | 
[**packageSupplyList**](PackageApi.md#packageSupplyList) | **GET** /package/{packageid}/supply/ | 
[**packageSupplyRead**](PackageApi.md#packageSupplyRead) | **GET** /package/{packageid}/supply/{supplyid}/ | 
[**packageSupplyUpdate**](PackageApi.md#packageSupplyUpdate) | **PUT** /package/{packageid}/supply/{supplyid}/ | 
[**packageUpdate**](PackageApi.md#packageUpdate) | **PUT** /package/{packageid}/ | 
[**packageUpdateList**](PackageApi.md#packageUpdateList) | **GET** /package/{packageid}/update/ | 
[**packageVersionList**](PackageApi.md#packageVersionList) | **GET** /package/{packageid}/version/ | 



## packageCommitCreate

> PackageVersion packageCommitCreate(packageid, data)



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

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
let data = new PowermeterApi.PackageVersion(); // PackageVersion | 
apiInstance.packageCommitCreate(packageid, data, (error, data, response) => {
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
 **packageid** | **Number**|  | 
 **data** | [**PackageVersion**](PackageVersion.md)|  | 

### Return type

[**PackageVersion**](PackageVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## packageLibraryClone

> PackageMaster packageLibraryClone(packagemasterid)



Copy a package

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packagemasterid = 56; // Number | 
apiInstance.packageLibraryClone(packagemasterid, (error, data, response) => {
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
 **packagemasterid** | **Number**|  | 

### Return type

[**PackageMaster**](PackageMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packageLibraryCreate

> PackageMaster packageLibraryCreate(data)



Create a package

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let data = new PowermeterApi.PackageMaster(); // PackageMaster | 
apiInstance.packageLibraryCreate(data, (error, data, response) => {
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
 **data** | [**PackageMaster**](PackageMaster.md)|  | 

### Return type

[**PackageMaster**](PackageMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## packageLibraryDelete

> packageLibraryDelete(packagemasterid)



Delete a package

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packagemasterid = 56; // Number | 
apiInstance.packageLibraryDelete(packagemasterid, (error, data, response) => {
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
 **packagemasterid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## packageLibraryList

> [PackageMaster] packageLibraryList()



Get list of packages

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
apiInstance.packageLibraryList((error, data, response) => {
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

[**[PackageMaster]**](PackageMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packageLibraryRead

> PackageMaster packageLibraryRead(packagemasterid)



Get a package

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packagemasterid = 56; // Number | 
apiInstance.packageLibraryRead(packagemasterid, (error, data, response) => {
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
 **packagemasterid** | **Number**|  | 

### Return type

[**PackageMaster**](PackageMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packageLibraryUpdate

> PackageMaster packageLibraryUpdate(packagemasterid, data)



Update a package

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packagemasterid = 56; // Number | 
let data = new PowermeterApi.PackageMaster(); // PackageMaster | 
apiInstance.packageLibraryUpdate(packagemasterid, data, (error, data, response) => {
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
 **packagemasterid** | **Number**|  | 
 **data** | [**PackageMaster**](PackageMaster.md)|  | 

### Return type

[**PackageMaster**](PackageMaster.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## packageLibraryUpdateList

> UpdateData packageLibraryUpdateList()



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

let apiInstance = new PowermeterApi.PackageApi();
apiInstance.packageLibraryUpdateList((error, data, response) => {
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


## packageLibraryVersionList

> PackageVersion packageLibraryVersionList(packagemasterid)



Get a package

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packagemasterid = 56; // Number | 
apiInstance.packageLibraryVersionList(packagemasterid, (error, data, response) => {
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
 **packagemasterid** | **Number**|  | 

### Return type

[**PackageVersion**](PackageVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packagePermissionsList

> packagePermissionsList(packageid)



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

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
apiInstance.packagePermissionsList(packageid, (error, data, response) => {
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
 **packageid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## packagePermissionsUpdate

> packagePermissionsUpdate(packageid)



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

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
apiInstance.packagePermissionsUpdate(packageid, (error, data, response) => {
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
 **packageid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## packageRead

> ModelPackage packageRead(packageid)



Get a package

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
apiInstance.packageRead(packageid, (error, data, response) => {
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
 **packageid** | **Number**|  | 

### Return type

[**ModelPackage**](ModelPackage.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packageRestoreCreate

> ModelPackage packageRestoreCreate(packageid)



Restore a package version as current version

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
apiInstance.packageRestoreCreate(packageid, (error, data, response) => {
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
 **packageid** | **Number**|  | 

### Return type

[**ModelPackage**](ModelPackage.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packageSupplyClone

> PackageSupply packageSupplyClone(packageid, supplyid)



Copy a package supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.packageSupplyClone(packageid, supplyid, (error, data, response) => {
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
 **packageid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**PackageSupply**](PackageSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packageSupplyCreate

> PackageSupply packageSupplyCreate(packageid, data)



Create a package supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
let data = new PowermeterApi.PackageSupply(); // PackageSupply | 
apiInstance.packageSupplyCreate(packageid, data, (error, data, response) => {
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
 **packageid** | **Number**|  | 
 **data** | [**PackageSupply**](PackageSupply.md)|  | 

### Return type

[**PackageSupply**](PackageSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## packageSupplyDelete

> packageSupplyDelete(packageid, supplyid)



Delete a package supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.packageSupplyDelete(packageid, supplyid, (error, data, response) => {
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
 **packageid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## packageSupplyList

> [PackageSupply] packageSupplyList(packageid)



Get list of package supplies

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
apiInstance.packageSupplyList(packageid, (error, data, response) => {
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
 **packageid** | **Number**|  | 

### Return type

[**[PackageSupply]**](PackageSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packageSupplyRead

> PackageSupply packageSupplyRead(packageid, supplyid)



Get a package supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
let supplyid = 56; // Number | 
apiInstance.packageSupplyRead(packageid, supplyid, (error, data, response) => {
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
 **packageid** | **Number**|  | 
 **supplyid** | **Number**|  | 

### Return type

[**PackageSupply**](PackageSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packageSupplyUpdate

> PackageSupply packageSupplyUpdate(packageid, supplyid, data)



Update a package supply

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
let supplyid = 56; // Number | 
let data = new PowermeterApi.PackageSupply(); // PackageSupply | 
apiInstance.packageSupplyUpdate(packageid, supplyid, data, (error, data, response) => {
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
 **packageid** | **Number**|  | 
 **supplyid** | **Number**|  | 
 **data** | [**PackageSupply**](PackageSupply.md)|  | 

### Return type

[**PackageSupply**](PackageSupply.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## packageUpdate

> ModelPackage packageUpdate(packageid, data)



Update a package

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
let data = new PowermeterApi.ModelPackage(); // ModelPackage | 
apiInstance.packageUpdate(packageid, data, (error, data, response) => {
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
 **packageid** | **Number**|  | 
 **data** | [**ModelPackage**](ModelPackage.md)|  | 

### Return type

[**ModelPackage**](ModelPackage.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## packageUpdateList

> UpdateData packageUpdateList(packageid)



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

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
apiInstance.packageUpdateList(packageid, (error, data, response) => {
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
 **packageid** | **Number**|  | 

### Return type

[**UpdateData**](UpdateData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## packageVersionList

> [PackageVersion] packageVersionList(packageid)



Get a package

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.PackageApi();
let packageid = 56; // Number | 
apiInstance.packageVersionList(packageid, (error, data, response) => {
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
 **packageid** | **Number**|  | 

### Return type

[**[PackageVersion]**](PackageVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

