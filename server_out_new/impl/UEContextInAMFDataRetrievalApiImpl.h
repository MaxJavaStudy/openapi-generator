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
* UEContextInAMFDataRetrievalApiImpl.h
*
* 
*/

#ifndef UE_CONTEXT_IN_AMF_DATA_RETRIEVAL_API_IMPL_H_
#define UE_CONTEXT_IN_AMF_DATA_RETRIEVAL_API_IMPL_H_



#include <memory>


#include "ProblemDetails.h"
#include "UeContextInAmfData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class UEContextInAMFDataRetrievalApiImpl : public org::openapitools::server::api::UEContextInAMFDataRetrievalApi {
public:
    UEContextInAMFDataRetrievalApiImpl(){};
    ~UEContextInAMFDataRetrievalApiImpl() {}

    static void get_ue_ctx_in_amf_data(const std::string &supi, const  std::optional<std::string> &supportedFeatures, response &responseIn)
    {
        // not implement
    }

};

}
}
}
}



#endif