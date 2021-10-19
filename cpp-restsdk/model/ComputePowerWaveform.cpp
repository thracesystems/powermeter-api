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



#include "ComputePowerWaveform.h"

namespace powermeter {
namespace model {




ComputePowerWaveform::ComputePowerWaveform()
{
    m_Time = utility::conversions::to_string_t("");
    m_TimeIsSet = false;
    m_Power = utility::conversions::to_string_t("");
    m_PowerIsSet = false;
}

ComputePowerWaveform::~ComputePowerWaveform()
{
}

void ComputePowerWaveform::validate()
{
    // TODO: implement validation
}

web::json::value ComputePowerWaveform::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(m_Time);
    }
    if(m_PowerIsSet)
    {
        val[utility::conversions::to_string_t("power")] = ModelBase::toJson(m_Power);
    }

    return val;
}

bool ComputePowerWaveform::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_time);
            setTime(refVal_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("power")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("power"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_power;
            ok &= ModelBase::fromJson(fieldValue, refVal_power);
            setPower(refVal_power);
        }
    }
    return ok;
}

void ComputePowerWaveform::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("time"), m_Time));
    }
    if(m_PowerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("power"), m_Power));
    }
}

bool ComputePowerWaveform::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("time")))
    {
        utility::string_t refVal_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("time")), refVal_time );
        setTime(refVal_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("power")))
    {
        utility::string_t refVal_power;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("power")), refVal_power );
        setPower(refVal_power);
    }
    return ok;
}

utility::string_t ComputePowerWaveform::getTime() const
{
    return m_Time;
}

void ComputePowerWaveform::setTime(const utility::string_t& value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool ComputePowerWaveform::timeIsSet() const
{
    return m_TimeIsSet;
}

void ComputePowerWaveform::unsetTime()
{
    m_TimeIsSet = false;
}
utility::string_t ComputePowerWaveform::getPower() const
{
    return m_Power;
}

void ComputePowerWaveform::setPower(const utility::string_t& value)
{
    m_Power = value;
    m_PowerIsSet = true;
}

bool ComputePowerWaveform::powerIsSet() const
{
    return m_PowerIsSet;
}

void ComputePowerWaveform::unsetPower()
{
    m_PowerIsSet = false;
}
}
}

