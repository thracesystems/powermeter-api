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



#include "DesignTrend.h"

namespace powermeter {
namespace model {




DesignTrend::DesignTrend()
{
    m_Id = 0;
    m_IdIsSet = false;
    m_ExcludedDataIdsIsSet = false;
    m_Fields = utility::conversions::to_string_t("");
    m_FieldsIsSet = false;
    m_Filter = utility::conversions::to_string_t("");
    m_FilterIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Subtitle = utility::conversions::to_string_t("");
    m_SubtitleIsSet = false;
    m_Xaxistype = utility::conversions::to_string_t("");
    m_XaxistypeIsSet = false;
    m_Xaxisfield = utility::conversions::to_string_t("");
    m_XaxisfieldIsSet = false;
    m_Xaxislabel = utility::conversions::to_string_t("");
    m_XaxislabelIsSet = false;
    m_Minx = 0.0;
    m_MinxIsSet = false;
    m_Maxx = 0.0;
    m_MaxxIsSet = false;
    m_Yaxisfield = utility::conversions::to_string_t("");
    m_YaxisfieldIsSet = false;
    m_Yaxislabel = utility::conversions::to_string_t("");
    m_YaxislabelIsSet = false;
    m_Miny = 0.0;
    m_MinyIsSet = false;
    m_Maxy = 0.0;
    m_MaxyIsSet = false;
    m_Linetype = utility::conversions::to_string_t("");
    m_LinetypeIsSet = false;
}

DesignTrend::~DesignTrend()
{
}

void DesignTrend::validate()
{
    // TODO: implement validation
}

web::json::value DesignTrend::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ExcludedDataIdsIsSet)
    {
        val[utility::conversions::to_string_t("excludedDataIds")] = ModelBase::toJson(m_ExcludedDataIds);
    }
    if(m_FieldsIsSet)
    {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(m_Fields);
    }
    if(m_FilterIsSet)
    {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(m_Filter);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }
    if(m_SubtitleIsSet)
    {
        val[utility::conversions::to_string_t("subtitle")] = ModelBase::toJson(m_Subtitle);
    }
    if(m_XaxistypeIsSet)
    {
        val[utility::conversions::to_string_t("xaxistype")] = ModelBase::toJson(m_Xaxistype);
    }
    if(m_XaxisfieldIsSet)
    {
        val[utility::conversions::to_string_t("xaxisfield")] = ModelBase::toJson(m_Xaxisfield);
    }
    if(m_XaxislabelIsSet)
    {
        val[utility::conversions::to_string_t("xaxislabel")] = ModelBase::toJson(m_Xaxislabel);
    }
    if(m_MinxIsSet)
    {
        val[utility::conversions::to_string_t("minx")] = ModelBase::toJson(m_Minx);
    }
    if(m_MaxxIsSet)
    {
        val[utility::conversions::to_string_t("maxx")] = ModelBase::toJson(m_Maxx);
    }
    if(m_YaxisfieldIsSet)
    {
        val[utility::conversions::to_string_t("yaxisfield")] = ModelBase::toJson(m_Yaxisfield);
    }
    if(m_YaxislabelIsSet)
    {
        val[utility::conversions::to_string_t("yaxislabel")] = ModelBase::toJson(m_Yaxislabel);
    }
    if(m_MinyIsSet)
    {
        val[utility::conversions::to_string_t("miny")] = ModelBase::toJson(m_Miny);
    }
    if(m_MaxyIsSet)
    {
        val[utility::conversions::to_string_t("maxy")] = ModelBase::toJson(m_Maxy);
    }
    if(m_LinetypeIsSet)
    {
        val[utility::conversions::to_string_t("linetype")] = ModelBase::toJson(m_Linetype);
    }

    return val;
}

