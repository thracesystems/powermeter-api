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
 * SupplyModeState.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_SupplyModeState_H_
#define POWERMETER_MODEL_SupplyModeState_H_


#include "../ModelBase.h"


namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  SupplyModeState
    : public ModelBase
{
public:
    SupplyModeState();
    virtual ~SupplyModeState();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SupplyModeState members

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
    int32_t getMode() const;
    bool modeIsSet() const;
    void unsetMode();

    void setMode(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSupply() const;
    bool supplyIsSet() const;
    void unsetSupply();

    void setSupply(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isOn() const;
    bool onIsSet() const;
    void unsetOn();

    void setOn(bool value);

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
    int32_t m_Mode;
    bool m_ModeIsSet;
    int32_t m_Supply;
    bool m_SupplyIsSet;
    bool m_On;
    bool m_OnIsSet;
    double m_Voltage;
    bool m_VoltageIsSet;
};


}
}

#endif /* POWERMETER_MODEL_SupplyModeState_H_ */