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
 * PointAltitudeUncertainty_allOf.h
 *
 * 
 */

#ifndef PointAltitudeUncertainty_allOf_H_
#define PointAltitudeUncertainty_allOf_H_


#include "GeographicalCoordinates.h"
#include "UncertaintyEllipse.h"
#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  PointAltitudeUncertainty_allOf: public jsonParser::jsonParser<PointAltitudeUncertainty_allOf>
{
public:
    explicit PointAltitudeUncertainty_allOf(){
        // constructor
        
            m_PointFlag = staticjson::Flags::Default;
m_Altitude = 0.0;
        
            m_AltitudeFlag = staticjson::Flags::Default;

            m_UncertaintyEllipseFlag = staticjson::Flags::Default;
m_UncertaintyAltitude = 0.0f;
        
            m_UncertaintyAltitudeFlag = staticjson::Flags::Default;
m_Confidence = 0;
        
            m_ConfidenceFlag = staticjson::Flags::Default;
    };
    virtual ~PointAltitudeUncertainty_allOf(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : Point Altitude UncertaintyEllipse UncertaintyAltitude Confidence 
        h->add_property("point", &this->m_Point, m_PointFlag);
        h->add_property("altitude", &this->m_Altitude, m_AltitudeFlag);
        h->add_property("uncertaintyEllipse", &this->m_UncertaintyEllipse, m_UncertaintyEllipseFlag);
        h->add_property("uncertaintyAltitude", &this->m_UncertaintyAltitude, m_UncertaintyAltitudeFlag);
        h->add_property("confidence", &this->m_Confidence, m_ConfidenceFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const PointAltitudeUncertainty_allOf& obj)
    {
        
        o << "Point : " << obj.m_Point << std::endl;

        o << "Altitude : " << obj.m_Altitude << std::endl;

        o << "UncertaintyEllipse : " << obj.m_UncertaintyEllipse << std::endl;

        o << "UncertaintyAltitude : " << obj.m_UncertaintyAltitude << std::endl;

        o << "Confidence : " << obj.m_Confidence << std::endl;

     
        return o;
    }

    /////////////////////////////////////////////
    /// PointAltitudeUncertainty_allOf members vars : Point Altitude UncertaintyEllipse UncertaintyAltitude Confidence 

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

UncertaintyEllipse  getUncertaintyEllipse() const
    {
        return m_UncertaintyEllipse;
    }
    void  setUncertaintyEllipse(UncertaintyEllipse const& value)
    {
        m_UncertaintyEllipse = value;
    }

float  getUncertaintyAltitude() const
    {
        return m_UncertaintyAltitude;
    }
    void  setUncertaintyAltitude(float const value)
    {
        m_UncertaintyAltitude = value;
    }

int32_t  getConfidence() const
    {
        return m_Confidence;
    }
    void  setConfidence(int32_t const value)
    {
        m_Confidence = value;
    }



    
public:
    GeographicalCoordinates m_Point;
    
    unsigned m_PointFlag;
    double m_Altitude;
    
    unsigned m_AltitudeFlag;
    UncertaintyEllipse m_UncertaintyEllipse;
    
    unsigned m_UncertaintyEllipseFlag;
    float m_UncertaintyAltitude;
    
    unsigned m_UncertaintyAltitudeFlag;
    int32_t m_Confidence;
    
    unsigned m_ConfidenceFlag;
  
};
}
}
}
}

#endif /* PointAltitudeUncertainty_allOf_H_ */
