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
 * ComputePowerWaveform.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_ComputePowerWaveform_H_
#define POWERMETER_MODEL_ComputePowerWaveform_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  ComputePowerWaveform
    : public ModelBase
{
public:
    ComputePowerWaveform();
    virtual ~ComputePowerWaveform();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComputePowerWaveform members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTime() const;
    bool timeIsSet() const;
    void unsetTime();

    void setTime(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPower() const;
    bool powerIsSet() const;
    void unsetPower();

    void setPower(const utility::string_t& value);


protected:
    utility::string_t m_Time;
    bool m_TimeIsSet;
    utility::string_t m_Power;
    bool m_PowerIsSet;
};


}
}

#endif /* POWERMETER_MODEL_ComputePowerWaveform_H_ */
