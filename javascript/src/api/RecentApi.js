/**
 * PowerMeter API
 * API
 *
 * The version of the OpenAPI document: 2021.4.1
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */


import ApiClient from "../ApiClient";
import DashboardAccess from '../model/DashboardAccess';
import DesignAccess from '../model/DesignAccess';
import ProjectAccess from '../model/ProjectAccess';
import ScenarioAccess from '../model/ScenarioAccess';
import SimAccess from '../model/SimAccess';

/**
* Recent service.
* @module api/RecentApi
* @version 2021.4.1
*/
export default class RecentApi {

    /**
    * Constructs a new RecentApi. 
    * @alias module:api/RecentApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the recentDashboardList operation.
     * @callback module:api/RecentApi~recentDashboardListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/DashboardAccess>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of recent design dashboards
     * @param {module:api/RecentApi~recentDashboardListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/DashboardAccess>}
     */
    recentDashboardList(callback) {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = [DashboardAccess];
      return this.apiClient.callApi(
        '/recent/dashboard/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the recentDesignList operation.
     * @callback module:api/RecentApi~recentDesignListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/DesignAccess>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of recent designs
     * @param {module:api/RecentApi~recentDesignListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/DesignAccess>}
     */
    recentDesignList(callback) {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = [DesignAccess];
      return this.apiClient.callApi(
        '/recent/design/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the recentProjectList operation.
     * @callback module:api/RecentApi~recentProjectListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/ProjectAccess>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of recent projects
     * @param {module:api/RecentApi~recentProjectListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/ProjectAccess>}
     */
    recentProjectList(callback) {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = [ProjectAccess];
      return this.apiClient.callApi(
        '/recent/project/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the recentScenarioList operation.
     * @callback module:api/RecentApi~recentScenarioListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/ScenarioAccess>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of recent project scenarios
     * @param {module:api/RecentApi~recentScenarioListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/ScenarioAccess>}
     */
    recentScenarioList(callback) {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = [ScenarioAccess];
      return this.apiClient.callApi(
        '/recent/scenario/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the recentSimulationList operation.
     * @callback module:api/RecentApi~recentSimulationListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/SimAccess>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of recent sims
     * @param {module:api/RecentApi~recentSimulationListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/SimAccess>}
     */
    recentSimulationList(callback) {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = [SimAccess];
      return this.apiClient.callApi(
        '/recent/simulation/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}