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



#include "MdtUserConsent.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



MdtUserConsent::MdtUserConsent()
{
}

MdtUserConsent::~MdtUserConsent()
{
}

void MdtUserConsent::validate()
{
    // TODO: implement validation
}

web::json::value MdtUserConsent::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eMdtUserConsent::MdtUserConsent_NOT_GIVEN) val = web::json::value::string(U(CONSENT_NOT_GIVEN));
    if (m_value == eMdtUserConsent::MdtUserConsent_GIVEN) val = web::json::value::string(U(CONSENT_GIVEN));

    return val;
}

bool MdtUserConsent::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(CONSENT_NOT_GIVEN)) m_value = eMdtUserConsent::MdtUserConsent_NOT_GIVEN;
    if (s == utility::conversions::to_string_t(CONSENT_GIVEN)) m_value = eMdtUserConsent::MdtUserConsent_GIVEN;
    return true;
}

void MdtUserConsent::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eMdtUserConsent::MdtUserConsent_NOT_GIVEN) s = utility::conversions::to_string_t(CONSENT_NOT_GIVEN);
    if (m_value == eMdtUserConsent::MdtUserConsent_GIVEN) s = utility::conversions::to_string_t(CONSENT_GIVEN);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool MdtUserConsent::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eMdtUserConsent v;

        
        if (s == utility::conversions::to_string_t(CONSENT_NOT_GIVEN)) v = eMdtUserConsent::MdtUserConsent_NOT_GIVEN;
        if (s == utility::conversions::to_string_t(CONSENT_GIVEN)) v = eMdtUserConsent::MdtUserConsent_GIVEN;

        setValue(v);
    }
    return ok;
}

MdtUserConsent::eMdtUserConsent MdtUserConsent::getValue() const
{
   return m_value;
}

void MdtUserConsent::setValue(MdtUserConsent::eMdtUserConsent const value)
{
   m_value = value;
}


}
}
}
}


