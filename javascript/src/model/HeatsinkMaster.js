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
 * The HeatsinkMaster model module.
 * @module model/HeatsinkMaster
 * @version 2021.4.1
 */
class HeatsinkMaster {
    /**
     * Constructs a new <code>HeatsinkMaster</code>.
     * @alias module:model/HeatsinkMaster
     * @param name {String} 
     */
    constructor(name) { 
        
        HeatsinkMaster.initialize(this, name);
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
     * Constructs a <code>HeatsinkMaster</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/HeatsinkMaster} obj Optional instance to populate.
     * @return {module:model/HeatsinkMaster} The populated <code>HeatsinkMaster</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new HeatsinkMaster();

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
HeatsinkMaster.prototype['id'] = undefined;

/**
 * @member {String} name
 */
HeatsinkMaster.prototype['name'] = undefined;

/**
 * @member {String} descr
 */
HeatsinkMaster.prototype['descr'] = undefined;

/**
 * @member {Number} latest_commit
 */
HeatsinkMaster.prototype['latest_commit'] = undefined;

/**
 * @member {Number} current_version
 */
HeatsinkMaster.prototype['current_version'] = undefined;

/**
 * @member {Number} latest_commit_version
 */
HeatsinkMaster.prototype['latest_commit_version'] = undefined;

/**
 * @member {String} latest_commit_timestamp
 */
HeatsinkMaster.prototype['latest_commit_timestamp'] = undefined;






export default HeatsinkMaster;

