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
    instance = new PowermeterApi.PinEnergy();
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

  describe('PinEnergy', function() {
    it('should create an instance of PinEnergy', function() {
      // uncomment below and update the code to test PinEnergy
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be.a(PowermeterApi.PinEnergy);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property pin (base name: "pin")', function() {
      // uncomment below and update the code to test the property pin
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property pinName (base name: "pin_name")', function() {
      // uncomment below and update the code to test the property pinName
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property relatedPin (base name: "related_pin")', function() {
      // uncomment below and update the code to test the property relatedPin
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property relatedPinName (base name: "related_pin_name")', function() {
      // uncomment below and update the code to test the property relatedPinName
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property supply (base name: "supply")', function() {
      // uncomment below and update the code to test the property supply
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property supplyName (base name: "supply_name")', function() {
      // uncomment below and update the code to test the property supplyName
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property process (base name: "process")', function() {
      // uncomment below and update the code to test the property process
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property rc (base name: "rc")', function() {
      // uncomment below and update the code to test the property rc
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property voltage (base name: "voltage")', function() {
      // uncomment below and update the code to test the property voltage
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property temperature (base name: "temperature")', function() {
      // uncomment below and update the code to test the property temperature
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property when (base name: "when")', function() {
      // uncomment below and update the code to test the property when
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property index1 (base name: "index1")', function() {
      // uncomment below and update the code to test the property index1
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property variable1 (base name: "variable1")', function() {
      // uncomment below and update the code to test the property variable1
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property index2 (base name: "index2")', function() {
      // uncomment below and update the code to test the property index2
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property variable2 (base name: "variable2")', function() {
      // uncomment below and update the code to test the property variable2
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property riseEnergy (base name: "rise_energy")', function() {
      // uncomment below and update the code to test the property riseEnergy
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property fallEnergy (base name: "fall_energy")', function() {
      // uncomment below and update the code to test the property fallEnergy
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

    it('should have the property modes (base name: "modes")', function() {
      // uncomment below and update the code to test the property modes
      //var instane = new PowermeterApi.PinEnergy();
      //expect(instance).to.be();
    });

  });

}));