bool DesignTrend::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excludedDataIds")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excludedDataIds"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_excludedDataIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_excludedDataIds);
            setExcludedDataIds(refVal_excludedDataIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fields;
            ok &= ModelBase::fromJson(fieldValue, refVal_fields);
            setFields(refVal_fields);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_filter;
            ok &= ModelBase::fromJson(fieldValue, refVal_filter);
            setFilter(refVal_filter);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_title);
            setTitle(refVal_title);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subtitle;
            ok &= ModelBase::fromJson(fieldValue, refVal_subtitle);
            setSubtitle(refVal_subtitle);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xaxistype")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xaxistype"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_xaxistype;
            ok &= ModelBase::fromJson(fieldValue, refVal_xaxistype);
            setXaxistype(refVal_xaxistype);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xaxisfield")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xaxisfield"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_xaxisfield;
            ok &= ModelBase::fromJson(fieldValue, refVal_xaxisfield);
            setXaxisfield(refVal_xaxisfield);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xaxislabel")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xaxislabel"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_xaxislabel;
            ok &= ModelBase::fromJson(fieldValue, refVal_xaxislabel);
            setXaxislabel(refVal_xaxislabel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minx")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minx"));
        if(!fieldValue.is_null())
        {
            double refVal_minx;
            ok &= ModelBase::fromJson(fieldValue, refVal_minx);
            setMinx(refVal_minx);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxx")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxx"));
        if(!fieldValue.is_null())
        {
            double refVal_maxx;
            ok &= ModelBase::fromJson(fieldValue, refVal_maxx);
            setMaxx(refVal_maxx);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("yaxisfield")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yaxisfield"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_yaxisfield;
            ok &= ModelBase::fromJson(fieldValue, refVal_yaxisfield);
            setYaxisfield(refVal_yaxisfield);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("yaxislabel")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yaxislabel"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_yaxislabel;
            ok &= ModelBase::fromJson(fieldValue, refVal_yaxislabel);
            setYaxislabel(refVal_yaxislabel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("miny")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("miny"));
        if(!fieldValue.is_null())
        {
            double refVal_miny;
            ok &= ModelBase::fromJson(fieldValue, refVal_miny);
            setMiny(refVal_miny);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxy")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxy"));
        if(!fieldValue.is_null())
        {
            double refVal_maxy;
            ok &= ModelBase::fromJson(fieldValue, refVal_maxy);
            setMaxy(refVal_maxy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("linetype")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("linetype"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_linetype;
            ok &= ModelBase::fromJson(fieldValue, refVal_linetype);
            setLinetype(refVal_linetype);
        }
    }
    return ok;
}

void DesignTrend::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_ExcludedDataIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("excludedDataIds"), m_ExcludedDataIds));
    }
    if(m_FieldsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fields"), m_Fields));
    }
    if(m_FilterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("filter"), m_Filter));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    }
    if(m_SubtitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subtitle"), m_Subtitle));
    }
    if(m_XaxistypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("xaxistype"), m_Xaxistype));
    }
    if(m_XaxisfieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("xaxisfield"), m_Xaxisfield));
    }
    if(m_XaxislabelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("xaxislabel"), m_Xaxislabel));
    }
    if(m_MinxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("minx"), m_Minx));
    }
    if(m_MaxxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxx"), m_Maxx));
    }
    if(m_YaxisfieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("yaxisfield"), m_Yaxisfield));
    }
    if(m_YaxislabelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("yaxislabel"), m_Yaxislabel));
    }
    if(m_MinyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("miny"), m_Miny));
    }
    if(m_MaxyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxy"), m_Maxy));
    }
    if(m_LinetypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("linetype"), m_Linetype));
    }
}

