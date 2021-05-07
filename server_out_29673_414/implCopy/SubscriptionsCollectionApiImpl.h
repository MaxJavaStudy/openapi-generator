/**
 * Nucmf_UECapabilityManagement
 * Nucmf_UECapabilityManagement Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * SubscriptionsCollectionApiImpl.h
 *
 *
 */

#ifndef SUBSCRIPTIONS_COLLECTION_API_IMPL_H_
#define SUBSCRIPTIONS_COLLECTION_API_IMPL_H_

#include <memory>
#include <nghttp2/asio_http2_server.h>
//#include "SubscriptionsCollectionApi.h"

#include "CreateSubscription.h"
#include "CreatedSubscription.h"
#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;
using namespace nghttp2::asio_http2::server;
class SubscriptionsCollectionApiImpl {
public:
  SubscriptionsCollectionApiImpl(){};
  ~SubscriptionsCollectionApiImpl() {}

  static void
  create_individual_subcription(const CreateSubscription &createSubscription,
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