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



#include "AreaScope.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




AreaScope::AreaScope()
{
    m_EutraCellIdListIsSet = false;
    m_NrCellIdListIsSet = false;
    m_TacListIsSet = false;
    m_TacInfoPerPlmnIsSet = false;
}

AreaScope::~AreaScope()
{
}

void AreaScope::validate()
{
    // TODO: implement validation
}

web::json::value AreaScope::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EutraCellIdListIsSet)
    {
        val[utility::conversions::to_string_t("eutraCellIdList")] = ModelBase::toJson(m_EutraCellIdList);
    }
    if(m_NrCellIdListIsSet)
    {
        val[utility::conversions::to_string_t("nrCellIdList")] = ModelBase::toJson(m_NrCellIdList);
    }
    if(m_TacListIsSet)
    {
        val[utility::conversions::to_string_t("tacList")] = ModelBase::toJson(m_TacList);
    }
    if(m_TacInfoPerPlmnIsSet)
    {
        val[utility::conversions::to_string_t("tacInfoPerPlmn")] = ModelBase::toJson(m_TacInfoPerPlmn);
    }

    return val;
}

bool AreaScope::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eutraCellIdList")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eutraCellIdList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<utility::string_t>> refVal_eutraCellIdList;
            ok &= ModelBase::fromJson(fieldValue, refVal_eutraCellIdList);
            setEutraCellIdList(refVal_eutraCellIdList);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nrCellIdList")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nrCellIdList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<utility::string_t>> refVal_nrCellIdList;
            ok &= ModelBase::fromJson(fieldValue, refVal_nrCellIdList);
            setNrCellIdList(refVal_nrCellIdList);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tacList")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tacList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<utility::string_t>> refVal_tacList;
            ok &= ModelBase::fromJson(fieldValue, refVal_tacList);
            setTacList(refVal_tacList);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tacInfoPerPlmn")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tacInfoPerPlmn"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<TacInfo>> refVal_tacInfoPerPlmn;
            ok &= ModelBase::fromJson(fieldValue, refVal_tacInfoPerPlmn);
            setTacInfoPerPlmn(refVal_tacInfoPerPlmn);
        }
    }
    return ok;
}

void AreaScope::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EutraCellIdListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eutraCellIdList"), m_EutraCellIdList));
    }
    if(m_NrCellIdListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nrCellIdList"), m_NrCellIdList));
    }
    if(m_TacListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tacList"), m_TacList));
    }
    if(m_TacInfoPerPlmnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tacInfoPerPlmn"), m_TacInfoPerPlmn));
    }
}

bool AreaScope::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("eutraCellIdList")))
    {
        std::vector<std::shared_ptr<utility::string_t>> refVal_eutraCellIdList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eutraCellIdList")), refVal_eutraCellIdList );
        setEutraCellIdList(refVal_eutraCellIdList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nrCellIdList")))
    {
        std::vector<std::shared_ptr<utility::string_t>> refVal_nrCellIdList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nrCellIdList")), refVal_nrCellIdList );
        setNrCellIdList(refVal_nrCellIdList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tacList")))
    {
        std::vector<std::shared_ptr<utility::string_t>> refVal_tacList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tacList")), refVal_tacList );
        setTacList(refVal_tacList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tacInfoPerPlmn")))
    {
        std::map<utility::string_t, std::shared_ptr<TacInfo>> refVal_tacInfoPerPlmn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tacInfoPerPlmn")), refVal_tacInfoPerPlmn );
        setTacInfoPerPlmn(refVal_tacInfoPerPlmn);
    }
    return ok;
}

std::vector<std::shared_ptr<utility::string_t>>& AreaScope::getEutraCellIdList()
{
    return m_EutraCellIdList;
}

void AreaScope::setEutraCellIdList(const std::vector<std::shared_ptr<utility::string_t>>& value)
{
    m_EutraCellIdList = value;
    m_EutraCellIdListIsSet = true;
}

bool AreaScope::eutraCellIdListIsSet() const
{
    return m_EutraCellIdListIsSet;
}

void AreaScope::unsetEutraCellIdList()
{
    m_EutraCellIdListIsSet = false;
}
std::vector<std::shared_ptr<utility::string_t>>& AreaScope::getNrCellIdList()
{
    return m_NrCellIdList;
}

void AreaScope::setNrCellIdList(const std::vector<std::shared_ptr<utility::string_t>>& value)
{
    m_NrCellIdList = value;
    m_NrCellIdListIsSet = true;
}

bool AreaScope::nrCellIdListIsSet() const
{
    return m_NrCellIdListIsSet;
}

void AreaScope::unsetNrCellIdList()
{
    m_NrCellIdListIsSet = false;
}
std::vector<std::shared_ptr<utility::string_t>>& AreaScope::getTacList()
{
    return m_TacList;
}

void AreaScope::setTacList(const std::vector<std::shared_ptr<utility::string_t>>& value)
{
    m_TacList = value;
    m_TacListIsSet = true;
}

bool AreaScope::tacListIsSet() const
{
    return m_TacListIsSet;
}

void AreaScope::unsetTacList()
{
    m_TacListIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<TacInfo>>& AreaScope::getTacInfoPerPlmn()
{
    return m_TacInfoPerPlmn;
}

void AreaScope::setTacInfoPerPlmn(const std::map<utility::string_t, std::shared_ptr<TacInfo>>& value)
{
    m_TacInfoPerPlmn = value;
    m_TacInfoPerPlmnIsSet = true;
}

bool AreaScope::tacInfoPerPlmnIsSet() const
{
    return m_TacInfoPerPlmnIsSet;
}

void AreaScope::unsetTacInfoPerPlmn()
{
    m_TacInfoPerPlmnIsSet = false;
}
}
}
}
}


