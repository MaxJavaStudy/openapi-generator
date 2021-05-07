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
 * AdditionalSnssaiData.h
 *
 * 
 */

#ifndef AdditionalSnssaiData_H_
#define AdditionalSnssaiData_H_


#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  AdditionalSnssaiData: public jsonParser::jsonParser<AdditionalSnssaiData>
{
public:
    explicit AdditionalSnssaiData(){
        // constructor
        m_RequiredAuthnAuthz = false;
        
            m_RequiredAuthnAuthzFlag = (staticjson::Flags::Optional);
    };
    virtual ~AdditionalSnssaiData(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : RequiredAuthnAuthz 
        h->add_property("requiredAuthnAuthz", &this->m_RequiredAuthnAuthz, m_RequiredAuthnAuthzFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const AdditionalSnssaiData& obj)
    {
        
        o << "RequiredAuthnAuthz : " << obj.m_RequiredAuthnAuthz << std::endl;

     
        return o;
    }

    /////////////////////////////////////////////
    /// AdditionalSnssaiData members vars : RequiredAuthnAuthz 

    bool  isRequiredAuthnAuthz() const
    {
        return m_RequiredAuthnAuthz;
    }
    void  setRequiredAuthnAuthz(bool const value)
    {
        m_RequiredAuthnAuthz = value;
    }



    
public:
    bool m_RequiredAuthnAuthz;
    
    unsigned m_RequiredAuthnAuthzFlag;
  
};
}
}
}
}

#endif /* AdditionalSnssaiData_H_ */
