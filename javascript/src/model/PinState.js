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
 * The PinState model module.
 * @module model/PinState
 * @version 2021.4.1
 */
class PinState {
    /**
     * Constructs a new <code>PinState</code>.
     * @alias module:model/PinState
     * @param pin {String} 
     * @param state {module:model/PinState.StateEnum} 
     */
    constructor(pin, state) { 
        
        PinState.initialize(this, pin, state);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, pin, state) { 
        obj['pin'] = pin;
        obj['state'] = state;
    }

    /**
     * Constructs a <code>PinState</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinState} obj Optional instance to populate.
     * @return {module:model/PinState} The populated <code>PinState</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PinState();

            if (data.hasOwnProperty('pin')) {
                obj['pin'] = ApiClient.convertToType(data['pin'], 'String');
            }
            if (data.hasOwnProperty('state')) {
                obj['state'] = ApiClient.convertToType(data['state'], 'String');
            }
            if (data.hasOwnProperty('fall_ramp')) {
                obj['fall_ramp'] = ApiClient.convertToType(data['fall_ramp'], 'Number');
            }
            if (data.hasOwnProperty('fall_cap')) {
                obj['fall_cap'] = ApiClient.convertToType(data['fall_cap'], 'Number');
            }
            if (data.hasOwnProperty('rise_ramp')) {
                obj['rise_ramp'] = ApiClient.convertToType(data['rise_ramp'], 'Number');
            }
            if (data.hasOwnProperty('rise_cap')) {
                obj['rise_cap'] = ApiClient.convertToType(data['rise_cap'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {String} pin
 */
PinState.prototype['pin'] = undefined;

/**
 * @member {module:model/PinState.StateEnum} state
 */
PinState.prototype['state'] = undefined;

/**
 * @member {Number} fall_ramp
 */
PinState.prototype['fall_ramp'] = undefined;

/**
 * @member {Number} fall_cap
 */
PinState.prototype['fall_cap'] = undefined;

/**
 * @member {Number} rise_ramp
 */
PinState.prototype['rise_ramp'] = undefined;

/**
 * @member {Number} rise_cap
 */
PinState.prototype['rise_cap'] = undefined;





/**
 * Allowed values for the <code>state</code> property.
 * @enum {String}
 * @readonly
 */
PinState['StateEnum'] = {

    /**
     * value: "0"
     * @const
     */
    "0": "0",

    /**
     * value: "1"
     * @const
     */
    "1": "1",

    /**
     * value: "R"
     * @const
     */
    "R": "R",

    /**
     * value: "F"
     * @const
     */
    "F": "F",

    /**
     * value: "X"
     * @const
     */
    "X": "X"
};



export default PinState;

