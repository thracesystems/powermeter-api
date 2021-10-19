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



#include "PCBSupplyInst.h"

namespace powermeter {
namespace model {




PCBSupplyInst::PCBSupplyInst()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Container = 0;
    m_ContainerIsSet = false;
    m_Master = 0;
    m_MasterIsSet = false;
    m_Color = utility::conversions::to_string_t("");
    m_ColorIsSet = false;
    m_Connection_color = utility::conversions::to_string_t("");
    m_Connection_colorIsSet = false;
    m_Master_name = utility::conversions::to_string_t("");
    m_Master_nameIsSet = false;
    m_Hier_name = utility::conversions::to_string_t("");
    m_Hier_nameIsSet = false;
}

PCBSupplyInst::~PCBSupplyInst()
{
}

void PCBSupplyInst::validate()
{
    // TODO: implement validation
}

web::json::value PCBSupplyInst::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ContainerIsSet)
    {
        val[utility::conversions::to_string_t("container")] = ModelBase::toJson(m_Container);
    }
    if(m_MasterIsSet)
    {
        val[utility::conversions::to_string_t("master")] = ModelBase::toJson(m_Master);
    }
    if(m_ColorIsSet)
    {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(m_Color);
    }
    if(m_Connection_colorIsSet)
    {
        val[utility::conversions::to_string_t("connection_color")] = ModelBase::toJson(m_Connection_color);
    }
    if(m_Master_nameIsSet)
    {
        val[utility::conversions::to_string_t("master_name")] = ModelBase::toJson(m_Master_name);
    }
    if(m_Hier_nameIsSet)
    {
        val[utility::conversions::to_string_t("hier_name")] = ModelBase::toJson(m_Hier_name);
    }

    return val;
}

bool PCBSupplyInst::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("container")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_container;
            ok &= ModelBase::fromJson(fieldValue, refVal_container);
            setContainer(refVal_container);
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
    if(val.has_field(utility::conversions::to_string_t("color")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_color;
            ok &= ModelBase::fromJson(fieldValue, refVal_color);
            setColor(refVal_color);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_color")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_color"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_connection_color;
            ok &= ModelBase::fromJson(fieldValue, refVal_connection_color);
            setConnectionColor(refVal_connection_color);
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
    return ok;
}

void PCBSupplyInst::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ContainerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("container"), m_Container));
    }
    if(m_MasterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("master"), m_Master));
    }
    if(m_ColorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("color"), m_Color));
    }
    if(m_Connection_colorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("connection_color"), m_Connection_color));
    }
    if(m_Master_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("master_name"), m_Master_name));
    }
    if(m_Hier_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hier_name"), m_Hier_name));
    }
}

bool PCBSupplyInst::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("container")))
    {
        int32_t refVal_container;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("container")), refVal_container );
        setContainer(refVal_container);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("master")))
    {
        int32_t refVal_master;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("master")), refVal_master );
        setMaster(refVal_master);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("color")))
    {
        utility::string_t refVal_color;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("color")), refVal_color );
        setColor(refVal_color);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("connection_color")))
    {
        utility::string_t refVal_connection_color;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("connection_color")), refVal_connection_color );
        setConnectionColor(refVal_connection_color);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("master_name")))
    {
        utility::string_t refVal_master_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("master_name")), refVal_master_name );
        setMasterName(refVal_master_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hier_name")))
    {
        utility::string_t refVal_hier_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hier_name")), refVal_hier_name );
        setHierName(refVal_hier_name);
    }
    return ok;
}

int32_t PCBSupplyInst::getId() const
{
    return m_Id;
}

void PCBSupplyInst::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool PCBSupplyInst::idIsSet() const
{
    return m_IdIsSet;
}

void PCBSupplyInst::unsetId()
{
    m_IdIsSet = false;
}
int32_t PCBSupplyInst::getContainer() const
{
    return m_Container;
}

void PCBSupplyInst::setContainer(int32_t value)
{
    m_Container = value;
    m_ContainerIsSet = true;
}

bool PCBSupplyInst::containerIsSet() const
{
    return m_ContainerIsSet;
}

void PCBSupplyInst::unsetContainer()
{
    m_ContainerIsSet = false;
}
int32_t PCBSupplyInst::getMaster() const
{
    return m_Master;
}

void PCBSupplyInst::setMaster(int32_t value)
{
    m_Master = value;
    m_MasterIsSet = true;
}

bool PCBSupplyInst::masterIsSet() const
{
    return m_MasterIsSet;
}

void PCBSupplyInst::unsetMaster()
{
    m_MasterIsSet = false;
}
utility::string_t PCBSupplyInst::getColor() const
{
    return m_Color;
}

void PCBSupplyInst::setColor(const utility::string_t& value)
{
    m_Color = value;
    m_ColorIsSet = true;
}

bool PCBSupplyInst::colorIsSet() const
{
    return m_ColorIsSet;
}

void PCBSupplyInst::unsetColor()
{
    m_ColorIsSet = false;
}
utility::string_t PCBSupplyInst::getConnectionColor() const
{
    return m_Connection_color;
}

void PCBSupplyInst::setConnectionColor(const utility::string_t& value)
{
    m_Connection_color = value;
    m_Connection_colorIsSet = true;
}

bool PCBSupplyInst::connectionColorIsSet() const
{
    return m_Connection_colorIsSet;
}

void PCBSupplyInst::unsetConnection_color()
{
    m_Connection_colorIsSet = false;
}
utility::string_t PCBSupplyInst::getMasterName() const
{
    return m_Master_name;
}

void PCBSupplyInst::setMasterName(const utility::string_t& value)
{
    m_Master_name = value;
    m_Master_nameIsSet = true;
}

bool PCBSupplyInst::masterNameIsSet() const
{
    return m_Master_nameIsSet;
}

void PCBSupplyInst::unsetMaster_name()
{
    m_Master_nameIsSet = false;
}
utility::string_t PCBSupplyInst::getHierName() const
{
    return m_Hier_name;
}

void PCBSupplyInst::setHierName(const utility::string_t& value)
{
    m_Hier_name = value;
    m_Hier_nameIsSet = true;
}

bool PCBSupplyInst::hierNameIsSet() const
{
    return m_Hier_nameIsSet;
}

void PCBSupplyInst::unsetHier_name()
{
    m_Hier_nameIsSet = false;
}
}
}

