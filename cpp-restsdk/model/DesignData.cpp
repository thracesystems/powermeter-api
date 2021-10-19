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



#include "DesignData.h"

namespace powermeter {
namespace model {




DesignData::DesignData()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Time = utility::datetime();
    m_TimeIsSet = false;
    m_Hidden = false;
    m_HiddenIsSet = false;
    m_DataIsSet = false;
}

DesignData::~DesignData()
{
}

void DesignData::validate()
{
    // TODO: implement validation
}

web::json::value DesignData::toJson() const
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
    if(m_HiddenIsSet)
    {
        val[utility::conversions::to_string_t("hidden")] = ModelBase::toJson(m_Hidden);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }

    return val;
}

bool DesignData::fromJson(const web::json::value& val)
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
            utility::datetime refVal_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_time);
            setTime(refVal_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hidden")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hidden"));
        if(!fieldValue.is_null())
        {
            bool refVal_hidden;
            ok &= ModelBase::fromJson(fieldValue, refVal_hidden);
            setHidden(refVal_hidden);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    return ok;
}

void DesignData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_HiddenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hidden"), m_Hidden));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
}

bool DesignData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        utility::datetime refVal_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("time")), refVal_time );
        setTime(refVal_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hidden")))
    {
        bool refVal_hidden;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hidden")), refVal_hidden );
        setHidden(refVal_hidden);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        std::shared_ptr<Object> refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    return ok;
}

int32_t DesignData::getId() const
{
    return m_Id;
}

void DesignData::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DesignData::idIsSet() const
{
    return m_IdIsSet;
}

void DesignData::unsetId()
{
    m_IdIsSet = false;
}
utility::datetime DesignData::getTime() const
{
    return m_Time;
}

void DesignData::setTime(const utility::datetime& value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool DesignData::timeIsSet() const
{
    return m_TimeIsSet;
}

void DesignData::unsetTime()
{
    m_TimeIsSet = false;
}
bool DesignData::isHidden() const
{
    return m_Hidden;
}

void DesignData::setHidden(bool value)
{
    m_Hidden = value;
    m_HiddenIsSet = true;
}

bool DesignData::hiddenIsSet() const
{
    return m_HiddenIsSet;
}

void DesignData::unsetHidden()
{
    m_HiddenIsSet = false;
}
std::shared_ptr<Object> DesignData::getData() const
{
    return m_Data;
}

void DesignData::setData(const std::shared_ptr<Object>& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool DesignData::dataIsSet() const
{
    return m_DataIsSet;
}

void DesignData::unsetData()
{
    m_DataIsSet = false;
}
}
}

