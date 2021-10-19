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



#include "Project.h"

namespace powermeter {
namespace model {




Project::Project()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Technology = 0;
    m_TechnologyIsSet = false;
    m_Technology_master = 0;
    m_Technology_masterIsSet = false;
    m_Technology_name = utility::conversions::to_string_t("");
    m_Technology_nameIsSet = false;
    m_Contrib_devicesIsSet = false;
}

Project::~Project()
{
}

void Project::validate()
{
    // TODO: implement validation
}

web::json::value Project::toJson() const
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
    if(m_TechnologyIsSet)
    {
        val[utility::conversions::to_string_t("technology")] = ModelBase::toJson(m_Technology);
    }
    if(m_Technology_masterIsSet)
    {
        val[utility::conversions::to_string_t("technology_master")] = ModelBase::toJson(m_Technology_master);
    }
    if(m_Technology_nameIsSet)
    {
        val[utility::conversions::to_string_t("technology_name")] = ModelBase::toJson(m_Technology_name);
    }
    if(m_Contrib_devicesIsSet)
    {
        val[utility::conversions::to_string_t("contrib_devices")] = ModelBase::toJson(m_Contrib_devices);
    }

    return val;
}

bool Project::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("technology_master")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("technology_master"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_technology_master;
            ok &= ModelBase::fromJson(fieldValue, refVal_technology_master);
            setTechnologyMaster(refVal_technology_master);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("technology_name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("technology_name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_technology_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_technology_name);
            setTechnologyName(refVal_technology_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contrib_devices")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contrib_devices"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<SwaggerContribDevices>> refVal_contrib_devices;
            ok &= ModelBase::fromJson(fieldValue, refVal_contrib_devices);
            setContribDevices(refVal_contrib_devices);
        }
    }
    return ok;
}

void Project::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_TechnologyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("technology"), m_Technology));
    }
    if(m_Technology_masterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("technology_master"), m_Technology_master));
    }
    if(m_Technology_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("technology_name"), m_Technology_name));
    }
    if(m_Contrib_devicesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contrib_devices"), m_Contrib_devices));
    }
}

bool Project::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("technology")))
    {
        int32_t refVal_technology;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("technology")), refVal_technology );
        setTechnology(refVal_technology);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("technology_master")))
    {
        int32_t refVal_technology_master;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("technology_master")), refVal_technology_master );
        setTechnologyMaster(refVal_technology_master);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("technology_name")))
    {
        utility::string_t refVal_technology_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("technology_name")), refVal_technology_name );
        setTechnologyName(refVal_technology_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("contrib_devices")))
    {
        std::vector<std::shared_ptr<SwaggerContribDevices>> refVal_contrib_devices;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("contrib_devices")), refVal_contrib_devices );
        setContribDevices(refVal_contrib_devices);
    }
    return ok;
}

int32_t Project::getId() const
{
    return m_Id;
}

void Project::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Project::idIsSet() const
{
    return m_IdIsSet;
}

void Project::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Project::getName() const
{
    return m_Name;
}

void Project::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Project::nameIsSet() const
{
    return m_NameIsSet;
}

void Project::unsetName()
{
    m_NameIsSet = false;
}
int32_t Project::getTechnology() const
{
    return m_Technology;
}

void Project::setTechnology(int32_t value)
{
    m_Technology = value;
    m_TechnologyIsSet = true;
}

bool Project::technologyIsSet() const
{
    return m_TechnologyIsSet;
}

void Project::unsetTechnology()
{
    m_TechnologyIsSet = false;
}
int32_t Project::getTechnologyMaster() const
{
    return m_Technology_master;
}

void Project::setTechnologyMaster(int32_t value)
{
    m_Technology_master = value;
    m_Technology_masterIsSet = true;
}

bool Project::technologyMasterIsSet() const
{
    return m_Technology_masterIsSet;
}

void Project::unsetTechnology_master()
{
    m_Technology_masterIsSet = false;
}
utility::string_t Project::getTechnologyName() const
{
    return m_Technology_name;
}

void Project::setTechnologyName(const utility::string_t& value)
{
    m_Technology_name = value;
    m_Technology_nameIsSet = true;
}

bool Project::technologyNameIsSet() const
{
    return m_Technology_nameIsSet;
}

void Project::unsetTechnology_name()
{
    m_Technology_nameIsSet = false;
}
std::vector<std::shared_ptr<SwaggerContribDevices>>& Project::getContribDevices()
{
    return m_Contrib_devices;
}

void Project::setContribDevices(const std::vector<std::shared_ptr<SwaggerContribDevices>>& value)
{
    m_Contrib_devices = value;
    m_Contrib_devicesIsSet = true;
}

bool Project::contribDevicesIsSet() const
{
    return m_Contrib_devicesIsSet;
}

void Project::unsetContrib_devices()
{
    m_Contrib_devicesIsSet = false;
}
}
}


