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
    instance = new PowermeterApi.Heatsink();
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

  describe('Heatsink', function() {
    it('should create an instance of Heatsink', function() {
      // uncomment below and update the code to test Heatsink
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be.a(PowermeterApi.Heatsink);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property descr (base name: "descr")', function() {
      // uncomment below and update the code to test the property descr
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property editable (base name: "editable")', function() {
      // uncomment below and update the code to test the property editable
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property version (base name: "version")', function() {
      // uncomment below and update the code to test the property version
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property currentVersion (base name: "current_version")', function() {
      // uncomment below and update the code to test the property currentVersion
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property width (base name: "width")', function() {
      // uncomment below and update the code to test the property width
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property height (base name: "height")', function() {
      // uncomment below and update the code to test the property height
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property thickness (base name: "thickness")', function() {
      // uncomment below and update the code to test the property thickness
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property rConvec (base name: "r_convec")', function() {
      // uncomment below and update the code to test the property rConvec
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property cConvec (base name: "c_convec")', function() {
      // uncomment below and update the code to test the property cConvec
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property conductivity (base name: "conductivity")', function() {
      // uncomment below and update the code to test the property conductivity
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

    it('should have the property heatcapacity (base name: "heatcapacity")', function() {
      // uncomment below and update the code to test the property heatcapacity
      //var instane = new PowermeterApi.Heatsink();
      //expect(instance).to.be();
    });

  });

}));