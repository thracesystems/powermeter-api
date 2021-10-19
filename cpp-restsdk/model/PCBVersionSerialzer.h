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
 * PCBVersionSerialzer.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_PCBVersionSerialzer_H_
#define POWERMETER_MODEL_PCBVersionSerialzer_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  PCBVersionSerialzer
    : public ModelBase
{
public:
    PCBVersionSerialzer();
    virtual ~PCBVersionSerialzer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PCBVersionSerialzer members

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
    utility::datetime getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();

    void setTimestamp(const utility::datetime& value);

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
    utility::string_t getDescr() const;
    bool descrIsSet() const;
    void unsetDescr();

    void setDescr(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPcb() const;
    bool pcbIsSet() const;
    void unsetPcb();

    void setPcb(int32_t value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::datetime m_Timestamp;
    bool m_TimestampIsSet;
    int32_t m_Version;
    bool m_VersionIsSet;
    utility::string_t m_Descr;
    bool m_DescrIsSet;
    int32_t m_Pcb;
    bool m_PcbIsSet;
};


}
}

#endif /* POWERMETER_MODEL_PCBVersionSerialzer_H_ */
