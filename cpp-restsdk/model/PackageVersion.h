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
 * PackageVersion.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_PackageVersion_H_
#define POWERMETER_MODEL_PackageVersion_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  PackageVersion
    : public ModelBase
{
public:
    PackageVersion();
    virtual ~PackageVersion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PackageVersion members

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
    int32_t getVersion() const;
    bool versionIsSet() const;
    void unsetVersion();

    void setVersion(int32_t value);

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
    utility::string_t getDescr() const;
    bool descrIsSet() const;
    void unsetDescr();

    void setDescr(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPackage() const;
    bool packageIsSet() const;
    void unsetPackage();

    void setPackage(int32_t value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    int32_t m_Version;
    bool m_VersionIsSet;
    utility::datetime m_Timestamp;
    bool m_TimestampIsSet;
    utility::string_t m_Descr;
    bool m_DescrIsSet;
    int32_t m_Package;
    bool m_PackageIsSet;
};


}
}

#endif /* POWERMETER_MODEL_PackageVersion_H_ */