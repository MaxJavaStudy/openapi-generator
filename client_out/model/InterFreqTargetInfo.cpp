/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 2.1.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "InterFreqTargetInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




InterFreqTargetInfo::InterFreqTargetInfo()
{
    m_DlCarrierFreq = 0;
    m_DlCarrierFreqIsSet = false;
    m_CellIdListIsSet = false;
}

InterFreqTargetInfo::~InterFreqTargetInfo()
{
}

void InterFreqTargetInfo::validate()
{
    // TODO: implement validation
}

web::json::value InterFreqTargetInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DlCarrierFreqIsSet)
    {
        val[utility::conversions::to_string_t("dlCarrierFreq")] = ModelBase::toJson(m_DlCarrierFreq);
    }
    if(m_CellIdListIsSet)
    {
        val[utility::conversions::to_string_t("cellIdList")] = ModelBase::toJson(m_CellIdList);
    }

    return val;
}

bool InterFreqTargetInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dlCarrierFreq")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dlCarrierFreq"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_dlCarrierFreq;
            ok &= ModelBase::fromJson(fieldValue, refVal_dlCarrierFreq);
            setDlCarrierFreq(refVal_dlCarrierFreq);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cellIdList")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cellIdList"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_cellIdList;
            ok &= ModelBase::fromJson(fieldValue, refVal_cellIdList);
            setCellIdList(refVal_cellIdList);
        }
    }
    return ok;
}

void InterFreqTargetInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DlCarrierFreqIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dlCarrierFreq"), m_DlCarrierFreq));
    }
    if(m_CellIdListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cellIdList"), m_CellIdList));
    }
}

bool InterFreqTargetInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("dlCarrierFreq")))
    {
        int32_t refVal_dlCarrierFreq;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dlCarrierFreq")), refVal_dlCarrierFreq );
        setDlCarrierFreq(refVal_dlCarrierFreq);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cellIdList")))
    {
        std::vector<int32_t> refVal_cellIdList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cellIdList")), refVal_cellIdList );
        setCellIdList(refVal_cellIdList);
    }
    return ok;
}

int32_t InterFreqTargetInfo::getDlCarrierFreq() const
{
    return m_DlCarrierFreq;
}

void InterFreqTargetInfo::setDlCarrierFreq(int32_t value)
{
    m_DlCarrierFreq = value;
    m_DlCarrierFreqIsSet = true;
}

bool InterFreqTargetInfo::dlCarrierFreqIsSet() const
{
    return m_DlCarrierFreqIsSet;
}

void InterFreqTargetInfo::unsetDlCarrierFreq()
{
    m_DlCarrierFreqIsSet = false;
}
std::vector<int32_t>& InterFreqTargetInfo::getCellIdList()
{
    return m_CellIdList;
}

void InterFreqTargetInfo::setCellIdList(std::vector<int32_t> value)
{
    m_CellIdList = value;
    m_CellIdListIsSet = true;
}

bool InterFreqTargetInfo::cellIdListIsSet() const
{
    return m_CellIdListIsSet;
}

void InterFreqTargetInfo::unsetCellIdList()
{
    m_CellIdListIsSet = false;
}
}
}
}
}


