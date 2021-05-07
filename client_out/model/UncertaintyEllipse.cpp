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



#include "UncertaintyEllipse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




UncertaintyEllipse::UncertaintyEllipse()
{
    m_SemiMajor = 0.0f;
    m_SemiMajorIsSet = false;
    m_SemiMinor = 0.0f;
    m_SemiMinorIsSet = false;
    m_OrientationMajor = 0;
    m_OrientationMajorIsSet = false;
}

UncertaintyEllipse::~UncertaintyEllipse()
{
}

void UncertaintyEllipse::validate()
{
    // TODO: implement validation
}

web::json::value UncertaintyEllipse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SemiMajorIsSet)
    {
        val[utility::conversions::to_string_t("semiMajor")] = ModelBase::toJson(m_SemiMajor);
    }
    if(m_SemiMinorIsSet)
    {
        val[utility::conversions::to_string_t("semiMinor")] = ModelBase::toJson(m_SemiMinor);
    }
    if(m_OrientationMajorIsSet)
    {
        val[utility::conversions::to_string_t("orientationMajor")] = ModelBase::toJson(m_OrientationMajor);
    }

    return val;
}

bool UncertaintyEllipse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("semiMajor")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("semiMajor"));
        if(!fieldValue.is_null())
        {
            float refVal_semiMajor;
            ok &= ModelBase::fromJson(fieldValue, refVal_semiMajor);
            setSemiMajor(refVal_semiMajor);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("semiMinor")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("semiMinor"));
        if(!fieldValue.is_null())
        {
            float refVal_semiMinor;
            ok &= ModelBase::fromJson(fieldValue, refVal_semiMinor);
            setSemiMinor(refVal_semiMinor);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orientationMajor")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orientationMajor"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_orientationMajor;
            ok &= ModelBase::fromJson(fieldValue, refVal_orientationMajor);
            setOrientationMajor(refVal_orientationMajor);
        }
    }
    return ok;
}

void UncertaintyEllipse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SemiMajorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("semiMajor"), m_SemiMajor));
    }
    if(m_SemiMinorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("semiMinor"), m_SemiMinor));
    }
    if(m_OrientationMajorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("orientationMajor"), m_OrientationMajor));
    }
}

bool UncertaintyEllipse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("semiMajor")))
    {
        float refVal_semiMajor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("semiMajor")), refVal_semiMajor );
        setSemiMajor(refVal_semiMajor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("semiMinor")))
    {
        float refVal_semiMinor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("semiMinor")), refVal_semiMinor );
        setSemiMinor(refVal_semiMinor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("orientationMajor")))
    {
        int32_t refVal_orientationMajor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("orientationMajor")), refVal_orientationMajor );
        setOrientationMajor(refVal_orientationMajor);
    }
    return ok;
}

float UncertaintyEllipse::getSemiMajor() const
{
    return m_SemiMajor;
}

void UncertaintyEllipse::setSemiMajor(float value)
{
    m_SemiMajor = value;
    m_SemiMajorIsSet = true;
}

bool UncertaintyEllipse::semiMajorIsSet() const
{
    return m_SemiMajorIsSet;
}

void UncertaintyEllipse::unsetSemiMajor()
{
    m_SemiMajorIsSet = false;
}
float UncertaintyEllipse::getSemiMinor() const
{
    return m_SemiMinor;
}

void UncertaintyEllipse::setSemiMinor(float value)
{
    m_SemiMinor = value;
    m_SemiMinorIsSet = true;
}

bool UncertaintyEllipse::semiMinorIsSet() const
{
    return m_SemiMinorIsSet;
}

void UncertaintyEllipse::unsetSemiMinor()
{
    m_SemiMinorIsSet = false;
}
int32_t UncertaintyEllipse::getOrientationMajor() const
{
    return m_OrientationMajor;
}

void UncertaintyEllipse::setOrientationMajor(int32_t value)
{
    m_OrientationMajor = value;
    m_OrientationMajorIsSet = true;
}

bool UncertaintyEllipse::orientationMajorIsSet() const
{
    return m_OrientationMajorIsSet;
}

void UncertaintyEllipse::unsetOrientationMajor()
{
    m_OrientationMajorIsSet = false;
}
}
}
}
}


