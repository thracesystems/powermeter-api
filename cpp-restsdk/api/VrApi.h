/**
 * PowerMeter API
 * API
 *
 * The version of the OpenAPI document: 2021.4.1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * VrApi.h
 *
 * 
 */

#ifndef POWERMETER_API_VrApi_H_
#define POWERMETER_API_VrApi_H_


#include "../ApiClient.h"

#include "ComputedVR.h"
#include "UpdateData.h"
#include "VR.h"
#include "VRMaster.h"
#include "VRSupply.h"
#include "VRVersion.h"


#include <boost/optional.hpp>

namespace powermeter {
namespace api {

using namespace powermeter::model;



class  VrApi 
{
public:

    explicit VrApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~VrApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Commit a version
    /// </remarks>
    /// <param name="vrid"></param>
    /// <param name="data"></param>
    pplx::task<std::shared_ptr<VRVersion>> vrCommitCreate(
        int32_t vrid,
        std::shared_ptr<VRVersion> data
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Compute VR
    /// </remarks>
    /// <param name="vrid"></param>
    /// <param name="vin"></param>
    /// <param name="vout"></param>
    /// <param name="iload"></param>
    pplx::task<std::shared_ptr<ComputedVR>> vrComputeList(
        int32_t vrid,
        double vin,
        double vout,
        double iload
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Copy a VR
    /// </remarks>
    /// <param name="vrmasterid"></param>
    pplx::task<std::shared_ptr<VRMaster>> vrLibraryClone(
        int32_t vrmasterid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Create a VR
    /// </remarks>
    /// <param name="data"></param>
    pplx::task<std::shared_ptr<VRMaster>> vrLibraryCreate(
        std::shared_ptr<VRMaster> data
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Delete VR
    /// </remarks>
    /// <param name="vrmasterid"></param>
    pplx::task<void> vrLibraryDelete(
        int32_t vrmasterid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of VR
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<VRMaster>>> vrLibraryList(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Update VR
    /// </remarks>
    /// <param name="vrmasterid"></param>
    /// <param name="data"></param>
    pplx::task<std::shared_ptr<VRMaster>> vrLibraryUpdate(
        int32_t vrmasterid,
        std::shared_ptr<VRMaster> data
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns an array of [current, last update] times
    /// </remarks>
    pplx::task<std::shared_ptr<UpdateData>> vrLibraryUpdateList(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get VR master versions
    /// </remarks>
    /// <param name="vrmasterid"></param>
    pplx::task<std::shared_ptr<VRVersion>> vrLibraryVersionList(
        int32_t vrmasterid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of permissions
    /// </remarks>
    /// <param name="vrid"></param>
    pplx::task<void> vrPermissionsList(
        int32_t vrid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of permissions
    /// </remarks>
    /// <param name="vrid"></param>
    pplx::task<void> vrPermissionsUpdate(
        int32_t vrid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get a VR
    /// </remarks>
    /// <param name="vrid"></param>
    pplx::task<std::shared_ptr<VR>> vrRead(
        int32_t vrid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Restore a VR version as current version
    /// </remarks>
    /// <param name="vrid"></param>
    pplx::task<std::shared_ptr<VR>> vrRestoreCreate(
        int32_t vrid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Copy a VR supply
    /// </remarks>
    /// <param name="vrid"></param>
    /// <param name="supplyid"></param>
    pplx::task<std::shared_ptr<VRSupply>> vrSupplyClone(
        int32_t vrid,
        int32_t supplyid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Create VR supplies
    /// </remarks>
    /// <param name="vrid"></param>
    /// <param name="data"></param>
    pplx::task<std::shared_ptr<VRSupply>> vrSupplyCreate(
        int32_t vrid,
        std::shared_ptr<VRSupply> data
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Delete VR supply
    /// </remarks>
    /// <param name="vrid"></param>
    /// <param name="supplyid"></param>
    pplx::task<void> vrSupplyDelete(
        int32_t vrid,
        int32_t supplyid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of VR supplies
    /// </remarks>
    /// <param name="vrid"></param>
    pplx::task<std::vector<std::shared_ptr<VRSupply>>> vrSupplyList(
        int32_t vrid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get a VR supply
    /// </remarks>
    /// <param name="vrid"></param>
    /// <param name="supplyid"></param>
    pplx::task<std::shared_ptr<VRSupply>> vrSupplyRead(
        int32_t vrid,
        int32_t supplyid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Update VR supply
    /// </remarks>
    /// <param name="vrid"></param>
    /// <param name="supplyid"></param>
    /// <param name="data"></param>
    pplx::task<std::shared_ptr<VRSupply>> vrSupplyUpdate(
        int32_t vrid,
        int32_t supplyid,
        std::shared_ptr<VRSupply> data
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Update a VR
    /// </remarks>
    /// <param name="vrid"></param>
    /// <param name="data"></param>
    pplx::task<std::shared_ptr<VR>> vrUpdate(
        int32_t vrid,
        std::shared_ptr<VR> data
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns an array of [current, last update] times
    /// </remarks>
    /// <param name="vrid"></param>
    pplx::task<std::shared_ptr<UpdateData>> vrUpdateList(
        int32_t vrid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get VR versions
    /// </remarks>
    /// <param name="vrid"></param>
    pplx::task<std::vector<std::shared_ptr<VRVersion>>> vrVersionList(
        int32_t vrid
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}

#endif /* POWERMETER_API_VrApi_H_ */

