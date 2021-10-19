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
 * RecentApi.h
 *
 * 
 */

#ifndef POWERMETER_API_RecentApi_H_
#define POWERMETER_API_RecentApi_H_


#include "../ApiClient.h"

#include "DashboardAccess.h"
#include "DesignAccess.h"
#include "ProjectAccess.h"
#include "ScenarioAccess.h"
#include "SimAccess.h"


#include <boost/optional.hpp>

namespace powermeter {
namespace api {

using namespace powermeter::model;



class  RecentApi 
{
public:

    explicit RecentApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~RecentApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of recent design dashboards
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<DashboardAccess>>> recentDashboardList(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of recent designs
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<DesignAccess>>> recentDesignList(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of recent projects
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<ProjectAccess>>> recentProjectList(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of recent project scenarios
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<ScenarioAccess>>> recentScenarioList(
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get list of recent sims
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<SimAccess>>> recentSimulationList(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}

#endif /* POWERMETER_API_RecentApi_H_ */

