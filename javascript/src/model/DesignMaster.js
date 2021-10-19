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
 * The DesignMaster model module.
 * @module model/DesignMaster
 * @version 2021.4.1
 */
class DesignMaster {
    /**
     * Constructs a new <code>DesignMaster</code>.
     * @alias module:model/DesignMaster
     */
    constructor() { 
        
        DesignMaster.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>DesignMaster</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/DesignMaster} obj Optional instance to populate.
     * @return {module:model/DesignMaster} The populated <code>DesignMaster</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new DesignMaster();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('descr')) {
                obj['descr'] = ApiClient.convertToType(data['descr'], 'String');
            }
            if (data.hasOwnProperty('top')) {
                obj['top'] = ApiClient.convertToType(data['top'], 'Boolean');
            }
            if (data.hasOwnProperty('current_version')) {
                obj['current_version'] = ApiClient.convertToType(data['current_version'], 'Number');
            }
            if (data.hasOwnProperty('latest_commit')) {
                obj['latest_commit'] = ApiClient.convertToType(data['latest_commit'], 'Number');
            }
            if (data.hasOwnProperty('latest_commit_version')) {
                obj['latest_commit_version'] = ApiClient.convertToType(data['latest_commit_version'], 'Number');
            }
            if (data.hasOwnProperty('latest_commit_timestamp')) {
                obj['latest_commit_timestamp'] = ApiClient.convertToType(data['latest_commit_timestamp'], 'String');
            }
            if (data.hasOwnProperty('uuid')) {
                obj['uuid'] = ApiClient.convertToType(data['uuid'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
DesignMaster.prototype['id'] = undefined;

/**
 * @member {String} name
 */
DesignMaster.prototype['name'] = undefined;

/**
 * @member {String} descr
 */
DesignMaster.prototype['descr'] = undefined;

/**
 * @member {Boolean} top
 */
DesignMaster.prototype['top'] = undefined;

/**
 * @member {Number} current_version
 */
DesignMaster.prototype['current_version'] = undefined;

/**
 * @member {Number} latest_commit
 */
DesignMaster.prototype['latest_commit'] = undefined;

/**
 * @member {Number} latest_commit_version
 */
DesignMaster.prototype['latest_commit_version'] = undefined;

/**
 * @member {String} latest_commit_timestamp
 */
DesignMaster.prototype['latest_commit_timestamp'] = undefined;

/**
 * @member {String} uuid
 */
DesignMaster.prototype['uuid'] = undefined;






export default DesignMaster;

