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
 * VnGroupData.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_VnGroupData_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_VnGroupData_H_


#include "../ModelBase.h"

#include "AppDescriptor.h"
#include <cpprest/details/basic_types.h>
#include "PduSessionTypes.h"
#include "Snssai.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  VnGroupData
    : public ModelBase
{
public:
    VnGroupData();
    virtual ~VnGroupData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// VnGroupData members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PduSessionTypes> getPduSessionTypes() const;
    bool pduSessionTypesIsSet() const;
    void unsetPduSessionTypes();

    void setPduSessionTypes(const std::shared_ptr<PduSessionTypes>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDnn() const;
    bool dnnIsSet() const;
    void unsetDnn();

    void setDnn(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Snssai> getSingleNssai() const;
    bool singleNssaiIsSet() const;
    void unsetSingleNssai();

    void setSingleNssai(const std::shared_ptr<Snssai>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<AppDescriptor>>& getAppDescriptors();
    bool appDescriptorsIsSet() const;
    void unsetAppDescriptors();

    void setAppDescriptors(const std::vector<std::shared_ptr<AppDescriptor>>& value);


protected:
    std::shared_ptr<PduSessionTypes> m_PduSessionTypes;
    bool m_PduSessionTypesIsSet;
    utility::string_t m_Dnn;
    bool m_DnnIsSet;
    std::shared_ptr<Snssai> m_SingleNssai;
    bool m_SingleNssaiIsSet;
    std::vector<std::shared_ptr<AppDescriptor>> m_AppDescriptors;
    bool m_AppDescriptorsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_VnGroupData_H_ */
