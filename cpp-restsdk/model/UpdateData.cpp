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



#include "UpdateData.h"

namespace powermeter {
namespace model {




UpdateData::UpdateData()
{
    m_Current_time = 0.0;
    m_Current_timeIsSet = false;
    m_Update_time = 0.0;
    m_Update_timeIsSet = false;
}

UpdateData::~UpdateData()
{
}

void UpdateData::validate()
{
    // TODO: implement validation
}

web::json::value UpdateData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Current_timeIsSet)
    {
        val[utility::conversions::to_string_t("current_time")] = ModelBase::toJson(m_Current_time);
    }
    if(m_Update_timeIsSet)
    {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(m_Update_time);
    }

    return val;
}

bool UpdateData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_time"));
        if(!fieldValue.is_null())
        {
            double refVal_current_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_current_time);
            setCurrentTime(refVal_current_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            double refVal_update_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_update_time);
            setUpdateTime(refVal_update_time);
        }
    }
    return ok;
}

void UpdateData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Current_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("current_time"), m_Current_time));
    }
    if(m_Update_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("update_time"), m_Update_time));
    }
}

bool UpdateData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("current_time")))
    {
        double refVal_current_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("current_time")), refVal_current_time );
        setCurrentTime(refVal_current_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("update_time")))
    {
        double refVal_update_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("update_time")), refVal_update_time );
        setUpdateTime(refVal_update_time);
    }
    return ok;
}

double UpdateData::getCurrentTime() const
{
    return m_Current_time;
}

void UpdateData::setCurrentTime(double value)
{
    m_Current_time = value;
    m_Current_timeIsSet = true;
}

bool UpdateData::currentTimeIsSet() const
{
    return m_Current_timeIsSet;
}

void UpdateData::unsetCurrent_time()
{
    m_Current_timeIsSet = false;
}
double UpdateData::getUpdateTime() const
{
    return m_Update_time;
}

void UpdateData::setUpdateTime(double value)
{
    m_Update_time = value;
    m_Update_timeIsSet = true;
}

bool UpdateData::updateTimeIsSet() const
{
    return m_Update_timeIsSet;
}

void UpdateData::unsetUpdate_time()
{
    m_Update_timeIsSet = false;
}
}
}


