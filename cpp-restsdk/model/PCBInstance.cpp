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



#include "PCBInstance.h"

namespace powermeter {
namespace model {




PCBInstance::PCBInstance()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Hier_name = utility::conversions::to_string_t("");
    m_Hier_nameIsSet = false;
    m_Master = 0;
    m_MasterIsSet = false;
    m_Master_master = 0;
    m_Master_masterIsSet = false;
    m_Master_name = utility::conversions::to_string_t("");
    m_Master_nameIsSet = false;
    m_SuppliesIsSet = false;
    m_VrIsSet = false;
    m_PackageIsSet = false;
    m_DesignIsSet = false;
}

PCBInstance::~PCBInstance()
{
}

void PCBInstance::validate()
{
    // TODO: implement validation
}

web::json::value PCBInstance::toJson() const
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
    if(m_MasterIsSet)
    {
        val[utility::conversions::to_string_t("master")] = ModelBase::toJson(m_Master);
    }
    if(m_Master_masterIsSet)
    {
        val[utility::conversions::to_string_t("master_master")] = ModelBase::toJson(m_Master_master);
    }
    if(m_Master_nameIsSet)
    {
        val[utility::conversions::to_string_t("master_name")] = ModelBase::toJson(m_Master_name);
    }
    if(m_SuppliesIsSet)
    {
        val[utility::conversions::to_string_t("supplies")] = ModelBase::toJson(m_Supplies);
    }
    if(m_VrIsSet)
    {
        val[utility::conversions::to_string_t("vr")] = ModelBase::toJson(m_Vr);
    }
    if(m_PackageIsSet)
    {
        val[utility::conversions::to_string_t("package")] = ModelBase::toJson(m_Package);
    }
    if(m_DesignIsSet)
    {
        val[utility::conversions::to_string_t("design")] = ModelBase::toJson(m_Design);
    }

    return val;
}

bool PCBInstance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("supplies")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supplies"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<PCBSupplyInst>> refVal_supplies;
            ok &= ModelBase::fromJson(fieldValue, refVal_supplies);
            setSupplies(refVal_supplies);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vr")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vr"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<VRInstance>> refVal_vr;
            ok &= ModelBase::fromJson(fieldValue, refVal_vr);
            setVr(refVal_vr);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<PackageInstance>> refVal_package;
            ok &= ModelBase::fromJson(fieldValue, refVal_package);
            setPackage(refVal_package);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("design")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("design"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DesignInstance>> refVal_design;
            ok &= ModelBase::fromJson(fieldValue, refVal_design);
            setDesign(refVal_design);
        }
    }
    return ok;
}

void PCBInstance::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_MasterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("master"), m_Master));
    }
    if(m_Master_masterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("master_master"), m_Master_master));
    }
    if(m_Master_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("master_name"), m_Master_name));
    }
    if(m_SuppliesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("supplies"), m_Supplies));
    }
    if(m_VrIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("vr"), m_Vr));
    }
    if(m_PackageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("package"), m_Package));
    }
    if(m_DesignIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("design"), m_Design));
    }
}

bool PCBInstance::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("master")))
    {
        int32_t refVal_master;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("master")), refVal_master );
        setMaster(refVal_master);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("master_master")))
    {
        int32_t refVal_master_master;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("master_master")), refVal_master_master );
        setMasterMaster(refVal_master_master);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("master_name")))
    {
        utility::string_t refVal_master_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("master_name")), refVal_master_name );
        setMasterName(refVal_master_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("supplies")))
    {
        std::vector<std::shared_ptr<PCBSupplyInst>> refVal_supplies;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("supplies")), refVal_supplies );
        setSupplies(refVal_supplies);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("vr")))
    {
        std::vector<std::shared_ptr<VRInstance>> refVal_vr;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("vr")), refVal_vr );
        setVr(refVal_vr);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("package")))
    {
        std::vector<std::shared_ptr<PackageInstance>> refVal_package;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("package")), refVal_package );
        setPackage(refVal_package);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("design")))
    {
        std::vector<std::shared_ptr<DesignInstance>> refVal_design;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("design")), refVal_design );
        setDesign(refVal_design);
    }
    return ok;
}

