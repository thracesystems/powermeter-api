# PackageInstance

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] [readonly] 
**name** | **str** |  | 
**hier_name** | **str** |  | [optional] [readonly] 
**parent_id** | **int** |  | [optional] 
**parent_type** | **str** |  | [optional] 
**master** | **int** |  | 
**master_name** | **str** |  | [optional] [readonly] 
**master_master** | **int** |  | [optional] [readonly] 
**supplies** | [**list[PackageSupplyInst]**](PackageSupplyInst.md) |  | [optional] 
**design** | [**list[DesignInstance]**](DesignInstance.md) |  | [optional] [readonly] 
**vr** | [**list[VRInstance]**](VRInstance.md) |  | [optional] [readonly] 
**heatsink** | **int** |  | [optional] 
**heatsink_master** | **int** |  | [optional] [readonly] 
**heatsink_name** | **str** |  | [optional] [readonly] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


