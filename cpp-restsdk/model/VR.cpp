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



#include "VR.h"

namespace powermeter {
namespace model {




VR::VR()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Descr = utility::conversions::to_string_t("");
    m_DescrIsSet = false;
    m_Type = 0;
    m_TypeIsSet = false;
    m_Linear_iq = 0.0;
    m_Linear_iqIsSet = false;
    m_Switched_efficiencyIsSet = false;
    m_Editable = false;
    m_EditableIsSet = false;
    m_VersionIsSet = false;
    m_Current_version = 0;
    m_Current_versionIsSet = false;
}

VR::~VR()
{
}

void VR::validate()
{
    // TODO: implement validation
}

web::json::value VR::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_DescrIsSet)
    {
        val[utility::conversions::to_string_t("descr")] = ModelBase::toJson(m_Descr);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_Linear_iqIsSet)
    {
        val[utility::conversions::to_string_t("linear_iq")] = ModelBase::toJson(m_Linear_iq);
    }
    if(m_Switched_efficiencyIsSet)
    {
        val[utility::conversions::to_string_t("switched_efficiency")] = ModelBase::toJson(m_Switched_efficiency);
    }
    if(m_EditableIsSet)
    {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(m_Editable);
    }
    if(m_VersionIsSet)
    {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(m_Version);
    }
    if(m_Current_versionIsSet)
    {
        val[utility::conversions::to_string_t("current_version")] = ModelBase::toJson(m_Current_version);
    }

    return val;
}

bool VR::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
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
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("linear_iq")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("linear_iq"));
        if(!fieldValue.is_null())
        {
            double refVal_linear_iq;
            ok &= ModelBase::fromJson(fieldValue, refVal_linear_iq);
            setLinearIq(refVal_linear_iq);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switched_efficiency")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switched_efficiency"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_switched_efficiency;
            ok &= ModelBase::fromJson(fieldValue, refVal_switched_efficiency);
            setSwitchedEfficiency(refVal_switched_efficiency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editable")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editable"));
        if(!fieldValue.is_null())
        {
            bool refVal_editable;
            ok &= ModelBase::fromJson(fieldValue, refVal_editable);
            setEditable(refVal_editable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<VRVersion> refVal_version;
            ok &= ModelBase::fromJson(fieldValue, refVal_version);
            setVersion(refVal_version);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_version")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_current_version;
            ok &= ModelBase::fromJson(fieldValue, refVal_current_version);
            setCurrentVersion(refVal_current_version);
        }
    }
    return ok;
}

void VR::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_DescrIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("descr"), m_Descr));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_Linear_iqIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("linear_iq"), m_Linear_iq));
    }
    if(m_Switched_efficiencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("switched_efficiency"), m_Switched_efficiency));
    }
    if(m_EditableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("editable"), m_Editable));
    }
    if(m_VersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("version"), m_Version));
    }
    if(m_Current_versionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("current_version"), m_Current_version));
    }
}

bool VR::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("descr")))
    {
        utility::string_t refVal_descr;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("descr")), refVal_descr );
        setDescr(refVal_descr);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        int32_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("linear_iq")))
    {
        double refVal_linear_iq;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("linear_iq")), refVal_linear_iq );
        setLinearIq(refVal_linear_iq);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("switched_efficiency")))
    {
        std::shared_ptr<Object> refVal_switched_efficiency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("switched_efficiency")), refVal_switched_efficiency );
        setSwitchedEfficiency(refVal_switched_efficiency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("editable")))
    {
        bool refVal_editable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("editable")), refVal_editable );
        setEditable(refVal_editable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("version")))
    {
        std::shared_ptr<VRVersion> refVal_version;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("version")), refVal_version );
        setVersion(refVal_version);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("current_version")))
    {
        int32_t refVal_current_version;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("current_version")), refVal_current_version );
        setCurrentVersion(refVal_current_version);
    }
    return ok;
}

int32_t VR::getId() const
{
    return m_Id;
}

void VR::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool VR::idIsSet() const
{
    return m_IdIsSet;
}

void VR::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t VR::getName() const
{
    return m_Name;
}

void VR::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool VR::nameIsSet() const
{
    return m_NameIsSet;
}

void VR::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t VR::getDescr() const
{
    return m_Descr;
}

void VR::setDescr(const utility::string_t& value)
{
    m_Descr = value;
    m_DescrIsSet = true;
}

bool VR::descrIsSet() const
{
    return m_DescrIsSet;
}

void VR::unsetDescr()
{
    m_DescrIsSet = false;
}
int32_t VR::getType() const
{
    return m_Type;
}

void VR::setType(int32_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool VR::typeIsSet() const
{
    return m_TypeIsSet;
}

void VR::unsetType()
{
    m_TypeIsSet = false;
}
double VR::getLinearIq() const
{
    return m_Linear_iq;
}

void VR::setLinearIq(double value)
{
    m_Linear_iq = value;
    m_Linear_iqIsSet = true;
}

bool VR::linearIqIsSet() const
{
    return m_Linear_iqIsSet;
}

void VR::unsetLinear_iq()
{
    m_Linear_iqIsSet = false;
}
std::shared_ptr<Object> VR::getSwitchedEfficiency() const
{
    return m_Switched_efficiency;
}

void VR::setSwitchedEfficiency(const std::shared_ptr<Object>& value)
{
    m_Switched_efficiency = value;
    m_Switched_efficiencyIsSet = true;
}

bool VR::switchedEfficiencyIsSet() const
{
    return m_Switched_efficiencyIsSet;
}

void VR::unsetSwitched_efficiency()
{
    m_Switched_efficiencyIsSet = false;
}
bool VR::isEditable() const
{
    return m_Editable;
}

void VR::setEditable(bool value)
{
    m_Editable = value;
    m_EditableIsSet = true;
}

bool VR::editableIsSet() const
{
    return m_EditableIsSet;
}

void VR::unsetEditable()
{
    m_EditableIsSet = false;
}
std::shared_ptr<VRVersion> VR::getVersion() const
{
    return m_Version;
}

void VR::setVersion(const std::shared_ptr<VRVersion>& value)
{
    m_Version = value;
    m_VersionIsSet = true;
}

bool VR::versionIsSet() const
{
    return m_VersionIsSet;
}

void VR::unsetVersion()
{
    m_VersionIsSet = false;
}
int32_t VR::getCurrentVersion() const
{
    return m_Current_version;
}

void VR::setCurrentVersion(int32_t value)
{
    m_Current_version = value;
    m_Current_versionIsSet = true;
}

bool VR::currentVersionIsSet() const
{
    return m_Current_versionIsSet;
}

void VR::unsetCurrent_version()
{
    m_Current_versionIsSet = false;
}
}
}


