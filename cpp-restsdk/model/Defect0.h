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
 * Defect0.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_Defect0_H_
#define POWERMETER_MODEL_Defect0_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  Defect0
    : public ModelBase
{
public:
    Defect0();
    virtual ~Defect0();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Defect0 members

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
    double getD0() const;
    bool d0IsSet() const;
    void unsetD0();

    void setD0(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getDate() const;
    bool dateIsSet() const;
    void unsetdate();

    void setDate(const utility::datetime& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    double m_D0;
    bool m_D0IsSet;
    utility::datetime m_date;
    bool m_dateIsSet;
};


}
}

#endif /* POWERMETER_MODEL_Defect0_H_ */
