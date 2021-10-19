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
 * The LayerStack model module.
 * @module model/LayerStack
 * @version 2021.4.1
 */
class LayerStack {
    /**
     * Constructs a new <code>LayerStack</code>.
     * @alias module:model/LayerStack
     * @param name {String} 
     */
    constructor(name) { 
        
        LayerStack.initialize(this, name);
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
     * Constructs a <code>LayerStack</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/LayerStack} obj Optional instance to populate.
     * @return {module:model/LayerStack} The populated <code>LayerStack</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new LayerStack();

            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'Number');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('layer_count')) {
                obj['layer_count'] = ApiClient.convertToType(data['layer_count'], 'Number');
            }
            if (data.hasOwnProperty('layer_order')) {
                obj['layer_order'] = ApiClient.convertToType(data['layer_order'], ['Number']);
            }
        }
        return obj;
    }


}

/**
 * @member {Number} id
 */
LayerStack.prototype['id'] = undefined;

/**
 * @member {String} name
 */
LayerStack.prototype['name'] = undefined;

/**
 * @member {Number} layer_count
 */
LayerStack.prototype['layer_count'] = undefined;

/**
 * @member {Array.<Number>} layer_order
 */
LayerStack.prototype['layer_order'] = undefined;






export default LayerStack;
