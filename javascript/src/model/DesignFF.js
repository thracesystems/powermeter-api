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
 * The DesignFF model module.
 * @module model/DesignFF
 * @version 2021.4.1
 */
class DesignFF {
    /**
     * Constructs a new <code>DesignFF</code>.
     * @alias module:model/DesignFF
     * @param var1 {String} 
     * @param var2 {String} 
     */
    constructor(var1, var2) { 
        
        DesignFF.initialize(this, var1, var2);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, var1, var2) { 
        obj['var1'] = var1;
        obj['var2'] = var2;
    }

    /**
     * Constructs a <code>DesignFF</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/DesignFF} obj Optional instance to populate.
     * @return {module:model/DesignFF} The populated <code>DesignFF</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new DesignFF();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('var1')) {
                obj['var1'] = ApiClient.convertToType(data['var1'], 'String');
            }
            if (data.hasOwnProperty('var2')) {
                obj['var2'] = ApiClient.convertToType(data['var2'], 'String');
            }
            if (data.hasOwnProperty('bits')) {
                obj['bits'] = ApiClient.convertToType(data['bits'], 'Number');
            }
            if (data.hasOwnProperty('clocked_on')) {
                obj['clocked_on'] = ApiClient.convertToType(data['clocked_on'], 'String');
            }
            if (data.hasOwnProperty('clocked_on_also')) {
                obj['clocked_on_also'] = ApiClient.convertToType(data['clocked_on_also'], 'String');
            }
            if (data.hasOwnProperty('next_state')) {
                obj['next_state'] = ApiClient.convertToType(data['next_state'], 'String');
            }
            if (data.hasOwnProperty('clear')) {
                obj['clear'] = ApiClient.convertToType(data['clear'], 'String');
            }
            if (data.hasOwnProperty('preset')) {
                obj['preset'] = ApiClient.convertToType(data['preset'], 'String');
            }
            if (data.hasOwnProperty('clear_preset_var1')) {
                obj['clear_preset_var1'] = ApiClient.convertToType(data['clear_preset_var1'], 'String');
            }
            if (data.hasOwnProperty('clear_preset_var2')) {
                obj['clear_preset_var2'] = ApiClient.convertToType(data['clear_preset_var2'], 'String');
            }
            if (data.hasOwnProperty('power_down_function')) {
                obj['power_down_function'] = ApiClient.convertToType(data['power_down_function'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
DesignFF.prototype['id'] = undefined;

/**
 * @member {String} var1
 */
DesignFF.prototype['var1'] = undefined;

/**
 * @member {String} var2
 */
DesignFF.prototype['var2'] = undefined;

/**
 * @member {Number} bits
 */
DesignFF.prototype['bits'] = undefined;

/**
 * @member {String} clocked_on
 */
DesignFF.prototype['clocked_on'] = undefined;

/**
 * @member {String} clocked_on_also
 */
DesignFF.prototype['clocked_on_also'] = undefined;

/**
 * @member {String} next_state
 */
DesignFF.prototype['next_state'] = undefined;

/**
 * @member {String} clear
 */
DesignFF.prototype['clear'] = undefined;

/**
 * @member {String} preset
 */
DesignFF.prototype['preset'] = undefined;

/**
 * @member {String} clear_preset_var1
 */
DesignFF.prototype['clear_preset_var1'] = undefined;

/**
 * @member {String} clear_preset_var2
 */
DesignFF.prototype['clear_preset_var2'] = undefined;

/**
 * @member {String} power_down_function
 */
DesignFF.prototype['power_down_function'] = undefined;






export default DesignFF;

