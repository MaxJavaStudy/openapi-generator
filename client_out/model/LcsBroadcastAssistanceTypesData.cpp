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



#include "LcsBroadcastAssistanceTypesData.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




LcsBroadcastAssistanceTypesData::LcsBroadcastAssistanceTypesData()
{
    m_LocationAssistanceTypeIsSet = false;
}

LcsBroadcastAssistanceTypesData::~LcsBroadcastAssistanceTypesData()
{
}

void LcsBroadcastAssistanceTypesData::validate()
{
    // TODO: implement validation
}

web::json::value LcsBroadcastAssistanceTypesData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_LocationAssistanceTypeIsSet)
    {
        val[utility::conversions::to_string_t("locationAssistanceType")] = ModelBase::toJson(m_LocationAssistanceType);
    }

    return val;
}

bool LcsBroadcastAssistanceTypesData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("locationAssistanceType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locationAssistanceType"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<HttpContent>> refVal_locationAssistanceType;
            ok &= ModelBase::fromJson(fieldValue, refVal_locationAssistanceType);
            setLocationAssistanceType(refVal_locationAssistanceType);
        }
    }
    return ok;
}

void LcsBroadcastAssistanceTypesData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_LocationAssistanceTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locationAssistanceType"), m_LocationAssistanceType));
    }
}

bool LcsBroadcastAssistanceTypesData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("locationAssistanceType")))
    {
        std::vector<std::shared_ptr<HttpContent>> refVal_locationAssistanceType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("locationAssistanceType")), refVal_locationAssistanceType );
        setLocationAssistanceType(refVal_locationAssistanceType);
    }
    return ok;
}

std::vector<std::shared_ptr<HttpContent>>& LcsBroadcastAssistanceTypesData::getLocationAssistanceType()
{
    return m_LocationAssistanceType;
}

void LcsBroadcastAssistanceTypesData::setLocationAssistanceType(const std::vector<std::shared_ptr<HttpContent>>& value)
{
    m_LocationAssistanceType = value;
    m_LocationAssistanceTypeIsSet = true;
}

bool LcsBroadcastAssistanceTypesData::locationAssistanceTypeIsSet() const
{
    return m_LocationAssistanceTypeIsSet;
}

void LcsBroadcastAssistanceTypesData::unsetLocationAssistanceType()
{
    m_LocationAssistanceTypeIsSet = false;
}
}
}
}
}


