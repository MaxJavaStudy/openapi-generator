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
 * RetrievalOfMultipleDataSetsApi.h
 *
 *
 */

#ifndef RetrievalOfMultipleDataSetsApi_H_
#define RetrievalOfMultipleDataSetsApi_H_

#include "jsonParser.hpp"

#include <nghttp2/asio_http2_server.h>

#include "RetrievalOfMultipleDataSetsApiImpl.h"

using namespace nghttp2::asio_http2::server;

#include "DataSetName.h"
#include "PlmnId.h"
#include "ProblemDetails.h"
#include "Set.h"
#include "SubscriptionDataSets.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RetrievalOfMultipleDataSetsApi {
public:
  RetrievalOfMultipleDataSetsApi();
  virtual ~RetrievalOfMultipleDataSetsApi() {}

  static void get_data_sets_handler(request &requestIn, response &responseIn);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RetrievalOfMultipleDataSetsApi_H_ */
