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
 * The ComputePower model module.
 * @module model/ComputePower
 * @version 2021.4.1
 */
class ComputePower {
    /**
     * Constructs a new <code>ComputePower</code>.
     * @alias module:model/ComputePower
     */
    constructor() { 
        
        ComputePower.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComputePower</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComputePower} obj Optional instance to populate.
     * @return {module:model/ComputePower} The populated <code>ComputePower</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComputePower();

            if (data.hasOwnProperty('undefined')) {
                obj['undefined'] = ApiClient.convertToType(data['undefined'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} undefined
 */
ComputePower.prototype['undefined'] = undefined;






export default ComputePower;

