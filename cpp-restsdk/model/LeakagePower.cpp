/**
 * PowerMeter API
 * API
 *
 * The version of the OpenAPI document: 2021.4.1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "LeakagePower.h"

namespace powermeter {
namespace model {




LeakagePower::LeakagePower()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Supply = 0;
    m_SupplyIsSet = false;
    m_Supply_name = utility::conversions::to_string_t("");
    m_Supply_nameIsSet = false;
    m_Process = utility::conversions::to_string_t("");
    m_ProcessIsSet = false;
    m_Rc = utility::conversions::to_string_t("");
    m_RcIsSet = false;
    m_Voltage = 0.0;
    m_VoltageIsSet = false;
    m_Temperature = 0;
    m_TemperatureIsSet = false;
    m_When = utility::conversions::to_string_t("");
    m_WhenIsSet = false;
    m_Power = 0.0;
    m_PowerIsSet = false;
    m_ModesIsSet = false;
}

LeakagePower::~LeakagePower()
{
}

void LeakagePower::validate()
{
    // TODO: implement validation
}

web::json::value LeakagePower::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_SupplyIsSet)
    {
        val[utility::conversions::to_string_t("supply")] = ModelBase::toJson(m_Supply);
    }
    if(m_Supply_nameIsSet)
    {
        val[utility::conversions::to_string_t("supply_name")] = ModelBase::toJson(m_Supply_name);
    }
    if(m_ProcessIsSet)
    {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(m_Process);
    }
    if(m_RcIsSet)
    {
        val[utility::conversions::to_string_t("rc")] = ModelBase::toJson(m_Rc);
    }
    if(m_VoltageIsSet)
    {
        val[utility::conversions::to_string_t("voltage")] = ModelBase::toJson(m_Voltage);
    }
    if(m_TemperatureIsSet)
    {
        val[utility::conversions::to_string_t("temperature")] = ModelBase::toJson(m_Temperature);
    }
    if(m_WhenIsSet)
    {
        val[utility::conversions::to_string_t("when")] = ModelBase::toJson(m_When);
    }
    if(m_PowerIsSet)
    {
        val[utility::conversions::to_string_t("power")] = ModelBase::toJson(m_Power);
    }
    if(m_ModesIsSet)
    {
        val[utility::conversions::to_string_t("modes")] = ModelBase::toJson(m_Modes);
    }

    return val;
}

bool LeakagePower::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supply")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supply"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_supply;
            ok &= ModelBase::fromJson(fieldValue, refVal_supply);
            setSupply(refVal_supply);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supply_name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supply_name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_supply_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_supply_name);
            setSupplyName(refVal_supply_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_process;
            ok &= ModelBase::fromJson(fieldValue, refVal_process);
            setProcess(refVal_process);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rc")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rc"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_rc;
            ok &= ModelBase::fromJson(fieldValue, refVal_rc);
            setRc(refVal_rc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voltage")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voltage"));
        if(!fieldValue.is_null())
        {
            double refVal_voltage;
            ok &= ModelBase::fromJson(fieldValue, refVal_voltage);
            setVoltage(refVal_voltage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("temperature")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("temperature"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_temperature;
            ok &= ModelBase::fromJson(fieldValue, refVal_temperature);
            setTemperature(refVal_temperature);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("when")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("when"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_when;
            ok &= ModelBase::fromJson(fieldValue, refVal_when);
            setWhen(refVal_when);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("power")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("power"));
        if(!fieldValue.is_null())
        {
            double refVal_power;
            ok &= ModelBase::fromJson(fieldValue, refVal_power);
            setPower(refVal_power);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modes"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_modes;
            ok &= ModelBase::fromJson(fieldValue, refVal_modes);
            setModes(refVal_modes);
        }
    }
    return ok;
}

void LeakagePower::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_SupplyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("supply"), m_Supply));
    }
    if(m_Supply_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("supply_name"), m_Supply_name));
    }
    if(m_ProcessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("process"), m_Process));
    }
    if(m_RcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rc"), m_Rc));
    }
    if(m_VoltageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("voltage"), m_Voltage));
    }
    if(m_TemperatureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("temperature"), m_Temperature));
    }
    if(m_WhenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("when"), m_When));
    }
    if(m_PowerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("power"), m_Power));
    }
    if(m_ModesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("modes"), m_Modes));
    }
}

bool LeakagePower::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        int32_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("supply")))
    {
        int32_t refVal_supply;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("supply")), refVal_supply );
        setSupply(refVal_supply);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("supply_name")))
    {
        utility::string_t refVal_supply_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("supply_name")), refVal_supply_name );
        setSupplyName(refVal_supply_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("process")))
    {
        utility::string_t refVal_process;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("process")), refVal_process );
        setProcess(refVal_process);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rc")))
    {
        utility::string_t refVal_rc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rc")), refVal_rc );
        setRc(refVal_rc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("voltage")))
    {
        double refVal_voltage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("voltage")), refVal_voltage );
        setVoltage(refVal_voltage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("temperature")))
    {
        int32_t refVal_temperature;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("temperature")), refVal_temperature );
        setTemperature(refVal_temperature);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("when")))
    {
        utility::string_t refVal_when;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("when")), refVal_when );
        setWhen(refVal_when);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("power")))
    {
        double refVal_power;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("power")), refVal_power );
        setPower(refVal_power);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("modes")))
    {
        std::vector<int32_t> refVal_modes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("modes")), refVal_modes );
        setModes(refVal_modes);
    }
    return ok;
}

int32_t LeakagePower::getId() const
{
    return m_Id;
}

void LeakagePower::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool LeakagePower::idIsSet() const
{
    return m_IdIsSet;
}

void LeakagePower::unsetId()
{
    m_IdIsSet = false;
}
int32_t LeakagePower::getSupply() const
{
    return m_Supply;
}

void LeakagePower::setSupply(int32_t value)
{
    m_Supply = value;
    m_SupplyIsSet = true;
}

bool LeakagePower::supplyIsSet() const
{
    return m_SupplyIsSet;
}

void LeakagePower::unsetSupply()
{
    m_SupplyIsSet = false;
}
utility::string_t LeakagePower::getSupplyName() const
{
    return m_Supply_name;
}

void LeakagePower::setSupplyName(const utility::string_t& value)
{
    m_Supply_name = value;
    m_Supply_nameIsSet = true;
}

bool LeakagePower::supplyNameIsSet() const
{
    return m_Supply_nameIsSet;
}

void LeakagePower::unsetSupply_name()
{
    m_Supply_nameIsSet = false;
}
utility::string_t LeakagePower::getProcess() const
{
    return m_Process;
}

void LeakagePower::setProcess(const utility::string_t& value)
{
    m_Process = value;
    m_ProcessIsSet = true;
}

bool LeakagePower::processIsSet() const
{
    return m_ProcessIsSet;
}

void LeakagePower::unsetProcess()
{
    m_ProcessIsSet = false;
}
utility::string_t LeakagePower::getRc() const
{
    return m_Rc;
}

void LeakagePower::setRc(const utility::string_t& value)
{
    m_Rc = value;
    m_RcIsSet = true;
}

bool LeakagePower::rcIsSet() const
{
    return m_RcIsSet;
}

void LeakagePower::unsetRc()
{
    m_RcIsSet = false;
}
double LeakagePower::getVoltage() const
{
    return m_Voltage;
}

void LeakagePower::setVoltage(double value)
{
    m_Voltage = value;
    m_VoltageIsSet = true;
}

bool LeakagePower::voltageIsSet() const
{
    return m_VoltageIsSet;
}

void LeakagePower::unsetVoltage()
{
    m_VoltageIsSet = false;
}
int32_t LeakagePower::getTemperature() const
{
    return m_Temperature;
}

void LeakagePower::setTemperature(int32_t value)
{
    m_Temperature = value;
    m_TemperatureIsSet = true;
}

bool LeakagePower::temperatureIsSet() const
{
    return m_TemperatureIsSet;
}

void LeakagePower::unsetTemperature()
{
    m_TemperatureIsSet = false;
}
utility::string_t LeakagePower::getWhen() const
{
    return m_When;
}

void LeakagePower::setWhen(const utility::string_t& value)
{
    m_When = value;
    m_WhenIsSet = true;
}

bool LeakagePower::whenIsSet() const
{
    return m_WhenIsSet;
}

void LeakagePower::unsetWhen()
{
    m_WhenIsSet = false;
}
double LeakagePower::getPower() const
{
    return m_Power;
}

void LeakagePower::setPower(double value)
{
    m_Power = value;
    m_PowerIsSet = true;
}

bool LeakagePower::powerIsSet() const
{
    return m_PowerIsSet;
}

void LeakagePower::unsetPower()
{
    m_PowerIsSet = false;
}
std::vector<int32_t>& LeakagePower::getModes()
{
    return m_Modes;
}

void LeakagePower::setModes(std::vector<int32_t> value)
{
    m_Modes = value;
    m_ModesIsSet = true;
}

bool LeakagePower::modesIsSet() const
{
    return m_ModesIsSet;
}

void LeakagePower::unsetModes()
{
    m_ModesIsSet = false;
}
}
}


