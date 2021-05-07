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
 * AppDescriptor.h
 *
 * 
 */

#ifndef AppDescriptor_H_
#define AppDescriptor_H_


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
class  AppDescriptor: public jsonParser::jsonParser<AppDescriptor>
{
public:
    explicit AppDescriptor(){
        // constructor
        m_OsId = "";
        
            m_OsIdFlag = (staticjson::Flags::Optional);
m_AppId = "";
        
            m_AppIdFlag = (staticjson::Flags::Optional);
    };
    virtual ~AppDescriptor(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : OsId AppId 
        h->add_property("osId", &this->m_OsId, m_OsIdFlag);
        h->add_property("appId", &this->m_AppId, m_AppIdFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const AppDescriptor& obj)
    {
        
        o << "OsId : " << obj.m_OsId << std::endl;

        o << "AppId : " << obj.m_AppId << std::endl;

     
        return o;
    }

    /////////////////////////////////////////////
    /// AppDescriptor members vars : OsId AppId 

    std::string  getOsId() const
    {
        return m_OsId;
    }
    void  setOsId(std::string const& value)
    {
        m_OsId = value;
    }

std::string  getAppId() const
    {
        return m_AppId;
    }
    void  setAppId(std::string const& value)
    {
        m_AppId = value;
    }



    
public:
    std::string m_OsId;
    
    unsigned m_OsIdFlag;
    std::string m_AppId;
    
    unsigned m_AppIdFlag;
  
};
}
}
}
}

#endif /* AppDescriptor_H_ */
