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
 * WlmApi.h
 *
 * 
 */

#ifndef POWERMETER_API_WlmApi_H_
#define POWERMETER_API_WlmApi_H_


#include "../ApiClient.h"

#include "WLMModel.h"
#include "WLMVersion.h"
#include "WireLoad.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace powermeter {
namespace api {

using namespace powermeter::model;



class  WlmApi 
{
public:

    explicit WlmApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~WlmApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Commit a version
    /// </remarks>
    /// <param name="wlmid"></param>
    /// <param name="data"></param>
    pplx::task<std::shared_ptr<WLMVersion>> wlmCommitCreate(
        int32_t wlmid,
        std::shared_ptr<WLMVersion> data
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Create wire load data
    /// </remarks>
    /// <param name="wlmid"></param>
    /// <param name="data"></param>
    pplx::task<std::shared_ptr<WireLoad>> wlmCreate(
        int32_t wlmid,
        std::shared_ptr<WireLoad> data
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Delete wire load data
    /// </remarks>
    /// <param name="wlmid"></param>
    /// <param name="dataid"></param>
    pplx::task<void> wlmDataCreate(
        int32_t wlmid,
        int32_t dataid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of wire load data
    /// </remarks>
    /// <param name="wlmid"></param>
    /// <param name="dataid"></param>
    pplx::task<std::shared_ptr<WireLoad>> wlmDataRead(
        int32_t wlmid,
        int32_t dataid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Update wire load data
    /// </remarks>
    /// <param name="wlmid"></param>
    /// <param name="dataid"></param>
    /// <param name="data"></param>
    pplx::task<std::shared_ptr<WireLoad>> wlmDataUpdate(
        int32_t wlmid,
        int32_t dataid,
        std::shared_ptr<WireLoad> data
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of wire load data
    /// </remarks>
    /// <param name="wlmid"></param>
    pplx::task<std::shared_ptr<WLMModel>> wlmRead(
        int32_t wlmid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get WLM versions
    /// </remarks>
    /// <param name="wlmid"></param>
    /// <param name="pcbid"></param>
    pplx::task<std::vector<std::shared_ptr<WLMVersion>>> wlmVersionList(
        utility::string_t wlmid,
        int32_t pcbid
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}

#endif /* POWERMETER_API_WlmApi_H_ */

