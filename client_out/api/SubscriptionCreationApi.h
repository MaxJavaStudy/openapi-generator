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
 * SubscriptionCreationApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_SubscriptionCreationApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_SubscriptionCreationApi_H_


#include "../ApiClient.h"

#include "ProblemDetails.h"
#include "SdmSubscription.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  SubscriptionCreationApi 
{
public:

    explicit SubscriptionCreationApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SubscriptionCreationApi();

    /// <summary>
    /// subscribe to notifications
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ueId">Identity of the user</param>
    /// <param name="sdmSubscription"></param>
    pplx::task<std::shared_ptr<SdmSubscription>> subscribe(
        utility::string_t ueId,
        std::shared_ptr<SdmSubscription> sdmSubscription
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_SubscriptionCreationApi_H_ */

