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
 * SMSManagementSubscriptionDataRetrievalApi.c
 *
 *
 */

#include "jsonParser.hpp"

#include <nghttp2/asio_http2_server.h>

#include "SMSManagementSubscriptionDataRetrievalApi.h"
#include "SMSManagementSubscriptionDataRetrievalApiImpl.h"

using namespace nghttp2::asio_http2::server;
using namespace nghttp2::asio_http2;

#include "PlmnId.h"
#include "ProblemDetails.h"
#include "SmsManagementSubscriptionData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

void SMSManagementSubscriptionDataRetrievalApi::get_sms_mngt_data_handler(
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

  std::string plmnIdQuery;

  if (queryMap.count("plmn-id")) {
    plmnIdQuery = (queryMap).at("plmn-id");
  }
  std::optional<PlmnId> plmnId;

  //<param name="plmnId"> parameter type PlmnId   (optional, default to
  //PlmnId())</param>

  if (!plmnIdQuery.empty()) {
    staticjson::ParseStatus result;
    auto ret = (*plmnId).decode(plmnIdQuery, result);
    std::cout << "validation report is :" << ret.second << std::endl;
    std::cout << "parse result: " << (int)ret.first << std::endl;
    // std::move(plmnIdQuery)
  }

  // Getting the header params
  std::string ifNoneMatch;
  if (requestIn.header().count("If-None-Match")) {
    ifNoneMatch = requestIn.header()["If-None-Match"].value;
  }
  std::string ifModifiedSince;
  if (requestIn.header().count("If-Modified-Since")) {
    ifModifiedSince = requestIn.header()["If-Modified-Since"].value;
  }

  // Getting the header params
  std::string ifNoneMatch;
  if (requestIn.header().count("If-None-Match")) {
    ifNoneMatch = requestIn.header()["If-None-Match"].value;
  }
  std::string ifModifiedSince;
  if (requestIn.header().count("If-Modified-Since")) {
    ifModifiedSince = requestIn.header()["If-Modified-Since"].value;
  }

  try {
    /// <param name="supi">Identifier of the UE</param>
    /// <param name="supportedFeatures">Supported Features (optional, default to
    /// &quot;&quot;)</param> <param name="plmnId"> (optional, default to
    /// PlmnId())</param> <param name="ifNoneMatch">Validator for conditional
    /// requests, as described in RFC 7232, 3.2 (optional, default to
    /// &quot;&quot;)</param> <param name="ifModifiedSince">Validator for
    /// conditional requests, as described in RFC 7232, 3.3 (optional, default
    /// to &quot;&quot;)</param>
    SMSManagementSubscriptionDataRetrievalApiImpl::get_sms_mngt_data(
        supi, supportedFeatures, plmnId, ifNoneMatch, ifModifiedSince,
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
