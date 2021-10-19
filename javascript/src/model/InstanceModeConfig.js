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
 * The InstanceModeConfig model module.
 * @module model/InstanceModeConfig
 * @version 2021.4.1
 */
class InstanceModeConfig {
    /**
     * Constructs a new <code>InstanceModeConfig</code>.
     * @alias module:model/InstanceModeConfig
     * @param parameter {Number} 
     * @param value {String} 
     */
    constructor(parameter, value) { 
        
        InstanceModeConfig.initialize(this, parameter, value);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, parameter, value) { 
        obj['parameter'] = parameter;
        obj['value'] = value;
    }

    /**
     * Constructs a <code>InstanceModeConfig</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InstanceModeConfig} obj Optional instance to populate.
     * @return {module:model/InstanceModeConfig} The populated <code>InstanceModeConfig</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InstanceModeConfig();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('parameter')) {
                obj['parameter'] = ApiClient.convertToType(data['parameter'], 'Number');
            }
            if (data.hasOwnProperty('parameter_name')) {
                obj['parameter_name'] = ApiClient.convertToType(data['parameter_name'], 'String');
            }
            if (data.hasOwnProperty('parameter_descr')) {
                obj['parameter_descr'] = ApiClient.convertToType(data['parameter_descr'], 'String');
            }
            if (data.hasOwnProperty('value')) {
                obj['value'] = ApiClient.convertToType(data['value'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
InstanceModeConfig.prototype['id'] = undefined;

/**
 * @member {Number} parameter
 */
InstanceModeConfig.prototype['parameter'] = undefined;

/**
 * @member {String} parameter_name
 */
InstanceModeConfig.prototype['parameter_name'] = undefined;

/**
 * @member {String} parameter_descr
 */
InstanceModeConfig.prototype['parameter_descr'] = undefined;

/**
 * @member {String} value
 */
InstanceModeConfig.prototype['value'] = undefined;






export default InstanceModeConfig;

