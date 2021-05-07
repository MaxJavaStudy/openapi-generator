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



#include "PlmnOperatorClass.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




PlmnOperatorClass::PlmnOperatorClass()
{
    m_LcsClientClassIsSet = false;
    m_LcsClientIdsIsSet = false;
}

PlmnOperatorClass::~PlmnOperatorClass()
{
}

void PlmnOperatorClass::validate()
{
    // TODO: implement validation
}

web::json::value PlmnOperatorClass::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_LcsClientClassIsSet)
    {
        val[utility::conversions::to_string_t("lcsClientClass")] = ModelBase::toJson(m_LcsClientClass);
    }
    if(m_LcsClientIdsIsSet)
    {
        val[utility::conversions::to_string_t("lcsClientIds")] = ModelBase::toJson(m_LcsClientIds);
    }

    return val;
}

bool PlmnOperatorClass::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lcsClientClass")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lcsClientClass"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LcsClientClass> refVal_lcsClientClass;
            ok &= ModelBase::fromJson(fieldValue, refVal_lcsClientClass);
            setLcsClientClass(refVal_lcsClientClass);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lcsClientIds")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lcsClientIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<utility::string_t>> refVal_lcsClientIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_lcsClientIds);
            setLcsClientIds(refVal_lcsClientIds);
        }
    }
    return ok;
}

void PlmnOperatorClass::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_LcsClientClassIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lcsClientClass"), m_LcsClientClass));
    }
    if(m_LcsClientIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lcsClientIds"), m_LcsClientIds));
    }
}

bool PlmnOperatorClass::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("lcsClientClass")))
    {
        std::shared_ptr<LcsClientClass> refVal_lcsClientClass;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lcsClientClass")), refVal_lcsClientClass );
        setLcsClientClass(refVal_lcsClientClass);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lcsClientIds")))
    {
        std::vector<std::shared_ptr<utility::string_t>> refVal_lcsClientIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lcsClientIds")), refVal_lcsClientIds );
        setLcsClientIds(refVal_lcsClientIds);
    }
    return ok;
}

std::shared_ptr<LcsClientClass> PlmnOperatorClass::getLcsClientClass() const
{
    return m_LcsClientClass;
}

void PlmnOperatorClass::setLcsClientClass(const std::shared_ptr<LcsClientClass>& value)
{
    m_LcsClientClass = value;
    m_LcsClientClassIsSet = true;
}

bool PlmnOperatorClass::lcsClientClassIsSet() const
{
    return m_LcsClientClassIsSet;
}

void PlmnOperatorClass::unsetLcsClientClass()
{
    m_LcsClientClassIsSet = false;
}
std::vector<std::shared_ptr<utility::string_t>>& PlmnOperatorClass::getLcsClientIds()
{
    return m_LcsClientIds;
}

void PlmnOperatorClass::setLcsClientIds(const std::vector<std::shared_ptr<utility::string_t>>& value)
{
    m_LcsClientIds = value;
    m_LcsClientIdsIsSet = true;
}

bool PlmnOperatorClass::lcsClientIdsIsSet() const
{
    return m_LcsClientIdsIsSet;
}

void PlmnOperatorClass::unsetLcsClientIds()
{
    m_LcsClientIdsIsSet = false;
}
}
}
}
}


