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
import LeakagePower from './LeakagePower';

/**
 * The PagedLeakagePower model module.
 * @module model/PagedLeakagePower
 * @version 2021.4.1
 */
class PagedLeakagePower {
    /**
     * Constructs a new <code>PagedLeakagePower</code>.
     * @alias module:model/PagedLeakagePower
     * @param page {Number} 
     * @param pages {Number} 
     * @param power {Array.<module:model/LeakagePower>} 
     */
    constructor(page, pages, power) { 
        
        PagedLeakagePower.initialize(this, page, pages, power);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, page, pages, power) { 
        obj['page'] = page;
        obj['pages'] = pages;
        obj['power'] = power;
    }

    /**
     * Constructs a <code>PagedLeakagePower</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PagedLeakagePower} obj Optional instance to populate.
     * @return {module:model/PagedLeakagePower} The populated <code>PagedLeakagePower</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PagedLeakagePower();

            if (data.hasOwnProperty('page')) {
                obj['page'] = ApiClient.convertToType(data['page'], 'Number');
            }
            if (data.hasOwnProperty('pages')) {
                obj['pages'] = ApiClient.convertToType(data['pages'], 'Number');
            }
            if (data.hasOwnProperty('power')) {
                obj['power'] = ApiClient.convertToType(data['power'], [LeakagePower]);
            }
        }
        return obj;
    }


}

/**
 * @member {Number} page
 */
PagedLeakagePower.prototype['page'] = undefined;

/**
 * @member {Number} pages
 */
PagedLeakagePower.prototype['pages'] = undefined;

/**
 * @member {Array.<module:model/LeakagePower>} power
 */
PagedLeakagePower.prototype['power'] = undefined;






export default PagedLeakagePower;

