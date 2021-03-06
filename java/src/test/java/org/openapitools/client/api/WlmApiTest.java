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
import org.openapitools.client.model.WLMModel;
import org.openapitools.client.model.WLMVersion;
import org.openapitools.client.model.WireLoad;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for WlmApi
 */
@Ignore
public class WlmApiTest {

    private final WlmApi api = new WlmApi();

    
    /**
     * 
     *
     * Commit a version
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void wlmCommitCreateTest() throws ApiException {
        Integer wlmid = null;
        WLMVersion data = null;
        WLMVersion response = api.wlmCommitCreate(wlmid, data);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Create wire load data
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void wlmCreateTest() throws ApiException {
        Integer wlmid = null;
        WireLoad data = null;
        WireLoad response = api.wlmCreate(wlmid, data);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Delete wire load data
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void wlmDataCreateTest() throws ApiException {
        Integer wlmid = null;
        Integer dataid = null;
        api.wlmDataCreate(wlmid, dataid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get list of wire load data
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void wlmDataReadTest() throws ApiException {
        Integer wlmid = null;
        Integer dataid = null;
        WireLoad response = api.wlmDataRead(wlmid, dataid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Update wire load data
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void wlmDataUpdateTest() throws ApiException {
        Integer wlmid = null;
        Integer dataid = null;
        WireLoad data = null;
        WireLoad response = api.wlmDataUpdate(wlmid, dataid, data);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get list of wire load data
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void wlmReadTest() throws ApiException {
        Integer wlmid = null;
        WLMModel response = api.wlmRead(wlmid);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * Get WLM versions
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void wlmVersionListTest() throws ApiException {
        String wlmid = null;
        Integer pcbid = null;
        List<WLMVersion> response = api.wlmVersionList(wlmid, pcbid);

        // TODO: test validations
    }
    
}
