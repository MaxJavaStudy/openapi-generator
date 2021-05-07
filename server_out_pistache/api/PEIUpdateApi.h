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
 * PEIUpdateApi.h
 *
 * 
 */

#ifndef PEIUpdateApi_H_
#define PEIUpdateApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "PeiUpdateInfo.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  PEIUpdateApi {
public:
    PEIUpdateApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~PEIUpdateApi() {}
    void init();

    const std::string base = "/nudm-uecm/v1";

private:
    void setupRoutes();

    void pei_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void pei_update_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Updates the PEI in the 3GPP access registration context
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ueId">Identifier of the UE</param>
    /// <param name="peiUpdateInfo"></param>
    virtual void pei_update(const std::string &ueId, const PeiUpdateInfo &peiUpdateInfo, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* PEIUpdateApi_H_ */

