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
 * UeContextInSmsfData.h
 *
 *
 * if you need to add new attribure, please contact max.cong@nokia-sbell.com to
 * generate new code.
 */

#ifndef UeContextInSmsfData_H_
#define UeContextInSmsfData_H_

#include "CSB_JsonParser.h"
#include "SmsfInfo.h"
#include <type_traits>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class UeContextInSmsfData : public jsonParser::jsonParser<UeContextInSmsfData> {
public:
  explicit UeContextInSmsfData() {
    // constructor

    m_SmsfInfo3GppAccessFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_SmsfInfo3GppAccessOutFlag.reset(new unsigned);
    *m_SmsfInfo3GppAccessOutFlag.get() = 0;

    m_SmsfInfoNon3GppAccessFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_SmsfInfoNon3GppAccessOutFlag.reset(new unsigned);
    *m_SmsfInfoNon3GppAccessOutFlag.get() = 0;
  };
  virtual ~UeContextInSmsfData(){};

  void staticjson_init(staticjson::ObjectHandler *h) {

    // static json settings members vars : SmsfInfo3GppAccess
    // SmsfInfoNon3GppAccess
    h->add_optional_property("smsfInfo3GppAccess", &this->m_SmsfInfo3GppAccess,
                             m_SmsfInfo3GppAccessFlag,
                             m_SmsfInfo3GppAccessOutFlag);
    h->add_optional_property(
        "smsfInfoNon3GppAccess", &this->m_SmsfInfoNon3GppAccess,
        m_SmsfInfoNon3GppAccessFlag, m_SmsfInfoNon3GppAccessOutFlag);

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

  friend std::ostream &operator<<(std::ostream &o,
                                  const UeContextInSmsfData &obj) {

    o << "SmsfInfo3GppAccess, optional flag is : "
      << *m_SmsfInfo3GppAccessOutFlag
      << ", content is : " << obj.m_SmsfInfo3GppAccess << std::endl;

    o << "SmsfInfoNon3GppAccess, optional flag is : "
      << *m_SmsfInfoNon3GppAccessOutFlag
      << ", content is : " << obj.m_SmsfInfoNon3GppAccess << std::endl;

    return o;
  }

  /////////////////////////////////////////////
  /// UeContextInSmsfData members vars : SmsfInfo3GppAccess
  /// SmsfInfoNon3GppAccess

  SmsfInfo getSmsfInfo3GppAccess() const { return m_SmsfInfo3GppAccess; }
  void setSmsfInfo3GppAccess(SmsfInfo const &value) {
    m_SmsfInfo3GppAccess = value;
  }

  SmsfInfo getSmsfInfoNon3GppAccess() const { return m_SmsfInfoNon3GppAccess; }
  void setSmsfInfoNon3GppAccess(SmsfInfo const &value) {
    m_SmsfInfoNon3GppAccess = value;
  }

public:
  SmsfInfo m_SmsfInfo3GppAccess;

  unsigned m_SmsfInfo3GppAccessFlag;
  shared_ptr<unsigned> m_SmsfInfo3GppAccessOutFlag;
  SmsfInfo m_SmsfInfoNon3GppAccess;

  unsigned m_SmsfInfoNon3GppAccessFlag;
  shared_ptr<unsigned> m_SmsfInfoNon3GppAccessOutFlag;
};
} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UeContextInSmsfData_H_ */
