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
    instance = new PowermeterApi.Supply();
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

  describe('Supply', function() {
    it('should create an instance of Supply', function() {
      // uncomment below and update the code to test Supply
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be.a(PowermeterApi.Supply);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

    it('should have the property voltage (base name: "voltage")', function() {
      // uncomment below and update the code to test the property voltage
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

    it('should have the property isPower (base name: "is_power")', function() {
      // uncomment below and update the code to test the property isPower
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

    it('should have the property isGround (base name: "is_ground")', function() {
      // uncomment below and update the code to test the property isGround
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

    it('should have the property switchable (base name: "switchable")', function() {
      // uncomment below and update the code to test the property switchable
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

    it('should have the property masterSupply (base name: "master_supply")', function() {
      // uncomment below and update the code to test the property masterSupply
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

    it('should have the property color (base name: "color")', function() {
      // uncomment below and update the code to test the property color
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

    it('should have the property instanceCount (base name: "instance_count")', function() {
      // uncomment below and update the code to test the property instanceCount
      //var instane = new PowermeterApi.Supply();
      //expect(instance).to.be();
    });

  });

}));