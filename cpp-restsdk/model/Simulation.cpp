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



#include "Simulation.h"

namespace powermeter {
namespace model {




Simulation::Simulation()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Editable = false;
    m_EditableIsSet = false;
    m_OrderIsSet = false;
}

Simulation::~Simulation()
{
}

void Simulation::validate()
{
    // TODO: implement validation
}

web::json::value Simulation::toJson() const
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
    if(m_EditableIsSet)
    {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(m_Editable);
    }
    if(m_OrderIsSet)
    {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(m_Order);
    }

    return val;
}

bool Simulation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("order")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_order;
            ok &= ModelBase::fromJson(fieldValue, refVal_order);
            setOrder(refVal_order);
        }
    }
    return ok;
}

void Simulation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_EditableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("editable"), m_Editable));
    }
    if(m_OrderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order"), m_Order));
    }
}

bool Simulation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("editable")))
    {
        bool refVal_editable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("editable")), refVal_editable );
        setEditable(refVal_editable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order")))
    {
        std::vector<int32_t> refVal_order;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("order")), refVal_order );
        setOrder(refVal_order);
    }
    return ok;
}

int32_t Simulation::getId() const
{
    return m_Id;
}

void Simulation::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Simulation::idIsSet() const
{
    return m_IdIsSet;
}

void Simulation::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Simulation::getName() const
{
    return m_Name;
}

void Simulation::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Simulation::nameIsSet() const
{
    return m_NameIsSet;
}

void Simulation::unsetName()
{
    m_NameIsSet = false;
}
bool Simulation::isEditable() const
{
    return m_Editable;
}

void Simulation::setEditable(bool value)
{
    m_Editable = value;
    m_EditableIsSet = true;
}

bool Simulation::editableIsSet() const
{
    return m_EditableIsSet;
}

void Simulation::unsetEditable()
{
    m_EditableIsSet = false;
}
std::vector<int32_t>& Simulation::getOrder()
{
    return m_Order;
}

void Simulation::setOrder(std::vector<int32_t> value)
{
    m_Order = value;
    m_OrderIsSet = true;
}

bool Simulation::orderIsSet() const
{
    return m_OrderIsSet;
}

void Simulation::unsetOrder()
{
    m_OrderIsSet = false;
}
}
}

