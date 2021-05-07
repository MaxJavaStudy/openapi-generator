/**
* Nudm_UECM
* Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.1.2
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * DeregistrationReason_anyOf.h
 *
 * 
 */

#ifndef DeregistrationReason_anyOf_H_
#define DeregistrationReason_anyOf_H_


#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  DeregistrationReason_anyOf
{
public:
    DeregistrationReason_anyOf();
    virtual ~DeregistrationReason_anyOf();

    enum class eDeregistrationReason_anyOf {
    // To have a valid default value.
    // Avoiding nameclashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    UE_INITIAL_REGISTRATION, 
    UE_REGISTRATION_AREA_CHANGE, 
    SUBSCRIPTION_WITHDRAWN, 
    _5GS_TO_EPS_MOBILITY, 
    _5GS_TO_EPS_MOBILITY_UE_INITIAL_REGISTRATION, 
    REREGISTRATION_REQUIRED, 
    SMF_CONTEXT_TRANSFERRED
    };
    void validate();

    /////////////////////////////////////////////
    /// DeregistrationReason_anyOf members

    DeregistrationReason_anyOf::eDeregistrationReason_anyOf getValue() const;
    void setValue(DeregistrationReason_anyOf::eDeregistrationReason_anyOf value);

    friend void to_json(nlohmann::json& j, const DeregistrationReason_anyOf& o);
    friend void from_json(const nlohmann::json& j, DeregistrationReason_anyOf& o);
protected:
    DeregistrationReason_anyOf::eDeregistrationReason_anyOf m_value = DeregistrationReason_anyOf::eDeregistrationReason_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
};

}
}
}
}

#endif /* DeregistrationReason_anyOf_H_ */
