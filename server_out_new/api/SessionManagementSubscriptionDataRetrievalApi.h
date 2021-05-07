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
 * SessionManagementSubscriptionDataRetrievalApi.h
 *
 * 
 */

#ifndef SessionManagementSubscriptionDataRetrievalApi_H_
#define SessionManagementSubscriptionDataRetrievalApi_H_






#include "SessionManagementSubscriptionDataRetrievalApiImpl.h"

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

class  SessionManagementSubscriptionDataRetrievalApi {
public:
    SessionManagementSubscriptionDataRetrievalApi();
    virtual ~SessionManagementSubscriptionDataRetrievalApi() {}
 



private:
   

    static void get_sm_data_handler(request &requestIn,  response responseIn)
    {
    // Getting the path params
    std::string supi;

    if(request.param.count("supi"))
    {
      supi = request.param["supi"];
    }
    
    
    
    // Getting the query params
    auto supportedFeaturesQuery = request.uri().get("supported-features");
    std::optional<std::string> supportedFeatures;

    if(!supportedFeaturesQuery.isEmpty()){
      supportedFeatures = supportedFeaturesQuery;
    }
    auto singleNssaiQuery = request.uri().get("single-nssai");
    std::optional<Snssai> singleNssai;

    if(!singleNssaiQuery.isEmpty()){
       staticjson::ParseStatus result;
        auto ret = singleNssai.decode(singleNssaiQuery, result);
        std::cout << "validation report is :" << ret.second << std::endl;
        std::cout << "parse result: " << (int)ret.first << std::endl;
        //std::move(singleNssaiQuery)    
    }
    auto dnnQuery = request.uri().get("dnn");
    std::optional<std::string> dnn;

    if(!dnnQuery.isEmpty()){
      dnn = dnnQuery;
    }
    auto plmnIdQuery = request.uri().get("plmn-id");
    std::optional<PlmnId> plmnId;

    if(!plmnIdQuery.isEmpty()){
       staticjson::ParseStatus result;
        auto ret = plmnId.decode(plmnIdQuery, result);
        std::cout << "validation report is :" << ret.second << std::endl;
        std::cout << "parse result: " << (int)ret.first << std::endl;
        //std::move(plmnIdQuery)    
    }
    
    // Getting the header params
    std::string ifNoneMatch;
    if(request.header().count("If-None-Match"))
    {
      ifNoneMatch = request.header()["If-None-Match"].value;
    }
    std::string ifModifiedSince;
    if(request.header().count("If-Modified-Since"))
    {
      ifModifiedSince = request.header()["If-Modified-Since"].value;
    }

    try {
    /// <param name="supi">Identifier of the UE</param>
    /// <param name="supportedFeatures">Supported Features (optional, default to &quot;&quot;)</param>
    /// <param name="singleNssai"> (optional, default to Snssai())</param>
    /// <param name="dnn"> (optional, default to &quot;&quot;)</param>
    /// <param name="plmnId"> (optional, default to PlmnId())</param>
    /// <param name="ifNoneMatch">Validator for conditional requests, as described in RFC 7232, 3.2 (optional, default to &quot;&quot;)</param>
    /// <param name="ifModifiedSince">Validator for conditional requests, as described in RFC 7232, 3.3 (optional, default to &quot;&quot;)</param>
      SessionManagementSubscriptionDataRetrievalApiImpl::get_sm_data(supi, supportedFeatures, singleNssai, dnn, plmnId, ifNoneMatch, ifModifiedSince, response);
   
    }  catch (std::exception &e) {
        responseIn.write_head(500);
        responseIn.end(e.what());
        //send a 500 error
        return;
    }
    }
   
 

};

}
}
}
}

#endif /* SessionManagementSubscriptionDataRetrievalApi_H_ */

