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
 * EnhancedCoverageRestrictionDataRetrievalApiImpl.h
 *
 *
 */

#ifndef ENHANCED_COVERAGE_RESTRICTION_DATA_RETRIEVAL_API_IMPL_H_
#define ENHANCED_COVERAGE_RESTRICTION_DATA_RETRIEVAL_API_IMPL_H_

#include <memory>
#include <nghttp2/asio_http2_server.h>
//#include "EnhancedCoverageRestrictionDataRetrievalApi.h"

#include "EnhancedCoverageRestrictionData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;
using namespace nghttp2::asio_http2::server;
class EnhancedCoverageRestrictionDataRetrievalApiImpl {
public:
  EnhancedCoverageRestrictionDataRetrievalApiImpl(){};
  ~EnhancedCoverageRestrictionDataRetrievalApiImpl() {}

  static void get_ecr_data(const std::string &supi,
                           const std::optional<std::string> &supportedFeatures,
                           const std::optional<std::string> &ifNoneMatch,
                           const std::optional<std::string> &ifModifiedSince,
                           request &requestIn, response &responseIn) {
    // not implement
    responseIn.write_head(400);
    responseIn.end("this API is not impliment\n");
  }
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif