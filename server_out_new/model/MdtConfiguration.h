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
 * MdtConfiguration.h
 *
 * 
 */

#ifndef MdtConfiguration_H_
#define MdtConfiguration_H_


#include "LoggingDurationNrMdt.h"
#include "MeasurementPeriodLteMdt.h"
#include "ReportingTrigger.h"
#include "PositioningMethodMdt.h"
#include "LoggingIntervalMdt.h"
#include "LoggingIntervalNrMdt.h"
#include "PlmnId.h"
#include "CollectionPeriodRmmNrMdt.h"
#include "JobType.h"
#include <vector>
#include "ReportTypeMdt.h"
#include "SensorMeasurement.h"
#include "ReportIntervalMdt.h"
#include "CollectionPeriodRmmLteMdt.h"
#include "LoggingDurationMdt.h"
#include "MbsfnArea.h"
#include "MeasurementNrForMdt.h"
#include "InterFreqTargetInfo.h"
#include "ReportAmountMdt.h"
#include "EventForMdt.h"
#include "ReportIntervalNrMdt.h"
#include "AreaScope.h"
#include "MeasurementLteForMdt.h"
#include "jsonParser/jsonParser.hpp"
#include <type_traits>
	
namespace org {
namespace openapitools {
namespace server {
namespace model {


    

/// <summary>
/// 
/// </summary>
class  MdtConfiguration: public jsonParser::jsonParser<MdtConfiguration>
{
public:
    explicit MdtConfiguration(){
        // constructor
        
            m_JobTypeFlag = staticjson::Flags::Default;

            m_ReportTypeFlag = (staticjson::Flags::Optional);

            m_AreaScopeFlag = (staticjson::Flags::Optional);

            m_MeasurementLteListFlag = (staticjson::Flags::Optional);

            m_MeasurementNrListFlag = (staticjson::Flags::Optional);

            m_SensorMeasurementListFlag = (staticjson::Flags::Optional);

            m_ReportingTriggerListFlag = (staticjson::Flags::Optional);

            m_ReportIntervalFlag = (staticjson::Flags::Optional);

            m_ReportIntervalNrFlag = (staticjson::Flags::Optional);

            m_ReportAmountFlag = (staticjson::Flags::Optional);
m_EventThresholdRsrp = 0;
        
            m_EventThresholdRsrpFlag = (staticjson::Flags::Optional);
m_EventThresholdRsrpNr = 0;
        
            m_EventThresholdRsrpNrFlag = (staticjson::Flags::Optional);
m_EventThresholdRsrq = 0;
        
            m_EventThresholdRsrqFlag = (staticjson::Flags::Optional);
m_EventThresholdRsrqNr = 0;
        
            m_EventThresholdRsrqNrFlag = (staticjson::Flags::Optional);

            m_EventListFlag = (staticjson::Flags::Optional);

            m_LoggingIntervalFlag = (staticjson::Flags::Optional);

            m_LoggingIntervalNrFlag = (staticjson::Flags::Optional);

            m_LoggingDurationFlag = (staticjson::Flags::Optional);

            m_LoggingDurationNrFlag = (staticjson::Flags::Optional);

            m_PositioningMethodFlag = (staticjson::Flags::Optional);

            m_CollectionPeriodRmmLteFlag = (staticjson::Flags::Optional);

            m_CollectionPeriodRmmNrFlag = (staticjson::Flags::Optional);

            m_MeasurementPeriodLteFlag = (staticjson::Flags::Optional);

            m_MdtAllowedPlmnIdListFlag = (staticjson::Flags::Optional);

            m_MbsfnAreaListFlag = (staticjson::Flags::Optional);

            m_InterFreqTargetListFlag = (staticjson::Flags::Optional);
    };
    virtual ~MdtConfiguration(){};

  

