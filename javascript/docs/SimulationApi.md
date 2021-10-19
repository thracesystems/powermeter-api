# PowermeterApi.SimulationApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**apiSimulationScopeDeleteAll**](SimulationApi.md#apiSimulationScopeDeleteAll) | **DELETE** /simulation/{simid}/scope/ | 
[**simulationAccessCreate**](SimulationApi.md#simulationAccessCreate) | **POST** /simulation/{simid}/access/ | 
[**simulationMeasurementCloneCreate**](SimulationApi.md#simulationMeasurementCloneCreate) | **POST** /simulation/{simid}/measurement/{measureid}/clone/ | 
[**simulationMeasurementCreate**](SimulationApi.md#simulationMeasurementCreate) | **POST** /simulation/{simid}/measurement/ | 
[**simulationMeasurementDataCreate**](SimulationApi.md#simulationMeasurementDataCreate) | **POST** /simulation/{simid}/measurement/{measureid}/data/ | 
[**simulationMeasurementDataDelete**](SimulationApi.md#simulationMeasurementDataDelete) | **DELETE** /simulation/{simid}/measurement/{measureid}/data/ | 
[**simulationMeasurementDataList**](SimulationApi.md#simulationMeasurementDataList) | **GET** /simulation/{simid}/measurement/{measureid}/data/ | 
[**simulationMeasurementDelete**](SimulationApi.md#simulationMeasurementDelete) | **DELETE** /simulation/{simid}/measurement/{measureid}/ | 
[**simulationMeasurementList**](SimulationApi.md#simulationMeasurementList) | **GET** /simulation/{simid}/measurement/ | 
[**simulationMeasurementRead**](SimulationApi.md#simulationMeasurementRead) | **GET** /simulation/{simid}/measurement/{measureid}/ | 
[**simulationMeasurementUpdate**](SimulationApi.md#simulationMeasurementUpdate) | **PUT** /simulation/{simid}/measurement/{measureid}/ | 
[**simulationPermissionsList**](SimulationApi.md#simulationPermissionsList) | **GET** /simulation/{simid}/permissions/ | 
[**simulationPermissionsUpdate**](SimulationApi.md#simulationPermissionsUpdate) | **PUT** /simulation/{simid}/permissions/ | 
[**simulationRead**](SimulationApi.md#simulationRead) | **GET** /simulation/{simid}/ | 
[**simulationScopeCreate**](SimulationApi.md#simulationScopeCreate) | **POST** /simulation/{simid}/scope/ | 
[**simulationScopeDelete**](SimulationApi.md#simulationScopeDelete) | **DELETE** /simulation/{simid}/scope/{scopeid}/ | 
[**simulationScopeList**](SimulationApi.md#simulationScopeList) | **GET** /simulation/{simid}/scope/ | 
[**simulationScopeRead**](SimulationApi.md#simulationScopeRead) | **GET** /simulation/{simid}/scope/{scopeid}/ | 
[**simulationScopeScopeCreate**](SimulationApi.md#simulationScopeScopeCreate) | **POST** /simulation/{simid}/scope/{scopeid}/scope/ | 
[**simulationScopeScopeList**](SimulationApi.md#simulationScopeScopeList) | **GET** /simulation/{simid}/scope/{scopeid}/scope/ | 
[**simulationScopeVarCreate**](SimulationApi.md#simulationScopeVarCreate) | **POST** /simulation/{simid}/scope/{scopeid}/var/ | 
[**simulationScopeVarList**](SimulationApi.md#simulationScopeVarList) | **GET** /simulation/{simid}/scope/{scopeid}/var/ | 
[**simulationUpdate**](SimulationApi.md#simulationUpdate) | **PUT** /simulation/{simid}/ | 
[**simulationVarList**](SimulationApi.md#simulationVarList) | **GET** /simulation/{simid}/var/ | 



## apiSimulationScopeDeleteAll

> apiSimulationScopeDeleteAll(simid)



Delete all scope

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
apiInstance.apiSimulationScopeDeleteAll(simid, (error, data, response) => {
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
 **simid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## simulationAccessCreate

> simulationAccessCreate(simid)



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

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
apiInstance.simulationAccessCreate(simid, (error, data, response) => {
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
 **simid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## simulationMeasurementCloneCreate

> SimMeasurement simulationMeasurementCloneCreate(simid, measureid)



Clone a measurement

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let measureid = 56; // Number | 
apiInstance.simulationMeasurementCloneCreate(simid, measureid, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **measureid** | **Number**|  | 

### Return type

[**SimMeasurement**](SimMeasurement.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationMeasurementCreate

> SimMeasurement simulationMeasurementCreate(simid, data)



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

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let data = new PowermeterApi.SimMeasurement(); // SimMeasurement | 
apiInstance.simulationMeasurementCreate(simid, data, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **data** | [**SimMeasurement**](SimMeasurement.md)|  | 

### Return type

[**SimMeasurement**](SimMeasurement.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## simulationMeasurementDataCreate

> simulationMeasurementDataCreate(simid, measureid, data)



Append data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let measureid = 56; // Number | 
let data = [new PowermeterApi.MeasuredDataJSON()]; // [MeasuredDataJSON] | 
apiInstance.simulationMeasurementDataCreate(simid, measureid, data, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **measureid** | **Number**|  | 
 **data** | [**[MeasuredDataJSON]**](MeasuredDataJSON.md)|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: Not defined


## simulationMeasurementDataDelete

> simulationMeasurementDataDelete(simid, measureid)



Delete all data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let measureid = 56; // Number | 
apiInstance.simulationMeasurementDataDelete(simid, measureid, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **measureid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## simulationMeasurementDataList

> PagedMeasuredData simulationMeasurementDataList(simid, measureid)



Get data for a measure

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let measureid = 56; // Number | 
apiInstance.simulationMeasurementDataList(simid, measureid, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **measureid** | **Number**|  | 

### Return type

[**PagedMeasuredData**](PagedMeasuredData.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationMeasurementDelete

> simulationMeasurementDelete(simid, measureid)



Delete a measurement

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let measureid = 56; // Number | 
apiInstance.simulationMeasurementDelete(simid, measureid, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **measureid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## simulationMeasurementList

> [SimMeasurement] simulationMeasurementList(simid)



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

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
apiInstance.simulationMeasurementList(simid, (error, data, response) => {
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
 **simid** | **Number**|  | 

### Return type

[**[SimMeasurement]**](SimMeasurement.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationMeasurementRead

> SimMeasurement simulationMeasurementRead(simid, measureid)



Get measurement

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let measureid = 56; // Number | 
apiInstance.simulationMeasurementRead(simid, measureid, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **measureid** | **Number**|  | 

### Return type

[**SimMeasurement**](SimMeasurement.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationMeasurementUpdate

> SimMeasurement simulationMeasurementUpdate(simid, measureid, data)



Update a measurement

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let measureid = 56; // Number | 
let data = new PowermeterApi.SimMeasurement(); // SimMeasurement | 
apiInstance.simulationMeasurementUpdate(simid, measureid, data, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **measureid** | **Number**|  | 
 **data** | [**SimMeasurement**](SimMeasurement.md)|  | 

### Return type

[**SimMeasurement**](SimMeasurement.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## simulationPermissionsList

> simulationPermissionsList(simid)



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

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
apiInstance.simulationPermissionsList(simid, (error, data, response) => {
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
 **simid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## simulationPermissionsUpdate

> simulationPermissionsUpdate(simid)



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

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
apiInstance.simulationPermissionsUpdate(simid, (error, data, response) => {
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
 **simid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## simulationRead

> Simulation simulationRead(simid)



Get a simulation

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
apiInstance.simulationRead(simid, (error, data, response) => {
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
 **simid** | **Number**|  | 

### Return type

[**Simulation**](Simulation.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationScopeCreate

> SimScope simulationScopeCreate(simid, data)



Create a scope

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let data = new PowermeterApi.SimScope(); // SimScope | 
apiInstance.simulationScopeCreate(simid, data, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **data** | [**SimScope**](SimScope.md)|  | 

### Return type

[**SimScope**](SimScope.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## simulationScopeDelete

> SimScope simulationScopeDelete(simid, scopeid)



Get a scope

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let scopeid = 56; // Number | 
apiInstance.simulationScopeDelete(simid, scopeid, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **scopeid** | **Number**|  | 

### Return type

[**SimScope**](SimScope.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationScopeList

> PagedSimScope simulationScopeList(simid, opts)



Get scopes

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let opts = {
  'page': 56, // Number | 
  '_number': 56 // Number | 
};
apiInstance.simulationScopeList(simid, opts, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **page** | **Number**|  | [optional] 
 **_number** | **Number**|  | [optional] 

### Return type

[**PagedSimScope**](PagedSimScope.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationScopeRead

> SimScope simulationScopeRead(simid, scopeid)



Get a scope

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let scopeid = 56; // Number | 
apiInstance.simulationScopeRead(simid, scopeid, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **scopeid** | **Number**|  | 

### Return type

[**SimScope**](SimScope.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationScopeScopeCreate

> SimScope simulationScopeScopeCreate(simid, scopeid, data)



Create a scope

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let scopeid = 56; // Number | 
let data = new PowermeterApi.SimScope(); // SimScope | 
apiInstance.simulationScopeScopeCreate(simid, scopeid, data, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **scopeid** | **Number**|  | 
 **data** | [**SimScope**](SimScope.md)|  | 

### Return type

[**SimScope**](SimScope.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## simulationScopeScopeList

> SimScope simulationScopeScopeList(simid, scopeid)



Get scopes

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let scopeid = 56; // Number | 
apiInstance.simulationScopeScopeList(simid, scopeid, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **scopeid** | **Number**|  | 

### Return type

[**SimScope**](SimScope.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationScopeVarCreate

> SimVar simulationScopeVarCreate(simid, scopeid, data)



Create a var

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let scopeid = 56; // Number | 
let data = new PowermeterApi.SimVar(); // SimVar | 
apiInstance.simulationScopeVarCreate(simid, scopeid, data, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **scopeid** | **Number**|  | 
 **data** | [**SimVar**](SimVar.md)|  | 

### Return type

[**SimVar**](SimVar.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## simulationScopeVarList

> [SimVar] simulationScopeVarList(simid, scopeid)



Get vars

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let scopeid = 56; // Number | 
apiInstance.simulationScopeVarList(simid, scopeid, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **scopeid** | **Number**|  | 

### Return type

[**[SimVar]**](SimVar.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## simulationUpdate

> Simulation simulationUpdate(simid, data)



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

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let data = new PowermeterApi.Simulation(); // Simulation | 
apiInstance.simulationUpdate(simid, data, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **data** | [**Simulation**](Simulation.md)|  | 

### Return type

[**Simulation**](Simulation.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## simulationVarList

> PagedSimVar simulationVarList(simid, opts)



Get vars

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.SimulationApi();
let simid = 56; // Number | 
let opts = {
  'page': 56, // Number | 
  '_number': 56 // Number | 
};
apiInstance.simulationVarList(simid, opts, (error, data, response) => {
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
 **simid** | **Number**|  | 
 **page** | **Number**|  | [optional] 
 **_number** | **Number**|  | [optional] 

### Return type

[**PagedSimVar**](PagedSimVar.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

