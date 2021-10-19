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
 * SupplyInstConfig.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_SupplyInstConfig_H_
#define POWERMETER_MODEL_SupplyInstConfig_H_


#include "../ModelBase.h"


namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  SupplyInstConfig
    : public ModelBase
{
public:
    SupplyInstConfig();
    virtual ~SupplyInstConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SupplyInstConfig members

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
    double getTime() const;
    bool timeIsSet() const;
    void unsetTime();

    void setTime(double value);

    /// <summary>
    /// 
    /// </summary>
    double getVoltage() const;
    bool voltageIsSet() const;
    void unsetVoltage();

    void setVoltage(double value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    double m_Time;
    bool m_TimeIsSet;
    double m_Voltage;
    bool m_VoltageIsSet;
};


}
}

#endif /* POWERMETER_MODEL_SupplyInstConfig_H_ */
