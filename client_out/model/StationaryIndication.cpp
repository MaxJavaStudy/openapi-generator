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



#include "StationaryIndication.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



StationaryIndication::StationaryIndication()
{
}

StationaryIndication::~StationaryIndication()
{
}

void StationaryIndication::validate()
{
    // TODO: implement validation
}

web::json::value StationaryIndication::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eStationaryIndication::StationaryIndication_STATIONARY) val = web::json::value::string(U(STATIONARY));
    if (m_value == eStationaryIndication::StationaryIndication_MOBILE) val = web::json::value::string(U(MOBILE));

    return val;
}

bool StationaryIndication::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(STATIONARY)) m_value = eStationaryIndication::StationaryIndication_STATIONARY;
    if (s == utility::conversions::to_string_t(MOBILE)) m_value = eStationaryIndication::StationaryIndication_MOBILE;
    return true;
}

void StationaryIndication::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eStationaryIndication::StationaryIndication_STATIONARY) s = utility::conversions::to_string_t(STATIONARY);
    if (m_value == eStationaryIndication::StationaryIndication_MOBILE) s = utility::conversions::to_string_t(MOBILE);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool StationaryIndication::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eStationaryIndication v;

        
        if (s == utility::conversions::to_string_t(STATIONARY)) v = eStationaryIndication::StationaryIndication_STATIONARY;
        if (s == utility::conversions::to_string_t(MOBILE)) v = eStationaryIndication::StationaryIndication_MOBILE;

        setValue(v);
    }
    return ok;
}

StationaryIndication::eStationaryIndication StationaryIndication::getValue() const
{
   return m_value;
}

void StationaryIndication::setValue(StationaryIndication::eStationaryIndication const value)
{
   m_value = value;
}


}
}
}
}


