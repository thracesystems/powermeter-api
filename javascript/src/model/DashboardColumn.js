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
 * The DashboardColumn model module.
 * @module model/DashboardColumn
 * @version 2021.4.1
 */
class DashboardColumn {
    /**
     * Constructs a new <code>DashboardColumn</code>.
     * @alias module:model/DashboardColumn
     * @param order {Number} 
     * @param filter {String} 
     */
    constructor(order, filter) { 
        
        DashboardColumn.initialize(this, order, filter);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, order, filter) { 
        obj['order'] = order;
        obj['filter'] = filter;
    }

    /**
     * Constructs a <code>DashboardColumn</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/DashboardColumn} obj Optional instance to populate.
     * @return {module:model/DashboardColumn} The populated <code>DashboardColumn</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new DashboardColumn();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('order')) {
                obj['order'] = ApiClient.convertToType(data['order'], 'Number');
            }
            if (data.hasOwnProperty('filter')) {
                obj['filter'] = ApiClient.convertToType(data['filter'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
DashboardColumn.prototype['id'] = undefined;

/**
 * @member {String} title
 */
DashboardColumn.prototype['title'] = undefined;

/**
 * @member {Number} order
 */
DashboardColumn.prototype['order'] = undefined;

/**
 * @member {String} filter
 */
DashboardColumn.prototype['filter'] = undefined;






export default DashboardColumn;

