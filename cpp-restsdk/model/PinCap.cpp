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



#include "PinCap.h"

namespace powermeter {
namespace model {




PinCap::PinCap()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Process = utility::conversions::to_string_t("");
    m_ProcessIsSet = false;
    m_Rc = utility::conversions::to_string_t("");
    m_RcIsSet = false;
    m_Voltage = 0.0;
    m_VoltageIsSet = false;
    m_Temperature = 0.0;
    m_TemperatureIsSet = false;
    m_Rise_capacitance = 0.0;
    m_Rise_capacitanceIsSet = false;
    m_Fall_capacitance = 0.0;
    m_Fall_capacitanceIsSet = false;
}

PinCap::~PinCap()
{
}

void PinCap::validate()
{
    // TODO: implement validation
}

web::json::value PinCap::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
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
    if(m_Rise_capacitanceIsSet)
    {
        val[utility::conversions::to_string_t("rise_capacitance")] = ModelBase::toJson(m_Rise_capacitance);
    }
    if(m_Fall_capacitanceIsSet)
    {
        val[utility::conversions::to_string_t("fall_capacitance")] = ModelBase::toJson(m_Fall_capacitance);
    }

    return val;
}

bool PinCap::fromJson(const web::json::value& val)
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
            double refVal_temperature;
            ok &= ModelBase::fromJson(fieldValue, refVal_temperature);
            setTemperature(refVal_temperature);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rise_capacitance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rise_capacitance"));
        if(!fieldValue.is_null())
        {
            double refVal_rise_capacitance;
            ok &= ModelBase::fromJson(fieldValue, refVal_rise_capacitance);
            setRiseCapacitance(refVal_rise_capacitance);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fall_capacitance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fall_capacitance"));
        if(!fieldValue.is_null())
        {
            double refVal_fall_capacitance;
            ok &= ModelBase::fromJson(fieldValue, refVal_fall_capacitance);
            setFallCapacitance(refVal_fall_capacitance);
        }
    }
    return ok;
}

void PinCap::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Rise_capacitanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rise_capacitance"), m_Rise_capacitance));
    }
    if(m_Fall_capacitanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fall_capacitance"), m_Fall_capacitance));
    }
}

bool PinCap::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        double refVal_temperature;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("temperature")), refVal_temperature );
        setTemperature(refVal_temperature);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rise_capacitance")))
    {
        double refVal_rise_capacitance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rise_capacitance")), refVal_rise_capacitance );
        setRiseCapacitance(refVal_rise_capacitance);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fall_capacitance")))
    {
        double refVal_fall_capacitance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fall_capacitance")), refVal_fall_capacitance );
        setFallCapacitance(refVal_fall_capacitance);
    }
    return ok;
}

int32_t PinCap::getId() const
{
    return m_Id;
}

void PinCap::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool PinCap::idIsSet() const
{
    return m_IdIsSet;
}

void PinCap::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t PinCap::getProcess() const
{
    return m_Process;
}

void PinCap::setProcess(const utility::string_t& value)
{
    m_Process = value;
    m_ProcessIsSet = true;
}

bool PinCap::processIsSet() const
{
    return m_ProcessIsSet;
}

void PinCap::unsetProcess()
{
    m_ProcessIsSet = false;
}
utility::string_t PinCap::getRc() const
{
    return m_Rc;
}

void PinCap::setRc(const utility::string_t& value)
{
    m_Rc = value;
    m_RcIsSet = true;
}

bool PinCap::rcIsSet() const
{
    return m_RcIsSet;
}

void PinCap::unsetRc()
{
    m_RcIsSet = false;
}
double PinCap::getVoltage() const
{
    return m_Voltage;
}

void PinCap::setVoltage(double value)
{
    m_Voltage = value;
    m_VoltageIsSet = true;
}

bool PinCap::voltageIsSet() const
{
    return m_VoltageIsSet;
}

void PinCap::unsetVoltage()
{
    m_VoltageIsSet = false;
}
double PinCap::getTemperature() const
{
    return m_Temperature;
}

void PinCap::setTemperature(double value)
{
    m_Temperature = value;
    m_TemperatureIsSet = true;
}

bool PinCap::temperatureIsSet() const
{
    return m_TemperatureIsSet;
}

void PinCap::unsetTemperature()
{
    m_TemperatureIsSet = false;
}
double PinCap::getRiseCapacitance() const
{
    return m_Rise_capacitance;
}

void PinCap::setRiseCapacitance(double value)
{
    m_Rise_capacitance = value;
    m_Rise_capacitanceIsSet = true;
}

bool PinCap::riseCapacitanceIsSet() const
{
    return m_Rise_capacitanceIsSet;
}

void PinCap::unsetRise_capacitance()
{
    m_Rise_capacitanceIsSet = false;
}
double PinCap::getFallCapacitance() const
{
    return m_Fall_capacitance;
}

void PinCap::setFallCapacitance(double value)
{
    m_Fall_capacitance = value;
    m_Fall_capacitanceIsSet = true;
}

bool PinCap::fallCapacitanceIsSet() const
{
    return m_Fall_capacitanceIsSet;
}

void PinCap::unsetFall_capacitance()
{
    m_Fall_capacitanceIsSet = false;
}
}
}

