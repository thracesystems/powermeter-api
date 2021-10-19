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
 * WireLoad.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_WireLoad_H_
#define POWERMETER_MODEL_WireLoad_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "FanoutLength.h"

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  WireLoad
    : public ModelBase
{
public:
    WireLoad();
    virtual ~WireLoad();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WireLoad members

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
    utility::string_t getP() const;
    bool PIsSet() const;
    void unsetp();

    void setP(const utility::string_t& value);

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
    double getV() const;
    bool VIsSet() const;
    void unsetv();

    void setV(double value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getT() const;
    bool TIsSet() const;
    void unsett();

    void setT(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    double getResistance() const;
    bool resistanceIsSet() const;
    void unsetResistance();

    void setResistance(double value);

    /// <summary>
    /// 
    /// </summary>
    double getCapacitance() const;
    bool capacitanceIsSet() const;
    void unsetCapacitance();

    void setCapacitance(double value);

    /// <summary>
    /// 
    /// </summary>
    double getArea() const;
    bool areaIsSet() const;
    void unsetArea();

    void setArea(double value);

    /// <summary>
    /// 
    /// </summary>
    double getSlope() const;
    bool slopeIsSet() const;
    void unsetSlope();

    void setSlope(double value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<FanoutLength>>& getFanoutLength();
    bool fanoutLengthIsSet() const;
    void unsetFanout_length();

    void setFanoutLength(const std::vector<std::shared_ptr<FanoutLength>>& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_p;
    bool m_pIsSet;
    utility::string_t m_Rc;
    bool m_RcIsSet;
    double m_v;
    bool m_vIsSet;
    int32_t m_t;
    bool m_tIsSet;
    double m_Resistance;
    bool m_ResistanceIsSet;
    double m_Capacitance;
    bool m_CapacitanceIsSet;
    double m_Area;
    bool m_AreaIsSet;
    double m_Slope;
    bool m_SlopeIsSet;
    std::vector<std::shared_ptr<FanoutLength>> m_Fanout_length;
    bool m_Fanout_lengthIsSet;
};


}
}

#endif /* POWERMETER_MODEL_WireLoad_H_ */
