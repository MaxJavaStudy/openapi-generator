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
 * LcsPrivacyData.h
 *
 * 
 */

#ifndef LcsPrivacyData_H_
#define LcsPrivacyData_H_


#include "UnrelatedClass.h"
#include "PlmnOperatorClass.h"
#include <vector>
#include "Lpi.h"
#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  LcsPrivacyData: public jsonParser::jsonParser<LcsPrivacyData>
{
public:
    explicit LcsPrivacyData(){
        // constructor
        
            m_LpiFlag = (staticjson::Flags::Optional);

            m_UnrelatedClassFlag = (staticjson::Flags::Optional);

            m_PlmnOperatorClassesFlag = (staticjson::Flags::Optional);
    };
    virtual ~LcsPrivacyData(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : Lpi UnrelatedClass PlmnOperatorClasses 
        h->add_property("lpi", &this->m_Lpi, m_LpiFlag);
        h->add_property("unrelatedClass", &this->m_UnrelatedClass, m_UnrelatedClassFlag);
        h->add_property("plmnOperatorClasses", &this->m_PlmnOperatorClasses, m_PlmnOperatorClassesFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const LcsPrivacyData& obj)
    {
        
        o << "Lpi : " << obj.m_Lpi << std::endl;

        o << "UnrelatedClass : " << obj.m_UnrelatedClass << std::endl;
        o<< convert2string(std::string("PlmnOperatorClasses"), obj.m_PlmnOperatorClasses) <<std::endl;
       
     
        return o;
    }

    /////////////////////////////////////////////
    /// LcsPrivacyData members vars : Lpi UnrelatedClass PlmnOperatorClasses 

    Lpi  getLpi() const
    {
        return m_Lpi;
    }
    void  setLpi(Lpi const& value)
    {
        m_Lpi = value;
    }

UnrelatedClass  getUnrelatedClass() const
    {
        return m_UnrelatedClass;
    }
    void  setUnrelatedClass(UnrelatedClass const& value)
    {
        m_UnrelatedClass = value;
    }

std::vector<PlmnOperatorClass>&  getPlmnOperatorClasses()
    {
        return m_PlmnOperatorClasses;
    }
    void  setPlmnOperatorClasses(std::vector<PlmnOperatorClass> const& value)
    {
        m_PlmnOperatorClasses = value;
    }



    
public:
    Lpi m_Lpi;
    
    unsigned m_LpiFlag;
    UnrelatedClass m_UnrelatedClass;
    
    unsigned m_UnrelatedClassFlag;
    std::vector<PlmnOperatorClass> m_PlmnOperatorClasses;
    
    unsigned m_PlmnOperatorClassesFlag;
  
};
}
}
}
}

#endif /* LcsPrivacyData_H_ */
