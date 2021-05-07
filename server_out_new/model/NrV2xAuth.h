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
 * NrV2xAuth.h
 *
 * 
 */

#ifndef NrV2xAuth_H_
#define NrV2xAuth_H_


#include "UeAuth.h"
#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  NrV2xAuth: public jsonParser::jsonParser<NrV2xAuth>
{
public:
    explicit NrV2xAuth(){
        // constructor
        
            m_VehicleUeAuthFlag = (staticjson::Flags::Optional);

            m_PedestrianUeAuthFlag = (staticjson::Flags::Optional);
    };
    virtual ~NrV2xAuth(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : VehicleUeAuth PedestrianUeAuth 
        h->add_property("vehicleUeAuth", &this->m_VehicleUeAuth, m_VehicleUeAuthFlag);
        h->add_property("pedestrianUeAuth", &this->m_PedestrianUeAuth, m_PedestrianUeAuthFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const NrV2xAuth& obj)
    {
        
        o << "VehicleUeAuth : " << obj.m_VehicleUeAuth << std::endl;

        o << "PedestrianUeAuth : " << obj.m_PedestrianUeAuth << std::endl;

     
        return o;
    }

    /////////////////////////////////////////////
    /// NrV2xAuth members vars : VehicleUeAuth PedestrianUeAuth 

    UeAuth  getVehicleUeAuth() const
    {
        return m_VehicleUeAuth;
    }
    void  setVehicleUeAuth(UeAuth const& value)
    {
        m_VehicleUeAuth = value;
    }

UeAuth  getPedestrianUeAuth() const
    {
        return m_PedestrianUeAuth;
    }
    void  setPedestrianUeAuth(UeAuth const& value)
    {
        m_PedestrianUeAuth = value;
    }



    
public:
    UeAuth m_VehicleUeAuth;
    
    unsigned m_VehicleUeAuthFlag;
    UeAuth m_PedestrianUeAuth;
    
    unsigned m_PedestrianUeAuthFlag;
  
};
}
}
}
}

#endif /* NrV2xAuth_H_ */
