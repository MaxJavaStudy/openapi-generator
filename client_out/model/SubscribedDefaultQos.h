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
 * SubscribedDefaultQos.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SubscribedDefaultQos_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SubscribedDefaultQos_H_


#include "../ModelBase.h"

#include "Arp.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  SubscribedDefaultQos
    : public ModelBase
{
public:
    SubscribedDefaultQos();
    virtual ~SubscribedDefaultQos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscribedDefaultQos members

    /// <summary>
    /// 
    /// </summary>
    int32_t getR5qi() const;
    bool r5qiIsSet() const;
    void unsetr_5qi();

    void setR5qi(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Arp> getArp() const;
    bool arpIsSet() const;
    void unsetArp();

    void setArp(const std::shared_ptr<Arp>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPriorityLevel() const;
    bool priorityLevelIsSet() const;
    void unsetPriorityLevel();

    void setPriorityLevel(int32_t value);


protected:
    int32_t m_r_5qi;
    bool m_r_5qiIsSet;
    std::shared_ptr<Arp> m_Arp;
    bool m_ArpIsSet;
    int32_t m_PriorityLevel;
    bool m_PriorityLevelIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SubscribedDefaultQos_H_ */
