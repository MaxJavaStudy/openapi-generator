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
 * PointUncertaintyEllipse_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PointUncertaintyEllipse_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PointUncertaintyEllipse_allOf_H_


#include "../ModelBase.h"

#include "GeographicalCoordinates.h"
#include "UncertaintyEllipse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  PointUncertaintyEllipse_allOf
    : public ModelBase
{
public:
    PointUncertaintyEllipse_allOf();
    virtual ~PointUncertaintyEllipse_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PointUncertaintyEllipse_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GeographicalCoordinates> getPoint() const;
    bool pointIsSet() const;
    void unsetPoint();

    void setPoint(const std::shared_ptr<GeographicalCoordinates>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UncertaintyEllipse> getUncertaintyEllipse() const;
    bool uncertaintyEllipseIsSet() const;
    void unsetUncertaintyEllipse();

    void setUncertaintyEllipse(const std::shared_ptr<UncertaintyEllipse>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getConfidence() const;
    bool confidenceIsSet() const;
    void unsetConfidence();

    void setConfidence(int32_t value);


protected:
    std::shared_ptr<GeographicalCoordinates> m_Point;
    bool m_PointIsSet;
    std::shared_ptr<UncertaintyEllipse> m_UncertaintyEllipse;
    bool m_UncertaintyEllipseIsSet;
    int32_t m_Confidence;
    bool m_ConfidenceIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PointUncertaintyEllipse_allOf_H_ */
