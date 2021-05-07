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
 * UEContextInSMFDataRetrievalApi.c
 *
 *
 */

#include "jsonParser.hpp"

#include <nghttp2/asio_http2_server.h>

#include "UEContextInSMFDataRetrievalApi.h"
#include "UEContextInSMFDataRetrievalApiImpl.h"

using namespace nghttp2::asio_http2::server;
using namespace nghttp2::asio_http2;

#include "ProblemDetails.h"
#include "UeContextInSmfData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

void UEContextInSMFDataRetrievalApi::get_ue_ctx_in_smf_data_handler(
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

  // Getting the query params
  std::map<std::string, std::string> queryMap;
  if (!requestIn.uri().raw_query.empty()) {
    queryMap = getQueryMap::get(requestIn.uri().raw_query);
  }

  std::string supportedFeaturesQuery;

  if (queryMap.count("supported-features")) {
    supportedFeaturesQuery = (queryMap).at("supported-features");
  }
  std::optional<std::string> supportedFeatures;

  //<param name="supportedFeatures">Supported Features parameter type
  //std::string   (optional, default to &quot;&quot;)</param>

  // PrimitiveType
  if (!supportedFeaturesQuery.empty()) {
    supportedFeatures.emplace(supportedFeaturesQuery);
  }

  try {
    /// <param name="supi">Identifier of the UE</param>
    /// <param name="supportedFeatures">Supported Features (optional, default to
    /// &quot;&quot;)</param>
    UEContextInSMFDataRetrievalApiImpl::get_ue_ctx_in_smf_data(
        supi, supportedFeatures, requestIn, responseIn);

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
