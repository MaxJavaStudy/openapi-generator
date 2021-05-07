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

#include "IPSMGWRegistrationInfoRetrievalApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

IPSMGWRegistrationInfoRetrievalApiImpl::IPSMGWRegistrationInfoRetrievalApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : IPSMGWRegistrationInfoRetrievalApi(rtr)
    { }

void IPSMGWRegistrationInfoRetrievalApiImpl::get_ip_sm_gw_registration(const std::string &ueId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

