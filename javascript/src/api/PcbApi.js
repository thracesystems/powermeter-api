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
import PCB from '../model/PCB';
import PCBMaster from '../model/PCBMaster';
import PCBSupply from '../model/PCBSupply';
import PCBVersionSerialzer from '../model/PCBVersionSerialzer';
import UpdateData from '../model/UpdateData';

/**
* Pcb service.
* @module api/PcbApi
* @version 2021.4.1
*/
export default class PcbApi {

    /**
    * Constructs a new PcbApi. 
    * @alias module:api/PcbApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the pcbCommitCreate operation.
     * @callback module:api/PcbApi~pcbCommitCreateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBVersionSerialzer} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Commit a version
     * @param {Number} pcbid 
     * @param {module:model/PCBVersionSerialzer} data 
     * @param {module:api/PcbApi~pcbCommitCreateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBVersionSerialzer}
     */
    pcbCommitCreate(pcbid, data, callback) {
      let postBody = data;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbCommitCreate");
      }
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling pcbCommitCreate");
      }

      let pathParams = {
        'pcbid': pcbid
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = PCBVersionSerialzer;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/commit/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbLibraryClone operation.
     * @callback module:api/PcbApi~pcbLibraryCloneCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBMaster} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Copy a PCB
     * @param {Number} pcbmasterid 
     * @param {module:api/PcbApi~pcbLibraryCloneCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBMaster}
     */
    pcbLibraryClone(pcbmasterid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbmasterid' is set
      if (pcbmasterid === undefined || pcbmasterid === null) {
        throw new Error("Missing the required parameter 'pcbmasterid' when calling pcbLibraryClone");
      }

      let pathParams = {
        'pcbmasterid': pcbmasterid
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
      let returnType = PCBMaster;
      return this.apiClient.callApi(
        '/pcb/library/{pcbmasterid}/clone/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbLibraryCreate operation.
     * @callback module:api/PcbApi~pcbLibraryCreateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBMaster} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Create a PCB
     * @param {module:model/PCBMaster} data 
     * @param {module:api/PcbApi~pcbLibraryCreateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBMaster}
     */
    pcbLibraryCreate(data, callback) {
      let postBody = data;
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling pcbLibraryCreate");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = PCBMaster;
      return this.apiClient.callApi(
        '/pcb/library/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbLibraryDelete operation.
     * @callback module:api/PcbApi~pcbLibraryDeleteCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Delete PCB
     * @param {Number} pcbmasterid 
     * @param {module:api/PcbApi~pcbLibraryDeleteCallback} callback The callback function, accepting three arguments: error, data, response
     */
    pcbLibraryDelete(pcbmasterid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbmasterid' is set
      if (pcbmasterid === undefined || pcbmasterid === null) {
        throw new Error("Missing the required parameter 'pcbmasterid' when calling pcbLibraryDelete");
      }

      let pathParams = {
        'pcbmasterid': pcbmasterid
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = [];
      let returnType = null;
      return this.apiClient.callApi(
        '/pcb/library/{pcbmasterid}/', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbLibraryList operation.
     * @callback module:api/PcbApi~pcbLibraryListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/PCBMaster>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of PCB
     * @param {module:api/PcbApi~pcbLibraryListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/PCBMaster>}
     */
    pcbLibraryList(callback) {
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
      let returnType = [PCBMaster];
      return this.apiClient.callApi(
        '/pcb/library/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbLibraryRead operation.
     * @callback module:api/PcbApi~pcbLibraryReadCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBMaster} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a PCB
     * @param {Number} pcbmasterid 
     * @param {module:api/PcbApi~pcbLibraryReadCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBMaster}
     */
    pcbLibraryRead(pcbmasterid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbmasterid' is set
      if (pcbmasterid === undefined || pcbmasterid === null) {
        throw new Error("Missing the required parameter 'pcbmasterid' when calling pcbLibraryRead");
      }

      let pathParams = {
        'pcbmasterid': pcbmasterid
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
      let returnType = PCBMaster;
      return this.apiClient.callApi(
        '/pcb/library/{pcbmasterid}/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbLibraryUpdate operation.
     * @callback module:api/PcbApi~pcbLibraryUpdateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBMaster} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update PCB
     * @param {Number} pcbmasterid 
     * @param {module:model/PCBMaster} data 
     * @param {module:api/PcbApi~pcbLibraryUpdateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBMaster}
     */
    pcbLibraryUpdate(pcbmasterid, data, callback) {
      let postBody = data;
      // verify the required parameter 'pcbmasterid' is set
      if (pcbmasterid === undefined || pcbmasterid === null) {
        throw new Error("Missing the required parameter 'pcbmasterid' when calling pcbLibraryUpdate");
      }
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling pcbLibraryUpdate");
      }

      let pathParams = {
        'pcbmasterid': pcbmasterid
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = PCBMaster;
      return this.apiClient.callApi(
        '/pcb/library/{pcbmasterid}/', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbLibraryUpdateList operation.
     * @callback module:api/PcbApi~pcbLibraryUpdateListCallback
     * @param {String} error Error message, if any.
     * @param {module:model/UpdateData} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Returns an array of [current, last update] times
     * @param {module:api/PcbApi~pcbLibraryUpdateListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/UpdateData}
     */
    pcbLibraryUpdateList(callback) {
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
      let returnType = UpdateData;
      return this.apiClient.callApi(
        '/pcb/library/update/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbLibraryVersionList operation.
     * @callback module:api/PcbApi~pcbLibraryVersionListCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBVersionSerialzer} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get PCB versions
     * @param {Number} pcbmasterid 
     * @param {module:api/PcbApi~pcbLibraryVersionListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBVersionSerialzer}
     */
    pcbLibraryVersionList(pcbmasterid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbmasterid' is set
      if (pcbmasterid === undefined || pcbmasterid === null) {
        throw new Error("Missing the required parameter 'pcbmasterid' when calling pcbLibraryVersionList");
      }

      let pathParams = {
        'pcbmasterid': pcbmasterid
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
      let returnType = PCBVersionSerialzer;
      return this.apiClient.callApi(
        '/pcb/library/{pcbmasterid}/version/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbPermissionsList operation.
     * @callback module:api/PcbApi~pcbPermissionsListCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of permissions
     * @param {Number} pcbid 
     * @param {module:api/PcbApi~pcbPermissionsListCallback} callback The callback function, accepting three arguments: error, data, response
     */
    pcbPermissionsList(pcbid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbPermissionsList");
      }

      let pathParams = {
        'pcbid': pcbid
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = [];
      let returnType = null;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/permissions/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbPermissionsUpdate operation.
     * @callback module:api/PcbApi~pcbPermissionsUpdateCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of permissions
     * @param {Number} pcbid 
     * @param {module:api/PcbApi~pcbPermissionsUpdateCallback} callback The callback function, accepting three arguments: error, data, response
     */
    pcbPermissionsUpdate(pcbid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbPermissionsUpdate");
      }

      let pathParams = {
        'pcbid': pcbid
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = [];
      let returnType = null;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/permissions/', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbRead operation.
     * @callback module:api/PcbApi~pcbReadCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCB} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a PCB
     * @param {Number} pcbid 
     * @param {module:api/PcbApi~pcbReadCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCB}
     */
    pcbRead(pcbid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbRead");
      }

      let pathParams = {
        'pcbid': pcbid
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
      let returnType = PCB;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbRestoreCreate operation.
     * @callback module:api/PcbApi~pcbRestoreCreateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCB} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Restore a pcb version as current version
     * @param {Number} pcbid 
     * @param {module:api/PcbApi~pcbRestoreCreateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCB}
     */
    pcbRestoreCreate(pcbid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbRestoreCreate");
      }

      let pathParams = {
        'pcbid': pcbid
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
      let returnType = PCB;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/restore/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbSupplyClone operation.
     * @callback module:api/PcbApi~pcbSupplyCloneCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBSupply} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Copy a PCB supply
     * @param {Number} pcbid 
     * @param {Number} supplyid 
     * @param {module:api/PcbApi~pcbSupplyCloneCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBSupply}
     */
    pcbSupplyClone(pcbid, supplyid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbSupplyClone");
      }
      // verify the required parameter 'supplyid' is set
      if (supplyid === undefined || supplyid === null) {
        throw new Error("Missing the required parameter 'supplyid' when calling pcbSupplyClone");
      }

      let pathParams = {
        'pcbid': pcbid,
        'supplyid': supplyid
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
      let returnType = PCBSupply;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/supply/{supplyid}/clone/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbSupplyCreate operation.
     * @callback module:api/PcbApi~pcbSupplyCreateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBSupply} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Create PCB supplies
     * @param {Number} pcbid 
     * @param {module:api/PcbApi~pcbSupplyCreateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBSupply}
     */
    pcbSupplyCreate(pcbid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbSupplyCreate");
      }

      let pathParams = {
        'pcbid': pcbid
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
      let returnType = PCBSupply;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/supply/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbSupplyDelete operation.
     * @callback module:api/PcbApi~pcbSupplyDeleteCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Delete PCB supply
     * @param {Number} pcbid 
     * @param {Number} supplyid 
     * @param {module:api/PcbApi~pcbSupplyDeleteCallback} callback The callback function, accepting three arguments: error, data, response
     */
    pcbSupplyDelete(pcbid, supplyid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbSupplyDelete");
      }
      // verify the required parameter 'supplyid' is set
      if (supplyid === undefined || supplyid === null) {
        throw new Error("Missing the required parameter 'supplyid' when calling pcbSupplyDelete");
      }

      let pathParams = {
        'pcbid': pcbid,
        'supplyid': supplyid
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = [];
      let returnType = null;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/supply/{supplyid}/', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbSupplyList operation.
     * @callback module:api/PcbApi~pcbSupplyListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/PCBSupply>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of PCB supplies
     * @param {Number} pcbid 
     * @param {module:api/PcbApi~pcbSupplyListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/PCBSupply>}
     */
    pcbSupplyList(pcbid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbSupplyList");
      }

      let pathParams = {
        'pcbid': pcbid
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
      let returnType = [PCBSupply];
      return this.apiClient.callApi(
        '/pcb/{pcbid}/supply/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbSupplyRead operation.
     * @callback module:api/PcbApi~pcbSupplyReadCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBSupply} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a PCB supply
     * @param {Number} pcbid 
     * @param {Number} supplyid 
     * @param {module:api/PcbApi~pcbSupplyReadCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBSupply}
     */
    pcbSupplyRead(pcbid, supplyid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbSupplyRead");
      }
      // verify the required parameter 'supplyid' is set
      if (supplyid === undefined || supplyid === null) {
        throw new Error("Missing the required parameter 'supplyid' when calling pcbSupplyRead");
      }

      let pathParams = {
        'pcbid': pcbid,
        'supplyid': supplyid
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
      let returnType = PCBSupply;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/supply/{supplyid}/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbSupplyUpdate operation.
     * @callback module:api/PcbApi~pcbSupplyUpdateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCBSupply} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update PCB supply
     * @param {Number} pcbid 
     * @param {Number} supplyid 
     * @param {module:model/PCBSupply} data 
     * @param {module:api/PcbApi~pcbSupplyUpdateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCBSupply}
     */
    pcbSupplyUpdate(pcbid, supplyid, data, callback) {
      let postBody = data;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbSupplyUpdate");
      }
      // verify the required parameter 'supplyid' is set
      if (supplyid === undefined || supplyid === null) {
        throw new Error("Missing the required parameter 'supplyid' when calling pcbSupplyUpdate");
      }
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling pcbSupplyUpdate");
      }

      let pathParams = {
        'pcbid': pcbid,
        'supplyid': supplyid
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = PCBSupply;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/supply/{supplyid}/', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbUpdate operation.
     * @callback module:api/PcbApi~pcbUpdateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PCB} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update a PCB
     * @param {Number} pcbid 
     * @param {module:model/PCB} data 
     * @param {module:api/PcbApi~pcbUpdateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PCB}
     */
    pcbUpdate(pcbid, data, callback) {
      let postBody = data;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbUpdate");
      }
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling pcbUpdate");
      }

      let pathParams = {
        'pcbid': pcbid
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = PCB;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbUpdateList operation.
     * @callback module:api/PcbApi~pcbUpdateListCallback
     * @param {String} error Error message, if any.
     * @param {module:model/UpdateData} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Returns an array of [current, last update] times
     * @param {Number} pcbid 
     * @param {module:api/PcbApi~pcbUpdateListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/UpdateData}
     */
    pcbUpdateList(pcbid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbUpdateList");
      }

      let pathParams = {
        'pcbid': pcbid
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
      let returnType = UpdateData;
      return this.apiClient.callApi(
        '/pcb/{pcbid}/update/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the pcbVersionList operation.
     * @callback module:api/PcbApi~pcbVersionListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/PCBVersionSerialzer>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get PCB versions
     * @param {Number} pcbid 
     * @param {module:api/PcbApi~pcbVersionListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/PCBVersionSerialzer>}
     */
    pcbVersionList(pcbid, callback) {
      let postBody = null;
      // verify the required parameter 'pcbid' is set
      if (pcbid === undefined || pcbid === null) {
        throw new Error("Missing the required parameter 'pcbid' when calling pcbVersionList");
      }

      let pathParams = {
        'pcbid': pcbid
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
      let returnType = [PCBVersionSerialzer];
      return this.apiClient.callApi(
        '/pcb/{pcbid}/version/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
