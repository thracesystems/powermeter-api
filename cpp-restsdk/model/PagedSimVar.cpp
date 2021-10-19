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



#include "PagedSimVar.h"

namespace powermeter {
namespace model {




PagedSimVar::PagedSimVar()
{
    m_Page = 0;
    m_PageIsSet = false;
    m_Pages = 0;
    m_PagesIsSet = false;
    m_ScopesIsSet = false;
}

PagedSimVar::~PagedSimVar()
{
}

void PagedSimVar::validate()
{
    // TODO: implement validation
}

web::json::value PagedSimVar::toJson() const
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
    if(m_ScopesIsSet)
    {
        val[utility::conversions::to_string_t("scopes")] = ModelBase::toJson(m_Scopes);
    }

    return val;
}

bool PagedSimVar::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scopes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scopes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<SimVar>> refVal_scopes;
            ok &= ModelBase::fromJson(fieldValue, refVal_scopes);
            setScopes(refVal_scopes);
        }
    }
    return ok;
}

void PagedSimVar::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ScopesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("scopes"), m_Scopes));
    }
}

bool PagedSimVar::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("scopes")))
    {
        std::vector<std::shared_ptr<SimVar>> refVal_scopes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("scopes")), refVal_scopes );
        setScopes(refVal_scopes);
    }
    return ok;
}

int32_t PagedSimVar::getPage() const
{
    return m_Page;
}

void PagedSimVar::setPage(int32_t value)
{
    m_Page = value;
    m_PageIsSet = true;
}

bool PagedSimVar::pageIsSet() const
{
    return m_PageIsSet;
}

void PagedSimVar::unsetPage()
{
    m_PageIsSet = false;
}
int32_t PagedSimVar::getPages() const
{
    return m_Pages;
}

void PagedSimVar::setPages(int32_t value)
{
    m_Pages = value;
    m_PagesIsSet = true;
}

bool PagedSimVar::pagesIsSet() const
{
    return m_PagesIsSet;
}

void PagedSimVar::unsetPages()
{
    m_PagesIsSet = false;
}
std::vector<std::shared_ptr<SimVar>>& PagedSimVar::getScopes()
{
    return m_Scopes;
}

void PagedSimVar::setScopes(const std::vector<std::shared_ptr<SimVar>>& value)
{
    m_Scopes = value;
    m_ScopesIsSet = true;
}

bool PagedSimVar::scopesIsSet() const
{
    return m_ScopesIsSet;
}

void PagedSimVar::unsetScopes()
{
    m_ScopesIsSet = false;
}
}
}

