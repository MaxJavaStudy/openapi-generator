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

/*
 * Point.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Point_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Point_H_


#include "GeographicalCoordinates.h"
#include "Point_allOf.h"
#include "GADShape.h"
#include "SupportedGADShapes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Point
    : public GADShape
{
public:
    Point();
    virtual ~Point();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Point members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GeographicalCoordinates> getPoint() const;
    bool pointIsSet() const;
    void unsetPoint();

    void setPoint(const std::shared_ptr<GeographicalCoordinates>& value);


protected:
    std::shared_ptr<GeographicalCoordinates> m_Point;
    bool m_PointIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Point_H_ */
