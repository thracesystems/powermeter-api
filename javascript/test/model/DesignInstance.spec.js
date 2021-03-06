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
    instance = new PowermeterApi.DesignInstance();
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

  describe('DesignInstance', function() {
    it('should create an instance of DesignInstance', function() {
      // uncomment below and update the code to test DesignInstance
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be.a(PowermeterApi.DesignInstance);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property hierName (base name: "hier_name")', function() {
      // uncomment below and update the code to test the property hierName
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property parentId (base name: "parent_id")', function() {
      // uncomment below and update the code to test the property parentId
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property parentType (base name: "parent_type")', function() {
      // uncomment below and update the code to test the property parentType
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property master (base name: "master")', function() {
      // uncomment below and update the code to test the property master
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property masterName (base name: "master_name")', function() {
      // uncomment below and update the code to test the property masterName
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property masterMaster (base name: "master_master")', function() {
      // uncomment below and update the code to test the property masterMaster
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property layerStack (base name: "layer_stack")', function() {
      // uncomment below and update the code to test the property layerStack
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property process (base name: "process")', function() {
      // uncomment below and update the code to test the property process
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property rc (base name: "rc")', function() {
      // uncomment below and update the code to test the property rc
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property junction (base name: "junction")', function() {
      // uncomment below and update the code to test the property junction
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property supplies (base name: "supplies")', function() {
      // uncomment below and update the code to test the property supplies
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property config (base name: "config")', function() {
      // uncomment below and update the code to test the property config
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

    it('should have the property utilizations (base name: "utilizations")', function() {
      // uncomment below and update the code to test the property utilizations
      //var instane = new PowermeterApi.DesignInstance();
      //expect(instance).to.be();
    });

  });

}));
