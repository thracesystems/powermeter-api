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
 * The DeviceDataBulk model module.
 * @module model/DeviceDataBulk
 * @version 2021.4.1
 */
class DeviceDataBulk {
    /**
     * Constructs a new <code>DeviceDataBulk</code>.
     * @alias module:model/DeviceDataBulk
     * @param p {String} 
     * @param t {Number} 
     * @param vds {Number} 
     * @param vgs {Number} 
     * @param vbs {Number} 
     * @param idrain {Number} 
     * @param igate {Number} 
     * @param isource {Number} 
     * @param ibody {Number} 
     */
    constructor(p, t, vds, vgs, vbs, idrain, igate, isource, ibody) { 
        
        DeviceDataBulk.initialize(this, p, t, vds, vgs, vbs, idrain, igate, isource, ibody);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, p, t, vds, vgs, vbs, idrain, igate, isource, ibody) { 
        obj['p'] = p;
        obj['t'] = t;
        obj['Vds'] = vds;
        obj['Vgs'] = vgs;
        obj['Vbs'] = vbs;
        obj['Idrain'] = idrain;
        obj['Igate'] = igate;
        obj['Isource'] = isource;
        obj['Ibody'] = ibody;
    }

    /**
     * Constructs a <code>DeviceDataBulk</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/DeviceDataBulk} obj Optional instance to populate.
     * @return {module:model/DeviceDataBulk} The populated <code>DeviceDataBulk</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new DeviceDataBulk();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('p')) {
                obj['p'] = ApiClient.convertToType(data['p'], 'String');
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
 * @member {Number} id
 */
DeviceDataBulk.prototype['id'] = undefined;

/**
 * @member {String} p
 */
DeviceDataBulk.prototype['p'] = undefined;

/**
 * @member {Number} t
 */
DeviceDataBulk.prototype['t'] = undefined;

/**
 * @member {Number} Vds
 */
DeviceDataBulk.prototype['Vds'] = undefined;

/**
 * @member {Number} Vgs
 */
DeviceDataBulk.prototype['Vgs'] = undefined;

/**
 * @member {Number} Vbs
 */
DeviceDataBulk.prototype['Vbs'] = undefined;

/**
 * @member {Number} Idrain
 */
DeviceDataBulk.prototype['Idrain'] = undefined;

/**
 * @member {Number} Igate
 */
DeviceDataBulk.prototype['Igate'] = undefined;

/**
 * @member {Number} Isource
 */
DeviceDataBulk.prototype['Isource'] = undefined;

/**
 * @member {Number} Ibody
 */
DeviceDataBulk.prototype['Ibody'] = undefined;






export default DeviceDataBulk;

