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
    instance = new PowermeterApi.DesignLatch();
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

  describe('DesignLatch', function() {
    it('should create an instance of DesignLatch', function() {
      // uncomment below and update the code to test DesignLatch
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be.a(PowermeterApi.DesignLatch);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property var1 (base name: "var1")', function() {
      // uncomment below and update the code to test the property var1
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property var2 (base name: "var2")', function() {
      // uncomment below and update the code to test the property var2
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property bits (base name: "bits")', function() {
      // uncomment below and update the code to test the property bits
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property enable (base name: "enable")', function() {
      // uncomment below and update the code to test the property enable
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property dataIn (base name: "data_in")', function() {
      // uncomment below and update the code to test the property dataIn
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property clear (base name: "clear")', function() {
      // uncomment below and update the code to test the property clear
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property preset (base name: "preset")', function() {
      // uncomment below and update the code to test the property preset
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property clearPresetVar1 (base name: "clear_preset_var1")', function() {
      // uncomment below and update the code to test the property clearPresetVar1
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property clearPresetVar2 (base name: "clear_preset_var2")', function() {
      // uncomment below and update the code to test the property clearPresetVar2
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

    it('should have the property powerDownFunction (base name: "power_down_function")', function() {
      // uncomment below and update the code to test the property powerDownFunction
      //var instane = new PowermeterApi.DesignLatch();
      //expect(instance).to.be();
    });

  });

}));
