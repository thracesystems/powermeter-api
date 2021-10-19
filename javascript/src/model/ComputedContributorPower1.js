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
 * The ComputedContributorPower1 model module.
 * @module model/ComputedContributorPower1
 * @version 2021.4.1
 */
class ComputedContributorPower1 {
    /**
     * Constructs a new <code>ComputedContributorPower1</code>.
     * @alias module:model/ComputedContributorPower1
     */
    constructor() { 
        
        ComputedContributorPower1.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComputedContributorPower1</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComputedContributorPower1} obj Optional instance to populate.
     * @return {module:model/ComputedContributorPower1} The populated <code>ComputedContributorPower1</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComputedContributorPower1();

            if (data.hasOwnProperty('p')) {
                obj['p'] = ApiClient.convertToType(data['p'], 'String');
            }
            if (data.hasOwnProperty('v')) {
                obj['v'] = ApiClient.convertToType(data['v'], 'Number');
            }
            if (data.hasOwnProperty('t')) {
                obj['t'] = ApiClient.convertToType(data['t'], 'Number');
            }
            if (data.hasOwnProperty('power')) {
                obj['power'] = ApiClient.convertToType(data['power'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * Process name
 * @member {String} p
 */
ComputedContributorPower1.prototype['p'] = undefined;

/**
 * Voltage
 * @member {Number} v
 */
ComputedContributorPower1.prototype['v'] = undefined;

/**
 * Temperature
 * @member {Number} t
 */
ComputedContributorPower1.prototype['t'] = undefined;

/**
 * Power
 * @member {Number} power
 */
ComputedContributorPower1.prototype['power'] = undefined;






export default ComputedContributorPower1;
