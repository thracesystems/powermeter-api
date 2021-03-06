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



#include "ComputedContributorPower_1.h"

namespace powermeter {
namespace model {




ComputedContributorPower_1::ComputedContributorPower_1()
{
    m_p = utility::conversions::to_string_t("");
    m_pIsSet = false;
    m_v = 0.0;
    m_vIsSet = false;
    m_t = 0;
    m_tIsSet = false;
    m_Power = 0.0;
    m_PowerIsSet = false;
}

ComputedContributorPower_1::~ComputedContributorPower_1()
{
}

void ComputedContributorPower_1::validate()
{
    // TODO: implement validation
}

web::json::value ComputedContributorPower_1::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_pIsSet)
    {
        val[utility::conversions::to_string_t("p")] = ModelBase::toJson(m_p);
    }
    if(m_vIsSet)
    {
        val[utility::conversions::to_string_t("v")] = ModelBase::toJson(m_v);
    }
    if(m_tIsSet)
    {
        val[utility::conversions::to_string_t("t")] = ModelBase::toJson(m_t);
    }
    if(m_PowerIsSet)
    {
        val[utility::conversions::to_string_t("power")] = ModelBase::toJson(m_Power);
    }

    return val;
}

bool ComputedContributorPower_1::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("p")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("p"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_p;
            ok &= ModelBase::fromJson(fieldValue, refVal_p);
            setP(refVal_p);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("v")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("v"));
        if(!fieldValue.is_null())
        {
            double refVal_v;
            ok &= ModelBase::fromJson(fieldValue, refVal_v);
            setV(refVal_v);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("t")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("t"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_t;
            ok &= ModelBase::fromJson(fieldValue, refVal_t);
            setT(refVal_t);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("power")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("power"));
        if(!fieldValue.is_null())
        {
            double refVal_power;
            ok &= ModelBase::fromJson(fieldValue, refVal_power);
            setPower(refVal_power);
        }
    }
    return ok;
}

void ComputedContributorPower_1::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_pIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("p"), m_p));
    }
    if(m_vIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("v"), m_v));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("t"), m_t));
    }
    if(m_PowerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("power"), m_Power));
    }
}

bool ComputedContributorPower_1::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("p")))
    {
        utility::string_t refVal_p;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("p")), refVal_p );
        setP(refVal_p);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("v")))
    {
        double refVal_v;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("v")), refVal_v );
        setV(refVal_v);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("t")))
    {
        int32_t refVal_t;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("t")), refVal_t );
        setT(refVal_t);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("power")))
    {
        double refVal_power;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("power")), refVal_power );
        setPower(refVal_power);
    }
    return ok;
}

utility::string_t ComputedContributorPower_1::getP() const
{
    return m_p;
}

void ComputedContributorPower_1::setP(const utility::string_t& value)
{
    m_p = value;
    m_pIsSet = true;
}

bool ComputedContributorPower_1::PIsSet() const
{
    return m_pIsSet;
}

void ComputedContributorPower_1::unsetp()
{
    m_pIsSet = false;
}
double ComputedContributorPower_1::getV() const
{
    return m_v;
}

void ComputedContributorPower_1::setV(double value)
{
    m_v = value;
    m_vIsSet = true;
}

bool ComputedContributorPower_1::VIsSet() const
{
    return m_vIsSet;
}

void ComputedContributorPower_1::unsetv()
{
    m_vIsSet = false;
}
int32_t ComputedContributorPower_1::getT() const
{
    return m_t;
}

void ComputedContributorPower_1::setT(int32_t value)
{
    m_t = value;
    m_tIsSet = true;
}

bool ComputedContributorPower_1::TIsSet() const
{
    return m_tIsSet;
}

void ComputedContributorPower_1::unsett()
{
    m_tIsSet = false;
}
double ComputedContributorPower_1::getPower() const
{
    return m_Power;
}

void ComputedContributorPower_1::setPower(double value)
{
    m_Power = value;
    m_PowerIsSet = true;
}

bool ComputedContributorPower_1::powerIsSet() const
{
    return m_PowerIsSet;
}

void ComputedContributorPower_1::unsetPower()
{
    m_PowerIsSet = false;
}
}
}


