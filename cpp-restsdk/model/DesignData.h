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
 * DesignData.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_DesignData_H_
#define POWERMETER_MODEL_DesignData_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  DesignData
    : public ModelBase
{
public:
    DesignData();
    virtual ~DesignData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DesignData members

    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTime() const;
    bool timeIsSet() const;
    void unsetTime();

    void setTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    bool isHidden() const;
    bool hiddenIsSet() const;
    void unsetHidden();

    void setHidden(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getData() const;
    bool dataIsSet() const;
    void unsetData();

    void setData(const std::shared_ptr<Object>& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::datetime m_Time;
    bool m_TimeIsSet;
    bool m_Hidden;
    bool m_HiddenIsSet;
    std::shared_ptr<Object> m_Data;
    bool m_DataIsSet;
};


}
}

#endif /* POWERMETER_MODEL_DesignData_H_ */
