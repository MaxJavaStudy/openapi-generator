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



#include "Nssai.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Nssai::Nssai()
{
    m_SupportedFeatures = utility::conversions::to_string_t("");
    m_SupportedFeaturesIsSet = false;
    m_DefaultSingleNssaisIsSet = false;
    m_SingleNssaisIsSet = false;
    m_ProvisioningTime = utility::datetime();
    m_ProvisioningTimeIsSet = false;
    m_AdditionalSnssaiDataIsSet = false;
}

Nssai::~Nssai()
{
}

void Nssai::validate()
{
    // TODO: implement validation
}

web::json::value Nssai::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SupportedFeaturesIsSet)
    {
        val[utility::conversions::to_string_t("supportedFeatures")] = ModelBase::toJson(m_SupportedFeatures);
    }
    if(m_DefaultSingleNssaisIsSet)
    {
        val[utility::conversions::to_string_t("defaultSingleNssais")] = ModelBase::toJson(m_DefaultSingleNssais);
    }
    if(m_SingleNssaisIsSet)
    {
        val[utility::conversions::to_string_t("singleNssais")] = ModelBase::toJson(m_SingleNssais);
    }
    if(m_ProvisioningTimeIsSet)
    {
        val[utility::conversions::to_string_t("provisioningTime")] = ModelBase::toJson(m_ProvisioningTime);
    }
    if(m_AdditionalSnssaiDataIsSet)
    {
        val[utility::conversions::to_string_t("additionalSnssaiData")] = ModelBase::toJson(m_AdditionalSnssaiData);
    }

    return val;
}

bool Nssai::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("supportedFeatures")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supportedFeatures"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_supportedFeatures;
            ok &= ModelBase::fromJson(fieldValue, refVal_supportedFeatures);
            setSupportedFeatures(refVal_supportedFeatures);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultSingleNssais")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultSingleNssais"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Snssai>> refVal_defaultSingleNssais;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultSingleNssais);
            setDefaultSingleNssais(refVal_defaultSingleNssais);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("singleNssais")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("singleNssais"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Snssai>> refVal_singleNssais;
            ok &= ModelBase::fromJson(fieldValue, refVal_singleNssais);
            setSingleNssais(refVal_singleNssais);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provisioningTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provisioningTime"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_provisioningTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_provisioningTime);
            setProvisioningTime(refVal_provisioningTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additionalSnssaiData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additionalSnssaiData"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<AdditionalSnssaiData>> refVal_additionalSnssaiData;
            ok &= ModelBase::fromJson(fieldValue, refVal_additionalSnssaiData);
            setAdditionalSnssaiData(refVal_additionalSnssaiData);
        }
    }
    return ok;
}

void Nssai::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SupportedFeaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("supportedFeatures"), m_SupportedFeatures));
    }
    if(m_DefaultSingleNssaisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultSingleNssais"), m_DefaultSingleNssais));
    }
    if(m_SingleNssaisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("singleNssais"), m_SingleNssais));
    }
    if(m_ProvisioningTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("provisioningTime"), m_ProvisioningTime));
    }
    if(m_AdditionalSnssaiDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("additionalSnssaiData"), m_AdditionalSnssaiData));
    }
}

bool Nssai::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("supportedFeatures")))
    {
        utility::string_t refVal_supportedFeatures;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("supportedFeatures")), refVal_supportedFeatures );
        setSupportedFeatures(refVal_supportedFeatures);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultSingleNssais")))
    {
        std::vector<std::shared_ptr<Snssai>> refVal_defaultSingleNssais;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultSingleNssais")), refVal_defaultSingleNssais );
        setDefaultSingleNssais(refVal_defaultSingleNssais);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("singleNssais")))
    {
        std::vector<std::shared_ptr<Snssai>> refVal_singleNssais;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("singleNssais")), refVal_singleNssais );
        setSingleNssais(refVal_singleNssais);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("provisioningTime")))
    {
        utility::datetime refVal_provisioningTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("provisioningTime")), refVal_provisioningTime );
        setProvisioningTime(refVal_provisioningTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("additionalSnssaiData")))
    {
        std::map<utility::string_t, std::shared_ptr<AdditionalSnssaiData>> refVal_additionalSnssaiData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("additionalSnssaiData")), refVal_additionalSnssaiData );
        setAdditionalSnssaiData(refVal_additionalSnssaiData);
    }
    return ok;
}

utility::string_t Nssai::getSupportedFeatures() const
{
    return m_SupportedFeatures;
}

void Nssai::setSupportedFeatures(const utility::string_t& value)
{
    m_SupportedFeatures = value;
    m_SupportedFeaturesIsSet = true;
}

bool Nssai::supportedFeaturesIsSet() const
{
    return m_SupportedFeaturesIsSet;
}

void Nssai::unsetSupportedFeatures()
{
    m_SupportedFeaturesIsSet = false;
}
std::vector<std::shared_ptr<Snssai>>& Nssai::getDefaultSingleNssais()
{
    return m_DefaultSingleNssais;
}

void Nssai::setDefaultSingleNssais(const std::vector<std::shared_ptr<Snssai>>& value)
{
    m_DefaultSingleNssais = value;
    m_DefaultSingleNssaisIsSet = true;
}

bool Nssai::defaultSingleNssaisIsSet() const
{
    return m_DefaultSingleNssaisIsSet;
}

void Nssai::unsetDefaultSingleNssais()
{
    m_DefaultSingleNssaisIsSet = false;
}
std::vector<std::shared_ptr<Snssai>>& Nssai::getSingleNssais()
{
    return m_SingleNssais;
}

void Nssai::setSingleNssais(const std::vector<std::shared_ptr<Snssai>>& value)
{
    m_SingleNssais = value;
    m_SingleNssaisIsSet = true;
}

bool Nssai::singleNssaisIsSet() const
{
    return m_SingleNssaisIsSet;
}

void Nssai::unsetSingleNssais()
{
    m_SingleNssaisIsSet = false;
}
utility::datetime Nssai::getProvisioningTime() const
{
    return m_ProvisioningTime;
}

void Nssai::setProvisioningTime(const utility::datetime& value)
{
    m_ProvisioningTime = value;
    m_ProvisioningTimeIsSet = true;
}

bool Nssai::provisioningTimeIsSet() const
{
    return m_ProvisioningTimeIsSet;
}

void Nssai::unsetProvisioningTime()
{
    m_ProvisioningTimeIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<AdditionalSnssaiData>>& Nssai::getAdditionalSnssaiData()
{
    return m_AdditionalSnssaiData;
}

void Nssai::setAdditionalSnssaiData(const std::map<utility::string_t, std::shared_ptr<AdditionalSnssaiData>>& value)
{
    m_AdditionalSnssaiData = value;
    m_AdditionalSnssaiDataIsSet = true;
}

bool Nssai::additionalSnssaiDataIsSet() const
{
    return m_AdditionalSnssaiDataIsSet;
}

void Nssai::unsetAdditionalSnssaiData()
{
    m_AdditionalSnssaiDataIsSet = false;
}
}
}
}
}


