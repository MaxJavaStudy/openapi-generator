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



#include "PlmnEcInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




PlmnEcInfo::PlmnEcInfo()
{
    m_PlmnIdIsSet = false;
    m_EcRestrictionDataWbIsSet = false;
    m_EcRestrictionDataNb = false;
    m_EcRestrictionDataNbIsSet = false;
}

PlmnEcInfo::~PlmnEcInfo()
{
}

void PlmnEcInfo::validate()
{
    // TODO: implement validation
}

web::json::value PlmnEcInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PlmnIdIsSet)
    {
        val[utility::conversions::to_string_t("plmnId")] = ModelBase::toJson(m_PlmnId);
    }
    if(m_EcRestrictionDataWbIsSet)
    {
        val[utility::conversions::to_string_t("ecRestrictionDataWb")] = ModelBase::toJson(m_EcRestrictionDataWb);
    }
    if(m_EcRestrictionDataNbIsSet)
    {
        val[utility::conversions::to_string_t("ecRestrictionDataNb")] = ModelBase::toJson(m_EcRestrictionDataNb);
    }

    return val;
}

bool PlmnEcInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plmnId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plmnId"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PlmnId> refVal_plmnId;
            ok &= ModelBase::fromJson(fieldValue, refVal_plmnId);
            setPlmnId(refVal_plmnId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecRestrictionDataWb")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecRestrictionDataWb"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<EcRestrictionDataWb> refVal_ecRestrictionDataWb;
            ok &= ModelBase::fromJson(fieldValue, refVal_ecRestrictionDataWb);
            setEcRestrictionDataWb(refVal_ecRestrictionDataWb);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecRestrictionDataNb")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecRestrictionDataNb"));
        if(!fieldValue.is_null())
        {
            bool refVal_ecRestrictionDataNb;
            ok &= ModelBase::fromJson(fieldValue, refVal_ecRestrictionDataNb);
            setEcRestrictionDataNb(refVal_ecRestrictionDataNb);
        }
    }
    return ok;
}

void PlmnEcInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PlmnIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("plmnId"), m_PlmnId));
    }
    if(m_EcRestrictionDataWbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ecRestrictionDataWb"), m_EcRestrictionDataWb));
    }
    if(m_EcRestrictionDataNbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ecRestrictionDataNb"), m_EcRestrictionDataNb));
    }
}

bool PlmnEcInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("plmnId")))
    {
        std::shared_ptr<PlmnId> refVal_plmnId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("plmnId")), refVal_plmnId );
        setPlmnId(refVal_plmnId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ecRestrictionDataWb")))
    {
        std::shared_ptr<EcRestrictionDataWb> refVal_ecRestrictionDataWb;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ecRestrictionDataWb")), refVal_ecRestrictionDataWb );
        setEcRestrictionDataWb(refVal_ecRestrictionDataWb);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ecRestrictionDataNb")))
    {
        bool refVal_ecRestrictionDataNb;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ecRestrictionDataNb")), refVal_ecRestrictionDataNb );
        setEcRestrictionDataNb(refVal_ecRestrictionDataNb);
    }
    return ok;
}

std::shared_ptr<PlmnId> PlmnEcInfo::getPlmnId() const
{
    return m_PlmnId;
}

void PlmnEcInfo::setPlmnId(const std::shared_ptr<PlmnId>& value)
{
    m_PlmnId = value;
    m_PlmnIdIsSet = true;
}

bool PlmnEcInfo::plmnIdIsSet() const
{
    return m_PlmnIdIsSet;
}

void PlmnEcInfo::unsetPlmnId()
{
    m_PlmnIdIsSet = false;
}
std::shared_ptr<EcRestrictionDataWb> PlmnEcInfo::getEcRestrictionDataWb() const
{
    return m_EcRestrictionDataWb;
}

void PlmnEcInfo::setEcRestrictionDataWb(const std::shared_ptr<EcRestrictionDataWb>& value)
{
    m_EcRestrictionDataWb = value;
    m_EcRestrictionDataWbIsSet = true;
}

bool PlmnEcInfo::ecRestrictionDataWbIsSet() const
{
    return m_EcRestrictionDataWbIsSet;
}

void PlmnEcInfo::unsetEcRestrictionDataWb()
{
    m_EcRestrictionDataWbIsSet = false;
}
bool PlmnEcInfo::isEcRestrictionDataNb() const
{
    return m_EcRestrictionDataNb;
}

void PlmnEcInfo::setEcRestrictionDataNb(bool value)
{
    m_EcRestrictionDataNb = value;
    m_EcRestrictionDataNbIsSet = true;
}

bool PlmnEcInfo::ecRestrictionDataNbIsSet() const
{
    return m_EcRestrictionDataNbIsSet;
}

void PlmnEcInfo::unsetEcRestrictionDataNb()
{
    m_EcRestrictionDataNbIsSet = false;
}
}
}
}
}


