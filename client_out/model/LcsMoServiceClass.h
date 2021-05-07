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
 * LcsMoServiceClass.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_LcsMoServiceClass_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_LcsMoServiceClass_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  LcsMoServiceClass
    : public ModelBase
{
public:
    LcsMoServiceClass();
    virtual ~LcsMoServiceClass();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eLcsMoServiceClass
    {
        LcsMoServiceClass_BASIC_SELF_LOCATION,
        LcsMoServiceClass_AUTONOMOUS_SELF_LOCATION,
        LcsMoServiceClass_TRANSFER_TO_THIRD_PARTY,
    };

    eLcsMoServiceClass getValue() const;
    void setValue(eLcsMoServiceClass const value);

    protected:
        eLcsMoServiceClass m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_LcsMoServiceClass_H_ */
