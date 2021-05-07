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



#include "Polygon_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Polygon_allOf::Polygon_allOf()
{
    m_PointListIsSet = false;
}

Polygon_allOf::~Polygon_allOf()
{
}

void Polygon_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Polygon_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PointListIsSet)
    {
        val[utility::conversions::to_string_t("pointList")] = ModelBase::toJson(m_PointList);
    }

    return val;
}

bool Polygon_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pointList")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pointList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<GeographicalCoordinates>> refVal_pointList;
            ok &= ModelBase::fromJson(fieldValue, refVal_pointList);
            setPointList(refVal_pointList);
        }
    }
    return ok;
}

void Polygon_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PointListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pointList"), m_PointList));
    }
}

bool Polygon_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pointList")))
    {
        std::vector<std::shared_ptr<GeographicalCoordinates>> refVal_pointList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pointList")), refVal_pointList );
        setPointList(refVal_pointList);
    }
    return ok;
}

std::vector<std::shared_ptr<GeographicalCoordinates>>& Polygon_allOf::getPointList()
{
    return m_PointList;
}

void Polygon_allOf::setPointList(const std::vector<std::shared_ptr<GeographicalCoordinates>>& value)
{
    m_PointList = value;
    m_PointListIsSet = true;
}

bool Polygon_allOf::pointListIsSet() const
{
    return m_PointListIsSet;
}

void Polygon_allOf::unsetPointList()
{
    m_PointListIsSet = false;
}
}
}
}
}


