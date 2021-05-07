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
 * SmfSelectionSubscriptionData.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SmfSelectionSubscriptionData_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SmfSelectionSubscriptionData_H_


#include "../ModelBase.h"

#include "SnssaiInfo.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  SmfSelectionSubscriptionData
    : public ModelBase
{
public:
    SmfSelectionSubscriptionData();
    virtual ~SmfSelectionSubscriptionData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SmfSelectionSubscriptionData members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSupportedFeatures() const;
    bool supportedFeaturesIsSet() const;
    void unsetSupportedFeatures();

    void setSupportedFeatures(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<SnssaiInfo>>& getSubscribedSnssaiInfos();
    bool subscribedSnssaiInfosIsSet() const;
    void unsetSubscribedSnssaiInfos();

    void setSubscribedSnssaiInfos(const std::map<utility::string_t, std::shared_ptr<SnssaiInfo>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSharedSnssaiInfosId() const;
    bool sharedSnssaiInfosIdIsSet() const;
    void unsetSharedSnssaiInfosId();

    void setSharedSnssaiInfosId(const utility::string_t& value);


protected:
    utility::string_t m_SupportedFeatures;
    bool m_SupportedFeaturesIsSet;
    std::map<utility::string_t, std::shared_ptr<SnssaiInfo>> m_SubscribedSnssaiInfos;
    bool m_SubscribedSnssaiInfosIsSet;
    utility::string_t m_SharedSnssaiInfosId;
    bool m_SharedSnssaiInfosIdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SmfSelectionSubscriptionData_H_ */
