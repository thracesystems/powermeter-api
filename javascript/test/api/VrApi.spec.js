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
    instance = new PowermeterApi.VrApi();
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

  describe('VrApi', function() {
    describe('vrCommitCreate', function() {
      it('should call vrCommitCreate successfully', function(done) {
        //uncomment below and update the code to test vrCommitCreate
        //instance.vrCommitCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrComputeList', function() {
      it('should call vrComputeList successfully', function(done) {
        //uncomment below and update the code to test vrComputeList
        //instance.vrComputeList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrLibraryClone', function() {
      it('should call vrLibraryClone successfully', function(done) {
        //uncomment below and update the code to test vrLibraryClone
        //instance.vrLibraryClone(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrLibraryCreate', function() {
      it('should call vrLibraryCreate successfully', function(done) {
        //uncomment below and update the code to test vrLibraryCreate
        //instance.vrLibraryCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrLibraryDelete', function() {
      it('should call vrLibraryDelete successfully', function(done) {
        //uncomment below and update the code to test vrLibraryDelete
        //instance.vrLibraryDelete(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrLibraryList', function() {
      it('should call vrLibraryList successfully', function(done) {
        //uncomment below and update the code to test vrLibraryList
        //instance.vrLibraryList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrLibraryUpdate', function() {
      it('should call vrLibraryUpdate successfully', function(done) {
        //uncomment below and update the code to test vrLibraryUpdate
        //instance.vrLibraryUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrLibraryUpdateList', function() {
      it('should call vrLibraryUpdateList successfully', function(done) {
        //uncomment below and update the code to test vrLibraryUpdateList
        //instance.vrLibraryUpdateList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrLibraryVersionList', function() {
      it('should call vrLibraryVersionList successfully', function(done) {
        //uncomment below and update the code to test vrLibraryVersionList
        //instance.vrLibraryVersionList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrPermissionsList', function() {
      it('should call vrPermissionsList successfully', function(done) {
        //uncomment below and update the code to test vrPermissionsList
        //instance.vrPermissionsList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrPermissionsUpdate', function() {
      it('should call vrPermissionsUpdate successfully', function(done) {
        //uncomment below and update the code to test vrPermissionsUpdate
        //instance.vrPermissionsUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrRead', function() {
      it('should call vrRead successfully', function(done) {
        //uncomment below and update the code to test vrRead
        //instance.vrRead(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrRestoreCreate', function() {
      it('should call vrRestoreCreate successfully', function(done) {
        //uncomment below and update the code to test vrRestoreCreate
        //instance.vrRestoreCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrSupplyClone', function() {
      it('should call vrSupplyClone successfully', function(done) {
        //uncomment below and update the code to test vrSupplyClone
        //instance.vrSupplyClone(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrSupplyCreate', function() {
      it('should call vrSupplyCreate successfully', function(done) {
        //uncomment below and update the code to test vrSupplyCreate
        //instance.vrSupplyCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrSupplyDelete', function() {
      it('should call vrSupplyDelete successfully', function(done) {
        //uncomment below and update the code to test vrSupplyDelete
        //instance.vrSupplyDelete(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrSupplyList', function() {
      it('should call vrSupplyList successfully', function(done) {
        //uncomment below and update the code to test vrSupplyList
        //instance.vrSupplyList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrSupplyRead', function() {
      it('should call vrSupplyRead successfully', function(done) {
        //uncomment below and update the code to test vrSupplyRead
        //instance.vrSupplyRead(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrSupplyUpdate', function() {
      it('should call vrSupplyUpdate successfully', function(done) {
        //uncomment below and update the code to test vrSupplyUpdate
        //instance.vrSupplyUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrUpdate', function() {
      it('should call vrUpdate successfully', function(done) {
        //uncomment below and update the code to test vrUpdate
        //instance.vrUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrUpdateList', function() {
      it('should call vrUpdateList successfully', function(done) {
        //uncomment below and update the code to test vrUpdateList
        //instance.vrUpdateList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('vrVersionList', function() {
      it('should call vrVersionList successfully', function(done) {
        //uncomment below and update the code to test vrVersionList
        //instance.vrVersionList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));