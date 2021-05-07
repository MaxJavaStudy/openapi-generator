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
 * LCSPrivacyDataRetrievalApi.h
 *
 * 
 */

#ifndef LCSPrivacyDataRetrievalApi_H_
#define LCSPrivacyDataRetrievalApi_H_






#include "LCSPrivacyDataRetrievalApiImpl.h"

#include "LcsPrivacyData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  LCSPrivacyDataRetrievalApi {
public:
    LCSPrivacyDataRetrievalApi();
    virtual ~LCSPrivacyDataRetrievalApi() {}
 



private:
   

    static void get_lcs_privacy_data_handler(request &requestIn,  response responseIn)
    {
    // Getting the path params
    std::string ueId;

    if(request.param.count("ueId"))
    {
      ueId = request.param["ueId"];
    }
    
    
    
    // Getting the query params
    auto supportedFeaturesQuery = request.uri().get("supported-features");
    std::optional<std::string> supportedFeatures;

    if(!supportedFeaturesQuery.isEmpty()){
      supportedFeatures = supportedFeaturesQuery;
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
    /// <param name="ueId">Identifier of the UE</param>
    /// <param name="supportedFeatures">Supported Features (optional, default to &quot;&quot;)</param>
    /// <param name="ifNoneMatch">Validator for conditional requests, as described in RFC 7232, 3.2 (optional, default to &quot;&quot;)</param>
    /// <param name="ifModifiedSince">Validator for conditional requests, as described in RFC 7232, 3.3 (optional, default to &quot;&quot;)</param>
      LCSPrivacyDataRetrievalApiImpl::get_lcs_privacy_data(ueId, supportedFeatures, ifNoneMatch, ifModifiedSince, response);
   
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

#endif /* LCSPrivacyDataRetrievalApi_H_ */

