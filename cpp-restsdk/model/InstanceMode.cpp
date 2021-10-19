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



#include "InstanceMode.h"

namespace powermeter {
namespace model {




InstanceMode::InstanceMode()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_Designmode = 0;
    m_DesignmodeIsSet = false;
    m_UtilizationsIsSet = false;
    m_ConfigIsSet = false;
}

InstanceMode::~InstanceMode()
{
}

void InstanceMode::validate()
{
    // TODO: implement validation
}

web::json::value InstanceMode::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_DesignmodeIsSet)
    {
        val[utility::conversions::to_string_t("designmode")] = ModelBase::toJson(m_Designmode);
    }
    if(m_UtilizationsIsSet)
    {
        val[utility::conversions::to_string_t("utilizations")] = ModelBase::toJson(m_Utilizations);
    }
    if(m_ConfigIsSet)
    {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(m_Config);
    }

    return val;
}

bool InstanceMode::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("designmode")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("designmode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_designmode;
            ok &= ModelBase::fromJson(fieldValue, refVal_designmode);
            setDesignmode(refVal_designmode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("utilizations")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("utilizations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<InstanceModeUtilization>> refVal_utilizations;
            ok &= ModelBase::fromJson(fieldValue, refVal_utilizations);
            setUtilizations(refVal_utilizations);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<InstanceModeConfig>> refVal_config;
            ok &= ModelBase::fromJson(fieldValue, refVal_config);
            setConfig(refVal_config);
        }
    }
    return ok;
}

void InstanceMode::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DesignmodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("designmode"), m_Designmode));
    }
    if(m_UtilizationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("utilizations"), m_Utilizations));
    }
    if(m_ConfigIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("config"), m_Config));
    }
}

bool InstanceMode::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("designmode")))
    {
        int32_t refVal_designmode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("designmode")), refVal_designmode );
        setDesignmode(refVal_designmode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("utilizations")))
    {
        std::vector<std::shared_ptr<InstanceModeUtilization>> refVal_utilizations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("utilizations")), refVal_utilizations );
        setUtilizations(refVal_utilizations);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("config")))
    {
        std::vector<std::shared_ptr<InstanceModeConfig>> refVal_config;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("config")), refVal_config );
        setConfig(refVal_config);
    }
    return ok;
}

int32_t InstanceMode::getId() const
{
    return m_Id;
}

void InstanceMode::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool InstanceMode::idIsSet() const
{
    return m_IdIsSet;
}

void InstanceMode::unsetId()
{
    m_IdIsSet = false;
}
int32_t InstanceMode::getDesignmode() const
{
    return m_Designmode;
}

void InstanceMode::setDesignmode(int32_t value)
{
    m_Designmode = value;
    m_DesignmodeIsSet = true;
}

bool InstanceMode::designmodeIsSet() const
{
    return m_DesignmodeIsSet;
}

void InstanceMode::unsetDesignmode()
{
    m_DesignmodeIsSet = false;
}
std::vector<std::shared_ptr<InstanceModeUtilization>>& InstanceMode::getUtilizations()
{
    return m_Utilizations;
}

void InstanceMode::setUtilizations(const std::vector<std::shared_ptr<InstanceModeUtilization>>& value)
{
    m_Utilizations = value;
    m_UtilizationsIsSet = true;
}

bool InstanceMode::utilizationsIsSet() const
{
    return m_UtilizationsIsSet;
}

void InstanceMode::unsetUtilizations()
{
    m_UtilizationsIsSet = false;
}
std::vector<std::shared_ptr<InstanceModeConfig>>& InstanceMode::getConfig()
{
    return m_Config;
}

void InstanceMode::setConfig(const std::vector<std::shared_ptr<InstanceModeConfig>>& value)
{
    m_Config = value;
    m_ConfigIsSet = true;
}

bool InstanceMode::configIsSet() const
{
    return m_ConfigIsSet;
}

void InstanceMode::unsetConfig()
{
    m_ConfigIsSet = false;
}
}
}


