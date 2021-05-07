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
 * EcRestrictionDataWb.h
 *
 *
 * if you need to add new attribure, please contact max.cong@nokia-sbell.com to
 * generate new code.
 */

#ifndef EcRestrictionDataWb_H_
#define EcRestrictionDataWb_H_

#include "CSB_JsonParser.h"
#include <type_traits>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class EcRestrictionDataWb : public jsonParser::jsonParser<EcRestrictionDataWb> {
public:
  explicit EcRestrictionDataWb() {
    // constructor
    m_EcModeARestricted = false;

    m_EcModeARestrictedFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_EcModeARestrictedOutFlag.reset(new unsigned);
    *m_EcModeARestrictedOutFlag.get() = 0;
    m_EcModeBRestricted = false;

    m_EcModeBRestrictedFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_EcModeBRestrictedOutFlag.reset(new unsigned);
    *m_EcModeBRestrictedOutFlag.get() = 0;
  };
  virtual ~EcRestrictionDataWb(){};

  void staticjson_init(staticjson::ObjectHandler *h) {

    // static json settings members vars : EcModeARestricted EcModeBRestricted
    h->add_optional_property("ecModeARestricted", &this->m_EcModeARestricted,
                             m_EcModeARestrictedFlag,
                             m_EcModeARestrictedOutFlag);
    h->add_optional_property("ecModeBRestricted", &this->m_EcModeBRestricted,
                             m_EcModeBRestrictedFlag,
                             m_EcModeBRestrictedOutFlag);

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
                                  const EcRestrictionDataWb &obj) {

    o << "EcModeARestricted, optional flag is : " << *m_EcModeARestrictedOutFlag
      << ", content is : " << obj.m_EcModeARestricted << std::endl;

    o << "EcModeBRestricted, optional flag is : " << *m_EcModeBRestrictedOutFlag
      << ", content is : " << obj.m_EcModeBRestricted << std::endl;

    return o;
  }

  /////////////////////////////////////////////
  /// EcRestrictionDataWb members vars : EcModeARestricted EcModeBRestricted

  bool isEcModeARestricted() const { return m_EcModeARestricted; }
  void setEcModeARestricted(bool const value) { m_EcModeARestricted = value; }

  bool isEcModeBRestricted() const { return m_EcModeBRestricted; }
  void setEcModeBRestricted(bool const value) { m_EcModeBRestricted = value; }

public:
  bool m_EcModeARestricted;

  unsigned m_EcModeARestrictedFlag;
  shared_ptr<unsigned> m_EcModeARestrictedOutFlag;
  bool m_EcModeBRestricted;

  unsigned m_EcModeBRestrictedFlag;
  shared_ptr<unsigned> m_EcModeBRestrictedOutFlag;
};
} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EcRestrictionDataWb_H_ */
