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



#include "StateEquaiton.h"

namespace powermeter {
namespace model {




StateEquaiton::StateEquaiton()
{
    m_Pin = utility::conversions::to_string_t("");
    m_PinIsSet = false;
    m_Equation = utility::conversions::to_string_t("");
    m_EquationIsSet = false;
}

StateEquaiton::~StateEquaiton()
{
}

void StateEquaiton::validate()
{
    // TODO: implement validation
}

web::json::value StateEquaiton::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PinIsSet)
    {
        val[utility::conversions::to_string_t("pin")] = ModelBase::toJson(m_Pin);
    }
    if(m_EquationIsSet)
    {
        val[utility::conversions::to_string_t("equation")] = ModelBase::toJson(m_Equation);
    }

    return val;
}

bool StateEquaiton::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pin"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_pin;
            ok &= ModelBase::fromJson(fieldValue, refVal_pin);
            setPin(refVal_pin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("equation")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("equation"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_equation;
            ok &= ModelBase::fromJson(fieldValue, refVal_equation);
            setEquation(refVal_equation);
        }
    }
    return ok;
}

void StateEquaiton::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pin"), m_Pin));
    }
    if(m_EquationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("equation"), m_Equation));
    }
}

bool StateEquaiton::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pin")))
    {
        utility::string_t refVal_pin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pin")), refVal_pin );
        setPin(refVal_pin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("equation")))
    {
        utility::string_t refVal_equation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("equation")), refVal_equation );
        setEquation(refVal_equation);
    }
    return ok;
}

utility::string_t StateEquaiton::getPin() const
{
    return m_Pin;
}

void StateEquaiton::setPin(const utility::string_t& value)
{
    m_Pin = value;
    m_PinIsSet = true;
}

bool StateEquaiton::pinIsSet() const
{
    return m_PinIsSet;
}

void StateEquaiton::unsetPin()
{
    m_PinIsSet = false;
}
utility::string_t StateEquaiton::getEquation() const
{
    return m_Equation;
}

void StateEquaiton::setEquation(const utility::string_t& value)
{
    m_Equation = value;
    m_EquationIsSet = true;
}

bool StateEquaiton::equationIsSet() const
{
    return m_EquationIsSet;
}

void StateEquaiton::unsetEquation()
{
    m_EquationIsSet = false;
}
}
}


