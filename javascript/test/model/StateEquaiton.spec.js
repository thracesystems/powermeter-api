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

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.PowermeterApi);
  }
}(this, function(expect, PowermeterApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new PowermeterApi.StateEquaiton();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('StateEquaiton', function() {
    it('should create an instance of StateEquaiton', function() {
      // uncomment below and update the code to test StateEquaiton
      //var instane = new PowermeterApi.StateEquaiton();
      //expect(instance).to.be.a(PowermeterApi.StateEquaiton);
    });

    it('should have the property pin (base name: "pin")', function() {
      // uncomment below and update the code to test the property pin
      //var instane = new PowermeterApi.StateEquaiton();
      //expect(instance).to.be();
    });

    it('should have the property equation (base name: "equation")', function() {
      // uncomment below and update the code to test the property equation
      //var instane = new PowermeterApi.StateEquaiton();
      //expect(instance).to.be();
    });

  });

}));
