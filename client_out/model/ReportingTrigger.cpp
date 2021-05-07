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



#include "ReportingTrigger.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ReportingTrigger::ReportingTrigger()
{
}

ReportingTrigger::~ReportingTrigger()
{
}

void ReportingTrigger::validate()
{
    // TODO: implement validation
}

web::json::value ReportingTrigger::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eReportingTrigger::ReportingTrigger_PERIODICAL) val = web::json::value::string(U(PERIODICAL));
    if (m_value == eReportingTrigger::ReportingTrigger_EVENT_A2) val = web::json::value::string(U(EVENT_A2));
    if (m_value == eReportingTrigger::ReportingTrigger_EVENT_A2_PERIODIC) val = web::json::value::string(U(EVENT_A2_PERIODIC));
    if (m_value == eReportingTrigger::ReportingTrigger_ALL_RRM_EVENT_TRIGGERS) val = web::json::value::string(U(ALL_RRM_EVENT_TRIGGERS));

    return val;
}

bool ReportingTrigger::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(PERIODICAL)) m_value = eReportingTrigger::ReportingTrigger_PERIODICAL;
    if (s == utility::conversions::to_string_t(EVENT_A2)) m_value = eReportingTrigger::ReportingTrigger_EVENT_A2;
    if (s == utility::conversions::to_string_t(EVENT_A2_PERIODIC)) m_value = eReportingTrigger::ReportingTrigger_EVENT_A2_PERIODIC;
    if (s == utility::conversions::to_string_t(ALL_RRM_EVENT_TRIGGERS)) m_value = eReportingTrigger::ReportingTrigger_ALL_RRM_EVENT_TRIGGERS;
    return true;
}

void ReportingTrigger::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eReportingTrigger::ReportingTrigger_PERIODICAL) s = utility::conversions::to_string_t(PERIODICAL);
    if (m_value == eReportingTrigger::ReportingTrigger_EVENT_A2) s = utility::conversions::to_string_t(EVENT_A2);
    if (m_value == eReportingTrigger::ReportingTrigger_EVENT_A2_PERIODIC) s = utility::conversions::to_string_t(EVENT_A2_PERIODIC);
    if (m_value == eReportingTrigger::ReportingTrigger_ALL_RRM_EVENT_TRIGGERS) s = utility::conversions::to_string_t(ALL_RRM_EVENT_TRIGGERS);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool ReportingTrigger::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eReportingTrigger v;

        
        if (s == utility::conversions::to_string_t(PERIODICAL)) v = eReportingTrigger::ReportingTrigger_PERIODICAL;
        if (s == utility::conversions::to_string_t(EVENT_A2)) v = eReportingTrigger::ReportingTrigger_EVENT_A2;
        if (s == utility::conversions::to_string_t(EVENT_A2_PERIODIC)) v = eReportingTrigger::ReportingTrigger_EVENT_A2_PERIODIC;
        if (s == utility::conversions::to_string_t(ALL_RRM_EVENT_TRIGGERS)) v = eReportingTrigger::ReportingTrigger_ALL_RRM_EVENT_TRIGGERS;

        setValue(v);
    }
    return ok;
}

ReportingTrigger::eReportingTrigger ReportingTrigger::getValue() const
{
   return m_value;
}

void ReportingTrigger::setValue(ReportingTrigger::eReportingTrigger const value)
{
   m_value = value;
}


}
}
}
}


