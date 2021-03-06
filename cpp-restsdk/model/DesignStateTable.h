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
 * DesignStateTable.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_DesignStateTable_H_
#define POWERMETER_MODEL_DesignStateTable_H_


#include "../ModelBase.h"

#include "StateEquaiton.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  DesignStateTable
    : public ModelBase
{
public:
    DesignStateTable();
    virtual ~DesignStateTable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DesignStateTable members

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
    std::vector<utility::string_t>& getInNodes();
    bool inNodesIsSet() const;
    void unsetIn_nodes();

    void setInNodes(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getIntNodes();
    bool intNodesIsSet() const;
    void unsetInt_nodes();

    void setIntNodes(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTable() const;
    bool tableIsSet() const;
    void unsetTable();

    void setTable(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<StateEquaiton>>& getHigh();
    bool highIsSet() const;
    void unsetHigh();

    void setHigh(const std::vector<std::shared_ptr<StateEquaiton>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<StateEquaiton>>& getLow();
    bool lowIsSet() const;
    void unsetLow();

    void setLow(const std::vector<std::shared_ptr<StateEquaiton>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<StateEquaiton>>& getNc();
    bool ncIsSet() const;
    void unsetNc();

    void setNc(const std::vector<std::shared_ptr<StateEquaiton>>& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    std::vector<utility::string_t> m_In_nodes;
    bool m_In_nodesIsSet;
    std::vector<utility::string_t> m_Int_nodes;
    bool m_Int_nodesIsSet;
    utility::string_t m_Table;
    bool m_TableIsSet;
    std::vector<std::shared_ptr<StateEquaiton>> m_High;
    bool m_HighIsSet;
    std::vector<std::shared_ptr<StateEquaiton>> m_Low;
    bool m_LowIsSet;
    std::vector<std::shared_ptr<StateEquaiton>> m_Nc;
    bool m_NcIsSet;
};


}
}

#endif /* POWERMETER_MODEL_DesignStateTable_H_ */
