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
 * PinCap.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_PinCap_H_
#define POWERMETER_MODEL_PinCap_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  PinCap
    : public ModelBase
{
public:
    PinCap();
    virtual ~PinCap();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PinCap members

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
    utility::string_t getProcess() const;
    bool processIsSet() const;
    void unsetProcess();

    void setProcess(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRc() const;
    bool rcIsSet() const;
    void unsetRc();

    void setRc(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getVoltage() const;
    bool voltageIsSet() const;
    void unsetVoltage();

    void setVoltage(double value);

    /// <summary>
    /// 
    /// </summary>
    double getTemperature() const;
    bool temperatureIsSet() const;
    void unsetTemperature();

    void setTemperature(double value);

    /// <summary>
    /// 
    /// </summary>
    double getRiseCapacitance() const;
    bool riseCapacitanceIsSet() const;
    void unsetRise_capacitance();

    void setRiseCapacitance(double value);

    /// <summary>
    /// 
    /// </summary>
    double getFallCapacitance() const;
    bool fallCapacitanceIsSet() const;
    void unsetFall_capacitance();

    void setFallCapacitance(double value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Process;
    bool m_ProcessIsSet;
    utility::string_t m_Rc;
    bool m_RcIsSet;
    double m_Voltage;
    bool m_VoltageIsSet;
    double m_Temperature;
    bool m_TemperatureIsSet;
    double m_Rise_capacitance;
    bool m_Rise_capacitanceIsSet;
    double m_Fall_capacitance;
    bool m_Fall_capacitanceIsSet;
};


}
}

#endif /* POWERMETER_MODEL_PinCap_H_ */
