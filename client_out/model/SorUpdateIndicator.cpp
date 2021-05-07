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



#include "SorUpdateIndicator.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



SorUpdateIndicator::SorUpdateIndicator()
{
}

SorUpdateIndicator::~SorUpdateIndicator()
{
}

void SorUpdateIndicator::validate()
{
    // TODO: implement validation
}

web::json::value SorUpdateIndicator::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eSorUpdateIndicator::SorUpdateIndicator_INITIAL_REGISTRATION) val = web::json::value::string(U(INITIAL_REGISTRATION));
    if (m_value == eSorUpdateIndicator::SorUpdateIndicator_EMERGENCY_REGISTRATION) val = web::json::value::string(U(EMERGENCY_REGISTRATION));

    return val;
}

bool SorUpdateIndicator::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(INITIAL_REGISTRATION)) m_value = eSorUpdateIndicator::SorUpdateIndicator_INITIAL_REGISTRATION;
    if (s == utility::conversions::to_string_t(EMERGENCY_REGISTRATION)) m_value = eSorUpdateIndicator::SorUpdateIndicator_EMERGENCY_REGISTRATION;
    return true;
}

void SorUpdateIndicator::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eSorUpdateIndicator::SorUpdateIndicator_INITIAL_REGISTRATION) s = utility::conversions::to_string_t(INITIAL_REGISTRATION);
    if (m_value == eSorUpdateIndicator::SorUpdateIndicator_EMERGENCY_REGISTRATION) s = utility::conversions::to_string_t(EMERGENCY_REGISTRATION);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool SorUpdateIndicator::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eSorUpdateIndicator v;

        
        if (s == utility::conversions::to_string_t(INITIAL_REGISTRATION)) v = eSorUpdateIndicator::SorUpdateIndicator_INITIAL_REGISTRATION;
        if (s == utility::conversions::to_string_t(EMERGENCY_REGISTRATION)) v = eSorUpdateIndicator::SorUpdateIndicator_EMERGENCY_REGISTRATION;

        setValue(v);
    }
    return ok;
}

SorUpdateIndicator::eSorUpdateIndicator SorUpdateIndicator::getValue() const
{
   return m_value;
}

void SorUpdateIndicator::setValue(SorUpdateIndicator::eSorUpdateIndicator const value)
{
   m_value = value;
}


}
}
}
}


