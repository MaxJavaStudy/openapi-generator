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
* ProvidingAcknowledgementOfSNSSAIsUpdateApiImpl.h
*
* 
*/

#ifndef PROVIDING_ACKNOWLEDGEMENT_OF_SNSSAIS_UPDATE_API_IMPL_H_
#define PROVIDING_ACKNOWLEDGEMENT_OF_SNSSAIS_UPDATE_API_IMPL_H_



#include <memory>


#include "AcknowledgeInfo.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ProvidingAcknowledgementOfSNSSAIsUpdateApiImpl : public org::openapitools::server::api::ProvidingAcknowledgementOfSNSSAIsUpdateApi {
public:
    ProvidingAcknowledgementOfSNSSAIsUpdateApiImpl(){};
    ~ProvidingAcknowledgementOfSNSSAIsUpdateApiImpl() {}

    static void s_nssais_ack(const std::string &supi, const AcknowledgeInfo &acknowledgeInfo, response &responseIn)
    {
        // not implement
    }

};

}
}
}
}



#endif