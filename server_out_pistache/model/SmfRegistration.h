/**
* Nudm_UECM
* Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.1.2
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * SmfRegistration.h
 *
 * 
 */

#ifndef SmfRegistration_H_
#define SmfRegistration_H_


#include "RegistrationReason.h"
#include "ContextInfo.h"
#include <string>
#include "PlmnId.h"
#include "Snssai.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  SmfRegistration
{
public:
    SmfRegistration();
    virtual ~SmfRegistration();

    void validate();

    /////////////////////////////////////////////
    /// SmfRegistration members

    /// <summary>
    /// 
    /// </summary>
    std::string getSmfInstanceId() const;
    void setSmfInstanceId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getSmfSetId() const;
    void setSmfSetId(std::string const& value);
    bool smfSetIdIsSet() const;
    void unsetSmfSetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getSupportedFeatures() const;
    void setSupportedFeatures(std::string const& value);
    bool supportedFeaturesIsSet() const;
    void unsetSupportedFeatures();
    /// <summary>
    /// 
    /// </summary>
    int32_t getPduSessionId() const;
    void setPduSessionId(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    Snssai getSingleNssai() const;
    void setSingleNssai(Snssai const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDnn() const;
    void setDnn(std::string const& value);
    bool dnnIsSet() const;
    void unsetDnn();
    /// <summary>
    /// 
    /// </summary>
    bool isEmergencyServices() const;
    void setEmergencyServices(bool const value);
    bool emergencyServicesIsSet() const;
    void unsetEmergencyServices();
    /// <summary>
    /// 
    /// </summary>
    std::string getPcscfRestorationCallbackUri() const;
    void setPcscfRestorationCallbackUri(std::string const& value);
    bool pcscfRestorationCallbackUriIsSet() const;
    void unsetPcscfRestorationCallbackUri();
    /// <summary>
    /// 
    /// </summary>
    PlmnId getPlmnId() const;
    void setPlmnId(PlmnId const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getPgwFqdn() const;
    void setPgwFqdn(std::string const& value);
    bool pgwFqdnIsSet() const;
    void unsetPgwFqdn();
    /// <summary>
    /// 
    /// </summary>
    bool isEpdgInd() const;
    void setEpdgInd(bool const value);
    bool epdgIndIsSet() const;
    void unsetEpdgInd();
    /// <summary>
    /// 
    /// </summary>
    std::string getDeregCallbackUri() const;
    void setDeregCallbackUri(std::string const& value);
    bool deregCallbackUriIsSet() const;
    void unsetDeregCallbackUri();
    /// <summary>
    /// 
    /// </summary>
    RegistrationReason getRegistrationReason() const;
    void setRegistrationReason(RegistrationReason const& value);
    bool registrationReasonIsSet() const;
    void unsetRegistrationReason();
    /// <summary>
    /// 
    /// </summary>
    std::string getRegistrationTime() const;
    void setRegistrationTime(std::string const& value);
    bool registrationTimeIsSet() const;
    void unsetRegistrationTime();
    /// <summary>
    /// 
    /// </summary>
    ContextInfo getContextInfo() const;
    void setContextInfo(ContextInfo const& value);
    bool contextInfoIsSet() const;
    void unsetContextInfo();

    friend void to_json(nlohmann::json& j, const SmfRegistration& o);
    friend void from_json(const nlohmann::json& j, SmfRegistration& o);
protected:
    std::string m_SmfInstanceId;

    std::string m_SmfSetId;
    bool m_SmfSetIdIsSet;
    std::string m_SupportedFeatures;
    bool m_SupportedFeaturesIsSet;
    int32_t m_PduSessionId;

    Snssai m_SingleNssai;

    std::string m_Dnn;
    bool m_DnnIsSet;
    bool m_EmergencyServices;
    bool m_EmergencyServicesIsSet;
    std::string m_PcscfRestorationCallbackUri;
    bool m_PcscfRestorationCallbackUriIsSet;
    PlmnId m_PlmnId;

    std::string m_PgwFqdn;
    bool m_PgwFqdnIsSet;
    bool m_EpdgInd;
    bool m_EpdgIndIsSet;
    std::string m_DeregCallbackUri;
    bool m_DeregCallbackUriIsSet;
    RegistrationReason m_RegistrationReason;
    bool m_RegistrationReasonIsSet;
    std::string m_RegistrationTime;
    bool m_RegistrationTimeIsSet;
    ContextInfo m_ContextInfo;
    bool m_ContextInfoIsSet;
};

}
}
}
}

#endif /* SmfRegistration_H_ */
