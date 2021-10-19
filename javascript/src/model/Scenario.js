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
import ScenarioVersion from './ScenarioVersion';

/**
 * The Scenario model module.
 * @module model/Scenario
 * @version 2021.4.1
 */
class Scenario {
    /**
     * Constructs a new <code>Scenario</code>.
     * @alias module:model/Scenario
     */
    constructor() { 
        
        Scenario.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Scenario</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Scenario} obj Optional instance to populate.
     * @return {module:model/Scenario} The populated <code>Scenario</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Scenario();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('descr')) {
                obj['descr'] = ApiClient.convertToType(data['descr'], 'String');
            }
            if (data.hasOwnProperty('editable')) {
                obj['editable'] = ApiClient.convertToType(data['editable'], 'Boolean');
            }
            if (data.hasOwnProperty('ambient')) {
                obj['ambient'] = ApiClient.convertToType(data['ambient'], 'Number');
            }
            if (data.hasOwnProperty('endtime')) {
                obj['endtime'] = ApiClient.convertToType(data['endtime'], 'Number');
            }
            if (data.hasOwnProperty('current_version')) {
                obj['current_version'] = ApiClient.convertToType(data['current_version'], 'Number');
            }
            if (data.hasOwnProperty('version')) {
                obj['version'] = ScenarioVersion.constructFromObject(data['version']);
            }
            if (data.hasOwnProperty('average_power')) {
                obj['average_power'] = ApiClient.convertToType(data['average_power'], 'Number');
            }
            if (data.hasOwnProperty('total_energy')) {
                obj['total_energy'] = ApiClient.convertToType(data['total_energy'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
Scenario.prototype['id'] = undefined;

/**
 * @member {String} title
 */
Scenario.prototype['title'] = undefined;

/**
 * @member {String} descr
 */
Scenario.prototype['descr'] = undefined;

/**
 * @member {Boolean} editable
 */
Scenario.prototype['editable'] = undefined;

/**
 * @member {Number} ambient
 */
Scenario.prototype['ambient'] = undefined;

/**
 * @member {Number} endtime
 */
Scenario.prototype['endtime'] = undefined;

/**
 * @member {Number} current_version
 */
Scenario.prototype['current_version'] = undefined;

/**
 * @member {module:model/ScenarioVersion} version
 */
Scenario.prototype['version'] = undefined;

/**
 * @member {Number} average_power
 */
Scenario.prototype['average_power'] = undefined;

/**
 * @member {Number} total_energy
 */
Scenario.prototype['total_energy'] = undefined;






export default Scenario;

