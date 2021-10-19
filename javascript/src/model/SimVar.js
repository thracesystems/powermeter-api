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
 * The SimVar model module.
 * @module model/SimVar
 * @version 2021.4.1
 */
class SimVar {
    /**
     * Constructs a new <code>SimVar</code>.
     * @alias module:model/SimVar
     * @param type {String} 
     * @param size {Number} 
     * @param name {String} 
     * @param vcdId {String} 
     */
    constructor(type, size, name, vcdId) { 
        
        SimVar.initialize(this, type, size, name, vcdId);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, type, size, name, vcdId) { 
        obj['type'] = type;
        obj['size'] = size;
        obj['name'] = name;
        obj['vcd_id'] = vcdId;
    }

    /**
     * Constructs a <code>SimVar</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SimVar} obj Optional instance to populate.
     * @return {module:model/SimVar} The populated <code>SimVar</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SimVar();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('scope')) {
                obj['scope'] = ApiClient.convertToType(data['scope'], 'Number');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('size')) {
                obj['size'] = ApiClient.convertToType(data['size'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('vcd_id')) {
                obj['vcd_id'] = ApiClient.convertToType(data['vcd_id'], 'String');
            }
            if (data.hasOwnProperty('msb')) {
                obj['msb'] = ApiClient.convertToType(data['msb'], ['Number']);
            }
            if (data.hasOwnProperty('lsb')) {
                obj['lsb'] = ApiClient.convertToType(data['lsb'], ['Number']);
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
SimVar.prototype['id'] = undefined;

/**
 * @member {Number} scope
 */
SimVar.prototype['scope'] = undefined;

/**
 * @member {String} type
 */
SimVar.prototype['type'] = undefined;

/**
 * @member {Number} size
 */
SimVar.prototype['size'] = undefined;

/**
 * @member {String} name
 */
SimVar.prototype['name'] = undefined;

/**
 * @member {String} vcd_id
 */
SimVar.prototype['vcd_id'] = undefined;

/**
 * @member {Array.<Number>} msb
 */
SimVar.prototype['msb'] = undefined;

/**
 * @member {Array.<Number>} lsb
 */
SimVar.prototype['lsb'] = undefined;






export default SimVar;

