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



#include "DesignScenarioSupply.h"

namespace powermeter {
namespace model {




DesignScenarioSupply::DesignScenarioSupply()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Time = 0.0;
    m_TimeIsSet = false;
    m_Voltage = 0.0;
    m_VoltageIsSet = false;
}

DesignScenarioSupply::~DesignScenarioSupply()
{
}

void DesignScenarioSupply::validate()
{
    // TODO: implement validation
}

web::json::value DesignScenarioSupply::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(m_Time);
    }
    if(m_VoltageIsSet)
    {
        val[utility::conversions::to_string_t("voltage")] = ModelBase::toJson(m_Voltage);
    }

    return val;
}

bool DesignScenarioSupply::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            double refVal_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_time);
            setTime(refVal_time);
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
    return ok;
}

void DesignScenarioSupply::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("time"), m_Time));
    }
    if(m_VoltageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("voltage"), m_Voltage));
    }
}

bool DesignScenarioSupply::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("time")))
    {
        double refVal_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("time")), refVal_time );
        setTime(refVal_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("voltage")))
    {
        double refVal_voltage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("voltage")), refVal_voltage );
        setVoltage(refVal_voltage);
    }
    return ok;
}

int32_t DesignScenarioSupply::getId() const
{
    return m_Id;
}

void DesignScenarioSupply::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DesignScenarioSupply::idIsSet() const
{
    return m_IdIsSet;
}

void DesignScenarioSupply::unsetId()
{
    m_IdIsSet = false;
}
double DesignScenarioSupply::getTime() const
{
    return m_Time;
}

void DesignScenarioSupply::setTime(double value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool DesignScenarioSupply::timeIsSet() const
{
    return m_TimeIsSet;
}

void DesignScenarioSupply::unsetTime()
{
    m_TimeIsSet = false;
}
double DesignScenarioSupply::getVoltage() const
{
    return m_Voltage;
}

void DesignScenarioSupply::setVoltage(double value)
{
    m_Voltage = value;
    m_VoltageIsSet = true;
}

bool DesignScenarioSupply::voltageIsSet() const
{
    return m_VoltageIsSet;
}

void DesignScenarioSupply::unsetVoltage()
{
    m_VoltageIsSet = false;
}
}
}

