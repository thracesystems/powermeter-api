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
 * The PinCurrent model module.
 * @module model/PinCurrent
 * @version 2021.4.1
 */
class PinCurrent {
    /**
     * Constructs a new <code>PinCurrent</code>.
     * @alias module:model/PinCurrent
     */
    constructor() { 
        
        PinCurrent.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>PinCurrent</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinCurrent} obj Optional instance to populate.
     * @return {module:model/PinCurrent} The populated <code>PinCurrent</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinCurrent();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('current')) {
                obj['current'] = ApiClient.convertToType(data['current'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {String} name
 */
PinCurrent.prototype['name'] = undefined;

/**
 * @member {Number} current
 */
PinCurrent.prototype['current'] = undefined;






export default PinCurrent;
