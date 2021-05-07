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
 * SscModes.h
 *
 * 
 */

#ifndef SscModes_H_
#define SscModes_H_


#include <vector>
#include "SscMode.h"
#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  SscModes: public jsonParser::jsonParser<SscModes>
{
public:
    explicit SscModes(){
        // constructor
        
            m_DefaultSscModeFlag = staticjson::Flags::Default;

            m_AllowedSscModesFlag = (staticjson::Flags::Optional);
    };
    virtual ~SscModes(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : DefaultSscMode AllowedSscModes 
        h->add_property("defaultSscMode", &this->m_DefaultSscMode, m_DefaultSscModeFlag);
        h->add_property("allowedSscModes", &this->m_AllowedSscModes, m_AllowedSscModesFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const SscModes& obj)
    {
        
        o << "DefaultSscMode : " << obj.m_DefaultSscMode << std::endl;
        o<< convert2string(std::string("AllowedSscModes"), obj.m_AllowedSscModes) <<std::endl;
       
     
        return o;
    }

    /////////////////////////////////////////////
    /// SscModes members vars : DefaultSscMode AllowedSscModes 

    SscMode  getDefaultSscMode() const
    {
        return m_DefaultSscMode;
    }
    void  setDefaultSscMode(SscMode const& value)
    {
        m_DefaultSscMode = value;
    }

std::vector<SscMode>&  getAllowedSscModes()
    {
        return m_AllowedSscModes;
    }
    void  setAllowedSscModes(std::vector<SscMode> const& value)
    {
        m_AllowedSscModes = value;
    }



    
public:
    SscMode m_DefaultSscMode;
    
    unsigned m_DefaultSscModeFlag;
    std::vector<SscMode> m_AllowedSscModes;
    
    unsigned m_AllowedSscModesFlag;
  
};
}
}
}
}

#endif /* SscModes_H_ */
