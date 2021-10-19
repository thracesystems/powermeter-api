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
 * DeviceData.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_DeviceData_H_
#define POWERMETER_MODEL_DeviceData_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  DeviceData
    : public ModelBase
{
public:
    DeviceData();
    virtual ~DeviceData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeviceData members

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
    int32_t getT() const;
    bool TIsSet() const;
    void unsett();

    void setT(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    double getVds() const;
    bool vdsIsSet() const;
    void unsetVds();

    void setVds(double value);

    /// <summary>
    /// 
    /// </summary>
    double getVgs() const;
    bool vgsIsSet() const;
    void unsetVgs();

    void setVgs(double value);

    /// <summary>
    /// 
    /// </summary>
    double getVbs() const;
    bool vbsIsSet() const;
    void unsetVbs();

    void setVbs(double value);

    /// <summary>
    /// 
    /// </summary>
    double getIdrain() const;
    bool idrainIsSet() const;
    void unsetIdrain();

    void setIdrain(double value);

    /// <summary>
    /// 
    /// </summary>
    double getIgate() const;
    bool igateIsSet() const;
    void unsetIgate();

    void setIgate(double value);

    /// <summary>
    /// 
    /// </summary>
    double getIsource() const;
    bool isourceIsSet() const;
    void unsetIsource();

    void setIsource(double value);

    /// <summary>
    /// 
    /// </summary>
    double getIbody() const;
    bool ibodyIsSet() const;
    void unsetIbody();

    void setIbody(double value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_p;
    bool m_pIsSet;
    int32_t m_t;
    bool m_tIsSet;
    double m_Vds;
    bool m_VdsIsSet;
    double m_Vgs;
    bool m_VgsIsSet;
    double m_Vbs;
    bool m_VbsIsSet;
    double m_Idrain;
    bool m_IdrainIsSet;
    double m_Igate;
    bool m_IgateIsSet;
    double m_Isource;
    bool m_IsourceIsSet;
    double m_Ibody;
    bool m_IbodyIsSet;
};


}
}

#endif /* POWERMETER_MODEL_DeviceData_H_ */
