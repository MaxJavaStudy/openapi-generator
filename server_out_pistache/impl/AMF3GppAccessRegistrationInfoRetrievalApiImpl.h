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
* AMF3GppAccessRegistrationInfoRetrievalApiImpl.h
*
* 
*/

#ifndef AMF3_GPP_ACCESS_REGISTRATION_INFO_RETRIEVAL_API_IMPL_H_
#define AMF3_GPP_ACCESS_REGISTRATION_INFO_RETRIEVAL_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <AMF3GppAccessRegistrationInfoRetrievalApi.h>

#include <pistache/optional.h>

#include "Amf3GppAccessRegistration.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AMF3GppAccessRegistrationInfoRetrievalApiImpl : public org::openapitools::server::api::AMF3GppAccessRegistrationInfoRetrievalApi {
public:
    AMF3GppAccessRegistrationInfoRetrievalApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~AMF3GppAccessRegistrationInfoRetrievalApiImpl() {}

    void get3_gpp_registration(const std::string &ueId, const Pistache::Optional<std::string> &supportedFeatures, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif