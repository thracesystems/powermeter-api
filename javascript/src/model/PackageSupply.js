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
 * The PackageSupply model module.
 * @module model/PackageSupply
 * @version 2021.4.1
 */
class PackageSupply {
    /**
     * Constructs a new <code>PackageSupply</code>.
     * @alias module:model/PackageSupply
     * @param name {String} 
     */
    constructor(name) { 
        
        PackageSupply.initialize(this, name);
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
     * Constructs a <code>PackageSupply</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PackageSupply} obj Optional instance to populate.
     * @return {module:model/PackageSupply} The populated <code>PackageSupply</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PackageSupply();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
PackageSupply.prototype['id'] = undefined;

/**
 * @member {String} name
 */
PackageSupply.prototype['name'] = undefined;






export default PackageSupply;
