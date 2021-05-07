/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2020, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SorInfo.h
 *
 *
 * if you need to add new attribure, please contact max.cong@nokia-sbell.com to
 * generate new code.
 */

#ifndef SorInfo_H_
#define SorInfo_H_

#include "CSB_JsonParser.h"
#include "SteeringContainer.h"
#include <string>
#include <type_traits>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class SorInfo : public jsonParser::jsonParser<SorInfo> {
public:
  explicit SorInfo() {
    // constructor

    m_SteeringContainerFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_SteeringContainerOutFlag.reset(new unsigned);
    *m_SteeringContainerOutFlag.get() = 0;
    m_AckInd = false;

    m_AckIndFlag = staticjson::Flags::Default;
    m_AckIndOutFlag.reset(new unsigned);
    *m_AckIndOutFlag.get() = 0;
    m_SorMacIausf = "";

    m_SorMacIausfFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_SorMacIausfOutFlag.reset(new unsigned);
    *m_SorMacIausfOutFlag.get() = 0;
    m_Countersor = "";

    m_CountersorFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_CountersorOutFlag.reset(new unsigned);
    *m_CountersorOutFlag.get() = 0;
    m_ProvisioningTime = "";

    m_ProvisioningTimeFlag = staticjson::Flags::Default;
    m_ProvisioningTimeOutFlag.reset(new unsigned);
    *m_ProvisioningTimeOutFlag.get() = 0;
  };
  virtual ~SorInfo(){};

  void staticjson_init(staticjson::ObjectHandler *h) {

    // static json settings members vars : SteeringContainer AckInd SorMacIausf
    // Countersor ProvisioningTime
    h->add_optional_property("steeringContainer", &this->m_SteeringContainer,
                             m_SteeringContainerFlag,
                             m_SteeringContainerOutFlag);
    h->add_property("ackInd", &this->m_AckInd, m_AckIndFlag);
    h->add_optional_property("sorMacIausf", &this->m_SorMacIausf,
                             m_SorMacIausfFlag, m_SorMacIausfOutFlag);
    h->add_optional_property("countersor", &this->m_Countersor,
                             m_CountersorFlag, m_CountersorOutFlag);
    h->add_property("provisioningTime", &this->m_ProvisioningTime,
                    m_ProvisioningTimeFlag);

    h->set_flags(staticjson::Flags::Default |
                 staticjson::Flags::DisallowUnknownKey);
  }
  template <typename T>
  static std::string convert2string(std::string name,
                                    const std::vector<T> &obj) {
    std::stringstream o;
    o << "name : ";
    for (auto it : obj) {
      o << it;
    }
    o << std::endl;

    return o.str();
  }

  template <typename T, typename T1>
  static std::string convert2string(std::string name,
                                    const std::map<T, T1> &obj) {
    std::stringstream out;
    out << "name : ";
    for (auto it : obj) {
      out << it.first << ":" << it.second << " ";
    }
    out << std::endl;
    return out.str();
  }

  friend std::ostream &operator<<(std::ostream &o, const SorInfo &obj) {

    o << "SteeringContainer, optional flag is : " << *m_SteeringContainerOutFlag
      << ", content is : " << obj.m_SteeringContainer << std::endl;

    o << "AckInd : " << obj.m_AckInd << std::endl;

    o << "SorMacIausf, optional flag is : " << *m_SorMacIausfOutFlag
      << ", content is : " << obj.m_SorMacIausf << std::endl;

    o << "Countersor, optional flag is : " << *m_CountersorOutFlag
      << ", content is : " << obj.m_Countersor << std::endl;

    o << "ProvisioningTime : " << obj.m_ProvisioningTime << std::endl;

    return o;
  }

  /////////////////////////////////////////////
  /// SorInfo members vars : SteeringContainer AckInd SorMacIausf Countersor
  /// ProvisioningTime

  SteeringContainer getSteeringContainer() const { return m_SteeringContainer; }
  void setSteeringContainer(SteeringContainer const &value) {
    m_SteeringContainer = value;
  }

  bool isAckInd() const { return m_AckInd; }
  void setAckInd(bool const value) { m_AckInd = value; }

  std::string getSorMacIausf() const { return m_SorMacIausf; }
  void setSorMacIausf(std::string const &value) { m_SorMacIausf = value; }

  std::string getCountersor() const { return m_Countersor; }
  void setCountersor(std::string const &value) { m_Countersor = value; }

  std::string getProvisioningTime() const { return m_ProvisioningTime; }
  void setProvisioningTime(std::string const &value) {
    m_ProvisioningTime = value;
  }

public:
  SteeringContainer m_SteeringContainer;

  unsigned m_SteeringContainerFlag;
  shared_ptr<unsigned> m_SteeringContainerOutFlag;
  bool m_AckInd;

  unsigned m_AckIndFlag;
  shared_ptr<unsigned> m_AckIndOutFlag;
  std::string m_SorMacIausf;

  unsigned m_SorMacIausfFlag;
  shared_ptr<unsigned> m_SorMacIausfOutFlag;
  std::string m_Countersor;

  unsigned m_CountersorFlag;
  shared_ptr<unsigned> m_CountersorOutFlag;
  std::string m_ProvisioningTime;

  unsigned m_ProvisioningTimeFlag;
  shared_ptr<unsigned> m_ProvisioningTimeOutFlag;
};
} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SorInfo_H_ */
