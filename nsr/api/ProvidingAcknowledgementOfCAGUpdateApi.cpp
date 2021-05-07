/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2020, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ProvidingAcknowledgementOfCAGUpdateApi.c
 *
 *
 */

#include "jsonParser.hpp"

#include <nghttp2/asio_http2_server.h>

#include "ProvidingAcknowledgementOfCAGUpdateApi.h"
#include "ProvidingAcknowledgementOfCAGUpdateApiImpl.h"

using namespace nghttp2::asio_http2::server;
using namespace nghttp2::asio_http2;

#include "AcknowledgeInfo.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

void ProvidingAcknowledgementOfCAGUpdateApi::c_ag_ack_handler(
    request &requestIn, response &responseIn) {
  // Getting the path params
  //  //<param name="supi">Identifier of the UE parameter type std::string
  //  </param>
  // openAPI type:   string
  std::string supi;

  if (requestIn.param().count("supi")) {

    // to do : more rainy day consider?

    // it is string
    supi = requestIn.param()["supi"];
  }

  // Getting the body param
  //
  //<param name="acknowledgeInfo"> parameter type AcknowledgeInfo
  //(optional)</param>

  AcknowledgeInfo acknowledgeInfo;

  try {
    // nlohmann::json::parse(requestIn.body()).get_to(acknowledgeInfo);
    staticjson::ParseStatus result;
    acknowledgeInfo.decode(requestIn.body(), result);
    /// <param name="supi">Identifier of the UE</param>
    /// <param name="acknowledgeInfo"> (optional)</param>
    ProvidingAcknowledgementOfCAGUpdateApiImpl::c_ag_ack(supi, acknowledgeInfo,
                                                         requestIn, responseIn);

  } catch (std::exception &e) {
    responseIn.write_head(500);
    responseIn.end(e.what());
    // send a 500 error
    return;
  }
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
