

# Supply

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **Integer** |  |  [optional] [readonly]
**name** | **String** |  | 
**voltage** | [**BigDecimal**](BigDecimal.md) |  |  [optional]
**type** | [**TypeEnum**](#TypeEnum) |  |  [optional]
**isPower** | **Boolean** |  |  [optional] [readonly]
**isGround** | **Boolean** |  |  [optional] [readonly]
**switchable** | **Boolean** |  |  [optional]
**masterSupply** | **Integer** |  |  [optional]
**color** | **String** |  |  [optional]
**instanceCount** | **Integer** |  |  [optional] [readonly]



## Enum: TypeEnum

Name | Value
---- | -----
PRIMARY_POWER | &quot;primary_power&quot;
PRIMARY_GROUND | &quot;primary_ground&quot;
BACKUP_POWER | &quot;backup_power&quot;
BACKUP_GROUND | &quot;backup_ground&quot;
INTERNAL_POWER | &quot;internal_power&quot;
INTERNAL_GROUND | &quot;internal_ground&quot;
PWELL | &quot;pwell&quot;
NWELL | &quot;nwell&quot;
DEEPNWELL | &quot;deepnwell&quot;
DEEPPWELL | &quot;deeppwell&quot;



