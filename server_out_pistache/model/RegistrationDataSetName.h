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
 * RegistrationDataSetName.h
 *
 * 
 */

#ifndef RegistrationDataSetName_H_
#define RegistrationDataSetName_H_


#include "RegistrationDataSetName_anyOf.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RegistrationDataSetName
{
public:
    RegistrationDataSetName();
    virtual ~RegistrationDataSetName();

    void validate();

    /////////////////////////////////////////////
    /// RegistrationDataSetName members


    friend void to_json(nlohmann::json& j, const RegistrationDataSetName& o);
    friend void from_json(const nlohmann::json& j, RegistrationDataSetName& o);
protected:
};

}
}
}
}

#endif /* RegistrationDataSetName_H_ */
