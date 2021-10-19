/*
 * PowerMeter API
 * API
 *
 * The version of the OpenAPI document: 2021.4.1
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.ModelPackage;
import org.openapitools.client.model.PackageMaster;
import org.openapitools.client.model.PackageSupply;
import org.openapitools.client.model.PackageVersion;
import org.openapitools.client.model.UpdateData;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for PackageApi
 */
@Ignore
public class PackageApiTest {

    private final PackageApi api = new PackageApi();

    
    /**
     * 
     *
     * Commit a version
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageCommitCreateTest() throws ApiException {
        Integer packageid = null;
        PackageVersion data = null;
        PackageVersion response = api.packageCommitCreate(packageid, data);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Copy a package
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageLibraryCloneTest() throws ApiException {
        Integer packagemasterid = null;
        PackageMaster response = api.packageLibraryClone(packagemasterid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Create a package
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageLibraryCreateTest() throws ApiException {
        PackageMaster data = null;
        PackageMaster response = api.packageLibraryCreate(data);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Delete a package
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageLibraryDeleteTest() throws ApiException {
        Integer packagemasterid = null;
        api.packageLibraryDelete(packagemasterid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get list of packages
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageLibraryListTest() throws ApiException {
        List<PackageMaster> response = api.packageLibraryList();

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get a package
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageLibraryReadTest() throws ApiException {
        Integer packagemasterid = null;
        PackageMaster response = api.packageLibraryRead(packagemasterid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Update a package
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageLibraryUpdateTest() throws ApiException {
        Integer packagemasterid = null;
        PackageMaster data = null;
        PackageMaster response = api.packageLibraryUpdate(packagemasterid, data);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Returns an array of [current, last update] times
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageLibraryUpdateListTest() throws ApiException {
        UpdateData response = api.packageLibraryUpdateList();

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get a package
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageLibraryVersionListTest() throws ApiException {
        Integer packagemasterid = null;
        PackageVersion response = api.packageLibraryVersionList(packagemasterid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get list of permissions
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packagePermissionsListTest() throws ApiException {
        Integer packageid = null;
        api.packagePermissionsList(packageid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get list of permissions
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packagePermissionsUpdateTest() throws ApiException {
        Integer packageid = null;
        api.packagePermissionsUpdate(packageid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get a package
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageReadTest() throws ApiException {
        Integer packageid = null;
        ModelPackage response = api.packageRead(packageid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Restore a package version as current version
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageRestoreCreateTest() throws ApiException {
        Integer packageid = null;
        ModelPackage response = api.packageRestoreCreate(packageid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Copy a package supply
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageSupplyCloneTest() throws ApiException {
        Integer packageid = null;
        Integer supplyid = null;
        PackageSupply response = api.packageSupplyClone(packageid, supplyid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Create a package supply
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageSupplyCreateTest() throws ApiException {
        Integer packageid = null;
        PackageSupply data = null;
        PackageSupply response = api.packageSupplyCreate(packageid, data);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Delete a package supply
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageSupplyDeleteTest() throws ApiException {
        Integer packageid = null;
        Integer supplyid = null;
        api.packageSupplyDelete(packageid, supplyid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get list of package supplies
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageSupplyListTest() throws ApiException {
        Integer packageid = null;
        List<PackageSupply> response = api.packageSupplyList(packageid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get a package supply
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageSupplyReadTest() throws ApiException {
        Integer packageid = null;
        Integer supplyid = null;
        PackageSupply response = api.packageSupplyRead(packageid, supplyid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Update a package supply
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageSupplyUpdateTest() throws ApiException {
        Integer packageid = null;
        Integer supplyid = null;
        PackageSupply data = null;
        PackageSupply response = api.packageSupplyUpdate(packageid, supplyid, data);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Update a package
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageUpdateTest() throws ApiException {
        Integer packageid = null;
        ModelPackage data = null;
        ModelPackage response = api.packageUpdate(packageid, data);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Returns an array of [current, last update] times
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageUpdateListTest() throws ApiException {
        Integer packageid = null;
        UpdateData response = api.packageUpdateList(packageid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get a package
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void packageVersionListTest() throws ApiException {
        Integer packageid = null;
        List<PackageVersion> response = api.packageVersionList(packageid);

        // TODO: test validations
    }
    
}
