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
 * DesignTrend.h
 *
 * 
 */

#ifndef POWERMETER_MODEL_DesignTrend_H_
#define POWERMETER_MODEL_DesignTrend_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace powermeter {
namespace model {


/// <summary>
/// 
/// </summary>
class  DesignTrend
    : public ModelBase
{
public:
    DesignTrend();
    virtual ~DesignTrend();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DesignTrend members

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
    std::vector<int32_t>& getExcludedDataIds();
    bool excludedDataIdsIsSet() const;
    void unsetExcludedDataIds();

    void setExcludedDataIds(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFields() const;
    bool fieldsIsSet() const;
    void unsetFields();

    void setFields(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFilter() const;
    bool filterIsSet() const;
    void unsetFilter();

    void setFilter(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubtitle() const;
    bool subtitleIsSet() const;
    void unsetSubtitle();

    void setSubtitle(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getXaxistype() const;
    bool xaxistypeIsSet() const;
    void unsetXaxistype();

    void setXaxistype(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getXaxisfield() const;
    bool xaxisfieldIsSet() const;
    void unsetXaxisfield();

    void setXaxisfield(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getXaxislabel() const;
    bool xaxislabelIsSet() const;
    void unsetXaxislabel();

    void setXaxislabel(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getMinx() const;
    bool minxIsSet() const;
    void unsetMinx();

    void setMinx(double value);

    /// <summary>
    /// 
    /// </summary>
    double getMaxx() const;
    bool maxxIsSet() const;
    void unsetMaxx();

    void setMaxx(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getYaxisfield() const;
    bool yaxisfieldIsSet() const;
    void unsetYaxisfield();

    void setYaxisfield(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getYaxislabel() const;
    bool yaxislabelIsSet() const;
    void unsetYaxislabel();

    void setYaxislabel(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getMiny() const;
    bool minyIsSet() const;
    void unsetMiny();

    void setMiny(double value);

    /// <summary>
    /// 
    /// </summary>
    double getMaxy() const;
    bool maxyIsSet() const;
    void unsetMaxy();

    void setMaxy(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLinetype() const;
    bool linetypeIsSet() const;
    void unsetLinetype();

    void setLinetype(const utility::string_t& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    std::vector<int32_t> m_ExcludedDataIds;
    bool m_ExcludedDataIdsIsSet;
    utility::string_t m_Fields;
    bool m_FieldsIsSet;
    utility::string_t m_Filter;
    bool m_FilterIsSet;
    utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_Subtitle;
    bool m_SubtitleIsSet;
    utility::string_t m_Xaxistype;
    bool m_XaxistypeIsSet;
    utility::string_t m_Xaxisfield;
    bool m_XaxisfieldIsSet;
    utility::string_t m_Xaxislabel;
    bool m_XaxislabelIsSet;
    double m_Minx;
    bool m_MinxIsSet;
    double m_Maxx;
    bool m_MaxxIsSet;
    utility::string_t m_Yaxisfield;
    bool m_YaxisfieldIsSet;
    utility::string_t m_Yaxislabel;
    bool m_YaxislabelIsSet;
    double m_Miny;
    bool m_MinyIsSet;
    double m_Maxy;
    bool m_MaxyIsSet;
    utility::string_t m_Linetype;
    bool m_LinetypeIsSet;
};


}
}

#endif /* POWERMETER_MODEL_DesignTrend_H_ */
