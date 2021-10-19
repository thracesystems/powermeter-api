

# DesignPin

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **Integer** |  |  [optional] [readonly]
**name** | **String** |  | 
**direction** | [**DirectionEnum**](#DirectionEnum) |  | 
**type** | **String** |  |  [optional]
**bus** | **String** |  |  [optional]
**busIndex** | **Integer** |  |  [optional]
**bundle** | **String** |  |  [optional]
**bundleIndex** | **Integer** |  |  [optional]
**pinCaps** | [**List&lt;PinCap&gt;**](PinCap.md) |  |  [optional] [readonly]
**powerCount** | **Integer** |  |  [optional] [readonly]
**function** | **String** |  |  [optional]
**internalNode** | **String** |  |  [optional]



## Enum: DirectionEnum

Name | Value
---- | -----
INPUT | &quot;input&quot;
OUTPUT | &quot;output&quot;
INOUT | &quot;inout&quot;
INTERNAL | &quot;internal&quot;



