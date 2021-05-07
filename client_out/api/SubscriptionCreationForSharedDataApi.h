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
 * SubscriptionCreationForSharedDataApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_SubscriptionCreationForSharedDataApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_SubscriptionCreationForSharedDataApi_H_


#include "../ApiClient.h"

#include "ProblemDetails.h"
#include "SdmSubscription.h"


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  SubscriptionCreationForSharedDataApi 
{
public:

    explicit SubscriptionCreationForSharedDataApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SubscriptionCreationForSharedDataApi();

    /// <summary>
    /// subscribe to notifications for shared data
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="sdmSubscription"></param>
    pplx::task<std::shared_ptr<SdmSubscription>> subscribeToSharedData(
        std::shared_ptr<SdmSubscription> sdmSubscription
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_SubscriptionCreationForSharedDataApi_H_ */

