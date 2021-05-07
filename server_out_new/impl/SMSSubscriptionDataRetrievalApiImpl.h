/**
* Nudm_SDM
* Nudm Subscriber Data Management Service. � 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 2.1.2
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* SMSSubscriptionDataRetrievalApiImpl.h
*
* 
*/

#ifndef SMS_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_
#define SMS_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_



#include <memory>


#include "PlmnId.h"
#include "ProblemDetails.h"
#include "SmsSubscriptionData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SMSSubscriptionDataRetrievalApiImpl : public org::openapitools::server::api::SMSSubscriptionDataRetrievalApi {
public:
    SMSSubscriptionDataRetrievalApiImpl(){};
    ~SMSSubscriptionDataRetrievalApiImpl() {}

    static void get_sms_data(const std::string &supi, const  std::optional<std::string> &supportedFeatures, const  std::optional<PlmnId> &plmnId, const std::optional<std::string> &ifNoneMatch, const std::optional<std::string> &ifModifiedSince, response &responseIn)
    {
        // not implement
    }

};

}
}
}
}



#endif