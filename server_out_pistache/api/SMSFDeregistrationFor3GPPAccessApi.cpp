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

#include "SMSFDeregistrationFor3GPPAccessApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

SMSFDeregistrationFor3GPPAccessApi::SMSFDeregistrationFor3GPPAccessApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
}

void SMSFDeregistrationFor3GPPAccessApi::init() {
    setupRoutes();
}

void SMSFDeregistrationFor3GPPAccessApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Delete(*router, base + "/:ueId/registrations/smsf-3gpp-access", Routes::bind(&SMSFDeregistrationFor3GPPAccessApi::3_gpp_smsf_deregistration_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&SMSFDeregistrationFor3GPPAccessApi::smsf_deregistration_for3_gpp_access_api_default_handler, this));
}

void SMSFDeregistrationFor3GPPAccessApi::3_gpp_smsf_deregistration_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto ueId = request.param(":ueId").as<std::string>();
    
    // Getting the query params
    auto smsfSetIdQuery = request.query().get("smsf-set-id");
    Pistache::Optional<std::string> smsfSetId;
    if(!smsfSetIdQuery.isEmpty()){
        std::string valueQuery_instance;
        if(fromStringValue(smsfSetIdQuery.get(), valueQuery_instance)){
            smsfSetId = Pistache::Some(valueQuery_instance);
        }
    }
    
    try {
      this->3_gpp_smsf_deregistration(ueId, smsfSetId, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}

void SMSFDeregistrationFor3GPPAccessApi::smsf_deregistration_for3_gpp_access_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}

