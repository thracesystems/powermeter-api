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
import SwaggerContrib from './SwaggerContrib';

/**
 * The PagedContribDevice model module.
 * @module model/PagedContribDevice
 * @version 2021.4.1
 */
class PagedContribDevice {
    /**
     * Constructs a new <code>PagedContribDevice</code>.
     * @alias module:model/PagedContribDevice
     * @param pages {Number} 
     * @param page {Number} 
     * @param devices {Array.<module:model/SwaggerContrib>} 
     */
    constructor(pages, page, devices) { 
        
        PagedContribDevice.initialize(this, pages, page, devices);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, pages, page, devices) { 
        obj['pages'] = pages;
        obj['page'] = page;
        obj['devices'] = devices;
    }

    /**
     * Constructs a <code>PagedContribDevice</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PagedContribDevice} obj Optional instance to populate.
     * @return {module:model/PagedContribDevice} The populated <code>PagedContribDevice</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PagedContribDevice();

            if (data.hasOwnProperty('pages')) {
                obj['pages'] = ApiClient.convertToType(data['pages'], 'Number');
            }
            if (data.hasOwnProperty('page')) {
                obj['page'] = ApiClient.convertToType(data['page'], 'Number');
            }
            if (data.hasOwnProperty('devices')) {
                obj['devices'] = ApiClient.convertToType(data['devices'], [SwaggerContrib]);
            }
        }
        return obj;
    }


}

/**
 * @member {Number} pages
 */
PagedContribDevice.prototype['pages'] = undefined;

/**
 * @member {Number} page
 */
PagedContribDevice.prototype['page'] = undefined;

/**
 * @member {Array.<module:model/SwaggerContrib>} devices
 */
PagedContribDevice.prototype['devices'] = undefined;






export default PagedContribDevice;

