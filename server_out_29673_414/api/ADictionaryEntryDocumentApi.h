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
 * ADictionaryEntryDocumentApi.h
 *
 *
 */

#ifndef ADictionaryEntryDocumentApi_H_
#define ADictionaryEntryDocumentApi_H_

#include "jsonParser.hpp"

#include <nghttp2/asio_http2_server.h>

#include "ADictionaryEntryDocumentApiImpl.h"

using namespace nghttp2::asio_http2::server;

#include "DicEntryCreateData.h"
#include "DicEntryCreatedData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ADictionaryEntryDocumentApi {
public:
  ADictionaryEntryDocumentApi();
  virtual ~ADictionaryEntryDocumentApi() {}

  static void create_dictionary_entry_handler(request &requestIn,
                                              response &responseIn);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ADictionaryEntryDocumentApi_H_ */
