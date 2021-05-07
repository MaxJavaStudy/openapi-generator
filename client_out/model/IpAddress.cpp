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



#include "IpAddress.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




IpAddress::IpAddress()
{
    m_Ipv4Addr = utility::conversions::to_string_t("");
    m_Ipv4AddrIsSet = false;
    m_Ipv6Addr = utility::conversions::to_string_t("");
    m_Ipv6AddrIsSet = false;
    m_Ipv6Prefix = utility::conversions::to_string_t("");
    m_Ipv6PrefixIsSet = false;
}

IpAddress::~IpAddress()
{
}

void IpAddress::validate()
{
    // TODO: implement validation
}

web::json::value IpAddress::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Ipv4AddrIsSet)
    {
        val[utility::conversions::to_string_t("ipv4Addr")] = ModelBase::toJson(m_Ipv4Addr);
    }
    if(m_Ipv6AddrIsSet)
    {
        val[utility::conversions::to_string_t("ipv6Addr")] = ModelBase::toJson(m_Ipv6Addr);
    }
    if(m_Ipv6PrefixIsSet)
    {
        val[utility::conversions::to_string_t("ipv6Prefix")] = ModelBase::toJson(m_Ipv6Prefix);
    }

    return val;
}

bool IpAddress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ipv4Addr")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv4Addr"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ipv4Addr;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipv4Addr);
            setIpv4Addr(refVal_ipv4Addr);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6Addr")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6Addr"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ipv6Addr;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipv6Addr);
            setIpv6Addr(refVal_ipv6Addr);
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

void IpAddress::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Ipv4AddrIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipv4Addr"), m_Ipv4Addr));
    }
    if(m_Ipv6AddrIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipv6Addr"), m_Ipv6Addr));
    }
    if(m_Ipv6PrefixIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipv6Prefix"), m_Ipv6Prefix));
    }
}

bool IpAddress::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ipv4Addr")))
    {
        utility::string_t refVal_ipv4Addr;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipv4Addr")), refVal_ipv4Addr );
        setIpv4Addr(refVal_ipv4Addr);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ipv6Addr")))
    {
        utility::string_t refVal_ipv6Addr;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipv6Addr")), refVal_ipv6Addr );
        setIpv6Addr(refVal_ipv6Addr);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ipv6Prefix")))
    {
        utility::string_t refVal_ipv6Prefix;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipv6Prefix")), refVal_ipv6Prefix );
        setIpv6Prefix(refVal_ipv6Prefix);
    }
    return ok;
}

utility::string_t IpAddress::getIpv4Addr() const
{
    return m_Ipv4Addr;
}

void IpAddress::setIpv4Addr(const utility::string_t& value)
{
    m_Ipv4Addr = value;
    m_Ipv4AddrIsSet = true;
}

bool IpAddress::ipv4AddrIsSet() const
{
    return m_Ipv4AddrIsSet;
}

void IpAddress::unsetIpv4Addr()
{
    m_Ipv4AddrIsSet = false;
}
utility::string_t IpAddress::getIpv6Addr() const
{
    return m_Ipv6Addr;
}

void IpAddress::setIpv6Addr(const utility::string_t& value)
{
    m_Ipv6Addr = value;
    m_Ipv6AddrIsSet = true;
}

bool IpAddress::ipv6AddrIsSet() const
{
    return m_Ipv6AddrIsSet;
}

void IpAddress::unsetIpv6Addr()
{
    m_Ipv6AddrIsSet = false;
}
utility::string_t IpAddress::getIpv6Prefix() const
{
    return m_Ipv6Prefix;
}

void IpAddress::setIpv6Prefix(const utility::string_t& value)
{
    m_Ipv6Prefix = value;
    m_Ipv6PrefixIsSet = true;
}

bool IpAddress::ipv6PrefixIsSet() const
{
    return m_Ipv6PrefixIsSet;
}

void IpAddress::unsetIpv6Prefix()
{
    m_Ipv6PrefixIsSet = false;
}
}
}
}
}


