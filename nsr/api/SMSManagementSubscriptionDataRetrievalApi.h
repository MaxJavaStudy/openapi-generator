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
 * SMSManagementSubscriptionDataRetrievalApi.h
 *
 *
 */

#ifndef SMSManagementSubscriptionDataRetrievalApi_H_
#define SMSManagementSubscriptionDataRetrievalApi_H_

#include "jsonParser.hpp"

#include <nghttp2/asio_http2_server.h>

#include "SMSManagementSubscriptionDataRetrievalApiImpl.h"

using namespace nghttp2::asio_http2::server;

#include "PlmnId.h"
#include "ProblemDetails.h"
#include "SmsManagementSubscriptionData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SMSManagementSubscriptionDataRetrievalApi {
public:
  SMSManagementSubscriptionDataRetrievalApi();
  virtual ~SMSManagementSubscriptionDataRetrievalApi() {}

  static void get_sms_mngt_data_handler(request &requestIn,
                                        response &responseIn);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SMSManagementSubscriptionDataRetrievalApi_H_ */
