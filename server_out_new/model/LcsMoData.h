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
 * LcsMoData.h
 *
 * 
 */

#ifndef LcsMoData_H_
#define LcsMoData_H_


#include "LcsMoServiceClass.h"
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
class  LcsMoData: public jsonParser::jsonParser<LcsMoData>
{
public:
    explicit LcsMoData(){
        // constructor
        
            m_AllowedServiceClassesFlag = staticjson::Flags::Default;
    };
    virtual ~LcsMoData(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : AllowedServiceClasses 
        h->add_property("allowedServiceClasses", &this->m_AllowedServiceClasses, m_AllowedServiceClassesFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const LcsMoData& obj)
    {
                o<< convert2string(std::string("AllowedServiceClasses"), obj.m_AllowedServiceClasses) <<std::endl;
       
     
        return o;
    }

    /////////////////////////////////////////////
    /// LcsMoData members vars : AllowedServiceClasses 

    std::vector<LcsMoServiceClass>&  getAllowedServiceClasses()
    {
        return m_AllowedServiceClasses;
    }
    void  setAllowedServiceClasses(std::vector<LcsMoServiceClass> const& value)
    {
        m_AllowedServiceClasses = value;
    }



    
public:
    std::vector<LcsMoServiceClass> m_AllowedServiceClasses;
    
    unsigned m_AllowedServiceClassesFlag;
  
};
}
}
}
}

#endif /* LcsMoData_H_ */
