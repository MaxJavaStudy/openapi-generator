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



#include "UnrelatedClass.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




UnrelatedClass::UnrelatedClass()
{
    m_DefaultUnrelatedClassIsSet = false;
    m_ExternalUnrelatedClassIsSet = false;
    m_ServiceTypeUnrelatedClassesIsSet = false;
}

UnrelatedClass::~UnrelatedClass()
{
}

void UnrelatedClass::validate()
{
    // TODO: implement validation
}

web::json::value UnrelatedClass::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DefaultUnrelatedClassIsSet)
    {
        val[utility::conversions::to_string_t("defaultUnrelatedClass")] = ModelBase::toJson(m_DefaultUnrelatedClass);
    }
    if(m_ExternalUnrelatedClassIsSet)
    {
        val[utility::conversions::to_string_t("externalUnrelatedClass")] = ModelBase::toJson(m_ExternalUnrelatedClass);
    }
    if(m_ServiceTypeUnrelatedClassesIsSet)
    {
        val[utility::conversions::to_string_t("serviceTypeUnrelatedClasses")] = ModelBase::toJson(m_ServiceTypeUnrelatedClasses);
    }

    return val;
}

bool UnrelatedClass::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defaultUnrelatedClass")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultUnrelatedClass"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DefaultUnrelatedClass> refVal_defaultUnrelatedClass;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultUnrelatedClass);
            setDefaultUnrelatedClass(refVal_defaultUnrelatedClass);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("externalUnrelatedClass")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("externalUnrelatedClass"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ExternalUnrelatedClass> refVal_externalUnrelatedClass;
            ok &= ModelBase::fromJson(fieldValue, refVal_externalUnrelatedClass);
            setExternalUnrelatedClass(refVal_externalUnrelatedClass);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceTypeUnrelatedClasses")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceTypeUnrelatedClasses"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ServiceTypeUnrelatedClass>> refVal_serviceTypeUnrelatedClasses;
            ok &= ModelBase::fromJson(fieldValue, refVal_serviceTypeUnrelatedClasses);
            setServiceTypeUnrelatedClasses(refVal_serviceTypeUnrelatedClasses);
        }
    }
    return ok;
}

void UnrelatedClass::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DefaultUnrelatedClassIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultUnrelatedClass"), m_DefaultUnrelatedClass));
    }
    if(m_ExternalUnrelatedClassIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("externalUnrelatedClass"), m_ExternalUnrelatedClass));
    }
    if(m_ServiceTypeUnrelatedClassesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("serviceTypeUnrelatedClasses"), m_ServiceTypeUnrelatedClasses));
    }
}

bool UnrelatedClass::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("defaultUnrelatedClass")))
    {
        std::shared_ptr<DefaultUnrelatedClass> refVal_defaultUnrelatedClass;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultUnrelatedClass")), refVal_defaultUnrelatedClass );
        setDefaultUnrelatedClass(refVal_defaultUnrelatedClass);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("externalUnrelatedClass")))
    {
        std::shared_ptr<ExternalUnrelatedClass> refVal_externalUnrelatedClass;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("externalUnrelatedClass")), refVal_externalUnrelatedClass );
        setExternalUnrelatedClass(refVal_externalUnrelatedClass);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("serviceTypeUnrelatedClasses")))
    {
        std::vector<std::shared_ptr<ServiceTypeUnrelatedClass>> refVal_serviceTypeUnrelatedClasses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("serviceTypeUnrelatedClasses")), refVal_serviceTypeUnrelatedClasses );
        setServiceTypeUnrelatedClasses(refVal_serviceTypeUnrelatedClasses);
    }
    return ok;
}

std::shared_ptr<DefaultUnrelatedClass> UnrelatedClass::getDefaultUnrelatedClass() const
{
    return m_DefaultUnrelatedClass;
}

void UnrelatedClass::setDefaultUnrelatedClass(const std::shared_ptr<DefaultUnrelatedClass>& value)
{
    m_DefaultUnrelatedClass = value;
    m_DefaultUnrelatedClassIsSet = true;
}

bool UnrelatedClass::defaultUnrelatedClassIsSet() const
{
    return m_DefaultUnrelatedClassIsSet;
}

void UnrelatedClass::unsetDefaultUnrelatedClass()
{
    m_DefaultUnrelatedClassIsSet = false;
}
std::shared_ptr<ExternalUnrelatedClass> UnrelatedClass::getExternalUnrelatedClass() const
{
    return m_ExternalUnrelatedClass;
}

void UnrelatedClass::setExternalUnrelatedClass(const std::shared_ptr<ExternalUnrelatedClass>& value)
{
    m_ExternalUnrelatedClass = value;
    m_ExternalUnrelatedClassIsSet = true;
}

bool UnrelatedClass::externalUnrelatedClassIsSet() const
{
    return m_ExternalUnrelatedClassIsSet;
}

void UnrelatedClass::unsetExternalUnrelatedClass()
{
    m_ExternalUnrelatedClassIsSet = false;
}
std::vector<std::shared_ptr<ServiceTypeUnrelatedClass>>& UnrelatedClass::getServiceTypeUnrelatedClasses()
{
    return m_ServiceTypeUnrelatedClasses;
}

void UnrelatedClass::setServiceTypeUnrelatedClasses(const std::vector<std::shared_ptr<ServiceTypeUnrelatedClass>>& value)
{
    m_ServiceTypeUnrelatedClasses = value;
    m_ServiceTypeUnrelatedClassesIsSet = true;
}

bool UnrelatedClass::serviceTypeUnrelatedClassesIsSet() const
{
    return m_ServiceTypeUnrelatedClassesIsSet;
}

void UnrelatedClass::unsetServiceTypeUnrelatedClasses()
{
    m_ServiceTypeUnrelatedClassesIsSet = false;
}
}
}
}
}


