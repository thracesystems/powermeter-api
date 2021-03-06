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
    instance = new PowermeterApi.DesignPin();
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

  describe('DesignPin', function() {
    it('should create an instance of DesignPin', function() {
      // uncomment below and update the code to test DesignPin
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be.a(PowermeterApi.DesignPin);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property direction (base name: "direction")', function() {
      // uncomment below and update the code to test the property direction
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property bus (base name: "bus")', function() {
      // uncomment below and update the code to test the property bus
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property busIndex (base name: "bus_index")', function() {
      // uncomment below and update the code to test the property busIndex
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property bundle (base name: "bundle")', function() {
      // uncomment below and update the code to test the property bundle
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property bundleIndex (base name: "bundle_index")', function() {
      // uncomment below and update the code to test the property bundleIndex
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property pinCaps (base name: "pin_caps")', function() {
      // uncomment below and update the code to test the property pinCaps
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property powerCount (base name: "power_count")', function() {
      // uncomment below and update the code to test the property powerCount
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property _function (base name: "function")', function() {
      // uncomment below and update the code to test the property _function
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

    it('should have the property internalNode (base name: "internal_node")', function() {
      // uncomment below and update the code to test the property internalNode
      //var instane = new PowermeterApi.DesignPin();
      //expect(instance).to.be();
    });

  });

}));
