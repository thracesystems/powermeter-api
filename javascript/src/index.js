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


import ApiClient from './ApiClient';
import ComputePower from './model/ComputePower';
import ComputePower1 from './model/ComputePower1';
import ComputePower2 from './model/ComputePower2';
import ComputePowerConfig from './model/ComputePowerConfig';
import ComputePowerWaveform from './model/ComputePowerWaveform';
import ComputedContributorPower from './model/ComputedContributorPower';
import ComputedContributorPower1 from './model/ComputedContributorPower1';
import ComputedDeviceData from './model/ComputedDeviceData';
import ComputedPower from './model/ComputedPower';
import ComputedPowerArc from './model/ComputedPowerArc';
import ComputedVR from './model/ComputedVR';
import ContribPower from './model/ContribPower';
import ContribPowerDevice from './model/ContribPowerDevice';
import Dashboard from './model/Dashboard';
import DashboardAccess from './model/DashboardAccess';
import DashboardColumn from './model/DashboardColumn';
import DashboardRow from './model/DashboardRow';
import Defect0 from './model/Defect0';
import Design from './model/Design';
import DesignAccess from './model/DesignAccess';
import DesignData from './model/DesignData';
import DesignFF from './model/DesignFF';
import DesignInstance from './model/DesignInstance';
import DesignLatch from './model/DesignLatch';
import DesignMaster from './model/DesignMaster';
import DesignPin from './model/DesignPin';
import DesignPinEnergy from './model/DesignPinEnergy';
import DesignScenario from './model/DesignScenario';
import DesignScenarioConfig from './model/DesignScenarioConfig';
import DesignScenarioModeUtil from './model/DesignScenarioModeUtil';
import DesignScenarioSupply from './model/DesignScenarioSupply';
import DesignSensor from './model/DesignSensor';
import DesignStateTable from './model/DesignStateTable';
import DesignSupplyInst from './model/DesignSupplyInst';
import DesignTrend from './model/DesignTrend';
import DesignVersion from './model/DesignVersion';
import Device from './model/Device';
import DeviceData from './model/DeviceData';
import DeviceDataBulk from './model/DeviceDataBulk';
import FanoutLength from './model/FanoutLength';
import Heatsink from './model/Heatsink';
import HeatsinkMaster from './model/HeatsinkMaster';
import HeatsinkVersion from './model/HeatsinkVersion';
import Hier from './model/Hier';
import Instance from './model/Instance';
import InstanceMode from './model/InstanceMode';
import InstanceModeConfig from './model/InstanceModeConfig';
import InstanceModeUtilization from './model/InstanceModeUtilization';
import InstanceSupply from './model/InstanceSupply';
import Layer from './model/Layer';
import LayerStack from './model/LayerStack';
import LeakagePower from './model/LeakagePower';
import MeasuredDataJSON from './model/MeasuredDataJSON';
import Mode from './model/Mode';
import ModelCorner from './model/ModelCorner';
import ModelPackage from './model/ModelPackage';
import PCB from './model/PCB';
import PCBInstance from './model/PCBInstance';
import PCBMaster from './model/PCBMaster';
import PCBSupply from './model/PCBSupply';
import PCBSupplyInst from './model/PCBSupplyInst';
import PCBVersionSerialzer from './model/PCBVersionSerialzer';
import PackageInstance from './model/PackageInstance';
import PackageMaster from './model/PackageMaster';
import PackageSupply from './model/PackageSupply';
import PackageSupplyInst from './model/PackageSupplyInst';
import PackageVersion from './model/PackageVersion';
import PagedContribDevice from './model/PagedContribDevice';
import PagedDesignPinEnergy from './model/PagedDesignPinEnergy';
import PagedInstance from './model/PagedInstance';
import PagedLeakagePower from './model/PagedLeakagePower';
import PagedMeasuredData from './model/PagedMeasuredData';
import PagedSimScope from './model/PagedSimScope';
import PagedSimVar from './model/PagedSimVar';
import Param from './model/Param';
import PinCap from './model/PinCap';
import PinCurrent from './model/PinCurrent';
import PinEnergy from './model/PinEnergy';
import PinState from './model/PinState';
import PinStateArc from './model/PinStateArc';
import Point from './model/Point';
import Power from './model/Power';
import PowerSource from './model/PowerSource';
import Project from './model/Project';
import ProjectAccess from './model/ProjectAccess';
import RCCorner from './model/RCCorner';
import Scenario from './model/Scenario';
import ScenarioAccess from './model/ScenarioAccess';
import ScenarioHierarchy from './model/ScenarioHierarchy';
import ScenarioMaster from './model/ScenarioMaster';
import ScenarioModeUtil from './model/ScenarioModeUtil';
import ScenarioModeUtilConfig from './model/ScenarioModeUtilConfig';
import ScenarioParam from './model/ScenarioParam';
import ScenarioParamConfig from './model/ScenarioParamConfig';
import ScenarioVersion from './model/ScenarioVersion';
import SimAccess from './model/SimAccess';
import SimMaster from './model/SimMaster';
import SimMeasurement from './model/SimMeasurement';
import SimScope from './model/SimScope';
import SimVar from './model/SimVar';
import Simulation from './model/Simulation';
import StateEquaiton from './model/StateEquaiton';
import Supply from './model/Supply';
import SupplyInstConfig from './model/SupplyInstConfig';
import SupplyModeState from './model/SupplyModeState';
import SwaggerContrib from './model/SwaggerContrib';
import SwaggerContribCurrents from './model/SwaggerContribCurrents';
import SwaggerContribDevices from './model/SwaggerContribDevices';
import SwaggerContribVoltages from './model/SwaggerContribVoltages';
import Technology from './model/Technology';
import TechnologyMaster from './model/TechnologyMaster';
import TechnologyVersion from './model/TechnologyVersion';
import UpdateData from './model/UpdateData';
import VR from './model/VR';
import VRInstance from './model/VRInstance';
import VRMaster from './model/VRMaster';
import VRSupply from './model/VRSupply';
import VRSupplyInst from './model/VRSupplyInst';
import VRVersion from './model/VRVersion';
import WLMMaster from './model/WLMMaster';
import WLMModel from './model/WLMModel';
import WLMVersion from './model/WLMVersion';
import WireLoad from './model/WireLoad';
import ComputeApi from './api/ComputeApi';
import DesignApi from './api/DesignApi';
import ErrorApi from './api/ErrorApi';
import GuiApi from './api/GuiApi';
import HeatsinkApi from './api/HeatsinkApi';
import PackageApi from './api/PackageApi';
import PcbApi from './api/PcbApi';
import ProjectApi from './api/ProjectApi';
import RecentApi from './api/RecentApi';
import SimulationApi from './api/SimulationApi';
import TechnologyApi from './api/TechnologyApi';
import VrApi from './api/VrApi';
import WlmApi from './api/WlmApi';


