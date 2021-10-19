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



#include "DesignScenarioModeUtil.h"

namespace powermeter {
namespace model {




DesignScenarioModeUtil::DesignScenarioModeUtil()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Time = 0.0;
    m_TimeIsSet = false;
    m_Utilization = 0.0;
    m_UtilizationIsSet = false;
}

DesignScenarioModeUtil::~DesignScenarioModeUtil()
{
}

void DesignScenarioModeUtil::validate()
{
    // TODO: implement validation
}

web::json::value DesignScenarioModeUtil::toJson() const
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
    if(m_UtilizationIsSet)
    {
        val[utility::conversions::to_string_t("utilization")] = ModelBase::toJson(m_Utilization);
    }

    return val;
}

bool DesignScenarioModeUtil::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("utilization")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("utilization"));
        if(!fieldValue.is_null())
        {
            double refVal_utilization;
            ok &= ModelBase::fromJson(fieldValue, refVal_utilization);
            setUtilization(refVal_utilization);
        }
    }
    return ok;
}

void DesignScenarioModeUtil::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_UtilizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("utilization"), m_Utilization));
    }
}

bool DesignScenarioModeUtil::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("utilization")))
    {
        double refVal_utilization;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("utilization")), refVal_utilization );
        setUtilization(refVal_utilization);
    }
    return ok;
}

int32_t DesignScenarioModeUtil::getId() const
{
    return m_Id;
}

void DesignScenarioModeUtil::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DesignScenarioModeUtil::idIsSet() const
{
    return m_IdIsSet;
}

void DesignScenarioModeUtil::unsetId()
{
    m_IdIsSet = false;
}
double DesignScenarioModeUtil::getTime() const
{
    return m_Time;
}

void DesignScenarioModeUtil::setTime(double value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool DesignScenarioModeUtil::timeIsSet() const
{
    return m_TimeIsSet;
}

void DesignScenarioModeUtil::unsetTime()
{
    m_TimeIsSet = false;
}
double DesignScenarioModeUtil::getUtilization() const
{
    return m_Utilization;
}

void DesignScenarioModeUtil::setUtilization(double value)
{
    m_Utilization = value;
    m_UtilizationIsSet = true;
}

bool DesignScenarioModeUtil::utilizationIsSet() const
{
    return m_UtilizationIsSet;
}

void DesignScenarioModeUtil::unsetUtilization()
{
    m_UtilizationIsSet = false;
}
}
}


