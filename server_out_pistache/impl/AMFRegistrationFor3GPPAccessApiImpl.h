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
* AMFRegistrationFor3GPPAccessApiImpl.h
*
* 
*/

#ifndef AMF_REGISTRATION_FOR3_GPP_ACCESS_API_IMPL_H_
#define AMF_REGISTRATION_FOR3_GPP_ACCESS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <AMFRegistrationFor3GPPAccessApi.h>

#include <pistache/optional.h>

#include "Amf3GppAccessRegistration.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AMFRegistrationFor3GPPAccessApiImpl : public org::openapitools::server::api::AMFRegistrationFor3GPPAccessApi {
public:
    AMFRegistrationFor3GPPAccessApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~AMFRegistrationFor3GPPAccessApiImpl() {}

    void 3_gpp_registration(const std::string &ueId, const Amf3GppAccessRegistration &amf3GppAccessRegistration, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif