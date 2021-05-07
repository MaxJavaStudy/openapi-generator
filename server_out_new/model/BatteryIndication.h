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
 * BatteryIndication.h
 *
 * 
 */

#ifndef BatteryIndication_H_
#define BatteryIndication_H_


#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  BatteryIndication: public jsonParser::jsonParser<BatteryIndication>
{
public:
    explicit BatteryIndication(){
        // constructor
        m_BatteryInd = false;
        
            m_BatteryIndFlag = (staticjson::Flags::Optional);
m_ReplaceableInd = false;
        
            m_ReplaceableIndFlag = (staticjson::Flags::Optional);
m_RechargeableInd = false;
        
            m_RechargeableIndFlag = (staticjson::Flags::Optional);
    };
    virtual ~BatteryIndication(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : BatteryInd ReplaceableInd RechargeableInd 
        h->add_property("batteryInd", &this->m_BatteryInd, m_BatteryIndFlag);
        h->add_property("replaceableInd", &this->m_ReplaceableInd, m_ReplaceableIndFlag);
        h->add_property("rechargeableInd", &this->m_RechargeableInd, m_RechargeableIndFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const BatteryIndication& obj)
    {
        
        o << "BatteryInd : " << obj.m_BatteryInd << std::endl;

        o << "ReplaceableInd : " << obj.m_ReplaceableInd << std::endl;

        o << "RechargeableInd : " << obj.m_RechargeableInd << std::endl;

     
        return o;
    }

    /////////////////////////////////////////////
    /// BatteryIndication members vars : BatteryInd ReplaceableInd RechargeableInd 

    bool  isBatteryInd() const
    {
        return m_BatteryInd;
    }
    void  setBatteryInd(bool const value)
    {
        m_BatteryInd = value;
    }

bool  isReplaceableInd() const
    {
        return m_ReplaceableInd;
    }
    void  setReplaceableInd(bool const value)
    {
        m_ReplaceableInd = value;
    }

bool  isRechargeableInd() const
    {
        return m_RechargeableInd;
    }
    void  setRechargeableInd(bool const value)
    {
        m_RechargeableInd = value;
    }



    
public:
    bool m_BatteryInd;
    
    unsigned m_BatteryIndFlag;
    bool m_ReplaceableInd;
    
    unsigned m_ReplaceableIndFlag;
    bool m_RechargeableInd;
    
    unsigned m_RechargeableIndFlag;
  
};
}
}
}
}

#endif /* BatteryIndication_H_ */
