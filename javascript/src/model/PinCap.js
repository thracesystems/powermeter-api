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
 * The PinCap model module.
 * @module model/PinCap
 * @version 2021.4.1
 */
class PinCap {
    /**
     * Constructs a new <code>PinCap</code>.
     * @alias module:model/PinCap
     * @param process {String} 
     * @param rc {String} 
     * @param voltage {Number} 
     * @param temperature {Number} 
     * @param riseCapacitance {Number} 
     * @param fallCapacitance {Number} 
     */
    constructor(process, rc, voltage, temperature, riseCapacitance, fallCapacitance) { 
        
        PinCap.initialize(this, process, rc, voltage, temperature, riseCapacitance, fallCapacitance);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, process, rc, voltage, temperature, riseCapacitance, fallCapacitance) { 
        obj['process'] = process;
        obj['rc'] = rc;
        obj['voltage'] = voltage;
        obj['temperature'] = temperature;
        obj['rise_capacitance'] = riseCapacitance;
        obj['fall_capacitance'] = fallCapacitance;
    }

    /**
     * Constructs a <code>PinCap</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinCap} obj Optional instance to populate.
     * @return {module:model/PinCap} The populated <code>PinCap</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinCap();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('process')) {
                obj['process'] = ApiClient.convertToType(data['process'], 'String');
            }
            if (data.hasOwnProperty('rc')) {
                obj['rc'] = ApiClient.convertToType(data['rc'], 'String');
            }
            if (data.hasOwnProperty('voltage')) {
                obj['voltage'] = ApiClient.convertToType(data['voltage'], 'Number');
            }
            if (data.hasOwnProperty('temperature')) {
                obj['temperature'] = ApiClient.convertToType(data['temperature'], 'Number');
            }
            if (data.hasOwnProperty('rise_capacitance')) {
                obj['rise_capacitance'] = ApiClient.convertToType(data['rise_capacitance'], 'Number');
            }
            if (data.hasOwnProperty('fall_capacitance')) {
                obj['fall_capacitance'] = ApiClient.convertToType(data['fall_capacitance'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
PinCap.prototype['id'] = undefined;

/**
 * @member {String} process
 */
PinCap.prototype['process'] = undefined;

/**
 * @member {String} rc
 */
PinCap.prototype['rc'] = undefined;

/**
 * @member {Number} voltage
 */
PinCap.prototype['voltage'] = undefined;

/**
 * @member {Number} temperature
 */
PinCap.prototype['temperature'] = undefined;

/**
 * @member {Number} rise_capacitance
 */
PinCap.prototype['rise_capacitance'] = undefined;

/**
 * @member {Number} fall_capacitance
 */
PinCap.prototype['fall_capacitance'] = undefined;






export default PinCap;

