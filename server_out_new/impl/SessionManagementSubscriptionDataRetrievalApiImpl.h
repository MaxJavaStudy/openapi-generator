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
* SessionManagementSubscriptionDataRetrievalApiImpl.h
*
* 
*/

#ifndef SESSION_MANAGEMENT_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_
#define SESSION_MANAGEMENT_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_



#include <memory>


#include "PlmnId.h"
#include "ProblemDetails.h"
#include "SessionManagementSubscriptionData.h"
#include "Snssai.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SessionManagementSubscriptionDataRetrievalApiImpl : public org::openapitools::server::api::SessionManagementSubscriptionDataRetrievalApi {
public:
    SessionManagementSubscriptionDataRetrievalApiImpl(){};
    ~SessionManagementSubscriptionDataRetrievalApiImpl() {}

    static void get_sm_data(const std::string &supi, const  std::optional<std::string> &supportedFeatures, const  std::optional<Snssai> &singleNssai, const  std::optional<std::string> &dnn, const  std::optional<PlmnId> &plmnId, const std::optional<std::string> &ifNoneMatch, const std::optional<std::string> &ifModifiedSince, response &responseIn)
    {
        // not implement
    }

};

}
}
}
}



#endif