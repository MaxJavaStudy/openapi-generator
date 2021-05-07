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



#include "SubscriptionDataSets.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




SubscriptionDataSets::SubscriptionDataSets()
{
    m_AmDataIsSet = false;
    m_SmfSelDataIsSet = false;
    m_UecAmfDataIsSet = false;
    m_UecSmfDataIsSet = false;
    m_UecSmsfDataIsSet = false;
    m_SmsSubsDataIsSet = false;
    m_SmDataIsSet = false;
    m_TraceDataIsSet = false;
    m_SmsMngDataIsSet = false;
    m_LcsPrivacyDataIsSet = false;
    m_LcsMoDataIsSet = false;
    m_V2xDataIsSet = false;
    m_LcsBroadcastAssistanceTypesDataIsSet = false;
}

SubscriptionDataSets::~SubscriptionDataSets()
{
}

void SubscriptionDataSets::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionDataSets::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AmDataIsSet)
    {
        val[utility::conversions::to_string_t("amData")] = ModelBase::toJson(m_AmData);
    }
    if(m_SmfSelDataIsSet)
    {
        val[utility::conversions::to_string_t("smfSelData")] = ModelBase::toJson(m_SmfSelData);
    }
    if(m_UecAmfDataIsSet)
    {
        val[utility::conversions::to_string_t("uecAmfData")] = ModelBase::toJson(m_UecAmfData);
    }
    if(m_UecSmfDataIsSet)
    {
        val[utility::conversions::to_string_t("uecSmfData")] = ModelBase::toJson(m_UecSmfData);
    }
    if(m_UecSmsfDataIsSet)
    {
        val[utility::conversions::to_string_t("uecSmsfData")] = ModelBase::toJson(m_UecSmsfData);
    }
    if(m_SmsSubsDataIsSet)
    {
        val[utility::conversions::to_string_t("smsSubsData")] = ModelBase::toJson(m_SmsSubsData);
    }
    if(m_SmDataIsSet)
    {
        val[utility::conversions::to_string_t("smData")] = ModelBase::toJson(m_SmData);
    }
    if(m_TraceDataIsSet)
    {
        val[utility::conversions::to_string_t("traceData")] = ModelBase::toJson(m_TraceData);
    }
    if(m_SmsMngDataIsSet)
    {
        val[utility::conversions::to_string_t("smsMngData")] = ModelBase::toJson(m_SmsMngData);
    }
    if(m_LcsPrivacyDataIsSet)
    {
        val[utility::conversions::to_string_t("lcsPrivacyData")] = ModelBase::toJson(m_LcsPrivacyData);
    }
    if(m_LcsMoDataIsSet)
    {
        val[utility::conversions::to_string_t("lcsMoData")] = ModelBase::toJson(m_LcsMoData);
    }
    if(m_V2xDataIsSet)
    {
        val[utility::conversions::to_string_t("v2xData")] = ModelBase::toJson(m_V2xData);
    }
    if(m_LcsBroadcastAssistanceTypesDataIsSet)
    {
        val[utility::conversions::to_string_t("lcsBroadcastAssistanceTypesData")] = ModelBase::toJson(m_LcsBroadcastAssistanceTypesData);
    }

    return val;
}

