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
 * CollectionPeriodRmmLteMdt.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CollectionPeriodRmmLteMdt_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CollectionPeriodRmmLteMdt_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  CollectionPeriodRmmLteMdt
    : public ModelBase
{
public:
    CollectionPeriodRmmLteMdt();
    virtual ~CollectionPeriodRmmLteMdt();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eCollectionPeriodRmmLteMdt
    {
        CollectionPeriodRmmLteMdt__1024,
        CollectionPeriodRmmLteMdt__1280,
        CollectionPeriodRmmLteMdt__2048,
        CollectionPeriodRmmLteMdt__2560,
        CollectionPeriodRmmLteMdt__5120,
        CollectionPeriodRmmLteMdt__10240,
        CollectionPeriodRmmLteMdt__60000,
    };

    eCollectionPeriodRmmLteMdt getValue() const;
    void setValue(eCollectionPeriodRmmLteMdt const value);

    protected:
        eCollectionPeriodRmmLteMdt m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CollectionPeriodRmmLteMdt_H_ */
