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
 * LteV2xAuth.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_LteV2xAuth_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_LteV2xAuth_H_


#include "../ModelBase.h"

#include "UeAuth.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  LteV2xAuth
    : public ModelBase
{
public:
    LteV2xAuth();
    virtual ~LteV2xAuth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LteV2xAuth members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UeAuth> getVehicleUeAuth() const;
    bool vehicleUeAuthIsSet() const;
    void unsetVehicleUeAuth();

    void setVehicleUeAuth(const std::shared_ptr<UeAuth>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UeAuth> getPedestrianUeAuth() const;
    bool pedestrianUeAuthIsSet() const;
    void unsetPedestrianUeAuth();

    void setPedestrianUeAuth(const std::shared_ptr<UeAuth>& value);


protected:
    std::shared_ptr<UeAuth> m_VehicleUeAuth;
    bool m_VehicleUeAuthIsSet;
    std::shared_ptr<UeAuth> m_PedestrianUeAuth;
    bool m_PedestrianUeAuthIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_LteV2xAuth_H_ */
