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
 * The VRVersion model module.
 * @module model/VRVersion
 * @version 2021.4.1
 */
class VRVersion {
    /**
     * Constructs a new <code>VRVersion</code>.
     * @alias module:model/VRVersion
     * @param descr {String} 
     */
    constructor(descr) { 
        
        VRVersion.initialize(this, descr);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, descr) { 
        obj['descr'] = descr;
    }

    /**
     * Constructs a <code>VRVersion</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/VRVersion} obj Optional instance to populate.
     * @return {module:model/VRVersion} The populated <code>VRVersion</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new VRVersion();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('version')) {
                obj['version'] = ApiClient.convertToType(data['version'], 'Number');
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'Date');
            }
            if (data.hasOwnProperty('descr')) {
                obj['descr'] = ApiClient.convertToType(data['descr'], 'String');
            }
            if (data.hasOwnProperty('vr')) {
                obj['vr'] = ApiClient.convertToType(data['vr'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
VRVersion.prototype['id'] = undefined;

/**
 * @member {Number} version
 */
VRVersion.prototype['version'] = undefined;

/**
 * @member {Date} timestamp
 */
VRVersion.prototype['timestamp'] = undefined;

/**
 * @member {String} descr
 */
VRVersion.prototype['descr'] = undefined;

/**
 * @member {Number} vr
 */
VRVersion.prototype['vr'] = undefined;






export default VRVersion;

