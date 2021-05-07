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
 * InterFreqTargetInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_InterFreqTargetInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_InterFreqTargetInfo_H_


#include "../ModelBase.h"

#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  InterFreqTargetInfo
    : public ModelBase
{
public:
    InterFreqTargetInfo();
    virtual ~InterFreqTargetInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InterFreqTargetInfo members

    /// <summary>
    /// 
    /// </summary>
    int32_t getDlCarrierFreq() const;
    bool dlCarrierFreqIsSet() const;
    void unsetDlCarrierFreq();

    void setDlCarrierFreq(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<int32_t>& getCellIdList();
    bool cellIdListIsSet() const;
    void unsetCellIdList();

    void setCellIdList(std::vector<int32_t> value);


protected:
    int32_t m_DlCarrierFreq;
    bool m_DlCarrierFreqIsSet;
    std::vector<int32_t> m_CellIdList;
    bool m_CellIdListIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_InterFreqTargetInfo_H_ */
