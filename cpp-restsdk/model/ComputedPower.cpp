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



#include "ComputedPower.h"

namespace powermeter {
namespace model {




ComputedPower::ComputedPower()
{
    m_Supply = utility::conversions::to_string_t("");
    m_SupplyIsSet = false;
    m_Energy = 0.0;
    m_EnergyIsSet = false;
    m_Leakage = 0.0;
    m_LeakageIsSet = false;
}

ComputedPower::~ComputedPower()
{
}

void ComputedPower::validate()
{
    // TODO: implement validation
}

web::json::value ComputedPower::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SupplyIsSet)
    {
        val[utility::conversions::to_string_t("supply")] = ModelBase::toJson(m_Supply);
    }
    if(m_EnergyIsSet)
    {
        val[utility::conversions::to_string_t("energy")] = ModelBase::toJson(m_Energy);
    }
    if(m_LeakageIsSet)
    {
        val[utility::conversions::to_string_t("leakage")] = ModelBase::toJson(m_Leakage);
    }

    return val;
}

bool ComputedPower::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("supply")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supply"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_supply;
            ok &= ModelBase::fromJson(fieldValue, refVal_supply);
            setSupply(refVal_supply);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("energy")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("energy"));
        if(!fieldValue.is_null())
        {
            double refVal_energy;
            ok &= ModelBase::fromJson(fieldValue, refVal_energy);
            setEnergy(refVal_energy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leakage")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("leakage"));
        if(!fieldValue.is_null())
        {
            double refVal_leakage;
            ok &= ModelBase::fromJson(fieldValue, refVal_leakage);
            setLeakage(refVal_leakage);
        }
    }
    return ok;
}

void ComputedPower::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SupplyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("supply"), m_Supply));
    }
    if(m_EnergyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("energy"), m_Energy));
    }
    if(m_LeakageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("leakage"), m_Leakage));
    }
}

bool ComputedPower::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("supply")))
    {
        utility::string_t refVal_supply;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("supply")), refVal_supply );
        setSupply(refVal_supply);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("energy")))
    {
        double refVal_energy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("energy")), refVal_energy );
        setEnergy(refVal_energy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("leakage")))
    {
        double refVal_leakage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("leakage")), refVal_leakage );
        setLeakage(refVal_leakage);
    }
    return ok;
}

utility::string_t ComputedPower::getSupply() const
{
    return m_Supply;
}

void ComputedPower::setSupply(const utility::string_t& value)
{
    m_Supply = value;
    m_SupplyIsSet = true;
}

bool ComputedPower::supplyIsSet() const
{
    return m_SupplyIsSet;
}

void ComputedPower::unsetSupply()
{
    m_SupplyIsSet = false;
}
double ComputedPower::getEnergy() const
{
    return m_Energy;
}

void ComputedPower::setEnergy(double value)
{
    m_Energy = value;
    m_EnergyIsSet = true;
}

bool ComputedPower::energyIsSet() const
{
    return m_EnergyIsSet;
}

void ComputedPower::unsetEnergy()
{
    m_EnergyIsSet = false;
}
double ComputedPower::getLeakage() const
{
    return m_Leakage;
}

void ComputedPower::setLeakage(double value)
{
    m_Leakage = value;
    m_LeakageIsSet = true;
}

bool ComputedPower::leakageIsSet() const
{
    return m_LeakageIsSet;
}

void ComputedPower::unsetLeakage()
{
    m_LeakageIsSet = false;
}
}
}


