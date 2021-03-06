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



#include "DashboardRow.h"

namespace powermeter {
namespace model {




DashboardRow::DashboardRow()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Order = 0;
    m_OrderIsSet = false;
    m_Field = utility::conversions::to_string_t("");
    m_FieldIsSet = false;
    m_Format = utility::conversions::to_string_t("");
    m_FormatIsSet = false;
    m_Units = utility::conversions::to_string_t("");
    m_UnitsIsSet = false;
}

DashboardRow::~DashboardRow()
{
}

void DashboardRow::validate()
{
    // TODO: implement validation
}

web::json::value DashboardRow::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }
    if(m_OrderIsSet)
    {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(m_Order);
    }
    if(m_FieldIsSet)
    {
        val[utility::conversions::to_string_t("field")] = ModelBase::toJson(m_Field);
    }
    if(m_FormatIsSet)
    {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(m_Format);
    }
    if(m_UnitsIsSet)
    {
        val[utility::conversions::to_string_t("units")] = ModelBase::toJson(m_Units);
    }

    return val;
}

bool DashboardRow::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_title);
            setTitle(refVal_title);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_order;
            ok &= ModelBase::fromJson(fieldValue, refVal_order);
            setOrder(refVal_order);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_field;
            ok &= ModelBase::fromJson(fieldValue, refVal_field);
            setField(refVal_field);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_format;
            ok &= ModelBase::fromJson(fieldValue, refVal_format);
            setFormat(refVal_format);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("units")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("units"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_units;
            ok &= ModelBase::fromJson(fieldValue, refVal_units);
            setUnits(refVal_units);
        }
    }
    return ok;
}

void DashboardRow::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    }
    if(m_OrderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("order"), m_Order));
    }
    if(m_FieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("field"), m_Field));
    }
    if(m_FormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("format"), m_Format));
    }
    if(m_UnitsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("units"), m_Units));
    }
}

bool DashboardRow::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        utility::string_t refVal_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("title")), refVal_title );
        setTitle(refVal_title);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("order")))
    {
        int32_t refVal_order;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("order")), refVal_order );
        setOrder(refVal_order);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("field")))
    {
        utility::string_t refVal_field;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("field")), refVal_field );
        setField(refVal_field);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("format")))
    {
        utility::string_t refVal_format;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("format")), refVal_format );
        setFormat(refVal_format);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("units")))
    {
        utility::string_t refVal_units;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("units")), refVal_units );
        setUnits(refVal_units);
    }
    return ok;
}

int32_t DashboardRow::getId() const
{
    return m_Id;
}

void DashboardRow::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DashboardRow::idIsSet() const
{
    return m_IdIsSet;
}

void DashboardRow::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t DashboardRow::getTitle() const
{
    return m_Title;
}

void DashboardRow::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool DashboardRow::titleIsSet() const
{
    return m_TitleIsSet;
}

void DashboardRow::unsetTitle()
{
    m_TitleIsSet = false;
}
int32_t DashboardRow::getOrder() const
{
    return m_Order;
}

void DashboardRow::setOrder(int32_t value)
{
    m_Order = value;
    m_OrderIsSet = true;
}

bool DashboardRow::orderIsSet() const
{
    return m_OrderIsSet;
}

void DashboardRow::unsetOrder()
{
    m_OrderIsSet = false;
}
utility::string_t DashboardRow::getField() const
{
    return m_Field;
}

void DashboardRow::setField(const utility::string_t& value)
{
    m_Field = value;
    m_FieldIsSet = true;
}

bool DashboardRow::fieldIsSet() const
{
    return m_FieldIsSet;
}

void DashboardRow::unsetField()
{
    m_FieldIsSet = false;
}
utility::string_t DashboardRow::getFormat() const
{
    return m_Format;
}

void DashboardRow::setFormat(const utility::string_t& value)
{
    m_Format = value;
    m_FormatIsSet = true;
}

bool DashboardRow::formatIsSet() const
{
    return m_FormatIsSet;
}

void DashboardRow::unsetFormat()
{
    m_FormatIsSet = false;
}
utility::string_t DashboardRow::getUnits() const
{
    return m_Units;
}

void DashboardRow::setUnits(const utility::string_t& value)
{
    m_Units = value;
    m_UnitsIsSet = true;
}

bool DashboardRow::unitsIsSet() const
{
    return m_UnitsIsSet;
}

void DashboardRow::unsetUnits()
{
    m_UnitsIsSet = false;
}
}
}


