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
    instance = new PowermeterApi.PackageApi();
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

  describe('PackageApi', function() {
    describe('packageCommitCreate', function() {
      it('should call packageCommitCreate successfully', function(done) {
        //uncomment below and update the code to test packageCommitCreate
        //instance.packageCommitCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageLibraryClone', function() {
      it('should call packageLibraryClone successfully', function(done) {
        //uncomment below and update the code to test packageLibraryClone
        //instance.packageLibraryClone(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageLibraryCreate', function() {
      it('should call packageLibraryCreate successfully', function(done) {
        //uncomment below and update the code to test packageLibraryCreate
        //instance.packageLibraryCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageLibraryDelete', function() {
      it('should call packageLibraryDelete successfully', function(done) {
        //uncomment below and update the code to test packageLibraryDelete
        //instance.packageLibraryDelete(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageLibraryList', function() {
      it('should call packageLibraryList successfully', function(done) {
        //uncomment below and update the code to test packageLibraryList
        //instance.packageLibraryList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageLibraryRead', function() {
      it('should call packageLibraryRead successfully', function(done) {
        //uncomment below and update the code to test packageLibraryRead
        //instance.packageLibraryRead(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageLibraryUpdate', function() {
      it('should call packageLibraryUpdate successfully', function(done) {
        //uncomment below and update the code to test packageLibraryUpdate
        //instance.packageLibraryUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageLibraryUpdateList', function() {
      it('should call packageLibraryUpdateList successfully', function(done) {
        //uncomment below and update the code to test packageLibraryUpdateList
        //instance.packageLibraryUpdateList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageLibraryVersionList', function() {
      it('should call packageLibraryVersionList successfully', function(done) {
        //uncomment below and update the code to test packageLibraryVersionList
        //instance.packageLibraryVersionList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packagePermissionsList', function() {
      it('should call packagePermissionsList successfully', function(done) {
        //uncomment below and update the code to test packagePermissionsList
        //instance.packagePermissionsList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packagePermissionsUpdate', function() {
      it('should call packagePermissionsUpdate successfully', function(done) {
        //uncomment below and update the code to test packagePermissionsUpdate
        //instance.packagePermissionsUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageRead', function() {
      it('should call packageRead successfully', function(done) {
        //uncomment below and update the code to test packageRead
        //instance.packageRead(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageRestoreCreate', function() {
      it('should call packageRestoreCreate successfully', function(done) {
        //uncomment below and update the code to test packageRestoreCreate
        //instance.packageRestoreCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageSupplyClone', function() {
      it('should call packageSupplyClone successfully', function(done) {
        //uncomment below and update the code to test packageSupplyClone
        //instance.packageSupplyClone(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageSupplyCreate', function() {
      it('should call packageSupplyCreate successfully', function(done) {
        //uncomment below and update the code to test packageSupplyCreate
        //instance.packageSupplyCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageSupplyDelete', function() {
      it('should call packageSupplyDelete successfully', function(done) {
        //uncomment below and update the code to test packageSupplyDelete
        //instance.packageSupplyDelete(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageSupplyList', function() {
      it('should call packageSupplyList successfully', function(done) {
        //uncomment below and update the code to test packageSupplyList
        //instance.packageSupplyList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageSupplyRead', function() {
      it('should call packageSupplyRead successfully', function(done) {
        //uncomment below and update the code to test packageSupplyRead
        //instance.packageSupplyRead(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageSupplyUpdate', function() {
      it('should call packageSupplyUpdate successfully', function(done) {
        //uncomment below and update the code to test packageSupplyUpdate
        //instance.packageSupplyUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageUpdate', function() {
      it('should call packageUpdate successfully', function(done) {
        //uncomment below and update the code to test packageUpdate
        //instance.packageUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageUpdateList', function() {
      it('should call packageUpdateList successfully', function(done) {
        //uncomment below and update the code to test packageUpdateList
        //instance.packageUpdateList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('packageVersionList', function() {
      it('should call packageVersionList successfully', function(done) {
        //uncomment below and update the code to test packageVersionList
        //instance.packageVersionList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));
