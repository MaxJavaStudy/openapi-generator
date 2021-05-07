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
 * RegistrationReason_anyOf.h
 *
 * 
 */

#ifndef RegistrationReason_anyOf_H_
#define RegistrationReason_anyOf_H_


#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RegistrationReason_anyOf
{
public:
    RegistrationReason_anyOf();
    virtual ~RegistrationReason_anyOf();

    enum class eRegistrationReason_anyOf {
    // To have a valid default value.
    // Avoiding nameclashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    SMF_CONTEXT_TRANSFERRED
    };
    void validate();

    /////////////////////////////////////////////
    /// RegistrationReason_anyOf members

    RegistrationReason_anyOf::eRegistrationReason_anyOf getValue() const;
    void setValue(RegistrationReason_anyOf::eRegistrationReason_anyOf value);

    friend void to_json(nlohmann::json& j, const RegistrationReason_anyOf& o);
    friend void from_json(const nlohmann::json& j, RegistrationReason_anyOf& o);
protected:
    RegistrationReason_anyOf::eRegistrationReason_anyOf m_value = RegistrationReason_anyOf::eRegistrationReason_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
};

}
}
}
}

#endif /* RegistrationReason_anyOf_H_ */
