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
 * SMFSmfRegistrationApi.h
 *
 * 
 */

#ifndef SMFSmfRegistrationApi_H_
#define SMFSmfRegistrationApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "ProblemDetails.h"
#include "SmfRegistration.h"
#include "SmfRegistrationInfo.h"
#include "Snssai.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  SMFSmfRegistrationApi {
public:
    SMFSmfRegistrationApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~SMFSmfRegistrationApi() {}
    void init();

    const std::string base = "/nudm-uecm/v1";

private:
    void setupRoutes();

    void get_smf_registration_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void registration_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void smf_smf_registration_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// retrieve the SMF registration information
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ueId">Identifier of the UE</param>
    /// <param name="singleNssai"> (optional, default to Snssai())</param>
    /// <param name="dnn"> (optional, default to &quot;&quot;)</param>
    /// <param name="supportedFeatures"> (optional, default to &quot;&quot;)</param>
    virtual void get_smf_registration(const std::string &ueId, const Pistache::Optional<Snssai> &singleNssai, const Pistache::Optional<std::string> &dnn, const Pistache::Optional<std::string> &supportedFeatures, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// register as SMF
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ueId">Identifier of the UE</param>
    /// <param name="pduSessionId">Identifier of the PDU session</param>
    /// <param name="smfRegistration"></param>
    virtual void registration(const std::string &ueId, const int32_t &pduSessionId, const SmfRegistration &smfRegistration, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* SMFSmfRegistrationApi_H_ */

