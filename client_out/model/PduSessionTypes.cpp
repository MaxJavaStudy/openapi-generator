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



#include "PduSessionTypes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




PduSessionTypes::PduSessionTypes()
{
    m_DefaultSessionTypeIsSet = false;
    m_AllowedSessionTypesIsSet = false;
}

PduSessionTypes::~PduSessionTypes()
{
}

void PduSessionTypes::validate()
{
    // TODO: implement validation
}

web::json::value PduSessionTypes::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DefaultSessionTypeIsSet)
    {
        val[utility::conversions::to_string_t("defaultSessionType")] = ModelBase::toJson(m_DefaultSessionType);
    }
    if(m_AllowedSessionTypesIsSet)
    {
        val[utility::conversions::to_string_t("allowedSessionTypes")] = ModelBase::toJson(m_AllowedSessionTypes);
    }

    return val;
}

bool PduSessionTypes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defaultSessionType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultSessionType"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PduSessionType> refVal_defaultSessionType;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultSessionType);
            setDefaultSessionType(refVal_defaultSessionType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowedSessionTypes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowedSessionTypes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<PduSessionType>> refVal_allowedSessionTypes;
            ok &= ModelBase::fromJson(fieldValue, refVal_allowedSessionTypes);
            setAllowedSessionTypes(refVal_allowedSessionTypes);
        }
    }
    return ok;
}

void PduSessionTypes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DefaultSessionTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultSessionType"), m_DefaultSessionType));
    }
    if(m_AllowedSessionTypesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("allowedSessionTypes"), m_AllowedSessionTypes));
    }
}

bool PduSessionTypes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("defaultSessionType")))
    {
        std::shared_ptr<PduSessionType> refVal_defaultSessionType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultSessionType")), refVal_defaultSessionType );
        setDefaultSessionType(refVal_defaultSessionType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("allowedSessionTypes")))
    {
        std::vector<std::shared_ptr<PduSessionType>> refVal_allowedSessionTypes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("allowedSessionTypes")), refVal_allowedSessionTypes );
        setAllowedSessionTypes(refVal_allowedSessionTypes);
    }
    return ok;
}

std::shared_ptr<PduSessionType> PduSessionTypes::getDefaultSessionType() const
{
    return m_DefaultSessionType;
}

void PduSessionTypes::setDefaultSessionType(const std::shared_ptr<PduSessionType>& value)
{
    m_DefaultSessionType = value;
    m_DefaultSessionTypeIsSet = true;
}

bool PduSessionTypes::defaultSessionTypeIsSet() const
{
    return m_DefaultSessionTypeIsSet;
}

void PduSessionTypes::unsetDefaultSessionType()
{
    m_DefaultSessionTypeIsSet = false;
}
std::vector<std::shared_ptr<PduSessionType>>& PduSessionTypes::getAllowedSessionTypes()
{
    return m_AllowedSessionTypes;
}

void PduSessionTypes::setAllowedSessionTypes(const std::vector<std::shared_ptr<PduSessionType>>& value)
{
    m_AllowedSessionTypes = value;
    m_AllowedSessionTypesIsSet = true;
}

bool PduSessionTypes::allowedSessionTypesIsSet() const
{
    return m_AllowedSessionTypesIsSet;
}

void PduSessionTypes::unsetAllowedSessionTypes()
{
    m_AllowedSessionTypesIsSet = false;
}
}
}
}
}


