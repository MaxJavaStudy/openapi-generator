/**
 * Nucmf_Provisioning
 * UCMF_Provisioning Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UERadioCapabilityProvisioningsCollectionApi.h
 *
 *
 */

#ifndef UERadioCapabilityProvisioningsCollectionApi_H_
#define UERadioCapabilityProvisioningsCollectionApi_H_

#include "UERadioCapabilityProvisioningsCollectionApiImpl.h"

#include "ProblemDetails.h"
#include "RacsData.h"
#include "RacsFailureReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class UERadioCapabilityProvisioningsCollectionApi {
public:
  UERadioCapabilityProvisioningsCollectionApi();
  virtual ~UERadioCapabilityProvisioningsCollectionApi() {}

private:
  static void create_provisioning_handler(request &requestIn,
                                          response responseIn) {

    // Getting the body param

    RacsData racsData;

    try {
      // nlohmann::json::parse(request.body()).get_to(racsData);
      staticjson::ParseStatus result;
      racsData.decode(request.body(), result);
      /// <param name="racsData">create new provisionings for a given
      /// SCS/AS.</param>
      UERadioCapabilityProvisioningsCollectionApiImpl::create_provisioning(
          racsData, response);

    } catch (std::exception &e) {
      responseIn.write_head(500);
      responseIn.end(e.what());
      // send a 500 error
      return;
    }
  }
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UERadioCapabilityProvisioningsCollectionApi_H_ */
