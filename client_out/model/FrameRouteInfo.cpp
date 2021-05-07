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



#include "FrameRouteInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




FrameRouteInfo::FrameRouteInfo()
{
    m_Ipv4Mask = utility::conversions::to_string_t("");
    m_Ipv4MaskIsSet = false;
    m_Ipv6Prefix = utility::conversions::to_string_t("");
    m_Ipv6PrefixIsSet = false;
}

FrameRouteInfo::~FrameRouteInfo()
{
}

void FrameRouteInfo::validate()
{
    // TODO: implement validation
}

web::json::value FrameRouteInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Ipv4MaskIsSet)
    {
        val[utility::conversions::to_string_t("ipv4Mask")] = ModelBase::toJson(m_Ipv4Mask);
    }
    if(m_Ipv6PrefixIsSet)
    {
        val[utility::conversions::to_string_t("ipv6Prefix")] = ModelBase::toJson(m_Ipv6Prefix);
    }

    return val;
}

bool FrameRouteInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ipv4Mask")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv4Mask"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ipv4Mask;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipv4Mask);
            setIpv4Mask(refVal_ipv4Mask);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6Prefix")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6Prefix"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ipv6Prefix;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipv6Prefix);
            setIpv6Prefix(refVal_ipv6Prefix);
        }
    }
    return ok;
}

void FrameRouteInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Ipv4MaskIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipv4Mask"), m_Ipv4Mask));
    }
    if(m_Ipv6PrefixIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipv6Prefix"), m_Ipv6Prefix));
    }
}

bool FrameRouteInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ipv4Mask")))
    {
        utility::string_t refVal_ipv4Mask;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipv4Mask")), refVal_ipv4Mask );
        setIpv4Mask(refVal_ipv4Mask);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ipv6Prefix")))
    {
        utility::string_t refVal_ipv6Prefix;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipv6Prefix")), refVal_ipv6Prefix );
        setIpv6Prefix(refVal_ipv6Prefix);
    }
    return ok;
}

utility::string_t FrameRouteInfo::getIpv4Mask() const
{
    return m_Ipv4Mask;
}

void FrameRouteInfo::setIpv4Mask(const utility::string_t& value)
{
    m_Ipv4Mask = value;
    m_Ipv4MaskIsSet = true;
}

bool FrameRouteInfo::ipv4MaskIsSet() const
{
    return m_Ipv4MaskIsSet;
}

void FrameRouteInfo::unsetIpv4Mask()
{
    m_Ipv4MaskIsSet = false;
}
utility::string_t FrameRouteInfo::getIpv6Prefix() const
{
    return m_Ipv6Prefix;
}

void FrameRouteInfo::setIpv6Prefix(const utility::string_t& value)
{
    m_Ipv6Prefix = value;
    m_Ipv6PrefixIsSet = true;
}

bool FrameRouteInfo::ipv6PrefixIsSet() const
{
    return m_Ipv6PrefixIsSet;
}

void FrameRouteInfo::unsetIpv6Prefix()
{
    m_Ipv6PrefixIsSet = false;
}
}
}
}
}


