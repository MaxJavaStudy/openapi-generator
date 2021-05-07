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

#include "UELocationInformationRetrievalApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

UELocationInformationRetrievalApiImpl::UELocationInformationRetrievalApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : UELocationInformationRetrievalApi(rtr)
    { }

void UELocationInformationRetrievalApiImpl::get_location_info(const std::string &ueId, const Pistache::Optional<std::string> &supportedFeatures, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