    void staticjson_init(staticjson::ObjectHandler *h)
    {

        // static json settings members vars : JobType ReportType AreaScope MeasurementLteList MeasurementNrList SensorMeasurementList ReportingTriggerList ReportInterval ReportIntervalNr ReportAmount EventThresholdRsrp EventThresholdRsrpNr EventThresholdRsrq EventThresholdRsrqNr EventList LoggingInterval LoggingIntervalNr LoggingDuration LoggingDurationNr PositioningMethod CollectionPeriodRmmLte CollectionPeriodRmmNr MeasurementPeriodLte MdtAllowedPlmnIdList MbsfnAreaList InterFreqTargetList 
        h->add_property("jobType", &this->m_JobType, m_JobTypeFlag);
        h->add_property("reportType", &this->m_ReportType, m_ReportTypeFlag);
        h->add_property("areaScope", &this->m_AreaScope, m_AreaScopeFlag);
        h->add_property("measurementLteList", &this->m_MeasurementLteList, m_MeasurementLteListFlag);
        h->add_property("measurementNrList", &this->m_MeasurementNrList, m_MeasurementNrListFlag);
        h->add_property("sensorMeasurementList", &this->m_SensorMeasurementList, m_SensorMeasurementListFlag);
        h->add_property("reportingTriggerList", &this->m_ReportingTriggerList, m_ReportingTriggerListFlag);
        h->add_property("reportInterval", &this->m_ReportInterval, m_ReportIntervalFlag);
        h->add_property("reportIntervalNr", &this->m_ReportIntervalNr, m_ReportIntervalNrFlag);
        h->add_property("reportAmount", &this->m_ReportAmount, m_ReportAmountFlag);
        h->add_property("eventThresholdRsrp", &this->m_EventThresholdRsrp, m_EventThresholdRsrpFlag);
        h->add_property("eventThresholdRsrpNr", &this->m_EventThresholdRsrpNr, m_EventThresholdRsrpNrFlag);
        h->add_property("eventThresholdRsrq", &this->m_EventThresholdRsrq, m_EventThresholdRsrqFlag);
        h->add_property("eventThresholdRsrqNr", &this->m_EventThresholdRsrqNr, m_EventThresholdRsrqNrFlag);
        h->add_property("eventList", &this->m_EventList, m_EventListFlag);
        h->add_property("loggingInterval", &this->m_LoggingInterval, m_LoggingIntervalFlag);
        h->add_property("loggingIntervalNr", &this->m_LoggingIntervalNr, m_LoggingIntervalNrFlag);
        h->add_property("loggingDuration", &this->m_LoggingDuration, m_LoggingDurationFlag);
        h->add_property("loggingDurationNr", &this->m_LoggingDurationNr, m_LoggingDurationNrFlag);
        h->add_property("positioningMethod", &this->m_PositioningMethod, m_PositioningMethodFlag);
        h->add_property("collectionPeriodRmmLte", &this->m_CollectionPeriodRmmLte, m_CollectionPeriodRmmLteFlag);
        h->add_property("collectionPeriodRmmNr", &this->m_CollectionPeriodRmmNr, m_CollectionPeriodRmmNrFlag);
        h->add_property("measurementPeriodLte", &this->m_MeasurementPeriodLte, m_MeasurementPeriodLteFlag);
        h->add_property("mdtAllowedPlmnIdList", &this->m_MdtAllowedPlmnIdList, m_MdtAllowedPlmnIdListFlag);
        h->add_property("mbsfnAreaList", &this->m_MbsfnAreaList, m_MbsfnAreaListFlag);
        h->add_property("interFreqTargetList", &this->m_InterFreqTargetList, m_InterFreqTargetListFlag);



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

    friend std::ostream& operator<<(std::ostream& o, const MdtConfiguration& obj)
    {
        
        o << "JobType : " << obj.m_JobType << std::endl;

        o << "ReportType : " << obj.m_ReportType << std::endl;

        o << "AreaScope : " << obj.m_AreaScope << std::endl;
        o<< convert2string(std::string("MeasurementLteList"), obj.m_MeasurementLteList) <<std::endl;
               o<< convert2string(std::string("MeasurementNrList"), obj.m_MeasurementNrList) <<std::endl;
               o<< convert2string(std::string("SensorMeasurementList"), obj.m_SensorMeasurementList) <<std::endl;
               o<< convert2string(std::string("ReportingTriggerList"), obj.m_ReportingTriggerList) <<std::endl;
       
        o << "ReportInterval : " << obj.m_ReportInterval << std::endl;

        o << "ReportIntervalNr : " << obj.m_ReportIntervalNr << std::endl;

        o << "ReportAmount : " << obj.m_ReportAmount << std::endl;

        o << "EventThresholdRsrp : " << obj.m_EventThresholdRsrp << std::endl;

        o << "EventThresholdRsrpNr : " << obj.m_EventThresholdRsrpNr << std::endl;

        o << "EventThresholdRsrq : " << obj.m_EventThresholdRsrq << std::endl;

        o << "EventThresholdRsrqNr : " << obj.m_EventThresholdRsrqNr << std::endl;
        o<< convert2string(std::string("EventList"), obj.m_EventList) <<std::endl;
       
        o << "LoggingInterval : " << obj.m_LoggingInterval << std::endl;

        o << "LoggingIntervalNr : " << obj.m_LoggingIntervalNr << std::endl;

        o << "LoggingDuration : " << obj.m_LoggingDuration << std::endl;

        o << "LoggingDurationNr : " << obj.m_LoggingDurationNr << std::endl;

        o << "PositioningMethod : " << obj.m_PositioningMethod << std::endl;

        o << "CollectionPeriodRmmLte : " << obj.m_CollectionPeriodRmmLte << std::endl;

        o << "CollectionPeriodRmmNr : " << obj.m_CollectionPeriodRmmNr << std::endl;

        o << "MeasurementPeriodLte : " << obj.m_MeasurementPeriodLte << std::endl;
        o<< convert2string(std::string("MdtAllowedPlmnIdList"), obj.m_MdtAllowedPlmnIdList) <<std::endl;
               o<< convert2string(std::string("MbsfnAreaList"), obj.m_MbsfnAreaList) <<std::endl;
               o<< convert2string(std::string("InterFreqTargetList"), obj.m_InterFreqTargetList) <<std::endl;
       
     
        return o;
    }

    /////////////////////////////////////////////
    /// MdtConfiguration members vars : JobType ReportType AreaScope MeasurementLteList MeasurementNrList SensorMeasurementList ReportingTriggerList ReportInterval ReportIntervalNr ReportAmount EventThresholdRsrp EventThresholdRsrpNr EventThresholdRsrq EventThresholdRsrqNr EventList LoggingInterval LoggingIntervalNr LoggingDuration LoggingDurationNr PositioningMethod CollectionPeriodRmmLte CollectionPeriodRmmNr MeasurementPeriodLte MdtAllowedPlmnIdList MbsfnAreaList InterFreqTargetList 

    JobType  getJobType() const
    {
        return m_JobType;
    }
    void  setJobType(JobType const& value)
    {
        m_JobType = value;
    }

ReportTypeMdt  getReportType() const
    {
        return m_ReportType;
    }
    void  setReportType(ReportTypeMdt const& value)
    {
        m_ReportType = value;
    }

AreaScope  getAreaScope() const
    {
        return m_AreaScope;
    }
    void  setAreaScope(AreaScope const& value)
    {
        m_AreaScope = value;
    }

std::vector<MeasurementLteForMdt>&  getMeasurementLteList()
    {
        return m_MeasurementLteList;
    }
    void  setMeasurementLteList(std::vector<MeasurementLteForMdt> const& value)
    {
        m_MeasurementLteList = value;
    }

std::vector<MeasurementNrForMdt>&  getMeasurementNrList()
    {
        return m_MeasurementNrList;
    }
    void  setMeasurementNrList(std::vector<MeasurementNrForMdt> const& value)
    {
        m_MeasurementNrList = value;
    }

std::vector<SensorMeasurement>&  getSensorMeasurementList()
    {
        return m_SensorMeasurementList;
    }
    void  setSensorMeasurementList(std::vector<SensorMeasurement> const& value)
    {
        m_SensorMeasurementList = value;
    }

std::vector<ReportingTrigger>&  getReportingTriggerList()
    {
        return m_ReportingTriggerList;
    }
    void  setReportingTriggerList(std::vector<ReportingTrigger> const& value)
    {
        m_ReportingTriggerList = value;
    }

ReportIntervalMdt  getReportInterval() const
    {
        return m_ReportInterval;
    }
    void  setReportInterval(ReportIntervalMdt const& value)
    {
        m_ReportInterval = value;
    }

ReportIntervalNrMdt  getReportIntervalNr() const
    {
        return m_ReportIntervalNr;
    }
    void  setReportIntervalNr(ReportIntervalNrMdt const& value)
    {
        m_ReportIntervalNr = value;
    }

ReportAmountMdt  getReportAmount() const
    {
        return m_ReportAmount;
    }
    void  setReportAmount(ReportAmountMdt const& value)
    {
        m_ReportAmount = value;
    }

int32_t  getEventThresholdRsrp() const
    {
        return m_EventThresholdRsrp;
    }
    void  setEventThresholdRsrp(int32_t const value)
    {
        m_EventThresholdRsrp = value;
    }

int32_t  getEventThresholdRsrpNr() const
    {
        return m_EventThresholdRsrpNr;
    }
    void  setEventThresholdRsrpNr(int32_t const value)
    {
        m_EventThresholdRsrpNr = value;
    }

int32_t  getEventThresholdRsrq() const
    {
        return m_EventThresholdRsrq;
    }
    void  setEventThresholdRsrq(int32_t const value)
    {
        m_EventThresholdRsrq = value;
    }

int32_t  getEventThresholdRsrqNr() const
    {
        return m_EventThresholdRsrqNr;
    }
    void  setEventThresholdRsrqNr(int32_t const value)
    {
        m_EventThresholdRsrqNr = value;
    }

std::vector<EventForMdt>&  getEventList()
    {
        return m_EventList;
    }
    void  setEventList(std::vector<EventForMdt> const& value)
    {
        m_EventList = value;
    }

LoggingIntervalMdt  getLoggingInterval() const
    {
        return m_LoggingInterval;
    }
    void  setLoggingInterval(LoggingIntervalMdt const& value)
    {
        m_LoggingInterval = value;
    }

LoggingIntervalNrMdt  getLoggingIntervalNr() const
    {
        return m_LoggingIntervalNr;
    }
    void  setLoggingIntervalNr(LoggingIntervalNrMdt const& value)
    {
        m_LoggingIntervalNr = value;
    }

LoggingDurationMdt  getLoggingDuration() const
    {
        return m_LoggingDuration;
    }
    void  setLoggingDuration(LoggingDurationMdt const& value)
    {
        m_LoggingDuration = value;
    }

LoggingDurationNrMdt  getLoggingDurationNr() const
    {
        return m_LoggingDurationNr;
    }
    void  setLoggingDurationNr(LoggingDurationNrMdt const& value)
    {
        m_LoggingDurationNr = value;
    }

PositioningMethodMdt  getPositioningMethod() const
    {
        return m_PositioningMethod;
    }
    void  setPositioningMethod(PositioningMethodMdt const& value)
    {
        m_PositioningMethod = value;
    }

CollectionPeriodRmmLteMdt  getCollectionPeriodRmmLte() const
    {
        return m_CollectionPeriodRmmLte;
    }
    void  setCollectionPeriodRmmLte(CollectionPeriodRmmLteMdt const& value)
    {
        m_CollectionPeriodRmmLte = value;
    }

CollectionPeriodRmmNrMdt  getCollectionPeriodRmmNr() const
    {
        return m_CollectionPeriodRmmNr;
    }
    void  setCollectionPeriodRmmNr(CollectionPeriodRmmNrMdt const& value)
    {
        m_CollectionPeriodRmmNr = value;
    }

MeasurementPeriodLteMdt  getMeasurementPeriodLte() const
    {
        return m_MeasurementPeriodLte;
    }
    void  setMeasurementPeriodLte(MeasurementPeriodLteMdt const& value)
    {
        m_MeasurementPeriodLte = value;
    }

std::vector<PlmnId>&  getMdtAllowedPlmnIdList()
    {
        return m_MdtAllowedPlmnIdList;
    }
    void  setMdtAllowedPlmnIdList(std::vector<PlmnId> const& value)
    {
        m_MdtAllowedPlmnIdList = value;
    }

std::vector<MbsfnArea>&  getMbsfnAreaList()
    {
        return m_MbsfnAreaList;
    }
    void  setMbsfnAreaList(std::vector<MbsfnArea> const& value)
    {
        m_MbsfnAreaList = value;
    }

std::vector<InterFreqTargetInfo>&  getInterFreqTargetList()
    {
        return m_InterFreqTargetList;
    }
    void  setInterFreqTargetList(std::vector<InterFreqTargetInfo> const& value)
    {
        m_InterFreqTargetList = value;
    }



    
public:
    JobType m_JobType;
    
    unsigned m_JobTypeFlag;
    ReportTypeMdt m_ReportType;
    
    unsigned m_ReportTypeFlag;
    AreaScope m_AreaScope;
    
    unsigned m_AreaScopeFlag;
    std::vector<MeasurementLteForMdt> m_MeasurementLteList;
    
    unsigned m_MeasurementLteListFlag;
    std::vector<MeasurementNrForMdt> m_MeasurementNrList;
    
    unsigned m_MeasurementNrListFlag;
    std::vector<SensorMeasurement> m_SensorMeasurementList;
    
    unsigned m_SensorMeasurementListFlag;
    std::vector<ReportingTrigger> m_ReportingTriggerList;
    
    unsigned m_ReportingTriggerListFlag;
    ReportIntervalMdt m_ReportInterval;
    
    unsigned m_ReportIntervalFlag;
    ReportIntervalNrMdt m_ReportIntervalNr;
    
    unsigned m_ReportIntervalNrFlag;
    ReportAmountMdt m_ReportAmount;
    
    unsigned m_ReportAmountFlag;
    int32_t m_EventThresholdRsrp;
    
    unsigned m_EventThresholdRsrpFlag;
    int32_t m_EventThresholdRsrpNr;
    
    unsigned m_EventThresholdRsrpNrFlag;
    int32_t m_EventThresholdRsrq;
    
    unsigned m_EventThresholdRsrqFlag;
    int32_t m_EventThresholdRsrqNr;
    
    unsigned m_EventThresholdRsrqNrFlag;
    std::vector<EventForMdt> m_EventList;
    
    unsigned m_EventListFlag;
    LoggingIntervalMdt m_LoggingInterval;
    
    unsigned m_LoggingIntervalFlag;
    LoggingIntervalNrMdt m_LoggingIntervalNr;
    
    unsigned m_LoggingIntervalNrFlag;
    LoggingDurationMdt m_LoggingDuration;
    
    unsigned m_LoggingDurationFlag;
    LoggingDurationNrMdt m_LoggingDurationNr;
    
    unsigned m_LoggingDurationNrFlag;
    PositioningMethodMdt m_PositioningMethod;
    
    unsigned m_PositioningMethodFlag;
    CollectionPeriodRmmLteMdt m_CollectionPeriodRmmLte;
    
    unsigned m_CollectionPeriodRmmLteFlag;
    CollectionPeriodRmmNrMdt m_CollectionPeriodRmmNr;
    
    unsigned m_CollectionPeriodRmmNrFlag;
    MeasurementPeriodLteMdt m_MeasurementPeriodLte;
    
    unsigned m_MeasurementPeriodLteFlag;
    std::vector<PlmnId> m_MdtAllowedPlmnIdList;
    
    unsigned m_MdtAllowedPlmnIdListFlag;
    std::vector<MbsfnArea> m_MbsfnAreaList;
    
    unsigned m_MbsfnAreaListFlag;
    std::vector<InterFreqTargetInfo> m_InterFreqTargetList;
    
    unsigned m_InterFreqTargetListFlag;
  
};
}
}
}
}

#endif /* MdtConfiguration_H_ */