bool DesignTrend::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        int32_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("excludedDataIds")))
    {
        std::vector<int32_t> refVal_excludedDataIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("excludedDataIds")), refVal_excludedDataIds );
        setExcludedDataIds(refVal_excludedDataIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fields")))
    {
        utility::string_t refVal_fields;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fields")), refVal_fields );
        setFields(refVal_fields);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("filter")))
    {
        utility::string_t refVal_filter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("filter")), refVal_filter );
        setFilter(refVal_filter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        utility::string_t refVal_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("title")), refVal_title );
        setTitle(refVal_title);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subtitle")))
    {
        utility::string_t refVal_subtitle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subtitle")), refVal_subtitle );
        setSubtitle(refVal_subtitle);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("xaxistype")))
    {
        utility::string_t refVal_xaxistype;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("xaxistype")), refVal_xaxistype );
        setXaxistype(refVal_xaxistype);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("xaxisfield")))
    {
        utility::string_t refVal_xaxisfield;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("xaxisfield")), refVal_xaxisfield );
        setXaxisfield(refVal_xaxisfield);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("xaxislabel")))
    {
        utility::string_t refVal_xaxislabel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("xaxislabel")), refVal_xaxislabel );
        setXaxislabel(refVal_xaxislabel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("minx")))
    {
        double refVal_minx;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("minx")), refVal_minx );
        setMinx(refVal_minx);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxx")))
    {
        double refVal_maxx;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxx")), refVal_maxx );
        setMaxx(refVal_maxx);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("yaxisfield")))
    {
        utility::string_t refVal_yaxisfield;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("yaxisfield")), refVal_yaxisfield );
        setYaxisfield(refVal_yaxisfield);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("yaxislabel")))
    {
        utility::string_t refVal_yaxislabel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("yaxislabel")), refVal_yaxislabel );
        setYaxislabel(refVal_yaxislabel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("miny")))
    {
        double refVal_miny;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("miny")), refVal_miny );
        setMiny(refVal_miny);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxy")))
    {
        double refVal_maxy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxy")), refVal_maxy );
        setMaxy(refVal_maxy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("linetype")))
    {
        utility::string_t refVal_linetype;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("linetype")), refVal_linetype );
        setLinetype(refVal_linetype);
    }
    return ok;
}

int32_t DesignTrend::getId() const
{
    return m_Id;
}

void DesignTrend::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool DesignTrend::idIsSet() const
{
    return m_IdIsSet;
}

void DesignTrend::unsetId()
{
    m_IdIsSet = false;
}
std::vector<int32_t>& DesignTrend::getExcludedDataIds()
{
    return m_ExcludedDataIds;
}

void DesignTrend::setExcludedDataIds(std::vector<int32_t> value)
{
    m_ExcludedDataIds = value;
    m_ExcludedDataIdsIsSet = true;
}

bool DesignTrend::excludedDataIdsIsSet() const
{
    return m_ExcludedDataIdsIsSet;
}

void DesignTrend::unsetExcludedDataIds()
{
    m_ExcludedDataIdsIsSet = false;
}
utility::string_t DesignTrend::getFields() const
{
    return m_Fields;
}

void DesignTrend::setFields(const utility::string_t& value)
{
    m_Fields = value;
    m_FieldsIsSet = true;
}

bool DesignTrend::fieldsIsSet() const
{
    return m_FieldsIsSet;
}

void DesignTrend::unsetFields()
{
    m_FieldsIsSet = false;
}
utility::string_t DesignTrend::getFilter() const
{
    return m_Filter;
}

void DesignTrend::setFilter(const utility::string_t& value)
{
    m_Filter = value;
    m_FilterIsSet = true;
}

bool DesignTrend::filterIsSet() const
{
    return m_FilterIsSet;
}

void DesignTrend::unsetFilter()
{
    m_FilterIsSet = false;
}
utility::string_t DesignTrend::getTitle() const
{
    return m_Title;
}

void DesignTrend::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool DesignTrend::titleIsSet() const
{
    return m_TitleIsSet;
}

void DesignTrend::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t DesignTrend::getSubtitle() const
{
    return m_Subtitle;
}

void DesignTrend::setSubtitle(const utility::string_t& value)
{
    m_Subtitle = value;
    m_SubtitleIsSet = true;
}

bool DesignTrend::subtitleIsSet() const
{
    return m_SubtitleIsSet;
}

void DesignTrend::unsetSubtitle()
{
    m_SubtitleIsSet = false;
}
utility::string_t DesignTrend::getXaxistype() const
{
    return m_Xaxistype;
}

void DesignTrend::setXaxistype(const utility::string_t& value)
{
    m_Xaxistype = value;
    m_XaxistypeIsSet = true;
}

