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
import ComputedVR from '../model/ComputedVR';
import UpdateData from '../model/UpdateData';
import VR from '../model/VR';
import VRMaster from '../model/VRMaster';
import VRSupply from '../model/VRSupply';
import VRVersion from '../model/VRVersion';

/**
* Vr service.
* @module api/VrApi
* @version 2021.4.1
*/
export default class VrApi {

    /**
    * Constructs a new VrApi. 
    * @alias module:api/VrApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the vrCommitCreate operation.
     * @callback module:api/VrApi~vrCommitCreateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VRVersion} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Commit a version
     * @param {Number} vrid 
     * @param {module:model/VRVersion} data 
     * @param {module:api/VrApi~vrCommitCreateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VRVersion}
     */
    vrCommitCreate(vrid, data, callback) {
      let postBody = data;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrCommitCreate");
      }
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling vrCommitCreate");
      }

      let pathParams = {
        'vrid': vrid
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
      let returnType = VRVersion;
      return this.apiClient.callApi(
        '/vr/{vrid}/commit/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrComputeList operation.
     * @callback module:api/VrApi~vrComputeListCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ComputedVR} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Compute VR
     * @param {Number} vrid 
     * @param {Number} vin 
     * @param {Number} vout 
     * @param {Number} iload 
     * @param {module:api/VrApi~vrComputeListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ComputedVR}
     */
    vrComputeList(vrid, vin, vout, iload, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrComputeList");
      }
      // verify the required parameter 'vin' is set
      if (vin === undefined || vin === null) {
        throw new Error("Missing the required parameter 'vin' when calling vrComputeList");
      }
      // verify the required parameter 'vout' is set
      if (vout === undefined || vout === null) {
        throw new Error("Missing the required parameter 'vout' when calling vrComputeList");
      }
      // verify the required parameter 'iload' is set
      if (iload === undefined || iload === null) {
        throw new Error("Missing the required parameter 'iload' when calling vrComputeList");
      }

      let pathParams = {
        'vrid': vrid
      };
      let queryParams = {
        'Vin': vin,
        'Vout': vout,
        'Iload': iload
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['Basic'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ComputedVR;
      return this.apiClient.callApi(
        '/vr/{vrid}/compute/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrLibraryClone operation.
     * @callback module:api/VrApi~vrLibraryCloneCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VRMaster} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Copy a VR
     * @param {Number} vrmasterid 
     * @param {module:api/VrApi~vrLibraryCloneCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VRMaster}
     */
    vrLibraryClone(vrmasterid, callback) {
      let postBody = null;
      // verify the required parameter 'vrmasterid' is set
      if (vrmasterid === undefined || vrmasterid === null) {
        throw new Error("Missing the required parameter 'vrmasterid' when calling vrLibraryClone");
      }

      let pathParams = {
        'vrmasterid': vrmasterid
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
      let returnType = VRMaster;
      return this.apiClient.callApi(
        '/vr/library/{vrmasterid}/clone/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrLibraryCreate operation.
     * @callback module:api/VrApi~vrLibraryCreateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VRMaster} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Create a VR
     * @param {module:model/VRMaster} data 
     * @param {module:api/VrApi~vrLibraryCreateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VRMaster}
     */
    vrLibraryCreate(data, callback) {
      let postBody = data;
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling vrLibraryCreate");
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
      let returnType = VRMaster;
      return this.apiClient.callApi(
        '/vr/library/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrLibraryDelete operation.
     * @callback module:api/VrApi~vrLibraryDeleteCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Delete VR
     * @param {Number} vrmasterid 
     * @param {module:api/VrApi~vrLibraryDeleteCallback} callback The callback function, accepting three arguments: error, data, response
     */
    vrLibraryDelete(vrmasterid, callback) {
      let postBody = null;
      // verify the required parameter 'vrmasterid' is set
      if (vrmasterid === undefined || vrmasterid === null) {
        throw new Error("Missing the required parameter 'vrmasterid' when calling vrLibraryDelete");
      }

      let pathParams = {
        'vrmasterid': vrmasterid
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
        '/vr/library/{vrmasterid}/', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrLibraryList operation.
     * @callback module:api/VrApi~vrLibraryListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/VRMaster>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of VR
     * @param {module:api/VrApi~vrLibraryListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/VRMaster>}
     */
    vrLibraryList(callback) {
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
      let returnType = [VRMaster];
      return this.apiClient.callApi(
        '/vr/library/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrLibraryUpdate operation.
     * @callback module:api/VrApi~vrLibraryUpdateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VRMaster} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update VR
     * @param {Number} vrmasterid 
     * @param {module:model/VRMaster} data 
     * @param {module:api/VrApi~vrLibraryUpdateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VRMaster}
     */
    vrLibraryUpdate(vrmasterid, data, callback) {
      let postBody = data;
      // verify the required parameter 'vrmasterid' is set
      if (vrmasterid === undefined || vrmasterid === null) {
        throw new Error("Missing the required parameter 'vrmasterid' when calling vrLibraryUpdate");
      }
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling vrLibraryUpdate");
      }

      let pathParams = {
        'vrmasterid': vrmasterid
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
      let returnType = VRMaster;
      return this.apiClient.callApi(
        '/vr/library/{vrmasterid}/', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrLibraryUpdateList operation.
     * @callback module:api/VrApi~vrLibraryUpdateListCallback
     * @param {String} error Error message, if any.
     * @param {module:model/UpdateData} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Returns an array of [current, last update] times
     * @param {module:api/VrApi~vrLibraryUpdateListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/UpdateData}
     */
    vrLibraryUpdateList(callback) {
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
        '/vr/library/update/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrLibraryVersionList operation.
     * @callback module:api/VrApi~vrLibraryVersionListCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VRVersion} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get VR master versions
     * @param {Number} vrmasterid 
     * @param {module:api/VrApi~vrLibraryVersionListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VRVersion}
     */
    vrLibraryVersionList(vrmasterid, callback) {
      let postBody = null;
      // verify the required parameter 'vrmasterid' is set
      if (vrmasterid === undefined || vrmasterid === null) {
        throw new Error("Missing the required parameter 'vrmasterid' when calling vrLibraryVersionList");
      }

      let pathParams = {
        'vrmasterid': vrmasterid
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
      let returnType = VRVersion;
      return this.apiClient.callApi(
        '/vr/library/{vrmasterid}/version/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrPermissionsList operation.
     * @callback module:api/VrApi~vrPermissionsListCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of permissions
     * @param {Number} vrid 
     * @param {module:api/VrApi~vrPermissionsListCallback} callback The callback function, accepting three arguments: error, data, response
     */
    vrPermissionsList(vrid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrPermissionsList");
      }

      let pathParams = {
        'vrid': vrid
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
        '/vr/{vrid}/permissions/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrPermissionsUpdate operation.
     * @callback module:api/VrApi~vrPermissionsUpdateCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of permissions
     * @param {Number} vrid 
     * @param {module:api/VrApi~vrPermissionsUpdateCallback} callback The callback function, accepting three arguments: error, data, response
     */
    vrPermissionsUpdate(vrid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrPermissionsUpdate");
      }

      let pathParams = {
        'vrid': vrid
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
        '/vr/{vrid}/permissions/', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrRead operation.
     * @callback module:api/VrApi~vrReadCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VR} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a VR
     * @param {Number} vrid 
     * @param {module:api/VrApi~vrReadCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VR}
     */
    vrRead(vrid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrRead");
      }

      let pathParams = {
        'vrid': vrid
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
      let returnType = VR;
      return this.apiClient.callApi(
        '/vr/{vrid}/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrRestoreCreate operation.
     * @callback module:api/VrApi~vrRestoreCreateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VR} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Restore a VR version as current version
     * @param {Number} vrid 
     * @param {module:api/VrApi~vrRestoreCreateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VR}
     */
    vrRestoreCreate(vrid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrRestoreCreate");
      }

      let pathParams = {
        'vrid': vrid
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
      let returnType = VR;
      return this.apiClient.callApi(
        '/vr/{vrid}/restore/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrSupplyClone operation.
     * @callback module:api/VrApi~vrSupplyCloneCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VRSupply} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Copy a VR supply
     * @param {Number} vrid 
     * @param {Number} supplyid 
     * @param {module:api/VrApi~vrSupplyCloneCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VRSupply}
     */
    vrSupplyClone(vrid, supplyid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrSupplyClone");
      }
      // verify the required parameter 'supplyid' is set
      if (supplyid === undefined || supplyid === null) {
        throw new Error("Missing the required parameter 'supplyid' when calling vrSupplyClone");
      }

      let pathParams = {
        'vrid': vrid,
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
      let returnType = VRSupply;
      return this.apiClient.callApi(
        '/vr/{vrid}/supply/{supplyid}/clone/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrSupplyCreate operation.
     * @callback module:api/VrApi~vrSupplyCreateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VRSupply} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Create VR supplies
     * @param {Number} vrid 
     * @param {module:model/VRSupply} data 
     * @param {module:api/VrApi~vrSupplyCreateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VRSupply}
     */
    vrSupplyCreate(vrid, data, callback) {
      let postBody = data;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrSupplyCreate");
      }
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling vrSupplyCreate");
      }

      let pathParams = {
        'vrid': vrid
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
      let returnType = VRSupply;
      return this.apiClient.callApi(
        '/vr/{vrid}/supply/', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrSupplyDelete operation.
     * @callback module:api/VrApi~vrSupplyDeleteCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Delete VR supply
     * @param {Number} vrid 
     * @param {Number} supplyid 
     * @param {module:api/VrApi~vrSupplyDeleteCallback} callback The callback function, accepting three arguments: error, data, response
     */
    vrSupplyDelete(vrid, supplyid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrSupplyDelete");
      }
      // verify the required parameter 'supplyid' is set
      if (supplyid === undefined || supplyid === null) {
        throw new Error("Missing the required parameter 'supplyid' when calling vrSupplyDelete");
      }

      let pathParams = {
        'vrid': vrid,
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
        '/vr/{vrid}/supply/{supplyid}/', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrSupplyList operation.
     * @callback module:api/VrApi~vrSupplyListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/VRSupply>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get list of VR supplies
     * @param {Number} vrid 
     * @param {module:api/VrApi~vrSupplyListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/VRSupply>}
     */
    vrSupplyList(vrid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrSupplyList");
      }

      let pathParams = {
        'vrid': vrid
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
      let returnType = [VRSupply];
      return this.apiClient.callApi(
        '/vr/{vrid}/supply/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrSupplyRead operation.
     * @callback module:api/VrApi~vrSupplyReadCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VRSupply} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a VR supply
     * @param {Number} vrid 
     * @param {Number} supplyid 
     * @param {module:api/VrApi~vrSupplyReadCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VRSupply}
     */
    vrSupplyRead(vrid, supplyid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrSupplyRead");
      }
      // verify the required parameter 'supplyid' is set
      if (supplyid === undefined || supplyid === null) {
        throw new Error("Missing the required parameter 'supplyid' when calling vrSupplyRead");
      }

      let pathParams = {
        'vrid': vrid,
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
      let returnType = VRSupply;
      return this.apiClient.callApi(
        '/vr/{vrid}/supply/{supplyid}/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrSupplyUpdate operation.
     * @callback module:api/VrApi~vrSupplyUpdateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VRSupply} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update VR supply
     * @param {Number} vrid 
     * @param {Number} supplyid 
     * @param {module:model/VRSupply} data 
     * @param {module:api/VrApi~vrSupplyUpdateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VRSupply}
     */
    vrSupplyUpdate(vrid, supplyid, data, callback) {
      let postBody = data;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrSupplyUpdate");
      }
      // verify the required parameter 'supplyid' is set
      if (supplyid === undefined || supplyid === null) {
        throw new Error("Missing the required parameter 'supplyid' when calling vrSupplyUpdate");
      }
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling vrSupplyUpdate");
      }

      let pathParams = {
        'vrid': vrid,
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
      let returnType = VRSupply;
      return this.apiClient.callApi(
        '/vr/{vrid}/supply/{supplyid}/', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrUpdate operation.
     * @callback module:api/VrApi~vrUpdateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/VR} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update a VR
     * @param {Number} vrid 
     * @param {module:model/VR} data 
     * @param {module:api/VrApi~vrUpdateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/VR}
     */
    vrUpdate(vrid, data, callback) {
      let postBody = data;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrUpdate");
      }
      // verify the required parameter 'data' is set
      if (data === undefined || data === null) {
        throw new Error("Missing the required parameter 'data' when calling vrUpdate");
      }

      let pathParams = {
        'vrid': vrid
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
      let returnType = VR;
      return this.apiClient.callApi(
        '/vr/{vrid}/', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrUpdateList operation.
     * @callback module:api/VrApi~vrUpdateListCallback
     * @param {String} error Error message, if any.
     * @param {module:model/UpdateData} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Returns an array of [current, last update] times
     * @param {Number} vrid 
     * @param {module:api/VrApi~vrUpdateListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/UpdateData}
     */
    vrUpdateList(vrid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrUpdateList");
      }

      let pathParams = {
        'vrid': vrid
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
        '/vr/{vrid}/update/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the vrVersionList operation.
     * @callback module:api/VrApi~vrVersionListCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/VRVersion>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get VR versions
     * @param {Number} vrid 
     * @param {module:api/VrApi~vrVersionListCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/VRVersion>}
     */
    vrVersionList(vrid, callback) {
      let postBody = null;
      // verify the required parameter 'vrid' is set
      if (vrid === undefined || vrid === null) {
        throw new Error("Missing the required parameter 'vrid' when calling vrVersionList");
      }

      let pathParams = {
        'vrid': vrid
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
      let returnType = [VRVersion];
      return this.apiClient.callApi(
        '/vr/{vrid}/version/', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
