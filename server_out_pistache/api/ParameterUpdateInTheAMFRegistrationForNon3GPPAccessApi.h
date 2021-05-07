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
 * ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApi.h
 *
 * 
 */

#ifndef ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApi_H_
#define ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "AmfNon3GppAccessRegistrationModification.h"
#include "PatchResult.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApi {
public:
    ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApi() {}
    void init();

    const std::string base = "/nudm-uecm/v1";

private:
    void setupRoutes();

    void update_non3_gpp_registration_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void parameter_update_in_the_amf_registration_for_non3_gpp_access_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// update a parameter in the AMF registration for non-3GPP access
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ueId">Identifier of the UE</param>
    /// <param name="amfNon3GppAccessRegistrationModification"></param>
    /// <param name="supportedFeatures">Features required to be supported by the target NF (optional, default to &quot;&quot;)</param>
    virtual void update_non3_gpp_registration(const std::string &ueId, const AmfNon3GppAccessRegistrationModification &amfNon3GppAccessRegistrationModification, const Pistache::Optional<std::string> &supportedFeatures, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApi_H_ */

