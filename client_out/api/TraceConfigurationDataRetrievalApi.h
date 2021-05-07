/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 2.1.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TraceConfigurationDataRetrievalApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_TraceConfigurationDataRetrievalApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_TraceConfigurationDataRetrievalApi_H_


#include "../ApiClient.h"

#include "PlmnId.h"
#include "ProblemDetails.h"
#include "TraceDataResponse.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  TraceConfigurationDataRetrievalApi 
{
public:

    explicit TraceConfigurationDataRetrievalApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~TraceConfigurationDataRetrievalApi();

    /// <summary>
    /// retrieve a UE&#39;s Trace Configuration Data
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="supi">Identifier of the UE</param>
    /// <param name="supportedFeatures">Supported Features (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="plmnId">serving PLMN ID (optional, default to new PlmnId())</param>
    /// <param name="ifNoneMatch">Validator for conditional requests, as described in RFC 7232, 3.2 (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="ifModifiedSince">Validator for conditional requests, as described in RFC 7232, 3.3 (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<TraceDataResponse>> getTraceConfigData(
        utility::string_t supi,
        boost::optional<utility::string_t> supportedFeatures,
        boost::optional<std::shared_ptr<PlmnId>> plmnId,
        boost::optional<utility::string_t> ifNoneMatch,
        boost::optional<utility::string_t> ifModifiedSince
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_TraceConfigurationDataRetrievalApi_H_ */

