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
 * InvalidParam.h
 *
 * 
 */

#ifndef InvalidParam_H_
#define InvalidParam_H_


#include <string>
#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  InvalidParam: public jsonParser::jsonParser<InvalidParam>
{
public:
    explicit InvalidParam(){
        // constructor
        m_Param = "";
        
            m_ParamFlag = staticjson::Flags::Default;
m_Reason = "";
        
            m_ReasonFlag = (staticjson::Flags::Optional);
    };
    virtual ~InvalidParam(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : Param Reason 
        h->add_property("param", &this->m_Param, m_ParamFlag);
        h->add_property("reason", &this->m_Reason, m_ReasonFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const InvalidParam& obj)
    {
        
        o << "Param : " << obj.m_Param << std::endl;

        o << "Reason : " << obj.m_Reason << std::endl;

     
        return o;
    }

    /////////////////////////////////////////////
    /// InvalidParam members vars : Param Reason 

    std::string  getParam() const
    {
        return m_Param;
    }
    void  setParam(std::string const& value)
    {
        m_Param = value;
    }

std::string  getReason() const
    {
        return m_Reason;
    }
    void  setReason(std::string const& value)
    {
        m_Reason = value;
    }



    
public:
    std::string m_Param;
    
    unsigned m_ParamFlag;
    std::string m_Reason;
    
    unsigned m_ReasonFlag;
  
};
}
}
}
}

#endif /* InvalidParam_H_ */
