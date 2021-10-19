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
    instance = new PowermeterApi.PCBVersionSerialzer();
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

  describe('PCBVersionSerialzer', function() {
    it('should create an instance of PCBVersionSerialzer', function() {
      // uncomment below and update the code to test PCBVersionSerialzer
      //var instane = new PowermeterApi.PCBVersionSerialzer();
      //expect(instance).to.be.a(PowermeterApi.PCBVersionSerialzer);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.PCBVersionSerialzer();
      //expect(instance).to.be();
    });

    it('should have the property timestamp (base name: "timestamp")', function() {
      // uncomment below and update the code to test the property timestamp
      //var instane = new PowermeterApi.PCBVersionSerialzer();
      //expect(instance).to.be();
    });

    it('should have the property version (base name: "version")', function() {
      // uncomment below and update the code to test the property version
      //var instane = new PowermeterApi.PCBVersionSerialzer();
      //expect(instance).to.be();
    });

    it('should have the property descr (base name: "descr")', function() {
      // uncomment below and update the code to test the property descr
      //var instane = new PowermeterApi.PCBVersionSerialzer();
      //expect(instance).to.be();
    });

    it('should have the property pcb (base name: "pcb")', function() {
      // uncomment below and update the code to test the property pcb
      //var instane = new PowermeterApi.PCBVersionSerialzer();
      //expect(instance).to.be();
    });

  });

}));
