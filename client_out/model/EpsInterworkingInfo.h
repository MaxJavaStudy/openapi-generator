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
 * EpsInterworkingInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_EpsInterworkingInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_EpsInterworkingInfo_H_


#include "../ModelBase.h"

#include <map>
#include <vector>
#include "EpsIwkPgw.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  EpsInterworkingInfo
    : public ModelBase
{
public:
    EpsInterworkingInfo();
    virtual ~EpsInterworkingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EpsInterworkingInfo members

    /// <summary>
    /// A map (list of key-value pairs where Dnn serves as key) of EpsIwkPgws
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<EpsIwkPgw>>& getEpsIwkPgws();
    bool epsIwkPgwsIsSet() const;
    void unsetEpsIwkPgws();

    void setEpsIwkPgws(const std::map<utility::string_t, std::shared_ptr<EpsIwkPgw>>& value);


protected:
    std::map<utility::string_t, std::shared_ptr<EpsIwkPgw>> m_EpsIwkPgws;
    bool m_EpsIwkPgwsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_EpsInterworkingInfo_H_ */
