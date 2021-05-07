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
 * PointAltitude_allOf.h
 *
 * 
 */

#ifndef PointAltitude_allOf_H_
#define PointAltitude_allOf_H_


#include "GeographicalCoordinates.h"
#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  PointAltitude_allOf: public jsonParser::jsonParser<PointAltitude_allOf>
{
public:
    explicit PointAltitude_allOf(){
        // constructor
        
            m_PointFlag = staticjson::Flags::Default;
m_Altitude = 0.0;
        
            m_AltitudeFlag = staticjson::Flags::Default;
    };
    virtual ~PointAltitude_allOf(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : Point Altitude 
        h->add_property("point", &this->m_Point, m_PointFlag);
        h->add_property("altitude", &this->m_Altitude, m_AltitudeFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const PointAltitude_allOf& obj)
    {
        
        o << "Point : " << obj.m_Point << std::endl;

        o << "Altitude : " << obj.m_Altitude << std::endl;

     
        return o;
    }

    /////////////////////////////////////////////
    /// PointAltitude_allOf members vars : Point Altitude 

    GeographicalCoordinates  getPoint() const
    {
        return m_Point;
    }
    void  setPoint(GeographicalCoordinates const& value)
    {
        m_Point = value;
    }

double  getAltitude() const
    {
        return m_Altitude;
    }
    void  setAltitude(double const value)
    {
        m_Altitude = value;
    }



    
public:
    GeographicalCoordinates m_Point;
    
    unsigned m_PointFlag;
    double m_Altitude;
    
    unsigned m_AltitudeFlag;
  
};
}
}
}
}

#endif /* PointAltitude_allOf_H_ */
