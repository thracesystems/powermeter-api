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
import ContribPowerDevice from './ContribPowerDevice';

/**
 * The ContribPower model module.
 * @module model/ContribPower
 * @version 2021.4.1
 */
class ContribPower {
    /**
     * Constructs a new <code>ContribPower</code>.
     * @alias module:model/ContribPower
     * @param contributors {Array.<module:model/ContribPowerDevice>} 
     */
    constructor(contributors) { 
        
        ContribPower.initialize(this, contributors);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, contributors) { 
        obj['contributors'] = contributors;
    }

    /**
     * Constructs a <code>ContribPower</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ContribPower} obj Optional instance to populate.
     * @return {module:model/ContribPower} The populated <code>ContribPower</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ContribPower();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('when')) {
                obj['when'] = ApiClient.convertToType(data['when'], 'String');
            }
            if (data.hasOwnProperty('contributors')) {
                obj['contributors'] = ApiClient.convertToType(data['contributors'], [ContribPowerDevice]);
            }
            if (data.hasOwnProperty('modes')) {
                obj['modes'] = ApiClient.convertToType(data['modes'], ['Number']);
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
ContribPower.prototype['id'] = undefined;

/**
 * @member {String} when
 */
ContribPower.prototype['when'] = undefined;

/**
 * @member {Array.<module:model/ContribPowerDevice>} contributors
 */
ContribPower.prototype['contributors'] = undefined;

/**
 * @member {Array.<Number>} modes
 */
ContribPower.prototype['modes'] = undefined;






export default ContribPower;

