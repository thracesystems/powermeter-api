# PowermeterApi.GuiApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**guiList**](GuiApi.md#guiList) | **GET** /gui/ | 
[**guiUpdate**](GuiApi.md#guiUpdate) | **PUT** /gui/ | 



## guiList

> guiList()



Get value of saved parameter

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.GuiApi();
apiInstance.guiList((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## guiUpdate

> guiUpdate()



Set value of parameter

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.GuiApi();
apiInstance.guiUpdate((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

