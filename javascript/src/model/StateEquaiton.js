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
 * The StateEquaiton model module.
 * @module model/StateEquaiton
 * @version 2021.4.1
 */
class StateEquaiton {
    /**
     * Constructs a new <code>StateEquaiton</code>.
     * @alias module:model/StateEquaiton
     * @param pin {String} 
     * @param equation {String} 
     */
    constructor(pin, equation) { 
        
        StateEquaiton.initialize(this, pin, equation);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, pin, equation) { 
        obj['pin'] = pin;
        obj['equation'] = equation;
    }

    /**
     * Constructs a <code>StateEquaiton</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/StateEquaiton} obj Optional instance to populate.
     * @return {module:model/StateEquaiton} The populated <code>StateEquaiton</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new StateEquaiton();

            if (data.hasOwnProperty('pin')) {
                obj['pin'] = ApiClient.convertToType(data['pin'], 'String');
            }
            if (data.hasOwnProperty('equation')) {
                obj['equation'] = ApiClient.convertToType(data['equation'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} pin
 */
StateEquaiton.prototype['pin'] = undefined;

/**
 * @member {String} equation
 */
StateEquaiton.prototype['equation'] = undefined;






export default StateEquaiton;

