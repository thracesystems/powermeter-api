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
 * The SupplyModeState model module.
 * @module model/SupplyModeState
 * @version 2021.4.1
 */
class SupplyModeState {
    /**
     * Constructs a new <code>SupplyModeState</code>.
     * @alias module:model/SupplyModeState
     * @param mode {Number} 
     * @param supply {Number} 
     */
    constructor(mode, supply) { 
        
        SupplyModeState.initialize(this, mode, supply);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, mode, supply) { 
        obj['mode'] = mode;
        obj['supply'] = supply;
    }

    /**
     * Constructs a <code>SupplyModeState</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SupplyModeState} obj Optional instance to populate.
     * @return {module:model/SupplyModeState} The populated <code>SupplyModeState</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SupplyModeState();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('mode')) {
                obj['mode'] = ApiClient.convertToType(data['mode'], 'Number');
            }
            if (data.hasOwnProperty('supply')) {
                obj['supply'] = ApiClient.convertToType(data['supply'], 'Number');
            }
            if (data.hasOwnProperty('on')) {
                obj['on'] = ApiClient.convertToType(data['on'], 'Boolean');
            }
            if (data.hasOwnProperty('voltage')) {
                obj['voltage'] = ApiClient.convertToType(data['voltage'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
SupplyModeState.prototype['id'] = undefined;

/**
 * @member {Number} mode
 */
SupplyModeState.prototype['mode'] = undefined;

/**
 * @member {Number} supply
 */
SupplyModeState.prototype['supply'] = undefined;

/**
 * @member {Boolean} on
 */
SupplyModeState.prototype['on'] = undefined;

/**
 * @member {Number} voltage
 */
SupplyModeState.prototype['voltage'] = undefined;






export default SupplyModeState;

