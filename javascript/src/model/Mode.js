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
 * The Mode model module.
 * @module model/Mode
 * @version 2021.4.1
 */
class Mode {
    /**
     * Constructs a new <code>Mode</code>.
     * @alias module:model/Mode
     * @param name {String} 
     */
    constructor(name) { 
        
        Mode.initialize(this, name);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, name) { 
        obj['name'] = name;
    }

    /**
     * Constructs a <code>Mode</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Mode} obj Optional instance to populate.
     * @return {module:model/Mode} The populated <code>Mode</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Mode();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('descr')) {
                obj['descr'] = ApiClient.convertToType(data['descr'], 'String');
            }
            if (data.hasOwnProperty('default')) {
                obj['default'] = ApiClient.convertToType(data['default'], 'Boolean');
            }
            if (data.hasOwnProperty('when')) {
                obj['when'] = ApiClient.convertToType(data['when'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
Mode.prototype['id'] = undefined;

/**
 * @member {String} name
 */
Mode.prototype['name'] = undefined;

/**
 * @member {String} descr
 */
Mode.prototype['descr'] = undefined;

/**
 * @member {Boolean} default
 */
Mode.prototype['default'] = undefined;

/**
 * @member {String} when
 */
Mode.prototype['when'] = undefined;






export default Mode;

