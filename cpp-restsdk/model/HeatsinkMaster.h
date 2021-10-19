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
 * HeatsinkMaster.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_HeatsinkMaster_H_
#define POWERMETER_MODEL_HeatsinkMaster_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  HeatsinkMaster
    : public ModelBase
{
public:
    HeatsinkMaster();
    virtual ~HeatsinkMaster();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// HeatsinkMaster members

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
    int32_t getLatestCommit() const;
    bool latestCommitIsSet() const;
    void unsetLatest_commit();

    void setLatestCommit(int32_t value);

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
    int32_t getLatestCommitVersion() const;
    bool latestCommitVersionIsSet() const;
    void unsetLatest_commit_version();

    void setLatestCommitVersion(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLatestCommitTimestamp() const;
    bool latestCommitTimestampIsSet() const;
    void unsetLatest_commit_timestamp();

    void setLatestCommitTimestamp(const utility::string_t& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Descr;
    bool m_DescrIsSet;
    int32_t m_Latest_commit;
    bool m_Latest_commitIsSet;
    int32_t m_Current_version;
    bool m_Current_versionIsSet;
    int32_t m_Latest_commit_version;
    bool m_Latest_commit_versionIsSet;
    utility::string_t m_Latest_commit_timestamp;
    bool m_Latest_commit_timestampIsSet;
};


}
}

#endif /* POWERMETER_MODEL_HeatsinkMaster_H_ */
