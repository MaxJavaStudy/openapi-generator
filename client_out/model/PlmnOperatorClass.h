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
 * PlmnOperatorClass.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PlmnOperatorClass_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PlmnOperatorClass_H_


#include "../ModelBase.h"

#include "LcsClientClass.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  PlmnOperatorClass
    : public ModelBase
{
public:
    PlmnOperatorClass();
    virtual ~PlmnOperatorClass();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PlmnOperatorClass members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<LcsClientClass> getLcsClientClass() const;
    bool lcsClientClassIsSet() const;
    void unsetLcsClientClass();

    void setLcsClientClass(const std::shared_ptr<LcsClientClass>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<utility::string_t>>& getLcsClientIds();
    bool lcsClientIdsIsSet() const;
    void unsetLcsClientIds();

    void setLcsClientIds(const std::vector<std::shared_ptr<utility::string_t>>& value);


protected:
    std::shared_ptr<LcsClientClass> m_LcsClientClass;
    bool m_LcsClientClassIsSet;
    std::vector<std::shared_ptr<utility::string_t>> m_LcsClientIds;
    bool m_LcsClientIdsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PlmnOperatorClass_H_ */
