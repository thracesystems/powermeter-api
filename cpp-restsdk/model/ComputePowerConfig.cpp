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



#include "ComputePowerConfig.h"

namespace powermeter {
namespace model {




ComputePowerConfig::ComputePowerConfig()
{
    m_Source_scaling = utility::conversions::to_string_t("");
    m_Source_scalingIsSet = false;
    m_Tech_scaling = false;
    m_Tech_scalingIsSet = false;
}

ComputePowerConfig::~ComputePowerConfig()
{
}

void ComputePowerConfig::validate()
{
    // TODO: implement validation
}

web::json::value ComputePowerConfig::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Source_scalingIsSet)
    {
        val[utility::conversions::to_string_t("source_scaling")] = ModelBase::toJson(m_Source_scaling);
    }
    if(m_Tech_scalingIsSet)
    {
        val[utility::conversions::to_string_t("tech_scaling")] = ModelBase::toJson(m_Tech_scaling);
    }

    return val;
}

bool ComputePowerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_scaling")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_scaling"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_source_scaling;
            ok &= ModelBase::fromJson(fieldValue, refVal_source_scaling);
            setSourceScaling(refVal_source_scaling);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tech_scaling")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tech_scaling"));
        if(!fieldValue.is_null())
        {
            bool refVal_tech_scaling;
            ok &= ModelBase::fromJson(fieldValue, refVal_tech_scaling);
            setTechScaling(refVal_tech_scaling);
        }
    }
    return ok;
}

void ComputePowerConfig::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Source_scalingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("source_scaling"), m_Source_scaling));
    }
    if(m_Tech_scalingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tech_scaling"), m_Tech_scaling));
    }
}

bool ComputePowerConfig::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("source_scaling")))
    {
        utility::string_t refVal_source_scaling;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("source_scaling")), refVal_source_scaling );
        setSourceScaling(refVal_source_scaling);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tech_scaling")))
    {
        bool refVal_tech_scaling;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tech_scaling")), refVal_tech_scaling );
        setTechScaling(refVal_tech_scaling);
    }
    return ok;
}

utility::string_t ComputePowerConfig::getSourceScaling() const
{
    return m_Source_scaling;
}

void ComputePowerConfig::setSourceScaling(const utility::string_t& value)
{
    m_Source_scaling = value;
    m_Source_scalingIsSet = true;
}

bool ComputePowerConfig::sourceScalingIsSet() const
{
    return m_Source_scalingIsSet;
}

void ComputePowerConfig::unsetSource_scaling()
{
    m_Source_scalingIsSet = false;
}
bool ComputePowerConfig::isTechScaling() const
{
    return m_Tech_scaling;
}

void ComputePowerConfig::setTechScaling(bool value)
{
    m_Tech_scaling = value;
    m_Tech_scalingIsSet = true;
}

bool ComputePowerConfig::techScalingIsSet() const
{
    return m_Tech_scalingIsSet;
}

void ComputePowerConfig::unsetTech_scaling()
{
    m_Tech_scalingIsSet = false;
}
}
}


