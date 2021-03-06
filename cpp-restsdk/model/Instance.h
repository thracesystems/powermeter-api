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
 * Instance.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_Instance_H_
#define POWERMETER_MODEL_Instance_H_


#include "../ModelBase.h"

#include "InstanceMode.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "InstanceSupply.h"

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  Instance
    : public ModelBase
{
public:
    Instance();
    virtual ~Instance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Instance members

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
    utility::string_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getOriginX() const;
    bool originXIsSet() const;
    void unsetOrigin_x();

    void setOriginX(double value);

    /// <summary>
    /// 
    /// </summary>
    double getOriginY() const;
    bool originYIsSet() const;
    void unsetOrigin_y();

    void setOriginY(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrientation() const;
    bool orientationIsSet() const;
    void unsetOrientation();

    void setOrientation(const utility::string_t& value);

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
    utility::string_t getComputedColor() const;
    bool computedColorIsSet() const;
    void unsetComputed_color();

    void setComputedColor(const utility::string_t& value);

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
    int32_t getMasterMaster() const;
    bool masterMasterIsSet() const;
    void unsetMaster_master();

    void setMasterMaster(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMasterLatestCommit() const;
    bool masterLatestCommitIsSet() const;
    void unsetMaster_latest_commit();

    void setMasterLatestCommit(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isRenameOnConflict() const;
    bool renameOnConflictIsSet() const;
    void unsetRename_on_conflict();

    void setRenameOnConflict(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<InstanceMode>>& getModes();
    bool modesIsSet() const;
    void unsetModes();

    void setModes(const std::vector<std::shared_ptr<InstanceMode>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOutline() const;
    bool outlineIsSet() const;
    void unsetOutline();

    void setOutline(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getArea() const;
    bool areaIsSet() const;
    void unsetArea();

    void setArea(double value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<InstanceSupply>>& getSupplies();
    bool suppliesIsSet() const;
    void unsetSupplies();

    void setSupplies(const std::vector<std::shared_ptr<InstanceSupply>>& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Count;
    bool m_CountIsSet;
    double m_Origin_x;
    bool m_Origin_xIsSet;
    double m_Origin_y;
    bool m_Origin_yIsSet;
    utility::string_t m_Orientation;
    bool m_OrientationIsSet;
    utility::string_t m_Color;
    bool m_ColorIsSet;
    utility::string_t m_Computed_color;
    bool m_Computed_colorIsSet;
    int32_t m_Master;
    bool m_MasterIsSet;
    utility::string_t m_Master_name;
    bool m_Master_nameIsSet;
    int32_t m_Master_master;
    bool m_Master_masterIsSet;
    int32_t m_Master_latest_commit;
    bool m_Master_latest_commitIsSet;
    bool m_Rename_on_conflict;
    bool m_Rename_on_conflictIsSet;
    std::vector<std::shared_ptr<InstanceMode>> m_Modes;
    bool m_ModesIsSet;
    utility::string_t m_Outline;
    bool m_OutlineIsSet;
    double m_Area;
    bool m_AreaIsSet;
    std::vector<std::shared_ptr<InstanceSupply>> m_Supplies;
    bool m_SuppliesIsSet;
};


}
}

#endif /* POWERMETER_MODEL_Instance_H_ */
