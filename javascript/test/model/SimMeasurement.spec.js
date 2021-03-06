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
    instance = new PowermeterApi.SimMeasurement();
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

  describe('SimMeasurement', function() {
    it('should create an instance of SimMeasurement', function() {
      // uncomment below and update the code to test SimMeasurement
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be.a(PowermeterApi.SimMeasurement);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be();
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be();
    });

    it('should have the property clockName (base name: "clock_name")', function() {
      // uncomment below and update the code to test the property clockName
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be();
    });

    it('should have the property rising (base name: "rising")', function() {
      // uncomment below and update the code to test the property rising
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be();
    });

    it('should have the property expression (base name: "expression")', function() {
      // uncomment below and update the code to test the property expression
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be();
    });

    it('should have the property bitSize (base name: "bit_size")', function() {
      // uncomment below and update the code to test the property bitSize
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be();
    });

    it('should have the property activityType (base name: "activity_type")', function() {
      // uncomment below and update the code to test the property activityType
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be();
    });

    it('should have the property variable (base name: "variable")', function() {
      // uncomment below and update the code to test the property variable
      //var instane = new PowermeterApi.SimMeasurement();
      //expect(instance).to.be();
    });

  });

}));
