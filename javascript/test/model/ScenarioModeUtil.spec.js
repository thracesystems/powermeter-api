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
    instance = new PowermeterApi.ScenarioModeUtil();
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

  describe('ScenarioModeUtil', function() {
    it('should create an instance of ScenarioModeUtil', function() {
      // uncomment below and update the code to test ScenarioModeUtil
      //var instane = new PowermeterApi.ScenarioModeUtil();
      //expect(instance).to.be.a(PowermeterApi.ScenarioModeUtil);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.ScenarioModeUtil();
      //expect(instance).to.be();
    });

    it('should have the property mastermode (base name: "mastermode")', function() {
      // uncomment below and update the code to test the property mastermode
      //var instane = new PowermeterApi.ScenarioModeUtil();
      //expect(instance).to.be();
    });

    it('should have the property mastermodeName (base name: "mastermode_name")', function() {
      // uncomment below and update the code to test the property mastermodeName
      //var instane = new PowermeterApi.ScenarioModeUtil();
      //expect(instance).to.be();
    });

  });

}));
