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
 * The MeasuredDataJSON model module.
 * @module model/MeasuredDataJSON
 * @version 2021.4.1
 */
class MeasuredDataJSON {
    /**
     * Constructs a new <code>MeasuredDataJSON</code>.
     * @alias module:model/MeasuredDataJSON
     * @param data {Object} 
     */
    constructor(data) { 
        
        MeasuredDataJSON.initialize(this, data);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, data) { 
        obj['data'] = data;
    }

    /**
     * Constructs a <code>MeasuredDataJSON</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/MeasuredDataJSON} obj Optional instance to populate.
     * @return {module:model/MeasuredDataJSON} The populated <code>MeasuredDataJSON</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new MeasuredDataJSON();

            if (data.hasOwnProperty('data')) {
                obj['data'] = ApiClient.convertToType(data['data'], Object);
            }
        }
        return obj;
    }


}

/**
 * @member {Object} data
 */
MeasuredDataJSON.prototype['data'] = undefined;






export default MeasuredDataJSON;

