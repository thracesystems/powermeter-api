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



#include "TechnologyVersion.h"

namespace powermeter {
namespace model {




TechnologyVersion::TechnologyVersion()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Version = 0;
    m_VersionIsSet = false;
    m_Timestamp = utility::datetime();
    m_TimestampIsSet = false;
    m_Descr = utility::conversions::to_string_t("");
    m_DescrIsSet = false;
    m_Technology = 0;
    m_TechnologyIsSet = false;
}

TechnologyVersion::~TechnologyVersion()
{
}

void TechnologyVersion::validate()
{
    // TODO: implement validation
}

web::json::value TechnologyVersion::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_VersionIsSet)
    {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(m_Version);
    }
    if(m_TimestampIsSet)
    {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    if(m_DescrIsSet)
    {
        val[utility::conversions::to_string_t("descr")] = ModelBase::toJson(m_Descr);
    }
    if(m_TechnologyIsSet)
    {
        val[utility::conversions::to_string_t("technology")] = ModelBase::toJson(m_Technology);
    }

    return val;
}

bool TechnologyVersion::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_version;
            ok &= ModelBase::fromJson(fieldValue, refVal_version);
            setVersion(refVal_version);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_timestamp;
            ok &= ModelBase::fromJson(fieldValue, refVal_timestamp);
            setTimestamp(refVal_timestamp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("descr")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("descr"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_descr;
            ok &= ModelBase::fromJson(fieldValue, refVal_descr);
            setDescr(refVal_descr);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("technology")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("technology"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_technology;
            ok &= ModelBase::fromJson(fieldValue, refVal_technology);
            setTechnology(refVal_technology);
        }
    }
    return ok;
}

void TechnologyVersion::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_VersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("version"), m_Version));
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
    }
    if(m_DescrIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("descr"), m_Descr));
    }
    if(m_TechnologyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("technology"), m_Technology));
    }
}

bool TechnologyVersion::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("version")))
    {
        int32_t refVal_version;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("version")), refVal_version );
        setVersion(refVal_version);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timestamp")))
    {
        utility::datetime refVal_timestamp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp")), refVal_timestamp );
        setTimestamp(refVal_timestamp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("descr")))
    {
        utility::string_t refVal_descr;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("descr")), refVal_descr );
        setDescr(refVal_descr);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("technology")))
    {
        int32_t refVal_technology;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("technology")), refVal_technology );
        setTechnology(refVal_technology);
    }
    return ok;
}

int32_t TechnologyVersion::getId() const
{
    return m_Id;
}

void TechnologyVersion::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool TechnologyVersion::idIsSet() const
{
    return m_IdIsSet;
}

void TechnologyVersion::unsetId()
{
    m_IdIsSet = false;
}
int32_t TechnologyVersion::getVersion() const
{
    return m_Version;
}

void TechnologyVersion::setVersion(int32_t value)
{
    m_Version = value;
    m_VersionIsSet = true;
}

bool TechnologyVersion::versionIsSet() const
{
    return m_VersionIsSet;
}

void TechnologyVersion::unsetVersion()
{
    m_VersionIsSet = false;
}
utility::datetime TechnologyVersion::getTimestamp() const
{
    return m_Timestamp;
}

void TechnologyVersion::setTimestamp(const utility::datetime& value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}

bool TechnologyVersion::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void TechnologyVersion::unsetTimestamp()
{
    m_TimestampIsSet = false;
}
utility::string_t TechnologyVersion::getDescr() const
{
    return m_Descr;
}

void TechnologyVersion::setDescr(const utility::string_t& value)
{
    m_Descr = value;
    m_DescrIsSet = true;
}

bool TechnologyVersion::descrIsSet() const
{
    return m_DescrIsSet;
}

void TechnologyVersion::unsetDescr()
{
    m_DescrIsSet = false;
}
int32_t TechnologyVersion::getTechnology() const
{
    return m_Technology;
}

void TechnologyVersion::setTechnology(int32_t value)
{
    m_Technology = value;
    m_TechnologyIsSet = true;
}

bool TechnologyVersion::technologyIsSet() const
{
    return m_TechnologyIsSet;
}

void TechnologyVersion::unsetTechnology()
{
    m_TechnologyIsSet = false;
}
}
}


