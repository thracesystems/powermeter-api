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



#include "PagedMeasuredData.h"

namespace powermeter {
namespace model {




PagedMeasuredData::PagedMeasuredData()
{
    m_Pages = 0;
    m_PagesIsSet = false;
    m_Page = 0;
    m_PageIsSet = false;
    m_DataIsSet = false;
}

PagedMeasuredData::~PagedMeasuredData()
{
}

void PagedMeasuredData::validate()
{
    // TODO: implement validation
}

web::json::value PagedMeasuredData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PagesIsSet)
    {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(m_Pages);
    }
    if(m_PageIsSet)
    {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(m_Page);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }

    return val;
}

bool PagedMeasuredData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<MeasuredDataJSON>> refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    return ok;
}

void PagedMeasuredData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pages"), m_Pages));
    }
    if(m_PageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("page"), m_Page));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
}

bool PagedMeasuredData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pages")))
    {
        int32_t refVal_pages;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pages")), refVal_pages );
        setPages(refVal_pages);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("page")))
    {
        int32_t refVal_page;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("page")), refVal_page );
        setPage(refVal_page);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        std::vector<std::shared_ptr<MeasuredDataJSON>> refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    return ok;
}

int32_t PagedMeasuredData::getPages() const
{
    return m_Pages;
}

void PagedMeasuredData::setPages(int32_t value)
{
    m_Pages = value;
    m_PagesIsSet = true;
}

bool PagedMeasuredData::pagesIsSet() const
{
    return m_PagesIsSet;
}

void PagedMeasuredData::unsetPages()
{
    m_PagesIsSet = false;
}
int32_t PagedMeasuredData::getPage() const
{
    return m_Page;
}

void PagedMeasuredData::setPage(int32_t value)
{
    m_Page = value;
    m_PageIsSet = true;
}

bool PagedMeasuredData::pageIsSet() const
{
    return m_PageIsSet;
}

void PagedMeasuredData::unsetPage()
{
    m_PageIsSet = false;
}
std::vector<std::shared_ptr<MeasuredDataJSON>>& PagedMeasuredData::getData()
{
    return m_Data;
}

void PagedMeasuredData::setData(const std::vector<std::shared_ptr<MeasuredDataJSON>>& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool PagedMeasuredData::dataIsSet() const
{
    return m_DataIsSet;
}

void PagedMeasuredData::unsetData()
{
    m_DataIsSet = false;
}
}
}


