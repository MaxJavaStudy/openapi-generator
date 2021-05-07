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



#include "SupportedGADShapes_anyOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



SupportedGADShapes_anyOf::SupportedGADShapes_anyOf()
{
}

SupportedGADShapes_anyOf::~SupportedGADShapes_anyOf()
{
}

void SupportedGADShapes_anyOf::validate()
{
    // TODO: implement validation
}

web::json::value SupportedGADShapes_anyOf::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT) val = web::json::value::string(U(POINT));
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_UNCERTAINTY_CIRCLE) val = web::json::value::string(U(POINT_UNCERTAINTY_CIRCLE));
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_UNCERTAINTY_ELLIPSE) val = web::json::value::string(U(POINT_UNCERTAINTY_ELLIPSE));
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POLYGON) val = web::json::value::string(U(POLYGON));
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_ALTITUDE) val = web::json::value::string(U(POINT_ALTITUDE));
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_ALTITUDE_UNCERTAINTY) val = web::json::value::string(U(POINT_ALTITUDE_UNCERTAINTY));
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_ELLIPSOID_ARC) val = web::json::value::string(U(ELLIPSOID_ARC));

    return val;
}

bool SupportedGADShapes_anyOf::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(POINT)) m_value = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT;
    if (s == utility::conversions::to_string_t(POINT_UNCERTAINTY_CIRCLE)) m_value = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_UNCERTAINTY_CIRCLE;
    if (s == utility::conversions::to_string_t(POINT_UNCERTAINTY_ELLIPSE)) m_value = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_UNCERTAINTY_ELLIPSE;
    if (s == utility::conversions::to_string_t(POLYGON)) m_value = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POLYGON;
    if (s == utility::conversions::to_string_t(POINT_ALTITUDE)) m_value = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_ALTITUDE;
    if (s == utility::conversions::to_string_t(POINT_ALTITUDE_UNCERTAINTY)) m_value = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_ALTITUDE_UNCERTAINTY;
    if (s == utility::conversions::to_string_t(ELLIPSOID_ARC)) m_value = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_ELLIPSOID_ARC;
    return true;
}

void SupportedGADShapes_anyOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT) s = utility::conversions::to_string_t(POINT);
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_UNCERTAINTY_CIRCLE) s = utility::conversions::to_string_t(POINT_UNCERTAINTY_CIRCLE);
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_UNCERTAINTY_ELLIPSE) s = utility::conversions::to_string_t(POINT_UNCERTAINTY_ELLIPSE);
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POLYGON) s = utility::conversions::to_string_t(POLYGON);
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_ALTITUDE) s = utility::conversions::to_string_t(POINT_ALTITUDE);
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_ALTITUDE_UNCERTAINTY) s = utility::conversions::to_string_t(POINT_ALTITUDE_UNCERTAINTY);
    if (m_value == eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_ELLIPSOID_ARC) s = utility::conversions::to_string_t(ELLIPSOID_ARC);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool SupportedGADShapes_anyOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eSupportedGADShapes_anyOf v;

        
        if (s == utility::conversions::to_string_t(POINT)) v = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT;
        if (s == utility::conversions::to_string_t(POINT_UNCERTAINTY_CIRCLE)) v = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_UNCERTAINTY_CIRCLE;
        if (s == utility::conversions::to_string_t(POINT_UNCERTAINTY_ELLIPSE)) v = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_UNCERTAINTY_ELLIPSE;
        if (s == utility::conversions::to_string_t(POLYGON)) v = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POLYGON;
        if (s == utility::conversions::to_string_t(POINT_ALTITUDE)) v = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_ALTITUDE;
        if (s == utility::conversions::to_string_t(POINT_ALTITUDE_UNCERTAINTY)) v = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_POINT_ALTITUDE_UNCERTAINTY;
        if (s == utility::conversions::to_string_t(ELLIPSOID_ARC)) v = eSupportedGADShapes_anyOf::SupportedGADShapes_anyOf_ELLIPSOID_ARC;

        setValue(v);
    }
    return ok;
}

SupportedGADShapes_anyOf::eSupportedGADShapes_anyOf SupportedGADShapes_anyOf::getValue() const
{
   return m_value;
}

void SupportedGADShapes_anyOf::setValue(SupportedGADShapes_anyOf::eSupportedGADShapes_anyOf const value)
{
   m_value = value;
}


}
}
}
}