int32_t PCBInstance::getId() const
{
    return m_Id;
}

void PCBInstance::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool PCBInstance::idIsSet() const
{
    return m_IdIsSet;
}

void PCBInstance::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t PCBInstance::getName() const
{
    return m_Name;
}

void PCBInstance::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool PCBInstance::nameIsSet() const
{
    return m_NameIsSet;
}

void PCBInstance::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t PCBInstance::getHierName() const
{
    return m_Hier_name;
}

void PCBInstance::setHierName(const utility::string_t& value)
{
    m_Hier_name = value;
    m_Hier_nameIsSet = true;
}

bool PCBInstance::hierNameIsSet() const
{
    return m_Hier_nameIsSet;
}

void PCBInstance::unsetHier_name()
{
    m_Hier_nameIsSet = false;
}
int32_t PCBInstance::getMaster() const
{
    return m_Master;
}

void PCBInstance::setMaster(int32_t value)
{
    m_Master = value;
    m_MasterIsSet = true;
}

bool PCBInstance::masterIsSet() const
{
    return m_MasterIsSet;
}

void PCBInstance::unsetMaster()
{
    m_MasterIsSet = false;
}
int32_t PCBInstance::getMasterMaster() const
{
    return m_Master_master;
}

void PCBInstance::setMasterMaster(int32_t value)
{
    m_Master_master = value;
    m_Master_masterIsSet = true;
}

bool PCBInstance::masterMasterIsSet() const
{
    return m_Master_masterIsSet;
}

void PCBInstance::unsetMaster_master()
{
    m_Master_masterIsSet = false;
}
utility::string_t PCBInstance::getMasterName() const
{
    return m_Master_name;
}

void PCBInstance::setMasterName(const utility::string_t& value)
{
    m_Master_name = value;
    m_Master_nameIsSet = true;
}

bool PCBInstance::masterNameIsSet() const
{
    return m_Master_nameIsSet;
}

void PCBInstance::unsetMaster_name()
{
    m_Master_nameIsSet = false;
}
std::vector<std::shared_ptr<PCBSupplyInst>>& PCBInstance::getSupplies()
{
    return m_Supplies;
}

void PCBInstance::setSupplies(const std::vector<std::shared_ptr<PCBSupplyInst>>& value)
{
    m_Supplies = value;
    m_SuppliesIsSet = true;
}

bool PCBInstance::suppliesIsSet() const
{
    return m_SuppliesIsSet;
}

void PCBInstance::unsetSupplies()
{
    m_SuppliesIsSet = false;
}
std::vector<std::shared_ptr<VRInstance>>& PCBInstance::getVr()
{
    return m_Vr;
}

void PCBInstance::setVr(const std::vector<std::shared_ptr<VRInstance>>& value)
{
    m_Vr = value;
    m_VrIsSet = true;
}

bool PCBInstance::vrIsSet() const
{
    return m_VrIsSet;
}

void PCBInstance::unsetVr()
{
    m_VrIsSet = false;
}
std::vector<std::shared_ptr<PackageInstance>>& PCBInstance::getPackage()
{
    return m_Package;
}

void PCBInstance::setPackage(const std::vector<std::shared_ptr<PackageInstance>>& value)
{
    m_Package = value;
    m_PackageIsSet = true;
}

bool PCBInstance::packageIsSet() const
{
    return m_PackageIsSet;
}

void PCBInstance::unsetPackage()
{
    m_PackageIsSet = false;
}
std::vector<std::shared_ptr<DesignInstance>>& PCBInstance::getDesign()
{
    return m_Design;
}

void PCBInstance::setDesign(const std::vector<std::shared_ptr<DesignInstance>>& value)
{
    m_Design = value;
    m_DesignIsSet = true;
}

bool PCBInstance::designIsSet() const
{
    return m_DesignIsSet;
}

void PCBInstance::unsetDesign()
{
    m_DesignIsSet = false;
}
}
}

