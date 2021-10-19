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
 * WLMModel.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_WLMModel_H_
#define POWERMETER_MODEL_WLMModel_H_


#include "../ModelBase.h"

#include "WLMVersion.h"
#include "WireLoad.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  WLMModel
    : public ModelBase
{
public:
    WLMModel();
    virtual ~WLMModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WLMModel members

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
    utility::string_t getMasterName() const;
    bool masterNameIsSet() const;
    void unsetMaster_name();

    void setMasterName(const utility::string_t& value);

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
    std::vector<std::shared_ptr<WireLoad>>& getWireloads();
    bool wireloadsIsSet() const;
    void unsetWireloads();

    void setWireloads(const std::vector<std::shared_ptr<WireLoad>>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetCurrent_version();

    void setCurrentVersion(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<WLMVersion> getVersion() const;
    bool versionIsSet() const;
    void unsetVersion();

    void setVersion(const std::shared_ptr<WLMVersion>& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Master_name;
    bool m_Master_nameIsSet;
    bool m_Editable;
    bool m_EditableIsSet;
    std::vector<std::shared_ptr<WireLoad>> m_Wireloads;
    bool m_WireloadsIsSet;
    int32_t m_Current_version;
    bool m_Current_versionIsSet;
    std::shared_ptr<WLMVersion> m_Version;
    bool m_VersionIsSet;
};


}
}

#endif /* POWERMETER_MODEL_WLMModel_H_ */
