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
 * NetworkAreaInfo.h
 *
 * Describes a network area information in which the NF service consumer requests the number of UEs.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_NetworkAreaInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_NetworkAreaInfo_H_


#include "../ModelBase.h"

#include "Ecgi.h"
#include "Ncgi.h"
#include "Tai.h"
#include "GlobalRanNodeId.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Describes a network area information in which the NF service consumer requests the number of UEs.
/// </summary>
class  NetworkAreaInfo
    : public ModelBase
{
public:
    NetworkAreaInfo();
    virtual ~NetworkAreaInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NetworkAreaInfo members

    /// <summary>
    /// Contains a list of E-UTRA cell identities.
    /// </summary>
    std::vector<std::shared_ptr<Ecgi>>& getEcgis();
    bool ecgisIsSet() const;
    void unsetEcgis();

    void setEcgis(const std::vector<std::shared_ptr<Ecgi>>& value);

    /// <summary>
    /// Contains a list of NR cell identities.
    /// </summary>
    std::vector<std::shared_ptr<Ncgi>>& getNcgis();
    bool ncgisIsSet() const;
    void unsetNcgis();

    void setNcgis(const std::vector<std::shared_ptr<Ncgi>>& value);

    /// <summary>
    /// Contains a list of NG RAN nodes.
    /// </summary>
    std::vector<std::shared_ptr<GlobalRanNodeId>>& getGRanNodeIds();
    bool gRanNodeIdsIsSet() const;
    void unsetGRanNodeIds();

    void setGRanNodeIds(const std::vector<std::shared_ptr<GlobalRanNodeId>>& value);

    /// <summary>
    /// Contains a list of tracking area identities.
    /// </summary>
    std::vector<std::shared_ptr<Tai>>& getTais();
    bool taisIsSet() const;
    void unsetTais();

    void setTais(const std::vector<std::shared_ptr<Tai>>& value);


protected:
    std::vector<std::shared_ptr<Ecgi>> m_Ecgis;
    bool m_EcgisIsSet;
    std::vector<std::shared_ptr<Ncgi>> m_Ncgis;
    bool m_NcgisIsSet;
    std::vector<std::shared_ptr<GlobalRanNodeId>> m_GRanNodeIds;
    bool m_GRanNodeIdsIsSet;
    std::vector<std::shared_ptr<Tai>> m_Tais;
    bool m_TaisIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_NetworkAreaInfo_H_ */
