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
 * The ComputePower2 model module.
 * @module model/ComputePower2
 * @version 2021.4.1
 */
class ComputePower2 {
    /**
     * Constructs a new <code>ComputePower2</code>.
     * @alias module:model/ComputePower2
     */
    constructor() { 
        
        ComputePower2.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComputePower2</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComputePower2} obj Optional instance to populate.
     * @return {module:model/ComputePower2} The populated <code>ComputePower2</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComputePower2();

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
ComputePower2.prototype['undefined'] = undefined;






export default ComputePower2;

