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
 * UEContextInSMSFDataRetrievalApiImpl.h
 *
 *
 */

#ifndef UE_CONTEXT_IN_SMSF_DATA_RETRIEVAL_API_IMPL_H_
#define UE_CONTEXT_IN_SMSF_DATA_RETRIEVAL_API_IMPL_H_

#include <memory>
#include <nghttp2/asio_http2_server.h>
//#include "UEContextInSMSFDataRetrievalApi.h"

#include "ProblemDetails.h"
#include "UeContextInSmsfData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;
using namespace nghttp2::asio_http2::server;
class UEContextInSMSFDataRetrievalApiImpl {
public:
  UEContextInSMSFDataRetrievalApiImpl(){};
  ~UEContextInSMSFDataRetrievalApiImpl() {}

  static void
  get_ue_ctx_in_smsf_data(const std::string &supi,
                          const std::optional<std::string> &supportedFeatures,
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