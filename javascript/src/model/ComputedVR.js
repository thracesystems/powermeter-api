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
 * The ComputedVR model module.
 * @module model/ComputedVR
 * @version 2021.4.1
 */
class ComputedVR {
    /**
     * Constructs a new <code>ComputedVR</code>.
     * @alias module:model/ComputedVR
     */
    constructor() { 
        
        ComputedVR.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComputedVR</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComputedVR} obj Optional instance to populate.
     * @return {module:model/ComputedVR} The populated <code>ComputedVR</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComputedVR();

            if (data.hasOwnProperty('Vin')) {
                obj['Vin'] = ApiClient.convertToType(data['Vin'], 'Number');
            }
            if (data.hasOwnProperty('Vout')) {
                obj['Vout'] = ApiClient.convertToType(data['Vout'], 'Number');
            }
            if (data.hasOwnProperty('Iload')) {
                obj['Iload'] = ApiClient.convertToType(data['Iload'], 'Number');
            }
            if (data.hasOwnProperty('Iq')) {
                obj['Iq'] = ApiClient.convertToType(data['Iq'], 'Number');
            }
            if (data.hasOwnProperty('Iin')) {
                obj['Iin'] = ApiClient.convertToType(data['Iin'], 'Number');
            }
            if (data.hasOwnProperty('efficiency')) {
                obj['efficiency'] = ApiClient.convertToType(data['efficiency'], 'Number');
            }
            if (data.hasOwnProperty('power')) {
                obj['power'] = ApiClient.convertToType(data['power'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} Vin
 */
ComputedVR.prototype['Vin'] = undefined;

/**
 * @member {Number} Vout
 */
ComputedVR.prototype['Vout'] = undefined;

/**
 * @member {Number} Iload
 */
ComputedVR.prototype['Iload'] = undefined;

/**
 * @member {Number} Iq
 */
ComputedVR.prototype['Iq'] = undefined;

/**
 * @member {Number} Iin
 */
ComputedVR.prototype['Iin'] = undefined;

/**
 * @member {Number} efficiency
 */
ComputedVR.prototype['efficiency'] = undefined;

/**
 * @member {Number} power
 */
ComputedVR.prototype['power'] = undefined;






export default ComputedVR;

