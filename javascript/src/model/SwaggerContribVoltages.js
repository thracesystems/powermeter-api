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
 * The SwaggerContribVoltages model module.
 * @module model/SwaggerContribVoltages
 * @version 2021.4.1
 */
class SwaggerContribVoltages {
    /**
     * Constructs a new <code>SwaggerContribVoltages</code>.
     * @alias module:model/SwaggerContribVoltages
     * @param p {String} 
     * @param v {Number} 
     * @param t {Number} 
     * @param vds {Number} 
     * @param vgs {Number} 
     * @param vbs {Number} 
     */
    constructor(p, v, t, vds, vgs, vbs) { 
        
        SwaggerContribVoltages.initialize(this, p, v, t, vds, vgs, vbs);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, p, v, t, vds, vgs, vbs) { 
        obj['p'] = p;
        obj['v'] = v;
        obj['t'] = t;
        obj['Vds'] = vds;
        obj['Vgs'] = vgs;
        obj['Vbs'] = vbs;
    }

    /**
     * Constructs a <code>SwaggerContribVoltages</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SwaggerContribVoltages} obj Optional instance to populate.
     * @return {module:model/SwaggerContribVoltages} The populated <code>SwaggerContribVoltages</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SwaggerContribVoltages();

            if (data.hasOwnProperty('p')) {
                obj['p'] = ApiClient.convertToType(data['p'], 'String');
            }
            if (data.hasOwnProperty('v')) {
                obj['v'] = ApiClient.convertToType(data['v'], 'Number');
            }
            if (data.hasOwnProperty('t')) {
                obj['t'] = ApiClient.convertToType(data['t'], 'Number');
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
        }
        return obj;
    }


}

/**
 * @member {String} p
 */
SwaggerContribVoltages.prototype['p'] = undefined;

/**
 * @member {Number} v
 */
SwaggerContribVoltages.prototype['v'] = undefined;

/**
 * @member {Number} t
 */
SwaggerContribVoltages.prototype['t'] = undefined;

/**
 * @member {Number} Vds
 */
SwaggerContribVoltages.prototype['Vds'] = undefined;

/**
 * @member {Number} Vgs
 */
SwaggerContribVoltages.prototype['Vgs'] = undefined;

/**
 * @member {Number} Vbs
 */
SwaggerContribVoltages.prototype['Vbs'] = undefined;






export default SwaggerContribVoltages;