/**
* API.<br>
* The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
* <p>
* An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
* <pre>
* var PowermeterApi = require('index'); // See note below*.
* var xxxSvc = new PowermeterApi.XxxApi(); // Allocate the API class we're going to use.
* var yyyModel = new PowermeterApi.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
* and put the application logic within the callback function.</em>
* </p>
* <p>
* A non-AMD browser application (discouraged) might do something like this:
* <pre>
* var xxxSvc = new PowermeterApi.XxxApi(); // Allocate the API class we're going to use.
* var yyy = new PowermeterApi.Yyy(); // Construct a model instance.
* yyyModel.someProperty = 'someValue';
* ...
* var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
* ...
* </pre>
* </p>
* @module index
* @version 2021.4.1
*/
export {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient,

    /**
     * The ComputePower model constructor.
     * @property {module:model/ComputePower}
     */
    ComputePower,

    /**
     * The ComputePower1 model constructor.
     * @property {module:model/ComputePower1}
     */
    ComputePower1,

    /**
     * The ComputePower2 model constructor.
     * @property {module:model/ComputePower2}
     */
    ComputePower2,

    /**
     * The ComputePowerConfig model constructor.
     * @property {module:model/ComputePowerConfig}
     */
    ComputePowerConfig,

    /**
     * The ComputePowerWaveform model constructor.
     * @property {module:model/ComputePowerWaveform}
     */
    ComputePowerWaveform,

    /**
     * The ComputedContributorPower model constructor.
     * @property {module:model/ComputedContributorPower}
     */
    ComputedContributorPower,

    /**
     * The ComputedContributorPower1 model constructor.
     * @property {module:model/ComputedContributorPower1}
     */
    ComputedContributorPower1,

    /**
     * The ComputedDeviceData model constructor.
     * @property {module:model/ComputedDeviceData}
     */
    ComputedDeviceData,

    /**
     * The ComputedPower model constructor.
     * @property {module:model/ComputedPower}
     */
    ComputedPower,

    /**
     * The ComputedPowerArc model constructor.
     * @property {module:model/ComputedPowerArc}
     */
    ComputedPowerArc,

    /**
     * The ComputedVR model constructor.
     * @property {module:model/ComputedVR}
     */
    ComputedVR,

    /**
     * The ContribPower model constructor.
     * @property {module:model/ContribPower}
     */
    ContribPower,

    /**
     * The ContribPowerDevice model constructor.
     * @property {module:model/ContribPowerDevice}
     */
    ContribPowerDevice,

    /**
     * The Dashboard model constructor.
     * @property {module:model/Dashboard}
     */
    Dashboard,

    /**
     * The DashboardAccess model constructor.
     * @property {module:model/DashboardAccess}
     */
    DashboardAccess,

    /**
     * The DashboardColumn model constructor.
     * @property {module:model/DashboardColumn}
     */
    DashboardColumn,

    /**
     * The DashboardRow model constructor.
     * @property {module:model/DashboardRow}
     */
    DashboardRow,

    /**
     * The Defect0 model constructor.
     * @property {module:model/Defect0}
     */
    Defect0,

    /**
     * The Design model constructor.
     * @property {module:model/Design}
     */
    Design,

    /**
     * The DesignAccess model constructor.
     * @property {module:model/DesignAccess}
     */
    DesignAccess,

    /**
     * The DesignData model constructor.
     * @property {module:model/DesignData}
     */
    DesignData,

    /**
     * The DesignFF model constructor.
     * @property {module:model/DesignFF}
     */
    DesignFF,

    /**
     * The DesignInstance model constructor.
     * @property {module:model/DesignInstance}
     */
    DesignInstance,

    /**
     * The DesignLatch model constructor.
     * @property {module:model/DesignLatch}
     */
    DesignLatch,

    /**
     * The DesignMaster model constructor.
     * @property {module:model/DesignMaster}
     */
    DesignMaster,

    /**
     * The DesignPin model constructor.
     * @property {module:model/DesignPin}
     */
    DesignPin,

    /**
     * The DesignPinEnergy model constructor.
     * @property {module:model/DesignPinEnergy}
     */
    DesignPinEnergy,

    /**
     * The DesignScenario model constructor.
     * @property {module:model/DesignScenario}
     */
    DesignScenario,

    /**
     * The DesignScenarioConfig model constructor.
     * @property {module:model/DesignScenarioConfig}
     */
    DesignScenarioConfig,

    /**
     * The DesignScenarioModeUtil model constructor.
     * @property {module:model/DesignScenarioModeUtil}
     */
    DesignScenarioModeUtil,

    /**
     * The DesignScenarioSupply model constructor.
     * @property {module:model/DesignScenarioSupply}
     */
    DesignScenarioSupply,

    /**
     * The DesignSensor model constructor.
     * @property {module:model/DesignSensor}
     */
    DesignSensor,

    /**
     * The DesignStateTable model constructor.
     * @property {module:model/DesignStateTable}
     */
    DesignStateTable,

    /**
     * The DesignSupplyInst model constructor.
     * @property {module:model/DesignSupplyInst}
     */
    DesignSupplyInst,

    /**
     * The DesignTrend model constructor.
     * @property {module:model/DesignTrend}
     */
    DesignTrend,

    /**
     * The DesignVersion model constructor.
     * @property {module:model/DesignVersion}
     */
    DesignVersion,

    /**
     * The Device model constructor.
     * @property {module:model/Device}
     */
    Device,

    /**
     * The DeviceData model constructor.
     * @property {module:model/DeviceData}
     */
    DeviceData,

    /**
     * The DeviceDataBulk model constructor.
     * @property {module:model/DeviceDataBulk}
     */
    DeviceDataBulk,

    /**
     * The FanoutLength model constructor.
     * @property {module:model/FanoutLength}
     */
    FanoutLength,

    /**
     * The Heatsink model constructor.
     * @property {module:model/Heatsink}
     */
    Heatsink,

    /**
     * The HeatsinkMaster model constructor.
     * @property {module:model/HeatsinkMaster}
     */
    HeatsinkMaster,

    /**
     * The HeatsinkVersion model constructor.
     * @property {module:model/HeatsinkVersion}
     */
    HeatsinkVersion,

    /**
     * The Hier model constructor.
     * @property {module:model/Hier}
     */
    Hier,

    /**
     * The Instance model constructor.
     * @property {module:model/Instance}
     */
    Instance,

    /**
     * The InstanceMode model constructor.
     * @property {module:model/InstanceMode}
     */
    InstanceMode,

    /**
     * The InstanceModeConfig model constructor.
     * @property {module:model/InstanceModeConfig}
     */
    InstanceModeConfig,

    /**
     * The InstanceModeUtilization model constructor.
     * @property {module:model/InstanceModeUtilization}
     */
    InstanceModeUtilization,

    /**
     * The InstanceSupply model constructor.
     * @property {module:model/InstanceSupply}
     */
    InstanceSupply,

    /**
     * The Layer model constructor.
     * @property {module:model/Layer}
     */
    Layer,

    /**
     * The LayerStack model constructor.
     * @property {module:model/LayerStack}
     */
    LayerStack,

    /**
     * The LeakagePower model constructor.
     * @property {module:model/LeakagePower}
     */
    LeakagePower,

    /**
     * The MeasuredDataJSON model constructor.
     * @property {module:model/MeasuredDataJSON}
     */
    MeasuredDataJSON,

    /**
     * The Mode model constructor.
     * @property {module:model/Mode}
     */
    Mode,

    /**
     * The ModelCorner model constructor.
     * @property {module:model/ModelCorner}
     */
    ModelCorner,

    /**
     * The ModelPackage model constructor.
     * @property {module:model/ModelPackage}
     */
    ModelPackage,

    /**
     * The PCB model constructor.
     * @property {module:model/PCB}
     */
    PCB,

    /**
     * The PCBInstance model constructor.
     * @property {module:model/PCBInstance}
     */
    PCBInstance,

    /**
     * The PCBMaster model constructor.
     * @property {module:model/PCBMaster}
     */
    PCBMaster,

    /**
     * The PCBSupply model constructor.
     * @property {module:model/PCBSupply}
     */
    PCBSupply,

    /**
     * The PCBSupplyInst model constructor.
     * @property {module:model/PCBSupplyInst}
     */
    PCBSupplyInst,

    /**
     * The PCBVersionSerialzer model constructor.
     * @property {module:model/PCBVersionSerialzer}
     */
    PCBVersionSerialzer,

    /**
     * The PackageInstance model constructor.
     * @property {module:model/PackageInstance}
     */
    PackageInstance,

    /**
     * The PackageMaster model constructor.
     * @property {module:model/PackageMaster}
     */
    PackageMaster,

    /**
     * The PackageSupply model constructor.
     * @property {module:model/PackageSupply}
     */
    PackageSupply,

    /**
     * The PackageSupplyInst model constructor.
     * @property {module:model/PackageSupplyInst}
     */
    PackageSupplyInst,

    /**
     * The PackageVersion model constructor.
     * @property {module:model/PackageVersion}
     */
    PackageVersion,

    /**
     * The PagedContribDevice model constructor.
     * @property {module:model/PagedContribDevice}
     */
    PagedContribDevice,

    /**
     * The PagedDesignPinEnergy model constructor.
     * @property {module:model/PagedDesignPinEnergy}
     */
    PagedDesignPinEnergy,

    /**
     * The PagedInstance model constructor.
     * @property {module:model/PagedInstance}
     */
    PagedInstance,

    /**
     * The PagedLeakagePower model constructor.
     * @property {module:model/PagedLeakagePower}
     */
    PagedLeakagePower,

    /**
     * The PagedMeasuredData model constructor.
     * @property {module:model/PagedMeasuredData}
     */
    PagedMeasuredData,

    /**
     * The PagedSimScope model constructor.
     * @property {module:model/PagedSimScope}
     */
    PagedSimScope,

    /**
     * The PagedSimVar model constructor.
     * @property {module:model/PagedSimVar}
     */
    PagedSimVar,

    /**
     * The Param model constructor.
     * @property {module:model/Param}
     */
    Param,

    /**
     * The PinCap model constructor.
     * @property {module:model/PinCap}
     */
    PinCap,

    /**
     * The PinCurrent model constructor.
     * @property {module:model/PinCurrent}
     */
    PinCurrent,

    /**
     * The PinEnergy model constructor.
     * @property {module:model/PinEnergy}
     */
    PinEnergy,

    /**
     * The PinState model constructor.
     * @property {module:model/PinState}
     */
    PinState,

    /**
     * The PinStateArc model constructor.
     * @property {module:model/PinStateArc}
     */
    PinStateArc,

    /**
     * The Point model constructor.
     * @property {module:model/Point}
     */
    Point,

    /**
     * The Power model constructor.
     * @property {module:model/Power}
     */
    Power,

    /**
     * The PowerSource model constructor.
     * @property {module:model/PowerSource}
     */
    PowerSource,

    /**
     * The Project model constructor.
     * @property {module:model/Project}
     */
    Project,

    /**
     * The ProjectAccess model constructor.
     * @property {module:model/ProjectAccess}
     */
    ProjectAccess,

    /**
     * The RCCorner model constructor.
     * @property {module:model/RCCorner}
     */
    RCCorner,

    /**
     * The Scenario model constructor.
     * @property {module:model/Scenario}
     */
    Scenario,

    /**
     * The ScenarioAccess model constructor.
     * @property {module:model/ScenarioAccess}
     */
    ScenarioAccess,

    /**
     * The ScenarioHierarchy model constructor.
     * @property {module:model/ScenarioHierarchy}
     */
    ScenarioHierarchy,

    /**
     * The ScenarioMaster model constructor.
     * @property {module:model/ScenarioMaster}
     */
    ScenarioMaster,

    /**
     * The ScenarioModeUtil model constructor.
     * @property {module:model/ScenarioModeUtil}
     */
    ScenarioModeUtil,

    /**
     * The ScenarioModeUtilConfig model constructor.
     * @property {module:model/ScenarioModeUtilConfig}
     */
    ScenarioModeUtilConfig,

    /**
     * The ScenarioParam model constructor.
     * @property {module:model/ScenarioParam}
     */
    ScenarioParam,

    /**
     * The ScenarioParamConfig model constructor.
     * @property {module:model/ScenarioParamConfig}
     */
    ScenarioParamConfig,

    /**
     * The ScenarioVersion model constructor.
     * @property {module:model/ScenarioVersion}
     */
    ScenarioVersion,

    /**
     * The SimAccess model constructor.
     * @property {module:model/SimAccess}
     */
    SimAccess,

    /**
     * The SimMaster model constructor.
     * @property {module:model/SimMaster}
     */
    SimMaster,

    /**
     * The SimMeasurement model constructor.
     * @property {module:model/SimMeasurement}
     */
    SimMeasurement,

    /**
     * The SimScope model constructor.
     * @property {module:model/SimScope}
     */
    SimScope,

    /**
     * The SimVar model constructor.
     * @property {module:model/SimVar}
     */
    SimVar,

    /**
     * The Simulation model constructor.
     * @property {module:model/Simulation}
     */
    Simulation,

    /**
     * The StateEquaiton model constructor.
     * @property {module:model/StateEquaiton}
     */
    StateEquaiton,

    /**
     * The Supply model constructor.
     * @property {module:model/Supply}
     */
    Supply,

    /**
     * The SupplyInstConfig model constructor.
     * @property {module:model/SupplyInstConfig}
     */
    SupplyInstConfig,

    /**
     * The SupplyModeState model constructor.
     * @property {module:model/SupplyModeState}
     */
    SupplyModeState,

    /**
     * The SwaggerContrib model constructor.
     * @property {module:model/SwaggerContrib}
     */
    SwaggerContrib,

    /**
     * The SwaggerContribCurrents model constructor.
     * @property {module:model/SwaggerContribCurrents}
     */
    SwaggerContribCurrents,

    /**
     * The SwaggerContribDevices model constructor.
     * @property {module:model/SwaggerContribDevices}
     */
    SwaggerContribDevices,

    /**
     * The SwaggerContribVoltages model constructor.
     * @property {module:model/SwaggerContribVoltages}
     */
    SwaggerContribVoltages,

    /**
     * The Technology model constructor.
     * @property {module:model/Technology}
     */
    Technology,

    /**
     * The TechnologyMaster model constructor.
     * @property {module:model/TechnologyMaster}
     */
    TechnologyMaster,

    /**
     * The TechnologyVersion model constructor.
     * @property {module:model/TechnologyVersion}
     */
    TechnologyVersion,

    /**
     * The UpdateData model constructor.
     * @property {module:model/UpdateData}
     */
    UpdateData,

    /**
     * The VR model constructor.
     * @property {module:model/VR}
     */
    VR,

    /**
     * The VRInstance model constructor.
     * @property {module:model/VRInstance}
     */
    VRInstance,

    /**
     * The VRMaster model constructor.
     * @property {module:model/VRMaster}
     */
    VRMaster,

    /**
     * The VRSupply model constructor.
     * @property {module:model/VRSupply}
     */
    VRSupply,

    /**
     * The VRSupplyInst model constructor.
     * @property {module:model/VRSupplyInst}
     */
    VRSupplyInst,

    /**
     * The VRVersion model constructor.
     * @property {module:model/VRVersion}
     */
    VRVersion,

    /**
     * The WLMMaster model constructor.
     * @property {module:model/WLMMaster}
     */
    WLMMaster,

    /**
     * The WLMModel model constructor.
     * @property {module:model/WLMModel}
     */
    WLMModel,

    /**
     * The WLMVersion model constructor.
     * @property {module:model/WLMVersion}
     */
    WLMVersion,

    /**
     * The WireLoad model constructor.
     * @property {module:model/WireLoad}
     */
    WireLoad,

    /**
    * The ComputeApi service constructor.
    * @property {module:api/ComputeApi}
    */
    ComputeApi,

    /**
    * The DesignApi service constructor.
    * @property {module:api/DesignApi}
    */
    DesignApi,

    /**
    * The ErrorApi service constructor.
    * @property {module:api/ErrorApi}
    */
    ErrorApi,

    /**
    * The GuiApi service constructor.
    * @property {module:api/GuiApi}
    */
    GuiApi,

    /**
    * The HeatsinkApi service constructor.
    * @property {module:api/HeatsinkApi}
    */
    HeatsinkApi,

    /**
    * The PackageApi service constructor.
    * @property {module:api/PackageApi}
    */
    PackageApi,

    /**
    * The PcbApi service constructor.
    * @property {module:api/PcbApi}
    */
    PcbApi,

    /**
    * The ProjectApi service constructor.
    * @property {module:api/ProjectApi}
    */
    ProjectApi,

    /**
    * The RecentApi service constructor.
    * @property {module:api/RecentApi}
    */
    RecentApi,

    /**
    * The SimulationApi service constructor.
    * @property {module:api/SimulationApi}
    */
    SimulationApi,

    /**
    * The TechnologyApi service constructor.
    * @property {module:api/TechnologyApi}
    */
    TechnologyApi,

    /**
    * The VrApi service constructor.
    * @property {module:api/VrApi}
    */
    VrApi,

    /**
    * The WlmApi service constructor.
    * @property {module:api/WlmApi}
    */
    WlmApi
};