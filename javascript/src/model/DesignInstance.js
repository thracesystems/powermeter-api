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
import DesignSupplyInst from './DesignSupplyInst';
import ScenarioModeUtil from './ScenarioModeUtil';
import ScenarioParam from './ScenarioParam';

/**
 * The DesignInstance model module.
 * @module model/DesignInstance
 * @version 2021.4.1
 */
class DesignInstance {
    /**
     * Constructs a new <code>DesignInstance</code>.
     * @alias module:model/DesignInstance
     * @param name {String} 
     * @param master {Number} 
     * @param process {Number} 
     * @param rc {Number} 
     */
    constructor(name, master, process, rc) { 
        
        DesignInstance.initialize(this, name, master, process, rc);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, name, master, process, rc) { 
        obj['name'] = name;
        obj['master'] = master;
        obj['process'] = process;
        obj['rc'] = rc;
    }

    /**
     * Constructs a <code>DesignInstance</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/DesignInstance} obj Optional instance to populate.
     * @return {module:model/DesignInstance} The populated <code>DesignInstance</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new DesignInstance();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('hier_name')) {
                obj['hier_name'] = ApiClient.convertToType(data['hier_name'], 'String');
            }
            if (data.hasOwnProperty('parent_id')) {
                obj['parent_id'] = ApiClient.convertToType(data['parent_id'], 'Number');
            }
            if (data.hasOwnProperty('parent_type')) {
                obj['parent_type'] = ApiClient.convertToType(data['parent_type'], 'String');
            }
            if (data.hasOwnProperty('master')) {
                obj['master'] = ApiClient.convertToType(data['master'], 'Number');
            }
            if (data.hasOwnProperty('master_name')) {
                obj['master_name'] = ApiClient.convertToType(data['master_name'], 'String');
            }
            if (data.hasOwnProperty('master_master')) {
                obj['master_master'] = ApiClient.convertToType(data['master_master'], 'Number');
            }
            if (data.hasOwnProperty('layer_stack')) {
                obj['layer_stack'] = ApiClient.convertToType(data['layer_stack'], 'Number');
            }
            if (data.hasOwnProperty('process')) {
                obj['process'] = ApiClient.convertToType(data['process'], 'Number');
            }
            if (data.hasOwnProperty('rc')) {
                obj['rc'] = ApiClient.convertToType(data['rc'], 'Number');
            }
            if (data.hasOwnProperty('junction')) {
                obj['junction'] = ApiClient.convertToType(data['junction'], 'Number');
            }
            if (data.hasOwnProperty('supplies')) {
                obj['supplies'] = ApiClient.convertToType(data['supplies'], [DesignSupplyInst]);
            }
            if (data.hasOwnProperty('config')) {
                obj['config'] = ApiClient.convertToType(data['config'], [ScenarioParam]);
            }
            if (data.hasOwnProperty('utilizations')) {
                obj['utilizations'] = ApiClient.convertToType(data['utilizations'], [ScenarioModeUtil]);
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
DesignInstance.prototype['id'] = undefined;

/**
 * @member {String} name
 */
DesignInstance.prototype['name'] = undefined;

/**
 * @member {String} hier_name
 */
DesignInstance.prototype['hier_name'] = undefined;

/**
 * @member {Number} parent_id
 */
DesignInstance.prototype['parent_id'] = undefined;

/**
 * @member {String} parent_type
 */
DesignInstance.prototype['parent_type'] = undefined;

/**
 * @member {Number} master
 */
DesignInstance.prototype['master'] = undefined;

/**
 * @member {String} master_name
 */
DesignInstance.prototype['master_name'] = undefined;

/**
 * @member {Number} master_master
 */
DesignInstance.prototype['master_master'] = undefined;

/**
 * @member {Number} layer_stack
 */
DesignInstance.prototype['layer_stack'] = undefined;

/**
 * @member {Number} process
 */
DesignInstance.prototype['process'] = undefined;

/**
 * @member {Number} rc
 */
DesignInstance.prototype['rc'] = undefined;

/**
 * @member {Number} junction
 */
DesignInstance.prototype['junction'] = undefined;

/**
 * @member {Array.<module:model/DesignSupplyInst>} supplies
 */
DesignInstance.prototype['supplies'] = undefined;

/**
 * @member {Array.<module:model/ScenarioParam>} config
 */
DesignInstance.prototype['config'] = undefined;

/**
 * @member {Array.<module:model/ScenarioModeUtil>} utilizations
 */
DesignInstance.prototype['utilizations'] = undefined;






export default DesignInstance;

