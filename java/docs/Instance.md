

# Instance

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **Integer** |  |  [optional] [readonly]
**name** | **String** |  | 
**count** | **String** |  |  [optional]
**originX** | [**BigDecimal**](BigDecimal.md) |  |  [optional]
**originY** | [**BigDecimal**](BigDecimal.md) |  |  [optional]
**orientation** | [**OrientationEnum**](#OrientationEnum) |  |  [optional]
**color** | **String** |  |  [optional]
**computedColor** | **String** |  |  [optional] [readonly]
**master** | **Integer** |  | 
**masterName** | **String** |  |  [optional] [readonly]
**masterMaster** | **Integer** |  |  [optional] [readonly]
**masterLatestCommit** | **Integer** |  |  [optional] [readonly]
**renameOnConflict** | **Boolean** |  |  [optional]
**modes** | [**List&lt;InstanceMode&gt;**](InstanceMode.md) |  | 
**outline** | **String** |  |  [optional] [readonly]
**area** | [**BigDecimal**](BigDecimal.md) |  |  [optional] [readonly]
**supplies** | [**List&lt;InstanceSupply&gt;**](InstanceSupply.md) |  |  [optional]



## Enum: OrientationEnum

Name | Value
---- | -----
N | &quot;N&quot;
E | &quot;E&quot;
W | &quot;W&quot;
S | &quot;S&quot;
FN | &quot;FN&quot;
FS | &quot;FS&quot;
FE | &quot;FE&quot;
FW | &quot;FW&quot;



