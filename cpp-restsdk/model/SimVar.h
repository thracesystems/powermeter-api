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
 * SimVar.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_SimVar_H_
#define POWERMETER_MODEL_SimVar_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  SimVar
    : public ModelBase
{
public:
    SimVar();
    virtual ~SimVar();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SimVar members

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
    int32_t getScope() const;
    bool scopeIsSet() const;
    void unsetScope();

    void setScope(int32_t value);

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
    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetSize();

    void setSize(int32_t value);

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
    utility::string_t getVcdId() const;
    bool vcdIdIsSet() const;
    void unsetVcd_id();

    void setVcdId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<int32_t>& getMsb();
    bool msbIsSet() const;
    void unsetMsb();

    void setMsb(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<int32_t>& getLsb();
    bool lsbIsSet() const;
    void unsetLsb();

    void setLsb(std::vector<int32_t> value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    int32_t m_Scope;
    bool m_ScopeIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    int32_t m_Size;
    bool m_SizeIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Vcd_id;
    bool m_Vcd_idIsSet;
    std::vector<int32_t> m_Msb;
    bool m_MsbIsSet;
    std::vector<int32_t> m_Lsb;
    bool m_LsbIsSet;
};


}
}

#endif /* POWERMETER_MODEL_SimVar_H_ */
