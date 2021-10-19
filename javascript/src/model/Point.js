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
 * The Point model module.
 * @module model/Point
 * @version 2021.4.1
 */
class Point {
    /**
     * Constructs a new <code>Point</code>.
     * @alias module:model/Point
     * @param x {Number} 
     * @param y {Number} 
     */
    constructor(x, y) { 
        
        Point.initialize(this, x, y);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, x, y) { 
        obj['x'] = x;
        obj['y'] = y;
    }

    /**
     * Constructs a <code>Point</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Point} obj Optional instance to populate.
     * @return {module:model/Point} The populated <code>Point</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Point();

            if (data.hasOwnProperty('x')) {
                obj['x'] = ApiClient.convertToType(data['x'], 'Number');
            }
            if (data.hasOwnProperty('y')) {
                obj['y'] = ApiClient.convertToType(data['y'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} x
 */
Point.prototype['x'] = undefined;

/**
 * @member {Number} y
 */
Point.prototype['y'] = undefined;






export default Point;
