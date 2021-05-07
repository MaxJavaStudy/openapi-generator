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



#include "PduSessionType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PduSessionType::PduSessionType()
{
}

PduSessionType::~PduSessionType()
{
}

void PduSessionType::validate()
{
    // TODO: implement validation
}

web::json::value PduSessionType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == ePduSessionType::PduSessionType_IPV4) val = web::json::value::string(U(IPV4));
    if (m_value == ePduSessionType::PduSessionType_IPV6) val = web::json::value::string(U(IPV6));
    if (m_value == ePduSessionType::PduSessionType_IPV4V6) val = web::json::value::string(U(IPV4V6));
    if (m_value == ePduSessionType::PduSessionType_UNSTRUCTURED) val = web::json::value::string(U(UNSTRUCTURED));
    if (m_value == ePduSessionType::PduSessionType_ETHERNET) val = web::json::value::string(U(ETHERNET));

    return val;
}

bool PduSessionType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(IPV4)) m_value = ePduSessionType::PduSessionType_IPV4;
    if (s == utility::conversions::to_string_t(IPV6)) m_value = ePduSessionType::PduSessionType_IPV6;
    if (s == utility::conversions::to_string_t(IPV4V6)) m_value = ePduSessionType::PduSessionType_IPV4V6;
    if (s == utility::conversions::to_string_t(UNSTRUCTURED)) m_value = ePduSessionType::PduSessionType_UNSTRUCTURED;
    if (s == utility::conversions::to_string_t(ETHERNET)) m_value = ePduSessionType::PduSessionType_ETHERNET;
    return true;
}

void PduSessionType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == ePduSessionType::PduSessionType_IPV4) s = utility::conversions::to_string_t(IPV4);
    if (m_value == ePduSessionType::PduSessionType_IPV6) s = utility::conversions::to_string_t(IPV6);
    if (m_value == ePduSessionType::PduSessionType_IPV4V6) s = utility::conversions::to_string_t(IPV4V6);
    if (m_value == ePduSessionType::PduSessionType_UNSTRUCTURED) s = utility::conversions::to_string_t(UNSTRUCTURED);
    if (m_value == ePduSessionType::PduSessionType_ETHERNET) s = utility::conversions::to_string_t(ETHERNET);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool PduSessionType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    {
        utility::string_t s;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), s);
        ePduSessionType v;

        
        if (s == utility::conversions::to_string_t(IPV4)) v = ePduSessionType::PduSessionType_IPV4;
        if (s == utility::conversions::to_string_t(IPV6)) v = ePduSessionType::PduSessionType_IPV6;
        if (s == utility::conversions::to_string_t(IPV4V6)) v = ePduSessionType::PduSessionType_IPV4V6;
        if (s == utility::conversions::to_string_t(UNSTRUCTURED)) v = ePduSessionType::PduSessionType_UNSTRUCTURED;
        if (s == utility::conversions::to_string_t(ETHERNET)) v = ePduSessionType::PduSessionType_ETHERNET;

        setValue(v);
    }
    return ok;
}

PduSessionType::ePduSessionType PduSessionType::getValue() const
{
   return m_value;
}

void PduSessionType::setValue(PduSessionType::ePduSessionType const value)
{
   m_value = value;
}


}
}
}
}


