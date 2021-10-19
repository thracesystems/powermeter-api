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



#include "Hier.h"

namespace powermeter {
namespace model {




Hier::Hier()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Instance = false;
    m_InstanceIsSet = false;
    m_Group = false;
    m_GroupIsSet = false;
    m_ChildrenIsSet = false;
    m_Is_open = false;
    m_Is_openIsSet = false;
    m_Color = utility::conversions::to_string_t("");
    m_ColorIsSet = false;
    m_Parent = 0;
    m_ParentIsSet = false;
}

Hier::~Hier()
{
}

void Hier::validate()
{
    // TODO: implement validation
}

web::json::value Hier::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InstanceIsSet)
    {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(m_Instance);
    }
    if(m_GroupIsSet)
    {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(m_Group);
    }
    if(m_ChildrenIsSet)
    {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(m_Children);
    }
    if(m_Is_openIsSet)
    {
        val[utility::conversions::to_string_t("is_open")] = ModelBase::toJson(m_Is_open);
    }
    if(m_ColorIsSet)
    {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(m_Color);
    }
    if(m_ParentIsSet)
    {
        val[utility::conversions::to_string_t("parent")] = ModelBase::toJson(m_Parent);
    }

    return val;
}

bool Hier::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            bool refVal_instance;
            ok &= ModelBase::fromJson(fieldValue, refVal_instance);
            setInstance(refVal_instance);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            bool refVal_group;
            ok &= ModelBase::fromJson(fieldValue, refVal_group);
            setGroup(refVal_group);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_children;
            ok &= ModelBase::fromJson(fieldValue, refVal_children);
            setChildren(refVal_children);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_open")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_open"));
        if(!fieldValue.is_null())
        {
            bool refVal_is_open;
            ok &= ModelBase::fromJson(fieldValue, refVal_is_open);
            setIsOpen(refVal_is_open);
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
    if(val.has_field(utility::conversions::to_string_t("parent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_parent;
            ok &= ModelBase::fromJson(fieldValue, refVal_parent);
            setParent(refVal_parent);
        }
    }
    return ok;
}

void Hier::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InstanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("instance"), m_Instance));
    }
    if(m_GroupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("group"), m_Group));
    }
    if(m_ChildrenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("children"), m_Children));
    }
    if(m_Is_openIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("is_open"), m_Is_open));
    }
    if(m_ColorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("color"), m_Color));
    }
    if(m_ParentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parent"), m_Parent));
    }
}

bool Hier::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("instance")))
    {
        bool refVal_instance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("instance")), refVal_instance );
        setInstance(refVal_instance);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("group")))
    {
        bool refVal_group;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("group")), refVal_group );
        setGroup(refVal_group);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("children")))
    {
        std::vector<utility::string_t> refVal_children;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("children")), refVal_children );
        setChildren(refVal_children);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("is_open")))
    {
        bool refVal_is_open;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("is_open")), refVal_is_open );
        setIsOpen(refVal_is_open);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("color")))
    {
        utility::string_t refVal_color;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("color")), refVal_color );
        setColor(refVal_color);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parent")))
    {
        int32_t refVal_parent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parent")), refVal_parent );
        setParent(refVal_parent);
    }
    return ok;
}

utility::string_t Hier::getName() const
{
    return m_Name;
}

void Hier::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Hier::nameIsSet() const
{
    return m_NameIsSet;
}

void Hier::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Hier::getId() const
{
    return m_Id;
}

void Hier::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Hier::idIsSet() const
{
    return m_IdIsSet;
}

void Hier::unsetId()
{
    m_IdIsSet = false;
}
bool Hier::isInstance() const
{
    return m_Instance;
}

void Hier::setInstance(bool value)
{
    m_Instance = value;
    m_InstanceIsSet = true;
}

bool Hier::instanceIsSet() const
{
    return m_InstanceIsSet;
}

void Hier::unsetInstance()
{
    m_InstanceIsSet = false;
}
bool Hier::isGroup() const
{
    return m_Group;
}

void Hier::setGroup(bool value)
{
    m_Group = value;
    m_GroupIsSet = true;
}

bool Hier::groupIsSet() const
{
    return m_GroupIsSet;
}

void Hier::unsetGroup()
{
    m_GroupIsSet = false;
}
std::vector<utility::string_t>& Hier::getChildren()
{
    return m_Children;
}

void Hier::setChildren(const std::vector<utility::string_t>& value)
{
    m_Children = value;
    m_ChildrenIsSet = true;
}

bool Hier::childrenIsSet() const
{
    return m_ChildrenIsSet;
}

void Hier::unsetChildren()
{
    m_ChildrenIsSet = false;
}
bool Hier::isIsOpen() const
{
    return m_Is_open;
}

void Hier::setIsOpen(bool value)
{
    m_Is_open = value;
    m_Is_openIsSet = true;
}

bool Hier::isOpenIsSet() const
{
    return m_Is_openIsSet;
}

void Hier::unsetIs_open()
{
    m_Is_openIsSet = false;
}
utility::string_t Hier::getColor() const
{
    return m_Color;
}

void Hier::setColor(const utility::string_t& value)
{
    m_Color = value;
    m_ColorIsSet = true;
}

bool Hier::colorIsSet() const
{
    return m_ColorIsSet;
}

void Hier::unsetColor()
{
    m_ColorIsSet = false;
}
int32_t Hier::getParent() const
{
    return m_Parent;
}

void Hier::setParent(int32_t value)
{
    m_Parent = value;
    m_ParentIsSet = true;
}

bool Hier::parentIsSet() const
{
    return m_ParentIsSet;
}

void Hier::unsetParent()
{
    m_ParentIsSet = false;
}
}
}


