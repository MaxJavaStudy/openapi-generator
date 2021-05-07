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
 * EpsIwkPgw.h
 *
 *
 * if you need to add new attribure, please contact max.cong@nokia-sbell.com to
 * generate new code.
 */

#ifndef EpsIwkPgw_H_
#define EpsIwkPgw_H_

#include "CSB_JsonParser.h"
#include <string>
#include <type_traits>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class EpsIwkPgw : public jsonParser::jsonParser<EpsIwkPgw> {
public:
  explicit EpsIwkPgw() {
    // constructor
    m_PgwFqdn = "";

    m_PgwFqdnFlag = staticjson::Flags::Default;
    m_PgwFqdnOutFlag.reset(new unsigned);
    *m_PgwFqdnOutFlag.get() = 0;
    m_SmfInstanceId = "";

    m_SmfInstanceIdFlag = staticjson::Flags::Default;
    m_SmfInstanceIdOutFlag.reset(new unsigned);
    *m_SmfInstanceIdOutFlag.get() = 0;
  };
  virtual ~EpsIwkPgw(){};

  void staticjson_init(staticjson::ObjectHandler *h) {

    // static json settings members vars : PgwFqdn SmfInstanceId
    h->add_property("pgwFqdn", &this->m_PgwFqdn, m_PgwFqdnFlag);
    h->add_property("smfInstanceId", &this->m_SmfInstanceId,
                    m_SmfInstanceIdFlag);

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

  friend std::ostream &operator<<(std::ostream &o, const EpsIwkPgw &obj) {

    o << "PgwFqdn : " << obj.m_PgwFqdn << std::endl;

    o << "SmfInstanceId : " << obj.m_SmfInstanceId << std::endl;

    return o;
  }

  /////////////////////////////////////////////
  /// EpsIwkPgw members vars : PgwFqdn SmfInstanceId

  std::string getPgwFqdn() const { return m_PgwFqdn; }
  void setPgwFqdn(std::string const &value) { m_PgwFqdn = value; }

  std::string getSmfInstanceId() const { return m_SmfInstanceId; }
  void setSmfInstanceId(std::string const &value) { m_SmfInstanceId = value; }

public:
  std::string m_PgwFqdn;

  unsigned m_PgwFqdnFlag;
  shared_ptr<unsigned> m_PgwFqdnOutFlag;
  std::string m_SmfInstanceId;

  unsigned m_SmfInstanceIdFlag;
  shared_ptr<unsigned> m_SmfInstanceIdOutFlag;
};
} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EpsIwkPgw_H_ */
