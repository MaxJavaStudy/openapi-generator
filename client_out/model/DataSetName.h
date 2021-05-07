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
 * DataSetName.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_DataSetName_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_DataSetName_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  DataSetName
    : public ModelBase
{
public:
    DataSetName();
    virtual ~DataSetName();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eDataSetName
    {
        DataSetName_AM,
        DataSetName_SMF_SEL,
        DataSetName_UEC_SMF,
        DataSetName_UEC_SMSF,
        DataSetName_SMS_SUB,
        DataSetName_SM,
        DataSetName_TRACE,
        DataSetName_SMS_MNG,
        DataSetName_LCS_PRIVACY,
        DataSetName_LCS_MO,
        DataSetName_UEC_AMF,
        DataSetName_V2X,
    };

    eDataSetName getValue() const;
    void setValue(eDataSetName const value);

    protected:
        eDataSetName m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_DataSetName_H_ */
