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



#include "AdditionalSnssaiData.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




AdditionalSnssaiData::AdditionalSnssaiData()
{
    m_RequiredAuthnAuthz = false;
    m_RequiredAuthnAuthzIsSet = false;
}

AdditionalSnssaiData::~AdditionalSnssaiData()
{
}

void AdditionalSnssaiData::validate()
{
    // TODO: implement validation
}

web::json::value AdditionalSnssaiData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RequiredAuthnAuthzIsSet)
    {
        val[utility::conversions::to_string_t("requiredAuthnAuthz")] = ModelBase::toJson(m_RequiredAuthnAuthz);
    }

    return val;
}

bool AdditionalSnssaiData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("requiredAuthnAuthz")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requiredAuthnAuthz"));
        if(!fieldValue.is_null())
        {
            bool refVal_requiredAuthnAuthz;
            ok &= ModelBase::fromJson(fieldValue, refVal_requiredAuthnAuthz);
            setRequiredAuthnAuthz(refVal_requiredAuthnAuthz);
        }
    }
    return ok;
}

void AdditionalSnssaiData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_RequiredAuthnAuthzIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("requiredAuthnAuthz"), m_RequiredAuthnAuthz));
    }
}

bool AdditionalSnssaiData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("requiredAuthnAuthz")))
    {
        bool refVal_requiredAuthnAuthz;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("requiredAuthnAuthz")), refVal_requiredAuthnAuthz );
        setRequiredAuthnAuthz(refVal_requiredAuthnAuthz);
    }
    return ok;
}

bool AdditionalSnssaiData::isRequiredAuthnAuthz() const
{
    return m_RequiredAuthnAuthz;
}

void AdditionalSnssaiData::setRequiredAuthnAuthz(bool value)
{
    m_RequiredAuthnAuthz = value;
    m_RequiredAuthnAuthzIsSet = true;
}

bool AdditionalSnssaiData::requiredAuthnAuthzIsSet() const
{
    return m_RequiredAuthnAuthzIsSet;
}

void AdditionalSnssaiData::unsetRequiredAuthnAuthz()
{
    m_RequiredAuthnAuthzIsSet = false;
}
}
}
}
}


