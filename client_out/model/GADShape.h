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
 * GADShape.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GADShape_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GADShape_H_


#include "../ModelBase.h"

#include "SupportedGADShapes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  GADShape
    : public ModelBase
{
public:
    GADShape();
    virtual ~GADShape();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GADShape members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SupportedGADShapes> getShape() const;
    bool shapeIsSet() const;
    void unsetShape();

    void setShape(const std::shared_ptr<SupportedGADShapes>& value);


protected:
    std::shared_ptr<SupportedGADShapes> m_Shape;
    bool m_ShapeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GADShape_H_ */
