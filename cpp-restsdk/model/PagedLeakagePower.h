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

/*
 * PagedLeakagePower.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_PagedLeakagePower_H_
#define POWERMETER_MODEL_PagedLeakagePower_H_


#include "../ModelBase.h"

#include "LeakagePower.h"
#include <vector>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  PagedLeakagePower
    : public ModelBase
{
public:
    PagedLeakagePower();
    virtual ~PagedLeakagePower();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PagedLeakagePower members

    /// <summary>
    /// 
    /// </summary>
    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetPage();

    void setPage(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPages() const;
    bool pagesIsSet() const;
    void unsetPages();

    void setPages(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<LeakagePower>>& getPower();
    bool powerIsSet() const;
    void unsetPower();

    void setPower(const std::vector<std::shared_ptr<LeakagePower>>& value);


protected:
    int32_t m_Page;
    bool m_PageIsSet;
    int32_t m_Pages;
    bool m_PagesIsSet;
    std::vector<std::shared_ptr<LeakagePower>> m_Power;
    bool m_PowerIsSet;
};


}
}

#endif /* POWERMETER_MODEL_PagedLeakagePower_H_ */