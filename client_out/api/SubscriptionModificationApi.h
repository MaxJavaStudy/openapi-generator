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
 * SubscriptionModificationApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_SubscriptionModificationApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_SubscriptionModificationApi_H_


#include "../ApiClient.h"

#include "OneOfSdmSubscriptionPatchResult.h"
#include "ProblemDetails.h"
#include "SdmSubsModification.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  SubscriptionModificationApi 
{
public:

    explicit SubscriptionModificationApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SubscriptionModificationApi();

    /// <summary>
    /// modify the subscription
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ueId">Identity of the user</param>
    /// <param name="subscriptionId">Id of the SDM Subscription</param>
    /// <param name="sdmSubsModification"></param>
    /// <param name="supportedFeatures">Features required to be supported by the target NF (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<OneOfSdmSubscriptionPatchResult>> modify(
        utility::string_t ueId,
        utility::string_t subscriptionId,
        std::shared_ptr<SdmSubsModification> sdmSubsModification,
        boost::optional<utility::string_t> supportedFeatures
    ) const;
    /// <summary>
    /// modify the subscription
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">Id of the SDM Subscription</param>
    /// <param name="sdmSubsModification"></param>
    /// <param name="supportedFeatures">Features required to be supported by the target NF (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<OneOfSdmSubscriptionPatchResult>> modifySharedDataSubs(
        utility::string_t subscriptionId,
        std::shared_ptr<SdmSubsModification> sdmSubsModification,
        boost::optional<utility::string_t> supportedFeatures
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_SubscriptionModificationApi_H_ */

