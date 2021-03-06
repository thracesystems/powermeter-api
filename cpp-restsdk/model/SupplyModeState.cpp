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



#include "SupplyModeState.h"

namespace powermeter {
namespace model {




SupplyModeState::SupplyModeState()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Mode = 0;
    m_ModeIsSet = false;
    m_Supply = 0;
    m_SupplyIsSet = false;
    m_On = false;
    m_OnIsSet = false;
    m_Voltage = 0.0;
    m_VoltageIsSet = false;
}

SupplyModeState::~SupplyModeState()
{
}

void SupplyModeState::validate()
{
    // TODO: implement validation
}

web::json::value SupplyModeState::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ModeIsSet)
    {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(m_Mode);
    }
    if(m_SupplyIsSet)
    {
        val[utility::conversions::to_string_t("supply")] = ModelBase::toJson(m_Supply);
    }
    if(m_OnIsSet)
    {
        val[utility::conversions::to_string_t("on")] = ModelBase::toJson(m_On);
    }
    if(m_VoltageIsSet)
    {
        val[utility::conversions::to_string_t("voltage")] = ModelBase::toJson(m_Voltage);
    }

    return val;
}

bool SupplyModeState::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mode")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_mode;
            ok &= ModelBase::fromJson(fieldValue, refVal_mode);
            setMode(refVal_mode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supply")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supply"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_supply;
            ok &= ModelBase::fromJson(fieldValue, refVal_supply);
            setSupply(refVal_supply);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("on")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("on"));
        if(!fieldValue.is_null())
        {
            bool refVal_on;
            ok &= ModelBase::fromJson(fieldValue, refVal_on);
            setOn(refVal_on);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voltage")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voltage"));
        if(!fieldValue.is_null())
        {
            double refVal_voltage;
            ok &= ModelBase::fromJson(fieldValue, refVal_voltage);
            setVoltage(refVal_voltage);
        }
    }
    return ok;
}

void SupplyModeState::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mode"), m_Mode));
    }
    if(m_SupplyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("supply"), m_Supply));
    }
    if(m_OnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("on"), m_On));
    }
    if(m_VoltageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("voltage"), m_Voltage));
    }
}

bool SupplyModeState::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("mode")))
    {
        int32_t refVal_mode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mode")), refVal_mode );
        setMode(refVal_mode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("supply")))
    {
        int32_t refVal_supply;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("supply")), refVal_supply );
        setSupply(refVal_supply);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("on")))
    {
        bool refVal_on;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("on")), refVal_on );
        setOn(refVal_on);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("voltage")))
    {
        double refVal_voltage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("voltage")), refVal_voltage );
        setVoltage(refVal_voltage);
    }
    return ok;
}

int32_t SupplyModeState::getId() const
{
    return m_Id;
}

void SupplyModeState::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SupplyModeState::idIsSet() const
{
    return m_IdIsSet;
}

void SupplyModeState::unsetId()
{
    m_IdIsSet = false;
}
int32_t SupplyModeState::getMode() const
{
    return m_Mode;
}

void SupplyModeState::setMode(int32_t value)
{
    m_Mode = value;
    m_ModeIsSet = true;
}

bool SupplyModeState::modeIsSet() const
{
    return m_ModeIsSet;
}

void SupplyModeState::unsetMode()
{
    m_ModeIsSet = false;
}
int32_t SupplyModeState::getSupply() const
{
    return m_Supply;
}

void SupplyModeState::setSupply(int32_t value)
{
    m_Supply = value;
    m_SupplyIsSet = true;
}

bool SupplyModeState::supplyIsSet() const
{
    return m_SupplyIsSet;
}

void SupplyModeState::unsetSupply()
{
    m_SupplyIsSet = false;
}
bool SupplyModeState::isOn() const
{
    return m_On;
}

void SupplyModeState::setOn(bool value)
{
    m_On = value;
    m_OnIsSet = true;
}

bool SupplyModeState::onIsSet() const
{
    return m_OnIsSet;
}

void SupplyModeState::unsetOn()
{
    m_OnIsSet = false;
}
double SupplyModeState::getVoltage() const
{
    return m_Voltage;
}

void SupplyModeState::setVoltage(double value)
{
    m_Voltage = value;
    m_VoltageIsSet = true;
}

bool SupplyModeState::voltageIsSet() const
{
    return m_VoltageIsSet;
}

void SupplyModeState::unsetVoltage()
{
    m_VoltageIsSet = false;
}
}
}


