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
 * The ComputedDeviceData model module.
 * @module model/ComputedDeviceData
 * @version 2021.4.1
 */
class ComputedDeviceData {
    /**
     * Constructs a new <code>ComputedDeviceData</code>.
     * @alias module:model/ComputedDeviceData
     */
    constructor() { 
        
        ComputedDeviceData.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ComputedDeviceData</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ComputedDeviceData} obj Optional instance to populate.
     * @return {module:model/ComputedDeviceData} The populated <code>ComputedDeviceData</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComputedDeviceData();

            if (data.hasOwnProperty('p')) {
                obj['p'] = ApiClient.convertToType(data['p'], 'String');
            }
            if (data.hasOwnProperty('Vds')) {
                obj['Vds'] = ApiClient.convertToType(data['Vds'], 'Number');
            }
            if (data.hasOwnProperty('Vgs')) {
                obj['Vgs'] = ApiClient.convertToType(data['Vgs'], 'Number');
            }
            if (data.hasOwnProperty('Vbs')) {
                obj['Vbs'] = ApiClient.convertToType(data['Vbs'], 'Number');
            }
            if (data.hasOwnProperty('t')) {
                obj['t'] = ApiClient.convertToType(data['t'], 'Number');
            }
            if (data.hasOwnProperty('Idrain')) {
                obj['Idrain'] = ApiClient.convertToType(data['Idrain'], 'Number');
            }
            if (data.hasOwnProperty('Igate')) {
                obj['Igate'] = ApiClient.convertToType(data['Igate'], 'Number');
            }
            if (data.hasOwnProperty('Isource')) {
                obj['Isource'] = ApiClient.convertToType(data['Isource'], 'Number');
            }
            if (data.hasOwnProperty('Ibody')) {
                obj['Ibody'] = ApiClient.convertToType(data['Ibody'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * Process name
 * @member {String} p
 */
ComputedDeviceData.prototype['p'] = undefined;

/**
 * Drain-Source voltage
 * @member {Number} Vds
 */
ComputedDeviceData.prototype['Vds'] = undefined;

/**
 * Gate-Source voltage
 * @member {Number} Vgs
 */
ComputedDeviceData.prototype['Vgs'] = undefined;

/**
 * Body-Source voltage
 * @member {Number} Vbs
 */
ComputedDeviceData.prototype['Vbs'] = undefined;

/**
 * Temperature
 * @member {Number} t
 */
ComputedDeviceData.prototype['t'] = undefined;

/**
 * Drain current
 * @member {Number} Idrain
 */
ComputedDeviceData.prototype['Idrain'] = undefined;

/**
 * Gate current
 * @member {Number} Igate
 */
ComputedDeviceData.prototype['Igate'] = undefined;

/**
 * Source current
 * @member {Number} Isource
 */
ComputedDeviceData.prototype['Isource'] = undefined;

/**
 * Body current
 * @member {Number} Ibody
 */
ComputedDeviceData.prototype['Ibody'] = undefined;






export default ComputedDeviceData;
