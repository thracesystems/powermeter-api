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
 * The ScenarioParam model module.
 * @module model/ScenarioParam
 * @version 2021.4.1
 */
class ScenarioParam {
    /**
     * Constructs a new <code>ScenarioParam</code>.
     * @alias module:model/ScenarioParam
     * @param parameter {Number} 
     */
    constructor(parameter) { 
        
        ScenarioParam.initialize(this, parameter);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, parameter) { 
        obj['parameter'] = parameter;
    }

    /**
     * Constructs a <code>ScenarioParam</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ScenarioParam} obj Optional instance to populate.
     * @return {module:model/ScenarioParam} The populated <code>ScenarioParam</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ScenarioParam();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('parameter')) {
                obj['parameter'] = ApiClient.convertToType(data['parameter'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
ScenarioParam.prototype['id'] = undefined;

/**
 * @member {Number} parameter
 */
ScenarioParam.prototype['parameter'] = undefined;






export default ScenarioParam;
