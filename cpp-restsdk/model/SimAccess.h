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
 * SimAccess.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_SimAccess_H_
#define POWERMETER_MODEL_SimAccess_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  SimAccess
    : public ModelBase
{
public:
    SimAccess();
    virtual ~SimAccess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SimAccess members

    /// <summary>
    /// 
    /// </summary>
    int32_t getMaster() const;
    bool masterIsSet() const;
    void unsetMaster();

    void setMaster(int32_t value);

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
    int32_t getProject() const;
    bool projectIsSet() const;
    void unsetProject();

    void setProject(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProjectName() const;
    bool projectNameIsSet() const;
    void unsetProject_name();

    void setProjectName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();

    void setTimestamp(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetCurrent_version();

    void setCurrentVersion(int32_t value);


protected:
    int32_t m_Master;
    bool m_MasterIsSet;
    utility::string_t m_Master_name;
    bool m_Master_nameIsSet;
    int32_t m_Project;
    bool m_ProjectIsSet;
    utility::string_t m_Project_name;
    bool m_Project_nameIsSet;
    utility::datetime m_Timestamp;
    bool m_TimestampIsSet;
    int32_t m_Current_version;
    bool m_Current_versionIsSet;
};


}
}

#endif /* POWERMETER_MODEL_SimAccess_H_ */
