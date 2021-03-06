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
import VRVersion from './VRVersion';

/**
 * The VR model module.
 * @module model/VR
 * @version 2021.4.1
 */
class VR {
    /**
     * Constructs a new <code>VR</code>.
     * @alias module:model/VR
     */
    constructor() { 
        
        VR.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>VR</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/VR} obj Optional instance to populate.
     * @return {module:model/VR} The populated <code>VR</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new VR();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('descr')) {
                obj['descr'] = ApiClient.convertToType(data['descr'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'Number');
            }
            if (data.hasOwnProperty('linear_iq')) {
                obj['linear_iq'] = ApiClient.convertToType(data['linear_iq'], 'Number');
            }
            if (data.hasOwnProperty('switched_efficiency')) {
                obj['switched_efficiency'] = ApiClient.convertToType(data['switched_efficiency'], Object);
            }
            if (data.hasOwnProperty('editable')) {
                obj['editable'] = ApiClient.convertToType(data['editable'], 'Boolean');
            }
            if (data.hasOwnProperty('version')) {
                obj['version'] = VRVersion.constructFromObject(data['version']);
            }
            if (data.hasOwnProperty('current_version')) {
                obj['current_version'] = ApiClient.convertToType(data['current_version'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
VR.prototype['id'] = undefined;

/**
 * @member {String} name
 */
VR.prototype['name'] = undefined;

/**
 * @member {String} descr
 */
VR.prototype['descr'] = undefined;

/**
 * @member {Number} type
 */
VR.prototype['type'] = undefined;

/**
 * @member {Number} linear_iq
 */
VR.prototype['linear_iq'] = undefined;

/**
 * @member {Object} switched_efficiency
 */
VR.prototype['switched_efficiency'] = undefined;

/**
 * @member {Boolean} editable
 */
VR.prototype['editable'] = undefined;

/**
 * @member {module:model/VRVersion} version
 */
VR.prototype['version'] = undefined;

/**
 * @member {Number} current_version
 */
VR.prototype['current_version'] = undefined;






export default VR;

