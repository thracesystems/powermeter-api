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
 * Heatsink.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_Heatsink_H_
#define POWERMETER_MODEL_Heatsink_H_


#include "../ModelBase.h"

#include "HeatsinkVersion.h"
#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  Heatsink
    : public ModelBase
{
public:
    Heatsink();
    virtual ~Heatsink();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Heatsink members

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
    utility::string_t getDescr() const;
    bool descrIsSet() const;
    void unsetDescr();

    void setDescr(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isEditable() const;
    bool editableIsSet() const;
    void unsetEditable();

    void setEditable(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<HeatsinkVersion> getVersion() const;
    bool versionIsSet() const;
    void unsetVersion();

    void setVersion(const std::shared_ptr<HeatsinkVersion>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetCurrent_version();

    void setCurrentVersion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getWidth() const;
    bool widthIsSet() const;
    void unsetWidth();

    void setWidth(double value);

    /// <summary>
    /// 
    /// </summary>
    double getHeight() const;
    bool heightIsSet() const;
    void unsetHeight();

    void setHeight(double value);

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
    double getRConvec() const;
    bool rConvecIsSet() const;
    void unsetR_convec();

    void setRConvec(double value);

    /// <summary>
    /// 
    /// </summary>
    double getCConvec() const;
    bool cConvecIsSet() const;
    void unsetC_convec();

    void setCConvec(double value);

    /// <summary>
    /// 
    /// </summary>
    double getConductivity() const;
    bool conductivityIsSet() const;
    void unsetConductivity();

    void setConductivity(double value);

    /// <summary>
    /// 
    /// </summary>
    double getHeatcapacity() const;
    bool heatcapacityIsSet() const;
    void unsetHeatcapacity();

    void setHeatcapacity(double value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Descr;
    bool m_DescrIsSet;
    bool m_Editable;
    bool m_EditableIsSet;
    std::shared_ptr<HeatsinkVersion> m_Version;
    bool m_VersionIsSet;
    utility::string_t m_Current_version;
    bool m_Current_versionIsSet;
    double m_Width;
    bool m_WidthIsSet;
    double m_Height;
    bool m_HeightIsSet;
    double m_Thickness;
    bool m_ThicknessIsSet;
    double m_R_convec;
    bool m_R_convecIsSet;
    double m_C_convec;
    bool m_C_convecIsSet;
    double m_Conductivity;
    bool m_ConductivityIsSet;
    double m_Heatcapacity;
    bool m_HeatcapacityIsSet;
};


}
}

#endif /* POWERMETER_MODEL_Heatsink_H_ */