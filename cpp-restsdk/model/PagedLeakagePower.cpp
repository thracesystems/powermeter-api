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



#include "PagedLeakagePower.h"

namespace powermeter {
namespace model {




PagedLeakagePower::PagedLeakagePower()
{
    m_Page = 0;
    m_PageIsSet = false;
    m_Pages = 0;
    m_PagesIsSet = false;
    m_PowerIsSet = false;
}

PagedLeakagePower::~PagedLeakagePower()
{
}

void PagedLeakagePower::validate()
{
    // TODO: implement validation
}

web::json::value PagedLeakagePower::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PageIsSet)
    {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(m_Page);
    }
    if(m_PagesIsSet)
    {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(m_Pages);
    }
    if(m_PowerIsSet)
    {
        val[utility::conversions::to_string_t("power")] = ModelBase::toJson(m_Power);
    }

    return val;
}

bool PagedLeakagePower::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_page;
            ok &= ModelBase::fromJson(fieldValue, refVal_page);
            setPage(refVal_page);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pages")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_pages;
            ok &= ModelBase::fromJson(fieldValue, refVal_pages);
            setPages(refVal_pages);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("power")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("power"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<LeakagePower>> refVal_power;
            ok &= ModelBase::fromJson(fieldValue, refVal_power);
            setPower(refVal_power);
        }
    }
    return ok;
}

void PagedLeakagePower::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("page"), m_Page));
    }
    if(m_PagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pages"), m_Pages));
    }
    if(m_PowerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("power"), m_Power));
    }
}

bool PagedLeakagePower::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("page")))
    {
        int32_t refVal_page;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("page")), refVal_page );
        setPage(refVal_page);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pages")))
    {
        int32_t refVal_pages;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pages")), refVal_pages );
        setPages(refVal_pages);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("power")))
    {
        std::vector<std::shared_ptr<LeakagePower>> refVal_power;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("power")), refVal_power );
        setPower(refVal_power);
    }
    return ok;
}

int32_t PagedLeakagePower::getPage() const
{
    return m_Page;
}

void PagedLeakagePower::setPage(int32_t value)
{
    m_Page = value;
    m_PageIsSet = true;
}

bool PagedLeakagePower::pageIsSet() const
{
    return m_PageIsSet;
}

void PagedLeakagePower::unsetPage()
{
    m_PageIsSet = false;
}
int32_t PagedLeakagePower::getPages() const
{
    return m_Pages;
}

void PagedLeakagePower::setPages(int32_t value)
{
    m_Pages = value;
    m_PagesIsSet = true;
}

bool PagedLeakagePower::pagesIsSet() const
{
    return m_PagesIsSet;
}

void PagedLeakagePower::unsetPages()
{
    m_PagesIsSet = false;
}
std::vector<std::shared_ptr<LeakagePower>>& PagedLeakagePower::getPower()
{
    return m_Power;
}

void PagedLeakagePower::setPower(const std::vector<std::shared_ptr<LeakagePower>>& value)
{
    m_Power = value;
    m_PowerIsSet = true;
}

bool PagedLeakagePower::powerIsSet() const
{
    return m_PowerIsSet;
}

void PagedLeakagePower::unsetPower()
{
    m_PowerIsSet = false;
}
}
}


