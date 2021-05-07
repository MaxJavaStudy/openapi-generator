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



#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ProblemDetails::ProblemDetails()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Status = 0;
    m_StatusIsSet = false;
    m_Detail = utility::conversions::to_string_t("");
    m_DetailIsSet = false;
    m_Instance = utility::conversions::to_string_t("");
    m_InstanceIsSet = false;
    m_Cause = utility::conversions::to_string_t("");
    m_CauseIsSet = false;
    m_InvalidParamsIsSet = false;
    m_SupportedFeatures = utility::conversions::to_string_t("");
    m_SupportedFeaturesIsSet = false;
    m_TargetScp = utility::conversions::to_string_t("");
    m_TargetScpIsSet = false;
}

ProblemDetails::~ProblemDetails()
{
}

void ProblemDetails::validate()
{
    // TODO: implement validation
}

web::json::value ProblemDetails::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_DetailIsSet)
    {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(m_Detail);
    }
    if(m_InstanceIsSet)
    {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(m_Instance);
    }
    if(m_CauseIsSet)
    {
        val[utility::conversions::to_string_t("cause")] = ModelBase::toJson(m_Cause);
    }
    if(m_InvalidParamsIsSet)
    {
        val[utility::conversions::to_string_t("invalidParams")] = ModelBase::toJson(m_InvalidParams);
    }
    if(m_SupportedFeaturesIsSet)
    {
        val[utility::conversions::to_string_t("supportedFeatures")] = ModelBase::toJson(m_SupportedFeatures);
    }
    if(m_TargetScpIsSet)
    {
        val[utility::conversions::to_string_t("targetScp")] = ModelBase::toJson(m_TargetScp);
    }

    return val;
}

bool ProblemDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_title);
            setTitle(refVal_title);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_detail;
            ok &= ModelBase::fromJson(fieldValue, refVal_detail);
            setDetail(refVal_detail);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_instance;
            ok &= ModelBase::fromJson(fieldValue, refVal_instance);
            setInstance(refVal_instance);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cause")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cause"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cause;
            ok &= ModelBase::fromJson(fieldValue, refVal_cause);
            setCause(refVal_cause);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invalidParams")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invalidParams"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<InvalidParam>> refVal_invalidParams;
            ok &= ModelBase::fromJson(fieldValue, refVal_invalidParams);
            setInvalidParams(refVal_invalidParams);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("targetScp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetScp"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_targetScp;
            ok &= ModelBase::fromJson(fieldValue, refVal_targetScp);
            setTargetScp(refVal_targetScp);
        }
    }
    return ok;
}

void ProblemDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_DetailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("detail"), m_Detail));
    }
    if(m_InstanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("instance"), m_Instance));
    }
    if(m_CauseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cause"), m_Cause));
    }
    if(m_InvalidParamsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("invalidParams"), m_InvalidParams));
    }
    if(m_SupportedFeaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("supportedFeatures"), m_SupportedFeatures));
    }
    if(m_TargetScpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("targetScp"), m_TargetScp));
    }
}

bool ProblemDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        utility::string_t refVal_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("title")), refVal_title );
        setTitle(refVal_title);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        int32_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("detail")))
    {
        utility::string_t refVal_detail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("detail")), refVal_detail );
        setDetail(refVal_detail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("instance")))
    {
        utility::string_t refVal_instance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("instance")), refVal_instance );
        setInstance(refVal_instance);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cause")))
    {
        utility::string_t refVal_cause;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cause")), refVal_cause );
        setCause(refVal_cause);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("invalidParams")))
    {
        std::vector<std::shared_ptr<InvalidParam>> refVal_invalidParams;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("invalidParams")), refVal_invalidParams );
        setInvalidParams(refVal_invalidParams);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("supportedFeatures")))
    {
        utility::string_t refVal_supportedFeatures;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("supportedFeatures")), refVal_supportedFeatures );
        setSupportedFeatures(refVal_supportedFeatures);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("targetScp")))
    {
        utility::string_t refVal_targetScp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("targetScp")), refVal_targetScp );
        setTargetScp(refVal_targetScp);
    }
    return ok;
}

utility::string_t ProblemDetails::getType() const
{
    return m_Type;
}

void ProblemDetails::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool ProblemDetails::typeIsSet() const
{
    return m_TypeIsSet;
}

void ProblemDetails::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t ProblemDetails::getTitle() const
{
    return m_Title;
}

void ProblemDetails::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool ProblemDetails::titleIsSet() const
{
    return m_TitleIsSet;
}

void ProblemDetails::unsetTitle()
{
    m_TitleIsSet = false;
}
int32_t ProblemDetails::getStatus() const
{
    return m_Status;
}

void ProblemDetails::setStatus(int32_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool ProblemDetails::statusIsSet() const
{
    return m_StatusIsSet;
}

void ProblemDetails::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t ProblemDetails::getDetail() const
{
    return m_Detail;
}

void ProblemDetails::setDetail(const utility::string_t& value)
{
    m_Detail = value;
    m_DetailIsSet = true;
}

bool ProblemDetails::detailIsSet() const
{
    return m_DetailIsSet;
}

void ProblemDetails::unsetDetail()
{
    m_DetailIsSet = false;
}
utility::string_t ProblemDetails::getInstance() const
{
    return m_Instance;
}

void ProblemDetails::setInstance(const utility::string_t& value)
{
    m_Instance = value;
    m_InstanceIsSet = true;
}

bool ProblemDetails::instanceIsSet() const
{
    return m_InstanceIsSet;
}

void ProblemDetails::unsetInstance()
{
    m_InstanceIsSet = false;
}
utility::string_t ProblemDetails::getCause() const
{
    return m_Cause;
}

void ProblemDetails::setCause(const utility::string_t& value)
{
    m_Cause = value;
    m_CauseIsSet = true;
}

bool ProblemDetails::causeIsSet() const
{
    return m_CauseIsSet;
}

void ProblemDetails::unsetCause()
{
    m_CauseIsSet = false;
}
std::vector<std::shared_ptr<InvalidParam>>& ProblemDetails::getInvalidParams()
{
    return m_InvalidParams;
}

void ProblemDetails::setInvalidParams(const std::vector<std::shared_ptr<InvalidParam>>& value)
{
    m_InvalidParams = value;
    m_InvalidParamsIsSet = true;
}

bool ProblemDetails::invalidParamsIsSet() const
{
    return m_InvalidParamsIsSet;
}

void ProblemDetails::unsetInvalidParams()
{
    m_InvalidParamsIsSet = false;
}
utility::string_t ProblemDetails::getSupportedFeatures() const
{
    return m_SupportedFeatures;
}

void ProblemDetails::setSupportedFeatures(const utility::string_t& value)
{
    m_SupportedFeatures = value;
    m_SupportedFeaturesIsSet = true;
}

bool ProblemDetails::supportedFeaturesIsSet() const
{
    return m_SupportedFeaturesIsSet;
}

void ProblemDetails::unsetSupportedFeatures()
{
    m_SupportedFeaturesIsSet = false;
}
utility::string_t ProblemDetails::getTargetScp() const
{
    return m_TargetScp;
}

void ProblemDetails::setTargetScp(const utility::string_t& value)
{
    m_TargetScp = value;
    m_TargetScpIsSet = true;
}

bool ProblemDetails::targetScpIsSet() const
{
    return m_TargetScpIsSet;
}

void ProblemDetails::unsetTargetScp()
{
    m_TargetScpIsSet = false;
}
}
}
}
}