bool SubscriptionDataSets::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("amData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AccessAndMobilitySubscriptionData> refVal_amData;
            ok &= ModelBase::fromJson(fieldValue, refVal_amData);
            setAmData(refVal_amData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smfSelData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smfSelData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SmfSelectionSubscriptionData> refVal_smfSelData;
            ok &= ModelBase::fromJson(fieldValue, refVal_smfSelData);
            setSmfSelData(refVal_smfSelData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uecAmfData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uecAmfData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UeContextInAmfData> refVal_uecAmfData;
            ok &= ModelBase::fromJson(fieldValue, refVal_uecAmfData);
            setUecAmfData(refVal_uecAmfData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uecSmfData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uecSmfData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UeContextInSmfData> refVal_uecSmfData;
            ok &= ModelBase::fromJson(fieldValue, refVal_uecSmfData);
            setUecSmfData(refVal_uecSmfData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uecSmsfData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uecSmsfData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UeContextInSmsfData> refVal_uecSmsfData;
            ok &= ModelBase::fromJson(fieldValue, refVal_uecSmsfData);
            setUecSmsfData(refVal_uecSmsfData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smsSubsData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smsSubsData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SmsSubscriptionData> refVal_smsSubsData;
            ok &= ModelBase::fromJson(fieldValue, refVal_smsSubsData);
            setSmsSubsData(refVal_smsSubsData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smData"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<SessionManagementSubscriptionData>> refVal_smData;
            ok &= ModelBase::fromJson(fieldValue, refVal_smData);
            setSmData(refVal_smData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traceData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traceData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TraceData> refVal_traceData;
            ok &= ModelBase::fromJson(fieldValue, refVal_traceData);
            setTraceData(refVal_traceData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smsMngData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smsMngData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SmsManagementSubscriptionData> refVal_smsMngData;
            ok &= ModelBase::fromJson(fieldValue, refVal_smsMngData);
            setSmsMngData(refVal_smsMngData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lcsPrivacyData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lcsPrivacyData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LcsPrivacyData> refVal_lcsPrivacyData;
            ok &= ModelBase::fromJson(fieldValue, refVal_lcsPrivacyData);
            setLcsPrivacyData(refVal_lcsPrivacyData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lcsMoData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lcsMoData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LcsMoData> refVal_lcsMoData;
            ok &= ModelBase::fromJson(fieldValue, refVal_lcsMoData);
            setLcsMoData(refVal_lcsMoData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("v2xData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("v2xData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V2xSubscriptionData> refVal_v2xData;
            ok &= ModelBase::fromJson(fieldValue, refVal_v2xData);
            setV2xData(refVal_v2xData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lcsBroadcastAssistanceTypesData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lcsBroadcastAssistanceTypesData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<LcsBroadcastAssistanceTypesData> refVal_lcsBroadcastAssistanceTypesData;
            ok &= ModelBase::fromJson(fieldValue, refVal_lcsBroadcastAssistanceTypesData);
            setLcsBroadcastAssistanceTypesData(refVal_lcsBroadcastAssistanceTypesData);
        }
    }
    return ok;
}

void SubscriptionDataSets::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AmDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amData"), m_AmData));
    }
    if(m_SmfSelDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smfSelData"), m_SmfSelData));
    }
    if(m_UecAmfDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uecAmfData"), m_UecAmfData));
    }
    if(m_UecSmfDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uecSmfData"), m_UecSmfData));
    }
    if(m_UecSmsfDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uecSmsfData"), m_UecSmsfData));
    }
    if(m_SmsSubsDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smsSubsData"), m_SmsSubsData));
    }
    if(m_SmDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smData"), m_SmData));
    }
    if(m_TraceDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("traceData"), m_TraceData));
    }
    if(m_SmsMngDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("smsMngData"), m_SmsMngData));
    }
    if(m_LcsPrivacyDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lcsPrivacyData"), m_LcsPrivacyData));
    }
    if(m_LcsMoDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lcsMoData"), m_LcsMoData));
    }
    if(m_V2xDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("v2xData"), m_V2xData));
    }
    if(m_LcsBroadcastAssistanceTypesDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lcsBroadcastAssistanceTypesData"), m_LcsBroadcastAssistanceTypesData));
    }
}

bool SubscriptionDataSets::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("amData")))
    {
        std::shared_ptr<AccessAndMobilitySubscriptionData> refVal_amData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("amData")), refVal_amData );
        setAmData(refVal_amData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("smfSelData")))
    {
        std::shared_ptr<SmfSelectionSubscriptionData> refVal_smfSelData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("smfSelData")), refVal_smfSelData );
        setSmfSelData(refVal_smfSelData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uecAmfData")))
    {
        std::shared_ptr<UeContextInAmfData> refVal_uecAmfData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uecAmfData")), refVal_uecAmfData );
        setUecAmfData(refVal_uecAmfData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uecSmfData")))
    {
        std::shared_ptr<UeContextInSmfData> refVal_uecSmfData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uecSmfData")), refVal_uecSmfData );
        setUecSmfData(refVal_uecSmfData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uecSmsfData")))
    {
        std::shared_ptr<UeContextInSmsfData> refVal_uecSmsfData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uecSmsfData")), refVal_uecSmsfData );
        setUecSmsfData(refVal_uecSmsfData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("smsSubsData")))
    {
        std::shared_ptr<SmsSubscriptionData> refVal_smsSubsData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("smsSubsData")), refVal_smsSubsData );
        setSmsSubsData(refVal_smsSubsData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("smData")))
    {
        std::vector<std::shared_ptr<SessionManagementSubscriptionData>> refVal_smData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("smData")), refVal_smData );
        setSmData(refVal_smData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("traceData")))
    {
        std::shared_ptr<TraceData> refVal_traceData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("traceData")), refVal_traceData );
        setTraceData(refVal_traceData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("smsMngData")))
    {
        std::shared_ptr<SmsManagementSubscriptionData> refVal_smsMngData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("smsMngData")), refVal_smsMngData );
        setSmsMngData(refVal_smsMngData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lcsPrivacyData")))
    {
        std::shared_ptr<LcsPrivacyData> refVal_lcsPrivacyData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lcsPrivacyData")), refVal_lcsPrivacyData );
        setLcsPrivacyData(refVal_lcsPrivacyData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lcsMoData")))
    {
        std::shared_ptr<LcsMoData> refVal_lcsMoData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lcsMoData")), refVal_lcsMoData );
        setLcsMoData(refVal_lcsMoData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("v2xData")))
    {
        std::shared_ptr<V2xSubscriptionData> refVal_v2xData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("v2xData")), refVal_v2xData );
        setV2xData(refVal_v2xData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lcsBroadcastAssistanceTypesData")))
    {
        std::shared_ptr<LcsBroadcastAssistanceTypesData> refVal_lcsBroadcastAssistanceTypesData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lcsBroadcastAssistanceTypesData")), refVal_lcsBroadcastAssistanceTypesData );
        setLcsBroadcastAssistanceTypesData(refVal_lcsBroadcastAssistanceTypesData);
    }
    return ok;
}

std::shared_ptr<AccessAndMobilitySubscriptionData> SubscriptionDataSets::getAmData() const
{
    return m_AmData;
}

void SubscriptionDataSets::setAmData(const std::shared_ptr<AccessAndMobilitySubscriptionData>& value)
{
    m_AmData = value;
    m_AmDataIsSet = true;
}

bool SubscriptionDataSets::amDataIsSet() const
{
    return m_AmDataIsSet;
}

void SubscriptionDataSets::unsetAmData()
{
    m_AmDataIsSet = false;
}
std::shared_ptr<SmfSelectionSubscriptionData> SubscriptionDataSets::getSmfSelData() const
{
    return m_SmfSelData;
}

void SubscriptionDataSets::setSmfSelData(const std::shared_ptr<SmfSelectionSubscriptionData>& value)
{
    m_SmfSelData = value;
    m_SmfSelDataIsSet = true;
}

bool SubscriptionDataSets::smfSelDataIsSet() const
{
    return m_SmfSelDataIsSet;
}

void SubscriptionDataSets::unsetSmfSelData()
{
    m_SmfSelDataIsSet = false;
}
std::shared_ptr<UeContextInAmfData> SubscriptionDataSets::getUecAmfData() const
{
    return m_UecAmfData;
}

void SubscriptionDataSets::setUecAmfData(const std::shared_ptr<UeContextInAmfData>& value)
{
    m_UecAmfData = value;
    m_UecAmfDataIsSet = true;
}

bool SubscriptionDataSets::uecAmfDataIsSet() const
{
    return m_UecAmfDataIsSet;
}

void SubscriptionDataSets::unsetUecAmfData()
{
    m_UecAmfDataIsSet = false;
}
std::shared_ptr<UeContextInSmfData> SubscriptionDataSets::getUecSmfData() const
{
    return m_UecSmfData;
}

void SubscriptionDataSets::setUecSmfData(const std::shared_ptr<UeContextInSmfData>& value)
{
    m_UecSmfData = value;
    m_UecSmfDataIsSet = true;
}

bool SubscriptionDataSets::uecSmfDataIsSet() const
{
    return m_UecSmfDataIsSet;
}

void SubscriptionDataSets::unsetUecSmfData()
{
    m_UecSmfDataIsSet = false;
}
std::shared_ptr<UeContextInSmsfData> SubscriptionDataSets::getUecSmsfData() const
{
    return m_UecSmsfData;
}

void SubscriptionDataSets::setUecSmsfData(const std::shared_ptr<UeContextInSmsfData>& value)
{
    m_UecSmsfData = value;
    m_UecSmsfDataIsSet = true;
}

bool SubscriptionDataSets::uecSmsfDataIsSet() const
{
    return m_UecSmsfDataIsSet;
}

void SubscriptionDataSets::unsetUecSmsfData()
{
    m_UecSmsfDataIsSet = false;
}
std::shared_ptr<SmsSubscriptionData> SubscriptionDataSets::getSmsSubsData() const
{
    return m_SmsSubsData;
}

void SubscriptionDataSets::setSmsSubsData(const std::shared_ptr<SmsSubscriptionData>& value)
{
    m_SmsSubsData = value;
    m_SmsSubsDataIsSet = true;
}

bool SubscriptionDataSets::smsSubsDataIsSet() const
{
    return m_SmsSubsDataIsSet;
}

void SubscriptionDataSets::unsetSmsSubsData()
{
    m_SmsSubsDataIsSet = false;
}
std::vector<std::shared_ptr<SessionManagementSubscriptionData>>& SubscriptionDataSets::getSmData()
{
    return m_SmData;
}

void SubscriptionDataSets::setSmData(const std::vector<std::shared_ptr<SessionManagementSubscriptionData>>& value)
{
    m_SmData = value;
    m_SmDataIsSet = true;
}

bool SubscriptionDataSets::smDataIsSet() const
{
    return m_SmDataIsSet;
}

void SubscriptionDataSets::unsetSmData()
{
    m_SmDataIsSet = false;
}
std::shared_ptr<TraceData> SubscriptionDataSets::getTraceData() const
{
    return m_TraceData;
}

void SubscriptionDataSets::setTraceData(const std::shared_ptr<TraceData>& value)
{
    m_TraceData = value;
    m_TraceDataIsSet = true;
}

bool SubscriptionDataSets::traceDataIsSet() const
{
    return m_TraceDataIsSet;
}

void SubscriptionDataSets::unsetTraceData()
{
    m_TraceDataIsSet = false;
}
std::shared_ptr<SmsManagementSubscriptionData> SubscriptionDataSets::getSmsMngData() const
{
    return m_SmsMngData;
}

void SubscriptionDataSets::setSmsMngData(const std::shared_ptr<SmsManagementSubscriptionData>& value)
{
    m_SmsMngData = value;
    m_SmsMngDataIsSet = true;
}

bool SubscriptionDataSets::smsMngDataIsSet() const
{
    return m_SmsMngDataIsSet;
}

void SubscriptionDataSets::unsetSmsMngData()
{
    m_SmsMngDataIsSet = false;
}
std::shared_ptr<LcsPrivacyData> SubscriptionDataSets::getLcsPrivacyData() const
{
    return m_LcsPrivacyData;
}

void SubscriptionDataSets::setLcsPrivacyData(const std::shared_ptr<LcsPrivacyData>& value)
{
    m_LcsPrivacyData = value;
    m_LcsPrivacyDataIsSet = true;
}

bool SubscriptionDataSets::lcsPrivacyDataIsSet() const
{
    return m_LcsPrivacyDataIsSet;
}

void SubscriptionDataSets::unsetLcsPrivacyData()
{
    m_LcsPrivacyDataIsSet = false;
}
std::shared_ptr<LcsMoData> SubscriptionDataSets::getLcsMoData() const
{
    return m_LcsMoData;
}

void SubscriptionDataSets::setLcsMoData(const std::shared_ptr<LcsMoData>& value)
{
    m_LcsMoData = value;
    m_LcsMoDataIsSet = true;
}

bool SubscriptionDataSets::lcsMoDataIsSet() const
{
    return m_LcsMoDataIsSet;
}

void SubscriptionDataSets::unsetLcsMoData()
{
    m_LcsMoDataIsSet = false;
}
std::shared_ptr<V2xSubscriptionData> SubscriptionDataSets::getV2xData() const
{
    return m_V2xData;
}

void SubscriptionDataSets::setV2xData(const std::shared_ptr<V2xSubscriptionData>& value)
{
    m_V2xData = value;
    m_V2xDataIsSet = true;
}

bool SubscriptionDataSets::v2xDataIsSet() const
{
    return m_V2xDataIsSet;
}

void SubscriptionDataSets::unsetV2xData()
{
    m_V2xDataIsSet = false;
}
std::shared_ptr<LcsBroadcastAssistanceTypesData> SubscriptionDataSets::getLcsBroadcastAssistanceTypesData() const
{
    return m_LcsBroadcastAssistanceTypesData;
}

void SubscriptionDataSets::setLcsBroadcastAssistanceTypesData(const std::shared_ptr<LcsBroadcastAssistanceTypesData>& value)
{
    m_LcsBroadcastAssistanceTypesData = value;
    m_LcsBroadcastAssistanceTypesDataIsSet = true;
}

bool SubscriptionDataSets::lcsBroadcastAssistanceTypesDataIsSet() const
{
    return m_LcsBroadcastAssistanceTypesDataIsSet;
}

void SubscriptionDataSets::unsetLcsBroadcastAssistanceTypesData()
{
    m_LcsBroadcastAssistanceTypesDataIsSet = false;
}
}
}
}
}


