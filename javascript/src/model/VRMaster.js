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

import ApiClient from '../ApiClient';

/**
 * The VRMaster model module.
 * @module model/VRMaster
 * @version 2021.4.1
 */
class VRMaster {
    /**
     * Constructs a new <code>VRMaster</code>.
     * @alias module:model/VRMaster
     * @param name {String} 
     */
    constructor(name) { 
        
        VRMaster.initialize(this, name);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, name) { 
        obj['name'] = name;
    }

    /**
     * Constructs a <code>VRMaster</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/VRMaster} obj Optional instance to populate.
     * @return {module:model/VRMaster} The populated <code>VRMaster</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new VRMaster();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('descr')) {
                obj['descr'] = ApiClient.convertToType(data['descr'], 'String');
            }
            if (data.hasOwnProperty('latest_commit')) {
                obj['latest_commit'] = ApiClient.convertToType(data['latest_commit'], 'Number');
            }
            if (data.hasOwnProperty('current_version')) {
                obj['current_version'] = ApiClient.convertToType(data['current_version'], 'Number');
            }
            if (data.hasOwnProperty('latest_commit_version')) {
                obj['latest_commit_version'] = ApiClient.convertToType(data['latest_commit_version'], 'Number');
            }
            if (data.hasOwnProperty('latest_commit_timestamp')) {
                obj['latest_commit_timestamp'] = ApiClient.convertToType(data['latest_commit_timestamp'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
VRMaster.prototype['id'] = undefined;

/**
 * @member {String} name
 */
VRMaster.prototype['name'] = undefined;

/**
 * @member {String} descr
 */
VRMaster.prototype['descr'] = undefined;

/**
 * @member {Number} latest_commit
 */
VRMaster.prototype['latest_commit'] = undefined;

/**
 * @member {Number} current_version
 */
VRMaster.prototype['current_version'] = undefined;

/**
 * @member {Number} latest_commit_version
 */
VRMaster.prototype['latest_commit_version'] = undefined;

/**
 * @member {String} latest_commit_timestamp
 */
VRMaster.prototype['latest_commit_timestamp'] = undefined;






export default VRMaster;
