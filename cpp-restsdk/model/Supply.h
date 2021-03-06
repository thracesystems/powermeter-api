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
 * Supply.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_Supply_H_
#define POWERMETER_MODEL_Supply_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  Supply
    : public ModelBase
{
public:
    Supply();
    virtual ~Supply();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Supply members

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
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

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
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsPower() const;
    bool isPowerIsSet() const;
    void unsetIs_power();

    void setIsPower(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsGround() const;
    bool isGroundIsSet() const;
    void unsetIs_ground();

    void setIsGround(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isSwitchable() const;
    bool switchableIsSet() const;
    void unsetSwitchable();

    void setSwitchable(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMasterSupply() const;
    bool masterSupplyIsSet() const;
    void unsetMaster_supply();

    void setMasterSupply(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getColor() const;
    bool colorIsSet() const;
    void unsetColor();

    void setColor(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getInstanceCount() const;
    bool instanceCountIsSet() const;
    void unsetInstance_count();

    void setInstanceCount(int32_t value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    double m_Voltage;
    bool m_VoltageIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    bool m_Is_power;
    bool m_Is_powerIsSet;
    bool m_Is_ground;
    bool m_Is_groundIsSet;
    bool m_Switchable;
    bool m_SwitchableIsSet;
    int32_t m_Master_supply;
    bool m_Master_supplyIsSet;
    utility::string_t m_Color;
    bool m_ColorIsSet;
    int32_t m_Instance_count;
    bool m_Instance_countIsSet;
};


}
}

#endif /* POWERMETER_MODEL_Supply_H_ */
