/**
* Nudm_SDM
* Nudm Subscriber Data Management Service. � 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 2.1.2
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CagData.h
 *
 * 
 */

#ifndef CagData_H_
#define CagData_H_


#include "CagInfo.h"
#include <string>
#include <map>
#include <vector>
#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  CagData: public jsonParser::jsonParser<CagData>
{
public:
    explicit CagData(){
        // constructor
        
            m_CagInfosFlag = staticjson::Flags::Default;
m_ProvisioningTime = "";
        
            m_ProvisioningTimeFlag = (staticjson::Flags::Optional);
    };
    virtual ~CagData(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : CagInfos ProvisioningTime 
        h->add_property("cagInfos", &this->m_CagInfos, m_CagInfosFlag);
        h->add_property("provisioningTime", &this->m_ProvisioningTime, m_ProvisioningTimeFlag);



        h->set_flags(staticjson::Flags::Default | staticjson::Flags::DisallowUnknownKey);
    }
    template<typename T>
    static std::string convert2string(std::string name ,const std::vector<T>& obj){
         std::stringstream o;
         o << "name : ";
            for(auto it : obj)
            {
                o<< it;
            }
            o<<std::endl;

            return o.str();

    }

    template<typename T, typename T1>
    static std::string convert2string(std::string name ,const std::map<T,T1>& obj){
        std::stringstream out;
            out<<"name : ";
            for(auto it : obj)
            {
                out<< it.first<<":"<<it.second<<" ";
            }
            out<<std::endl;
            return out.str();

    }

    friend std::ostream& operator<<(std::ostream& o, const CagData& obj)
    {
                o<< convert2string(std::string("CagInfos"), obj.m_CagInfos) <<std::endl;
       
        o << "ProvisioningTime : " << obj.m_ProvisioningTime << std::endl;

     
        return o;
    }

    /////////////////////////////////////////////
    /// CagData members vars : CagInfos ProvisioningTime 

    std::map<std::string, CagInfo>&  getCagInfos()
    {
        return m_CagInfos;
    }
    void  setCagInfos(std::map<std::string, CagInfo> const& value)
    {
        m_CagInfos = value;
    }

std::string  getProvisioningTime() const
    {
        return m_ProvisioningTime;
    }
    void  setProvisioningTime(std::string const& value)
    {
        m_ProvisioningTime = value;
    }



    
public:
    std::map<std::string, CagInfo> m_CagInfos;
    
    unsigned m_CagInfosFlag;
    std::string m_ProvisioningTime;
    
    unsigned m_ProvisioningTimeFlag;
  
};
}
}
}
}

#endif /* CagData_H_ */
