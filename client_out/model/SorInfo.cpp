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



#include "SorInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




SorInfo::SorInfo()
{
    m_SteeringContainerIsSet = false;
    m_AckInd = false;
    m_AckIndIsSet = false;
    m_SorMacIausf = utility::conversions::to_string_t("");
    m_SorMacIausfIsSet = false;
    m_Countersor = utility::conversions::to_string_t("");
    m_CountersorIsSet = false;
    m_ProvisioningTime = utility::datetime();
    m_ProvisioningTimeIsSet = false;
}

SorInfo::~SorInfo()
{
}

void SorInfo::validate()
{
    // TODO: implement validation
}

web::json::value SorInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SteeringContainerIsSet)
    {
        val[utility::conversions::to_string_t("steeringContainer")] = ModelBase::toJson(m_SteeringContainer);
    }
    if(m_AckIndIsSet)
    {
        val[utility::conversions::to_string_t("ackInd")] = ModelBase::toJson(m_AckInd);
    }
    if(m_SorMacIausfIsSet)
    {
        val[utility::conversions::to_string_t("sorMacIausf")] = ModelBase::toJson(m_SorMacIausf);
    }
    if(m_CountersorIsSet)
    {
        val[utility::conversions::to_string_t("countersor")] = ModelBase::toJson(m_Countersor);
    }
    if(m_ProvisioningTimeIsSet)
    {
        val[utility::conversions::to_string_t("provisioningTime")] = ModelBase::toJson(m_ProvisioningTime);
    }

    return val;
}

bool SorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("steeringContainer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steeringContainer"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SteeringContainer> refVal_steeringContainer;
            ok &= ModelBase::fromJson(fieldValue, refVal_steeringContainer);
            setSteeringContainer(refVal_steeringContainer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ackInd")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ackInd"));
        if(!fieldValue.is_null())
        {
            bool refVal_ackInd;
            ok &= ModelBase::fromJson(fieldValue, refVal_ackInd);
            setAckInd(refVal_ackInd);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sorMacIausf")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sorMacIausf"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sorMacIausf;
            ok &= ModelBase::fromJson(fieldValue, refVal_sorMacIausf);
            setSorMacIausf(refVal_sorMacIausf);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("countersor")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("countersor"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_countersor;
            ok &= ModelBase::fromJson(fieldValue, refVal_countersor);
            setCountersor(refVal_countersor);
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
    return ok;
}

void SorInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SteeringContainerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("steeringContainer"), m_SteeringContainer));
    }
    if(m_AckIndIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ackInd"), m_AckInd));
    }
    if(m_SorMacIausfIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sorMacIausf"), m_SorMacIausf));
    }
    if(m_CountersorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("countersor"), m_Countersor));
    }
    if(m_ProvisioningTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("provisioningTime"), m_ProvisioningTime));
    }
}

bool SorInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("steeringContainer")))
    {
        std::shared_ptr<SteeringContainer> refVal_steeringContainer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("steeringContainer")), refVal_steeringContainer );
        setSteeringContainer(refVal_steeringContainer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ackInd")))
    {
        bool refVal_ackInd;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ackInd")), refVal_ackInd );
        setAckInd(refVal_ackInd);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sorMacIausf")))
    {
        utility::string_t refVal_sorMacIausf;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sorMacIausf")), refVal_sorMacIausf );
        setSorMacIausf(refVal_sorMacIausf);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("countersor")))
    {
        utility::string_t refVal_countersor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("countersor")), refVal_countersor );
        setCountersor(refVal_countersor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("provisioningTime")))
    {
        utility::datetime refVal_provisioningTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("provisioningTime")), refVal_provisioningTime );
        setProvisioningTime(refVal_provisioningTime);
    }
    return ok;
}

std::shared_ptr<SteeringContainer> SorInfo::getSteeringContainer() const
{
    return m_SteeringContainer;
}

void SorInfo::setSteeringContainer(const std::shared_ptr<SteeringContainer>& value)
{
    m_SteeringContainer = value;
    m_SteeringContainerIsSet = true;
}

bool SorInfo::steeringContainerIsSet() const
{
    return m_SteeringContainerIsSet;
}

void SorInfo::unsetSteeringContainer()
{
    m_SteeringContainerIsSet = false;
}
bool SorInfo::isAckInd() const
{
    return m_AckInd;
}

void SorInfo::setAckInd(bool value)
{
    m_AckInd = value;
    m_AckIndIsSet = true;
}

bool SorInfo::ackIndIsSet() const
{
    return m_AckIndIsSet;
}

void SorInfo::unsetAckInd()
{
    m_AckIndIsSet = false;
}
utility::string_t SorInfo::getSorMacIausf() const
{
    return m_SorMacIausf;
}

void SorInfo::setSorMacIausf(const utility::string_t& value)
{
    m_SorMacIausf = value;
    m_SorMacIausfIsSet = true;
}

bool SorInfo::sorMacIausfIsSet() const
{
    return m_SorMacIausfIsSet;
}

void SorInfo::unsetSorMacIausf()
{
    m_SorMacIausfIsSet = false;
}
utility::string_t SorInfo::getCountersor() const
{
    return m_Countersor;
}

void SorInfo::setCountersor(const utility::string_t& value)
{
    m_Countersor = value;
    m_CountersorIsSet = true;
}

bool SorInfo::countersorIsSet() const
{
    return m_CountersorIsSet;
}

void SorInfo::unsetCountersor()
{
    m_CountersorIsSet = false;
}
utility::datetime SorInfo::getProvisioningTime() const
{
    return m_ProvisioningTime;
}

void SorInfo::setProvisioningTime(const utility::datetime& value)
{
    m_ProvisioningTime = value;
    m_ProvisioningTimeIsSet = true;
}

bool SorInfo::provisioningTimeIsSet() const
{
    return m_ProvisioningTimeIsSet;
}

void SorInfo::unsetProvisioningTime()
{
    m_ProvisioningTimeIsSet = false;
}
}
}
}
}


