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



#include "VRInstance.h"

namespace powermeter {
namespace model {




VRInstance::VRInstance()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Hier_name = utility::conversions::to_string_t("");
    m_Hier_nameIsSet = false;
    m_Parent_id = 0;
    m_Parent_idIsSet = false;
    m_Parent_type = utility::conversions::to_string_t("");
    m_Parent_typeIsSet = false;
    m_Master = 0;
    m_MasterIsSet = false;
    m_Master_name = utility::conversions::to_string_t("");
    m_Master_nameIsSet = false;
    m_Master_master = 0;
    m_Master_masterIsSet = false;
    m_SuppliesIsSet = false;
}

VRInstance::~VRInstance()
{
}

void VRInstance::validate()
{
    // TODO: implement validation
}

web::json::value VRInstance::toJson() const
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
    if(m_Hier_nameIsSet)
    {
        val[utility::conversions::to_string_t("hier_name")] = ModelBase::toJson(m_Hier_name);
    }
    if(m_Parent_idIsSet)
    {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(m_Parent_id);
    }
    if(m_Parent_typeIsSet)
    {
        val[utility::conversions::to_string_t("parent_type")] = ModelBase::toJson(m_Parent_type);
    }
    if(m_MasterIsSet)
    {
        val[utility::conversions::to_string_t("master")] = ModelBase::toJson(m_Master);
    }
    if(m_Master_nameIsSet)
    {
        val[utility::conversions::to_string_t("master_name")] = ModelBase::toJson(m_Master_name);
    }
    if(m_Master_masterIsSet)
    {
        val[utility::conversions::to_string_t("master_master")] = ModelBase::toJson(m_Master_master);
    }
    if(m_SuppliesIsSet)
    {
        val[utility::conversions::to_string_t("supplies")] = ModelBase::toJson(m_Supplies);
    }

    return val;
}

bool VRInstance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hier_name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hier_name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_hier_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_hier_name);
            setHierName(refVal_hier_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_parent_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_parent_id);
            setParentId(refVal_parent_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parent_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_parent_type);
            setParentType(refVal_parent_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_master;
            ok &= ModelBase::fromJson(fieldValue, refVal_master);
            setMaster(refVal_master);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_master_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_master_name);
            setMasterName(refVal_master_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_master")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_master"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_master_master;
            ok &= ModelBase::fromJson(fieldValue, refVal_master_master);
            setMasterMaster(refVal_master_master);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supplies")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supplies"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<VRSupplyInst>> refVal_supplies;
            ok &= ModelBase::fromJson(fieldValue, refVal_supplies);
            setSupplies(refVal_supplies);
        }
    }
    return ok;
}

void VRInstance::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Hier_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hier_name"), m_Hier_name));
    }
    if(m_Parent_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parent_id"), m_Parent_id));
    }
    if(m_Parent_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parent_type"), m_Parent_type));
    }
    if(m_MasterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("master"), m_Master));
    }
    if(m_Master_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("master_name"), m_Master_name));
    }
    if(m_Master_masterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("master_master"), m_Master_master));
    }
    if(m_SuppliesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("supplies"), m_Supplies));
    }
}

bool VRInstance::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("hier_name")))
    {
        utility::string_t refVal_hier_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hier_name")), refVal_hier_name );
        setHierName(refVal_hier_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parent_id")))
    {
        int32_t refVal_parent_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parent_id")), refVal_parent_id );
        setParentId(refVal_parent_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parent_type")))
    {
        utility::string_t refVal_parent_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parent_type")), refVal_parent_type );
        setParentType(refVal_parent_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("master")))
    {
        int32_t refVal_master;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("master")), refVal_master );
        setMaster(refVal_master);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("master_name")))
    {
        utility::string_t refVal_master_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("master_name")), refVal_master_name );
        setMasterName(refVal_master_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("master_master")))
    {
        int32_t refVal_master_master;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("master_master")), refVal_master_master );
        setMasterMaster(refVal_master_master);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("supplies")))
    {
        std::vector<std::shared_ptr<VRSupplyInst>> refVal_supplies;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("supplies")), refVal_supplies );
        setSupplies(refVal_supplies);
    }
    return ok;
}

int32_t VRInstance::getId() const
{
    return m_Id;
}

void VRInstance::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool VRInstance::idIsSet() const
{
    return m_IdIsSet;
}

void VRInstance::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t VRInstance::getName() const
{
    return m_Name;
}

void VRInstance::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool VRInstance::nameIsSet() const
{
    return m_NameIsSet;
}

void VRInstance::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t VRInstance::getHierName() const
{
    return m_Hier_name;
}

void VRInstance::setHierName(const utility::string_t& value)
{
    m_Hier_name = value;
    m_Hier_nameIsSet = true;
}

bool VRInstance::hierNameIsSet() const
{
    return m_Hier_nameIsSet;
}

void VRInstance::unsetHier_name()
{
    m_Hier_nameIsSet = false;
}
int32_t VRInstance::getParentId() const
{
    return m_Parent_id;
}

void VRInstance::setParentId(int32_t value)
{
    m_Parent_id = value;
    m_Parent_idIsSet = true;
}

bool VRInstance::parentIdIsSet() const
{
    return m_Parent_idIsSet;
}

void VRInstance::unsetParent_id()
{
    m_Parent_idIsSet = false;
}
utility::string_t VRInstance::getParentType() const
{
    return m_Parent_type;
}

void VRInstance::setParentType(const utility::string_t& value)
{
    m_Parent_type = value;
    m_Parent_typeIsSet = true;
}

bool VRInstance::parentTypeIsSet() const
{
    return m_Parent_typeIsSet;
}

void VRInstance::unsetParent_type()
{
    m_Parent_typeIsSet = false;
}
int32_t VRInstance::getMaster() const
{
    return m_Master;
}

void VRInstance::setMaster(int32_t value)
{
    m_Master = value;
    m_MasterIsSet = true;
}

bool VRInstance::masterIsSet() const
{
    return m_MasterIsSet;
}

void VRInstance::unsetMaster()
{
    m_MasterIsSet = false;
}
utility::string_t VRInstance::getMasterName() const
{
    return m_Master_name;
}

void VRInstance::setMasterName(const utility::string_t& value)
{
    m_Master_name = value;
    m_Master_nameIsSet = true;
}

bool VRInstance::masterNameIsSet() const
{
    return m_Master_nameIsSet;
}

void VRInstance::unsetMaster_name()
{
    m_Master_nameIsSet = false;
}
int32_t VRInstance::getMasterMaster() const
{
    return m_Master_master;
}

void VRInstance::setMasterMaster(int32_t value)
{
    m_Master_master = value;
    m_Master_masterIsSet = true;
}

bool VRInstance::masterMasterIsSet() const
{
    return m_Master_masterIsSet;
}

void VRInstance::unsetMaster_master()
{
    m_Master_masterIsSet = false;
}
std::vector<std::shared_ptr<VRSupplyInst>>& VRInstance::getSupplies()
{
    return m_Supplies;
}

void VRInstance::setSupplies(const std::vector<std::shared_ptr<VRSupplyInst>>& value)
{
    m_Supplies = value;
    m_SuppliesIsSet = true;
}

bool VRInstance::suppliesIsSet() const
{
    return m_SuppliesIsSet;
}

void VRInstance::unsetSupplies()
{
    m_SuppliesIsSet = false;
}
}
}

