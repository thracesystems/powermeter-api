# PowermeterApi.WlmApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**wlmCommitCreate**](WlmApi.md#wlmCommitCreate) | **POST** /wlm/{wlmid}/commit/ | 
[**wlmCreate**](WlmApi.md#wlmCreate) | **POST** /wlm/{wlmid}/ | 
[**wlmDataCreate**](WlmApi.md#wlmDataCreate) | **POST** /wlm/{wlmid}/data/{dataid}/ | 
[**wlmDataRead**](WlmApi.md#wlmDataRead) | **GET** /wlm/{wlmid}/data/{dataid}/ | 
[**wlmDataUpdate**](WlmApi.md#wlmDataUpdate) | **PUT** /wlm/{wlmid}/data/{dataid}/ | 
[**wlmRead**](WlmApi.md#wlmRead) | **GET** /wlm/{wlmid}/ | 
[**wlmVersionList**](WlmApi.md#wlmVersionList) | **GET** /wlm/{wlmid}/version/ | 



## wlmCommitCreate

> WLMVersion wlmCommitCreate(wlmid, data)



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

let apiInstance = new PowermeterApi.WlmApi();
let wlmid = 56; // Number | 
let data = new PowermeterApi.WLMVersion(); // WLMVersion | 
apiInstance.wlmCommitCreate(wlmid, data, (error, data, response) => {
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
 **wlmid** | **Number**|  | 
 **data** | [**WLMVersion**](WLMVersion.md)|  | 

### Return type

[**WLMVersion**](WLMVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## wlmCreate

> WireLoad wlmCreate(wlmid, data)



Create wire load data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.WlmApi();
let wlmid = 56; // Number | 
let data = new PowermeterApi.WireLoad(); // WireLoad | 
apiInstance.wlmCreate(wlmid, data, (error, data, response) => {
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
 **wlmid** | **Number**|  | 
 **data** | [**WireLoad**](WireLoad.md)|  | 

### Return type

[**WireLoad**](WireLoad.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## wlmDataCreate

> wlmDataCreate(wlmid, dataid)



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

let apiInstance = new PowermeterApi.WlmApi();
let wlmid = 56; // Number | 
let dataid = 56; // Number | 
apiInstance.wlmDataCreate(wlmid, dataid, (error, data, response) => {
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
 **wlmid** | **Number**|  | 
 **dataid** | **Number**|  | 

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## wlmDataRead

> WireLoad wlmDataRead(wlmid, dataid)



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

let apiInstance = new PowermeterApi.WlmApi();
let wlmid = 56; // Number | 
let dataid = 56; // Number | 
apiInstance.wlmDataRead(wlmid, dataid, (error, data, response) => {
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
 **wlmid** | **Number**|  | 
 **dataid** | **Number**|  | 

### Return type

[**WireLoad**](WireLoad.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## wlmDataUpdate

> WireLoad wlmDataUpdate(wlmid, dataid, data)



Update wire load data

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.WlmApi();
let wlmid = 56; // Number | 
let dataid = 56; // Number | 
let data = new PowermeterApi.WireLoad(); // WireLoad | 
apiInstance.wlmDataUpdate(wlmid, dataid, data, (error, data, response) => {
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
 **wlmid** | **Number**|  | 
 **dataid** | **Number**|  | 
 **data** | [**WireLoad**](WireLoad.md)|  | 

### Return type

[**WireLoad**](WireLoad.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## wlmRead

> WLMModel wlmRead(wlmid)



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

let apiInstance = new PowermeterApi.WlmApi();
let wlmid = 56; // Number | 
apiInstance.wlmRead(wlmid, (error, data, response) => {
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
 **wlmid** | **Number**|  | 

### Return type

[**WLMModel**](WLMModel.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## wlmVersionList

> [WLMVersion] wlmVersionList(wlmid, pcbid)



Get WLM versions

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.WlmApi();
let wlmid = "wlmid_example"; // String | 
let pcbid = 56; // Number | 
apiInstance.wlmVersionList(wlmid, pcbid, (error, data, response) => {
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
 **wlmid** | **String**|  | 
 **pcbid** | **Number**|  | 

### Return type

[**[WLMVersion]**](WLMVersion.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

