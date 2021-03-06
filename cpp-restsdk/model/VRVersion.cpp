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



#include "VRVersion.h"

namespace powermeter {
namespace model {




VRVersion::VRVersion()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Version = 0;
    m_VersionIsSet = false;
    m_Timestamp = utility::datetime();
    m_TimestampIsSet = false;
    m_Descr = utility::conversions::to_string_t("");
    m_DescrIsSet = false;
    m_Vr = 0;
    m_VrIsSet = false;
}

VRVersion::~VRVersion()
{
}

void VRVersion::validate()
{
    // TODO: implement validation
}

web::json::value VRVersion::toJson() const
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
    if(m_VrIsSet)
    {
        val[utility::conversions::to_string_t("vr")] = ModelBase::toJson(m_Vr);
    }

    return val;
}

bool VRVersion::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vr")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vr"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_vr;
            ok &= ModelBase::fromJson(fieldValue, refVal_vr);
            setVr(refVal_vr);
        }
    }
    return ok;
}

void VRVersion::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_VrIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("vr"), m_Vr));
    }
}

bool VRVersion::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("vr")))
    {
        int32_t refVal_vr;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("vr")), refVal_vr );
        setVr(refVal_vr);
    }
    return ok;
}

int32_t VRVersion::getId() const
{
    return m_Id;
}

void VRVersion::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool VRVersion::idIsSet() const
{
    return m_IdIsSet;
}

void VRVersion::unsetId()
{
    m_IdIsSet = false;
}
int32_t VRVersion::getVersion() const
{
    return m_Version;
}

void VRVersion::setVersion(int32_t value)
{
    m_Version = value;
    m_VersionIsSet = true;
}

bool VRVersion::versionIsSet() const
{
    return m_VersionIsSet;
}

void VRVersion::unsetVersion()
{
    m_VersionIsSet = false;
}
utility::datetime VRVersion::getTimestamp() const
{
    return m_Timestamp;
}

void VRVersion::setTimestamp(const utility::datetime& value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}

bool VRVersion::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void VRVersion::unsetTimestamp()
{
    m_TimestampIsSet = false;
}
utility::string_t VRVersion::getDescr() const
{
    return m_Descr;
}

void VRVersion::setDescr(const utility::string_t& value)
{
    m_Descr = value;
    m_DescrIsSet = true;
}

bool VRVersion::descrIsSet() const
{
    return m_DescrIsSet;
}

void VRVersion::unsetDescr()
{
    m_DescrIsSet = false;
}
int32_t VRVersion::getVr() const
{
    return m_Vr;
}

void VRVersion::setVr(int32_t value)
{
    m_Vr = value;
    m_VrIsSet = true;
}

bool VRVersion::vrIsSet() const
{
    return m_VrIsSet;
}

void VRVersion::unsetVr()
{
    m_VrIsSet = false;
}
}
}


