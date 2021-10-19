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
import SwaggerContribDevices from './SwaggerContribDevices';

/**
 * The Project model module.
 * @module model/Project
 * @version 2021.4.1
 */
class Project {
    /**
     * Constructs a new <code>Project</code>.
     * @alias module:model/Project
     * @param name {String} 
     */
    constructor(name) { 
        
        Project.initialize(this, name);
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
     * Constructs a <code>Project</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Project} obj Optional instance to populate.
     * @return {module:model/Project} The populated <code>Project</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Project();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('technology')) {
                obj['technology'] = ApiClient.convertToType(data['technology'], 'Number');
            }
            if (data.hasOwnProperty('technology_master')) {
                obj['technology_master'] = ApiClient.convertToType(data['technology_master'], 'Number');
            }
            if (data.hasOwnProperty('technology_name')) {
                obj['technology_name'] = ApiClient.convertToType(data['technology_name'], 'String');
            }
            if (data.hasOwnProperty('contrib_devices')) {
                obj['contrib_devices'] = ApiClient.convertToType(data['contrib_devices'], [SwaggerContribDevices]);
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
Project.prototype['id'] = undefined;

/**
 * @member {String} name
 */
Project.prototype['name'] = undefined;

/**
 * @member {Number} technology
 */
Project.prototype['technology'] = undefined;

/**
 * @member {Number} technology_master
 */
Project.prototype['technology_master'] = undefined;

/**
 * @member {String} technology_name
 */
Project.prototype['technology_name'] = undefined;

/**
 * @member {Array.<module:model/SwaggerContribDevices>} contrib_devices
 */
Project.prototype['contrib_devices'] = undefined;






export default Project;

