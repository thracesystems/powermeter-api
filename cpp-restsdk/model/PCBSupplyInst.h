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
 * PCBSupplyInst.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_PCBSupplyInst_H_
#define POWERMETER_MODEL_PCBSupplyInst_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  PCBSupplyInst
    : public ModelBase
{
public:
    PCBSupplyInst();
    virtual ~PCBSupplyInst();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PCBSupplyInst members

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
    int32_t getContainer() const;
    bool containerIsSet() const;
    void unsetContainer();

    void setContainer(int32_t value);

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
    utility::string_t getColor() const;
    bool colorIsSet() const;
    void unsetColor();

    void setColor(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectionColor() const;
    bool connectionColorIsSet() const;
    void unsetConnection_color();

    void setConnectionColor(const utility::string_t& value);

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
    utility::string_t getHierName() const;
    bool hierNameIsSet() const;
    void unsetHier_name();

    void setHierName(const utility::string_t& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    int32_t m_Container;
    bool m_ContainerIsSet;
    int32_t m_Master;
    bool m_MasterIsSet;
    utility::string_t m_Color;
    bool m_ColorIsSet;
    utility::string_t m_Connection_color;
    bool m_Connection_colorIsSet;
    utility::string_t m_Master_name;
    bool m_Master_nameIsSet;
    utility::string_t m_Hier_name;
    bool m_Hier_nameIsSet;
};


}
}

#endif /* POWERMETER_MODEL_PCBSupplyInst_H_ */
