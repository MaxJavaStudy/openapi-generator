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
 * CivicAddress.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CivicAddress_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CivicAddress_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CivicAddress
    : public ModelBase
{
public:
    CivicAddress();
    virtual ~CivicAddress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CivicAddress members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCountry() const;
    bool countryIsSet() const;
    void unsetCountry();

    void setCountry(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getA1() const;
    bool a1IsSet() const;
    void unsetA1();

    void setA1(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getA2() const;
    bool a2IsSet() const;
    void unsetA2();

    void setA2(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getA3() const;
    bool a3IsSet() const;
    void unsetA3();

    void setA3(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getA4() const;
    bool a4IsSet() const;
    void unsetA4();

    void setA4(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getA5() const;
    bool a5IsSet() const;
    void unsetA5();

    void setA5(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getA6() const;
    bool a6IsSet() const;
    void unsetA6();

    void setA6(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPRD() const;
    bool pRDIsSet() const;
    void unsetPRD();

    void setPRD(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPOD() const;
    bool pODIsSet() const;
    void unsetPOD();

    void setPOD(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSTS() const;
    bool sTSIsSet() const;
    void unsetSTS();

    void setSTS(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHNO() const;
    bool hNOIsSet() const;
    void unsetHNO();

    void setHNO(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHNS() const;
    bool hNSIsSet() const;
    void unsetHNS();

    void setHNS(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLMK() const;
    bool lMKIsSet() const;
    void unsetLMK();

    void setLMK(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLOC() const;
    bool lOCIsSet() const;
    void unsetLOC();

    void setLOC(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNAM() const;
    bool nAMIsSet() const;
    void unsetNAM();

    void setNAM(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPC() const;
    bool pCIsSet() const;
    void unsetPC();

    void setPC(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBLD() const;
    bool bLDIsSet() const;
    void unsetBLD();

    void setBLD(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUNIT() const;
    bool uNITIsSet() const;
    void unsetUNIT();

    void setUNIT(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFLR() const;
    bool fLRIsSet() const;
    void unsetFLR();

    void setFLR(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getROOM() const;
    bool rOOMIsSet() const;
    void unsetROOM();

    void setROOM(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPLC() const;
    bool pLCIsSet() const;
    void unsetPLC();

    void setPLC(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPCN() const;
    bool pCNIsSet() const;
    void unsetPCN();

    void setPCN(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPOBOX() const;
    bool pOBOXIsSet() const;
    void unsetPOBOX();

    void setPOBOX(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getADDCODE() const;
    bool aDDCODEIsSet() const;
    void unsetADDCODE();

    void setADDCODE(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSEAT() const;
    bool sEATIsSet() const;
    void unsetSEAT();

    void setSEAT(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRD() const;
    bool rDIsSet() const;
    void unsetRD();

    void setRD(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRDSEC() const;
    bool rDSECIsSet() const;
    void unsetRDSEC();

    void setRDSEC(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRDBR() const;
    bool rDBRIsSet() const;
    void unsetRDBR();

    void setRDBR(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRDSUBBR() const;
    bool rDSUBBRIsSet() const;
    void unsetRDSUBBR();

    void setRDSUBBR(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPRM() const;
    bool pRMIsSet() const;
    void unsetPRM();

    void setPRM(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPOM() const;
    bool pOMIsSet() const;
    void unsetPOM();

    void setPOM(const utility::string_t& value);


protected:
    utility::string_t m_Country;
    bool m_CountryIsSet;
    utility::string_t m_A1;
    bool m_A1IsSet;
    utility::string_t m_A2;
    bool m_A2IsSet;
    utility::string_t m_A3;
    bool m_A3IsSet;
    utility::string_t m_A4;
    bool m_A4IsSet;
    utility::string_t m_A5;
    bool m_A5IsSet;
    utility::string_t m_A6;
    bool m_A6IsSet;
    utility::string_t m_PRD;
    bool m_PRDIsSet;
    utility::string_t m_POD;
    bool m_PODIsSet;
    utility::string_t m_STS;
    bool m_STSIsSet;
    utility::string_t m_HNO;
    bool m_HNOIsSet;
    utility::string_t m_HNS;
    bool m_HNSIsSet;
    utility::string_t m_LMK;
    bool m_LMKIsSet;
    utility::string_t m_LOC;
    bool m_LOCIsSet;
    utility::string_t m_NAM;
    bool m_NAMIsSet;
    utility::string_t m_PC;
    bool m_PCIsSet;
    utility::string_t m_BLD;
    bool m_BLDIsSet;
    utility::string_t m_UNIT;
    bool m_UNITIsSet;
    utility::string_t m_FLR;
    bool m_FLRIsSet;
    utility::string_t m_ROOM;
    bool m_ROOMIsSet;
    utility::string_t m_PLC;
    bool m_PLCIsSet;
    utility::string_t m_PCN;
    bool m_PCNIsSet;
    utility::string_t m_POBOX;
    bool m_POBOXIsSet;
    utility::string_t m_ADDCODE;
    bool m_ADDCODEIsSet;
    utility::string_t m_SEAT;
    bool m_SEATIsSet;
    utility::string_t m_RD;
    bool m_RDIsSet;
    utility::string_t m_RDSEC;
    bool m_RDSECIsSet;
    utility::string_t m_RDBR;
    bool m_RDBRIsSet;
    utility::string_t m_RDSUBBR;
    bool m_RDSUBBRIsSet;
    utility::string_t m_PRM;
    bool m_PRMIsSet;
    utility::string_t m_POM;
    bool m_POMIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CivicAddress_H_ */
