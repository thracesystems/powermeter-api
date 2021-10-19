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
import TechnologyVersion from './TechnologyVersion';

/**
 * The Technology model module.
 * @module model/Technology
 * @version 2021.4.1
 */
class Technology {
    /**
     * Constructs a new <code>Technology</code>.
     * @alias module:model/Technology
     * @param scribeLine {Number} 
     * @param edgeLoss {Number} 
     */
    constructor(scribeLine, edgeLoss) { 
        
        Technology.initialize(this, scribeLine, edgeLoss);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, scribeLine, edgeLoss) { 
        obj['scribe_line'] = scribeLine;
        obj['edge_loss'] = edgeLoss;
    }

    /**
     * Constructs a <code>Technology</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Technology} obj Optional instance to populate.
     * @return {module:model/Technology} The populated <code>Technology</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Technology();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('node')) {
                obj['node'] = ApiClient.convertToType(data['node'], 'Number');
            }
            if (data.hasOwnProperty('editable')) {
                obj['editable'] = ApiClient.convertToType(data['editable'], 'Boolean');
            }
            if (data.hasOwnProperty('current_version')) {
                obj['current_version'] = ApiClient.convertToType(data['current_version'], 'Number');
            }
            if (data.hasOwnProperty('version')) {
                obj['version'] = TechnologyVersion.constructFromObject(data['version']);
            }
            if (data.hasOwnProperty('wafer_diameter')) {
                obj['wafer_diameter'] = ApiClient.convertToType(data['wafer_diameter'], 'Number');
            }
            if (data.hasOwnProperty('scribe_line')) {
                obj['scribe_line'] = ApiClient.convertToType(data['scribe_line'], 'Number');
            }
            if (data.hasOwnProperty('edge_loss')) {
                obj['edge_loss'] = ApiClient.convertToType(data['edge_loss'], 'Number');
            }
            if (data.hasOwnProperty('project_count')) {
                obj['project_count'] = ApiClient.convertToType(data['project_count'], 'Number');
            }
            if (data.hasOwnProperty('has_shrink')) {
                obj['has_shrink'] = ApiClient.convertToType(data['has_shrink'], 'Boolean');
            }
            if (data.hasOwnProperty('shrink_factor')) {
                obj['shrink_factor'] = ApiClient.convertToType(data['shrink_factor'], 'Number');
            }
            if (data.hasOwnProperty('thickness')) {
                obj['thickness'] = ApiClient.convertToType(data['thickness'], 'Number');
            }
            if (data.hasOwnProperty('si_conductivity')) {
                obj['si_conductivity'] = ApiClient.convertToType(data['si_conductivity'], 'Number');
            }
            if (data.hasOwnProperty('si_heat_capacity')) {
                obj['si_heat_capacity'] = ApiClient.convertToType(data['si_heat_capacity'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
Technology.prototype['id'] = undefined;

/**
 * @member {String} name
 */
Technology.prototype['name'] = undefined;

/**
 * @member {Number} node
 */
Technology.prototype['node'] = undefined;

/**
 * @member {Boolean} editable
 */
Technology.prototype['editable'] = undefined;

/**
 * @member {Number} current_version
 */
Technology.prototype['current_version'] = undefined;

/**
 * @member {module:model/TechnologyVersion} version
 */
Technology.prototype['version'] = undefined;

/**
 * @member {Number} wafer_diameter
 */
Technology.prototype['wafer_diameter'] = undefined;

/**
 * @member {Number} scribe_line
 */
Technology.prototype['scribe_line'] = undefined;

/**
 * @member {Number} edge_loss
 */
Technology.prototype['edge_loss'] = undefined;

/**
 * @member {Number} project_count
 */
Technology.prototype['project_count'] = undefined;

/**
 * @member {Boolean} has_shrink
 */
Technology.prototype['has_shrink'] = undefined;

/**
 * @member {Number} shrink_factor
 */
Technology.prototype['shrink_factor'] = undefined;

/**
 * @member {Number} thickness
 */
Technology.prototype['thickness'] = undefined;

/**
 * @member {Number} si_conductivity
 */
Technology.prototype['si_conductivity'] = undefined;

/**
 * @member {Number} si_heat_capacity
 */
Technology.prototype['si_heat_capacity'] = undefined;






export default Technology;

