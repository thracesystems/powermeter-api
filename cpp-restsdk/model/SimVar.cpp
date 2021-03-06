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



#include "SimVar.h"

namespace powermeter {
namespace model {




SimVar::SimVar()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Scope = 0;
    m_ScopeIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Vcd_id = utility::conversions::to_string_t("");
    m_Vcd_idIsSet = false;
    m_MsbIsSet = false;
    m_LsbIsSet = false;
}

SimVar::~SimVar()
{
}

void SimVar::validate()
{
    // TODO: implement validation
}

web::json::value SimVar::toJson() const
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
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_Size);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_Vcd_idIsSet)
    {
        val[utility::conversions::to_string_t("vcd_id")] = ModelBase::toJson(m_Vcd_id);
    }
    if(m_MsbIsSet)
    {
        val[utility::conversions::to_string_t("msb")] = ModelBase::toJson(m_Msb);
    }
    if(m_LsbIsSet)
    {
        val[utility::conversions::to_string_t("lsb")] = ModelBase::toJson(m_Lsb);
    }

    return val;
}

bool SimVar::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_size);
            setSize(refVal_size);
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
    if(val.has_field(utility::conversions::to_string_t("vcd_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcd_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_vcd_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_vcd_id);
            setVcdId(refVal_vcd_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("msb")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("msb"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_msb;
            ok &= ModelBase::fromJson(fieldValue, refVal_msb);
            setMsb(refVal_msb);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lsb")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lsb"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_lsb;
            ok &= ModelBase::fromJson(fieldValue, refVal_lsb);
            setLsb(refVal_lsb);
        }
    }
    return ok;
}

void SimVar::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_Size));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_Vcd_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("vcd_id"), m_Vcd_id));
    }
    if(m_MsbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("msb"), m_Msb));
    }
    if(m_LsbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lsb"), m_Lsb));
    }
}

bool SimVar::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        int32_t refVal_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("size")), refVal_size );
        setSize(refVal_size);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("vcd_id")))
    {
        utility::string_t refVal_vcd_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("vcd_id")), refVal_vcd_id );
        setVcdId(refVal_vcd_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("msb")))
    {
        std::vector<int32_t> refVal_msb;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("msb")), refVal_msb );
        setMsb(refVal_msb);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lsb")))
    {
        std::vector<int32_t> refVal_lsb;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lsb")), refVal_lsb );
        setLsb(refVal_lsb);
    }
    return ok;
}

int32_t SimVar::getId() const
{
    return m_Id;
}

void SimVar::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SimVar::idIsSet() const
{
    return m_IdIsSet;
}

void SimVar::unsetId()
{
    m_IdIsSet = false;
}
int32_t SimVar::getScope() const
{
    return m_Scope;
}

void SimVar::setScope(int32_t value)
{
    m_Scope = value;
    m_ScopeIsSet = true;
}

bool SimVar::scopeIsSet() const
{
    return m_ScopeIsSet;
}

void SimVar::unsetScope()
{
    m_ScopeIsSet = false;
}
utility::string_t SimVar::getType() const
{
    return m_Type;
}

void SimVar::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool SimVar::typeIsSet() const
{
    return m_TypeIsSet;
}

void SimVar::unsetType()
{
    m_TypeIsSet = false;
}
int32_t SimVar::getSize() const
{
    return m_Size;
}

void SimVar::setSize(int32_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}

bool SimVar::sizeIsSet() const
{
    return m_SizeIsSet;
}

void SimVar::unsetSize()
{
    m_SizeIsSet = false;
}
utility::string_t SimVar::getName() const
{
    return m_Name;
}

void SimVar::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool SimVar::nameIsSet() const
{
    return m_NameIsSet;
}

void SimVar::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t SimVar::getVcdId() const
{
    return m_Vcd_id;
}

void SimVar::setVcdId(const utility::string_t& value)
{
    m_Vcd_id = value;
    m_Vcd_idIsSet = true;
}

bool SimVar::vcdIdIsSet() const
{
    return m_Vcd_idIsSet;
}

void SimVar::unsetVcd_id()
{
    m_Vcd_idIsSet = false;
}
std::vector<int32_t>& SimVar::getMsb()
{
    return m_Msb;
}

void SimVar::setMsb(std::vector<int32_t> value)
{
    m_Msb = value;
    m_MsbIsSet = true;
}

bool SimVar::msbIsSet() const
{
    return m_MsbIsSet;
}

void SimVar::unsetMsb()
{
    m_MsbIsSet = false;
}
std::vector<int32_t>& SimVar::getLsb()
{
    return m_Lsb;
}

void SimVar::setLsb(std::vector<int32_t> value)
{
    m_Lsb = value;
    m_LsbIsSet = true;
}

bool SimVar::lsbIsSet() const
{
    return m_LsbIsSet;
}

void SimVar::unsetLsb()
{
    m_LsbIsSet = false;
}
}
}