bool DesignTrend::xaxistypeIsSet() const
{
    return m_XaxistypeIsSet;
}

void DesignTrend::unsetXaxistype()
{
    m_XaxistypeIsSet = false;
}
utility::string_t DesignTrend::getXaxisfield() const
{
    return m_Xaxisfield;
}

void DesignTrend::setXaxisfield(const utility::string_t& value)
{
    m_Xaxisfield = value;
    m_XaxisfieldIsSet = true;
}

bool DesignTrend::xaxisfieldIsSet() const
{
    return m_XaxisfieldIsSet;
}

void DesignTrend::unsetXaxisfield()
{
    m_XaxisfieldIsSet = false;
}
utility::string_t DesignTrend::getXaxislabel() const
{
    return m_Xaxislabel;
}

void DesignTrend::setXaxislabel(const utility::string_t& value)
{
    m_Xaxislabel = value;
    m_XaxislabelIsSet = true;
}

bool DesignTrend::xaxislabelIsSet() const
{
    return m_XaxislabelIsSet;
}

void DesignTrend::unsetXaxislabel()
{
    m_XaxislabelIsSet = false;
}
double DesignTrend::getMinx() const
{
    return m_Minx;
}

void DesignTrend::setMinx(double value)
{
    m_Minx = value;
    m_MinxIsSet = true;
}

bool DesignTrend::minxIsSet() const
{
    return m_MinxIsSet;
}

void DesignTrend::unsetMinx()
{
    m_MinxIsSet = false;
}
double DesignTrend::getMaxx() const
{
    return m_Maxx;
}

void DesignTrend::setMaxx(double value)
{
    m_Maxx = value;
    m_MaxxIsSet = true;
}

bool DesignTrend::maxxIsSet() const
{
    return m_MaxxIsSet;
}

void DesignTrend::unsetMaxx()
{
    m_MaxxIsSet = false;
}
utility::string_t DesignTrend::getYaxisfield() const
{
    return m_Yaxisfield;
}

void DesignTrend::setYaxisfield(const utility::string_t& value)
{
    m_Yaxisfield = value;
    m_YaxisfieldIsSet = true;
}

bool DesignTrend::yaxisfieldIsSet() const
{
    return m_YaxisfieldIsSet;
}

void DesignTrend::unsetYaxisfield()
{
    m_YaxisfieldIsSet = false;
}
utility::string_t DesignTrend::getYaxislabel() const
{
    return m_Yaxislabel;
}

void DesignTrend::setYaxislabel(const utility::string_t& value)
{
    m_Yaxislabel = value;
    m_YaxislabelIsSet = true;
}

bool DesignTrend::yaxislabelIsSet() const
{
    return m_YaxislabelIsSet;
}

void DesignTrend::unsetYaxislabel()
{
    m_YaxislabelIsSet = false;
}
double DesignTrend::getMiny() const
{
    return m_Miny;
}

void DesignTrend::setMiny(double value)
{
    m_Miny = value;
    m_MinyIsSet = true;
}

bool DesignTrend::minyIsSet() const
{
    return m_MinyIsSet;
}

void DesignTrend::unsetMiny()
{
    m_MinyIsSet = false;
}
double DesignTrend::getMaxy() const
{
    return m_Maxy;
}

void DesignTrend::setMaxy(double value)
{
    m_Maxy = value;
    m_MaxyIsSet = true;
}

bool DesignTrend::maxyIsSet() const
{
    return m_MaxyIsSet;
}

void DesignTrend::unsetMaxy()
{
    m_MaxyIsSet = false;
}
utility::string_t DesignTrend::getLinetype() const
{
    return m_Linetype;
}

void DesignTrend::setLinetype(const utility::string_t& value)
{
    m_Linetype = value;
    m_LinetypeIsSet = true;
}

bool DesignTrend::linetypeIsSet() const
{
    return m_LinetypeIsSet;
}

void DesignTrend::unsetLinetype()
{
    m_LinetypeIsSet = false;
}
}
}


