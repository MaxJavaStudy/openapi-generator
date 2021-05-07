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
 * ServiceAreaRestriction.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ServiceAreaRestriction_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ServiceAreaRestriction_H_


#include "../ModelBase.h"

#include "RestrictionType.h"
#include "Area.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ServiceAreaRestriction
    : public ModelBase
{
public:
    ServiceAreaRestriction();
    virtual ~ServiceAreaRestriction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ServiceAreaRestriction members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RestrictionType> getRestrictionType() const;
    bool restrictionTypeIsSet() const;
    void unsetRestrictionType();

    void setRestrictionType(const std::shared_ptr<RestrictionType>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Area>>& getAreas();
    bool areasIsSet() const;
    void unsetAreas();

    void setAreas(const std::vector<std::shared_ptr<Area>>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMaxNumOfTAs() const;
    bool maxNumOfTAsIsSet() const;
    void unsetMaxNumOfTAs();

    void setMaxNumOfTAs(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMaxNumOfTAsForNotAllowedAreas() const;
    bool maxNumOfTAsForNotAllowedAreasIsSet() const;
    void unsetMaxNumOfTAsForNotAllowedAreas();

    void setMaxNumOfTAsForNotAllowedAreas(int32_t value);


protected:
    std::shared_ptr<RestrictionType> m_RestrictionType;
    bool m_RestrictionTypeIsSet;
    std::vector<std::shared_ptr<Area>> m_Areas;
    bool m_AreasIsSet;
    int32_t m_MaxNumOfTAs;
    bool m_MaxNumOfTAsIsSet;
    int32_t m_MaxNumOfTAsForNotAllowedAreas;
    bool m_MaxNumOfTAsForNotAllowedAreasIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ServiceAreaRestriction_H_ */
