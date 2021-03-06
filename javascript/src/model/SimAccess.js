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
 * The SimAccess model module.
 * @module model/SimAccess
 * @version 2021.4.1
 */
class SimAccess {
    /**
     * Constructs a new <code>SimAccess</code>.
     * @alias module:model/SimAccess
     * @param master {Number} 
     * @param timestamp {Date} 
     */
    constructor(master, timestamp) { 
        
        SimAccess.initialize(this, master, timestamp);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, master, timestamp) { 
        obj['master'] = master;
        obj['timestamp'] = timestamp;
    }

    /**
     * Constructs a <code>SimAccess</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SimAccess} obj Optional instance to populate.
     * @return {module:model/SimAccess} The populated <code>SimAccess</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SimAccess();

            if (data.hasOwnProperty('master')) {
                obj['master'] = ApiClient.convertToType(data['master'], 'Number');
            }
            if (data.hasOwnProperty('master_name')) {
                obj['master_name'] = ApiClient.convertToType(data['master_name'], 'String');
            }
            if (data.hasOwnProperty('project')) {
                obj['project'] = ApiClient.convertToType(data['project'], 'Number');
            }
            if (data.hasOwnProperty('project_name')) {
                obj['project_name'] = ApiClient.convertToType(data['project_name'], 'String');
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'Date');
            }
            if (data.hasOwnProperty('current_version')) {
                obj['current_version'] = ApiClient.convertToType(data['current_version'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} master
 */
SimAccess.prototype['master'] = undefined;

/**
 * @member {String} master_name
 */
SimAccess.prototype['master_name'] = undefined;

/**
 * @member {Number} project
 */
SimAccess.prototype['project'] = undefined;

/**
 * @member {String} project_name
 */
SimAccess.prototype['project_name'] = undefined;

/**
 * @member {Date} timestamp
 */
SimAccess.prototype['timestamp'] = undefined;

/**
 * @member {Number} current_version
 */
SimAccess.prototype['current_version'] = undefined;






export default SimAccess;

