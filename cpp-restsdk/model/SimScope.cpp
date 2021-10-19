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



#include "SimScope.h"

namespace powermeter {
namespace model {




SimScope::SimScope()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Scope = 0;
    m_ScopeIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
}

SimScope::~SimScope()
{
}

void SimScope::validate()
{
    // TODO: implement validation
}

web::json::value SimScope::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ScopeIsSet)
    {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(m_Scope);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

bool SimScope::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scope")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_scope;
            ok &= ModelBase::fromJson(fieldValue, refVal_scope);
            setScope(refVal_scope);
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
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    return ok;
}

void SimScope::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ScopeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("scope"), m_Scope));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
}

bool SimScope::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("scope")))
    {
        int32_t refVal_scope;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("scope")), refVal_scope );
        setScope(refVal_scope);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    return ok;
}

int32_t SimScope::getId() const
{
    return m_Id;
}

void SimScope::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SimScope::idIsSet() const
{
    return m_IdIsSet;
}

void SimScope::unsetId()
{
    m_IdIsSet = false;
}
int32_t SimScope::getScope() const
{
    return m_Scope;
}

void SimScope::setScope(int32_t value)
{
    m_Scope = value;
    m_ScopeIsSet = true;
}

bool SimScope::scopeIsSet() const
{
    return m_ScopeIsSet;
}

void SimScope::unsetScope()
{
    m_ScopeIsSet = false;
}
utility::string_t SimScope::getName() const
{
    return m_Name;
}

void SimScope::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool SimScope::nameIsSet() const
{
    return m_NameIsSet;
}

void SimScope::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t SimScope::getType() const
{
    return m_Type;
}

void SimScope::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool SimScope::typeIsSet() const
{
    return m_TypeIsSet;
}

void SimScope::unsetType()
{
    m_TypeIsSet = false;
}
}
}


