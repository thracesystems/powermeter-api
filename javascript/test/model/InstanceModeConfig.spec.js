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
    instance = new PowermeterApi.InstanceModeConfig();
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

  describe('InstanceModeConfig', function() {
    it('should create an instance of InstanceModeConfig', function() {
      // uncomment below and update the code to test InstanceModeConfig
      //var instane = new PowermeterApi.InstanceModeConfig();
      //expect(instance).to.be.a(PowermeterApi.InstanceModeConfig);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.InstanceModeConfig();
      //expect(instance).to.be();
    });

    it('should have the property parameter (base name: "parameter")', function() {
      // uncomment below and update the code to test the property parameter
      //var instane = new PowermeterApi.InstanceModeConfig();
      //expect(instance).to.be();
    });

    it('should have the property parameterName (base name: "parameter_name")', function() {
      // uncomment below and update the code to test the property parameterName
      //var instane = new PowermeterApi.InstanceModeConfig();
      //expect(instance).to.be();
    });

    it('should have the property parameterDescr (base name: "parameter_descr")', function() {
      // uncomment below and update the code to test the property parameterDescr
      //var instane = new PowermeterApi.InstanceModeConfig();
      //expect(instance).to.be();
    });

    it('should have the property value (base name: "value")', function() {
      // uncomment below and update the code to test the property value
      //var instane = new PowermeterApi.InstanceModeConfig();
      //expect(instance).to.be();
    });

  });

}));
