# PowermeterApi.RecentApi

All URIs are relative to *https://thracesystems.com/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**recentDashboardList**](RecentApi.md#recentDashboardList) | **GET** /recent/dashboard/ | 
[**recentDesignList**](RecentApi.md#recentDesignList) | **GET** /recent/design/ | 
[**recentProjectList**](RecentApi.md#recentProjectList) | **GET** /recent/project/ | 
[**recentScenarioList**](RecentApi.md#recentScenarioList) | **GET** /recent/scenario/ | 
[**recentSimulationList**](RecentApi.md#recentSimulationList) | **GET** /recent/simulation/ | 



## recentDashboardList

> [DashboardAccess] recentDashboardList()



Get list of recent design dashboards

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.RecentApi();
apiInstance.recentDashboardList((error, data, response) => {
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

[**[DashboardAccess]**](DashboardAccess.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## recentDesignList

> [DesignAccess] recentDesignList()



Get list of recent designs

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.RecentApi();
apiInstance.recentDesignList((error, data, response) => {
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

[**[DesignAccess]**](DesignAccess.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## recentProjectList

> [ProjectAccess] recentProjectList()



Get list of recent projects

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.RecentApi();
apiInstance.recentProjectList((error, data, response) => {
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

[**[ProjectAccess]**](ProjectAccess.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## recentScenarioList

> [ScenarioAccess] recentScenarioList()



Get list of recent project scenarios

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.RecentApi();
apiInstance.recentScenarioList((error, data, response) => {
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

[**[ScenarioAccess]**](ScenarioAccess.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## recentSimulationList

> [SimAccess] recentSimulationList()



Get list of recent sims

### Example

```javascript
import PowermeterApi from 'powermeter-api';
let defaultClient = PowermeterApi.ApiClient.instance;
// Configure API key authorization: Basic
let Basic = defaultClient.authentications['Basic'];
Basic.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//Basic.apiKeyPrefix = 'Token';

let apiInstance = new PowermeterApi.RecentApi();
apiInstance.recentSimulationList((error, data, response) => {
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

[**[SimAccess]**](SimAccess.md)

### Authorization

[Basic](../README.md#Basic)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

