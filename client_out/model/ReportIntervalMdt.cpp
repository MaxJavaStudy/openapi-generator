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



#include "ReportIntervalMdt.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ReportIntervalMdt::ReportIntervalMdt()
{
}

ReportIntervalMdt::~ReportIntervalMdt()
{
}

void ReportIntervalMdt::validate()
{
    // TODO: implement validation
}

web::json::value ReportIntervalMdt::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__120) val = web::json::value::string(U(120));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__240) val = web::json::value::string(U(240));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__480) val = web::json::value::string(U(480));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__640) val = web::json::value::string(U(640));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__1024) val = web::json::value::string(U(1024));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__2048) val = web::json::value::string(U(2048));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__5120) val = web::json::value::string(U(5120));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__10240) val = web::json::value::string(U(10240));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__60000) val = web::json::value::string(U(60000));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__360000) val = web::json::value::string(U(360000));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__720000) val = web::json::value::string(U(720000));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__1800000) val = web::json::value::string(U(1800000));
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__3600000) val = web::json::value::string(U(3600000));

    return val;
}

bool ReportIntervalMdt::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(120)) m_value = eReportIntervalMdt::ReportIntervalMdt__120;
    if (s == utility::conversions::to_string_t(240)) m_value = eReportIntervalMdt::ReportIntervalMdt__240;
    if (s == utility::conversions::to_string_t(480)) m_value = eReportIntervalMdt::ReportIntervalMdt__480;
    if (s == utility::conversions::to_string_t(640)) m_value = eReportIntervalMdt::ReportIntervalMdt__640;
    if (s == utility::conversions::to_string_t(1024)) m_value = eReportIntervalMdt::ReportIntervalMdt__1024;
    if (s == utility::conversions::to_string_t(2048)) m_value = eReportIntervalMdt::ReportIntervalMdt__2048;
    if (s == utility::conversions::to_string_t(5120)) m_value = eReportIntervalMdt::ReportIntervalMdt__5120;
    if (s == utility::conversions::to_string_t(10240)) m_value = eReportIntervalMdt::ReportIntervalMdt__10240;
    if (s == utility::conversions::to_string_t(60000)) m_value = eReportIntervalMdt::ReportIntervalMdt__60000;
    if (s == utility::conversions::to_string_t(360000)) m_value = eReportIntervalMdt::ReportIntervalMdt__360000;
    if (s == utility::conversions::to_string_t(720000)) m_value = eReportIntervalMdt::ReportIntervalMdt__720000;
    if (s == utility::conversions::to_string_t(1800000)) m_value = eReportIntervalMdt::ReportIntervalMdt__1800000;
    if (s == utility::conversions::to_string_t(3600000)) m_value = eReportIntervalMdt::ReportIntervalMdt__3600000;
    return true;
}

void ReportIntervalMdt::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__120) s = utility::conversions::to_string_t(120);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__240) s = utility::conversions::to_string_t(240);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__480) s = utility::conversions::to_string_t(480);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__640) s = utility::conversions::to_string_t(640);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__1024) s = utility::conversions::to_string_t(1024);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__2048) s = utility::conversions::to_string_t(2048);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__5120) s = utility::conversions::to_string_t(5120);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__10240) s = utility::conversions::to_string_t(10240);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__60000) s = utility::conversions::to_string_t(60000);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__360000) s = utility::conversions::to_string_t(360000);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__720000) s = utility::conversions::to_string_t(720000);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__1800000) s = utility::conversions::to_string_t(1800000);
    if (m_value == eReportIntervalMdt::ReportIntervalMdt__3600000) s = utility::conversions::to_string_t(3600000);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool ReportIntervalMdt::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eReportIntervalMdt v;

        
        if (s == utility::conversions::to_string_t(120)) v = eReportIntervalMdt::ReportIntervalMdt__120;
        if (s == utility::conversions::to_string_t(240)) v = eReportIntervalMdt::ReportIntervalMdt__240;
        if (s == utility::conversions::to_string_t(480)) v = eReportIntervalMdt::ReportIntervalMdt__480;
        if (s == utility::conversions::to_string_t(640)) v = eReportIntervalMdt::ReportIntervalMdt__640;
        if (s == utility::conversions::to_string_t(1024)) v = eReportIntervalMdt::ReportIntervalMdt__1024;
        if (s == utility::conversions::to_string_t(2048)) v = eReportIntervalMdt::ReportIntervalMdt__2048;
        if (s == utility::conversions::to_string_t(5120)) v = eReportIntervalMdt::ReportIntervalMdt__5120;
        if (s == utility::conversions::to_string_t(10240)) v = eReportIntervalMdt::ReportIntervalMdt__10240;
        if (s == utility::conversions::to_string_t(60000)) v = eReportIntervalMdt::ReportIntervalMdt__60000;
        if (s == utility::conversions::to_string_t(360000)) v = eReportIntervalMdt::ReportIntervalMdt__360000;
        if (s == utility::conversions::to_string_t(720000)) v = eReportIntervalMdt::ReportIntervalMdt__720000;
        if (s == utility::conversions::to_string_t(1800000)) v = eReportIntervalMdt::ReportIntervalMdt__1800000;
        if (s == utility::conversions::to_string_t(3600000)) v = eReportIntervalMdt::ReportIntervalMdt__3600000;

        setValue(v);
    }
    return ok;
}

ReportIntervalMdt::eReportIntervalMdt ReportIntervalMdt::getValue() const
{
   return m_value;
}

void ReportIntervalMdt::setValue(ReportIntervalMdt::eReportIntervalMdt const value)
{
   m_value = value;
}


}
}
}
}


