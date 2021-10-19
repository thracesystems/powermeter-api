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
 * Layer.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_Layer_H_
#define POWERMETER_MODEL_Layer_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  Layer
    : public ModelBase
{
public:
    Layer();
    virtual ~Layer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Layer members

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
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isHorizontal() const;
    bool horizontalIsSet() const;
    void unsetHorizontal();

    void setHorizontal(bool value);

    /// <summary>
    /// 
    /// </summary>
    double getThickness() const;
    bool thicknessIsSet() const;
    void unsetThickness();

    void setThickness(double value);

    /// <summary>
    /// 
    /// </summary>
    double getMetalThickness() const;
    bool metalThicknessIsSet() const;
    void unsetMetal_thickness();

    void setMetalThickness(double value);

    /// <summary>
    /// 
    /// </summary>
    double getMetalDensity() const;
    bool metalDensityIsSet() const;
    void unsetMetal_density();

    void setMetalDensity(double value);

    /// <summary>
    /// 
    /// </summary>
    double getMetalConductivity() const;
    bool metalConductivityIsSet() const;
    void unsetMetal_conductivity();

    void setMetalConductivity(double value);

    /// <summary>
    /// 
    /// </summary>
    double getMetalHeatcapacity() const;
    bool metalHeatcapacityIsSet() const;
    void unsetMetal_heatcapacity();

    void setMetalHeatcapacity(double value);

    /// <summary>
    /// 
    /// </summary>
    double getImdConductivity() const;
    bool imdConductivityIsSet() const;
    void unsetImd_conductivity();

    void setImdConductivity(double value);

    /// <summary>
    /// 
    /// </summary>
    double getImdHeatcapacity() const;
    bool imdHeatcapacityIsSet() const;
    void unsetImd_heatcapacity();

    void setImdHeatcapacity(double value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    int32_t m_Count;
    bool m_CountIsSet;
    bool m_Horizontal;
    bool m_HorizontalIsSet;
    double m_Thickness;
    bool m_ThicknessIsSet;
    double m_Metal_thickness;
    bool m_Metal_thicknessIsSet;
    double m_Metal_density;
    bool m_Metal_densityIsSet;
    double m_Metal_conductivity;
    bool m_Metal_conductivityIsSet;
    double m_Metal_heatcapacity;
    bool m_Metal_heatcapacityIsSet;
    double m_Imd_conductivity;
    bool m_Imd_conductivityIsSet;
    double m_Imd_heatcapacity;
    bool m_Imd_heatcapacityIsSet;
};


}
}

#endif /* POWERMETER_MODEL_Layer_H_ */
