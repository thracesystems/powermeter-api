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



#include "Defect0.h"

namespace powermeter {
namespace model {




Defect0::Defect0()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_D0 = 0.0;
    m_D0IsSet = false;
    m_date = utility::datetime();
    m_dateIsSet = false;
}

Defect0::~Defect0()
{
}

void Defect0::validate()
{
    // TODO: implement validation
}

web::json::value Defect0::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_D0IsSet)
    {
        val[utility::conversions::to_string_t("d0")] = ModelBase::toJson(m_D0);
    }
    if(m_dateIsSet)
    {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(m_date);
    }

    return val;
}

bool Defect0::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("d0")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("d0"));
        if(!fieldValue.is_null())
        {
            double refVal_d0;
            ok &= ModelBase::fromJson(fieldValue, refVal_d0);
            setD0(refVal_d0);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_date;
            ok &= ModelBase::fromJson(fieldValue, refVal_date);
            setDate(refVal_date);
        }
    }
    return ok;
}

void Defect0::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_D0IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("d0"), m_D0));
    }
    if(m_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("date"), m_date));
    }
}

bool Defect0::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("d0")))
    {
        double refVal_d0;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("d0")), refVal_d0 );
        setD0(refVal_d0);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("date")))
    {
        utility::datetime refVal_date;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("date")), refVal_date );
        setDate(refVal_date);
    }
    return ok;
}

int32_t Defect0::getId() const
{
    return m_Id;
}

void Defect0::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Defect0::idIsSet() const
{
    return m_IdIsSet;
}

void Defect0::unsetId()
{
    m_IdIsSet = false;
}
double Defect0::getD0() const
{
    return m_D0;
}

void Defect0::setD0(double value)
{
    m_D0 = value;
    m_D0IsSet = true;
}

bool Defect0::d0IsSet() const
{
    return m_D0IsSet;
}

void Defect0::unsetD0()
{
    m_D0IsSet = false;
}
utility::datetime Defect0::getDate() const
{
    return m_date;
}

void Defect0::setDate(const utility::datetime& value)
{
    m_date = value;
    m_dateIsSet = true;
}

bool Defect0::dateIsSet() const
{
    return m_dateIsSet;
}

void Defect0::unsetdate()
{
    m_dateIsSet = false;
}
}
}

