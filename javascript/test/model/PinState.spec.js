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
    instance = new PowermeterApi.PinState();
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

  describe('PinState', function() {
    it('should create an instance of PinState', function() {
      // uncomment below and update the code to test PinState
      //var instane = new PowermeterApi.PinState();
      //expect(instance).to.be.a(PowermeterApi.PinState);
    });

    it('should have the property pin (base name: "pin")', function() {
      // uncomment below and update the code to test the property pin
      //var instane = new PowermeterApi.PinState();
      //expect(instance).to.be();
    });

    it('should have the property state (base name: "state")', function() {
      // uncomment below and update the code to test the property state
      //var instane = new PowermeterApi.PinState();
      //expect(instance).to.be();
    });

    it('should have the property fallRamp (base name: "fall_ramp")', function() {
      // uncomment below and update the code to test the property fallRamp
      //var instane = new PowermeterApi.PinState();
      //expect(instance).to.be();
    });

    it('should have the property fallCap (base name: "fall_cap")', function() {
      // uncomment below and update the code to test the property fallCap
      //var instane = new PowermeterApi.PinState();
      //expect(instance).to.be();
    });

    it('should have the property riseRamp (base name: "rise_ramp")', function() {
      // uncomment below and update the code to test the property riseRamp
      //var instane = new PowermeterApi.PinState();
      //expect(instance).to.be();
    });

    it('should have the property riseCap (base name: "rise_cap")', function() {
      // uncomment below and update the code to test the property riseCap
      //var instane = new PowermeterApi.PinState();
      //expect(instance).to.be();
    });

  });

}));
