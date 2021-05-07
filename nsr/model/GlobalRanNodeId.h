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
 * GlobalRanNodeId.h
 *
 *
 * if you need to add new attribure, please contact max.cong@nokia-sbell.com to
 * generate new code.
 */

#ifndef GlobalRanNodeId_H_
#define GlobalRanNodeId_H_

#include "CSB_JsonParser.h"
#include "GNbId.h"
#include "PlmnId.h"
#include <string>
#include <type_traits>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class GlobalRanNodeId : public jsonParser::jsonParser<GlobalRanNodeId> {
public:
  explicit GlobalRanNodeId() {
    // constructor

    m_PlmnIdFlag = staticjson::Flags::Default;
    m_PlmnIdOutFlag.reset(new unsigned);
    *m_PlmnIdOutFlag.get() = 0;
    m_N3IwfId = "";

    m_N3IwfIdFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_N3IwfIdOutFlag.reset(new unsigned);
    *m_N3IwfIdOutFlag.get() = 0;

    m_GNbIdFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_GNbIdOutFlag.reset(new unsigned);
    *m_GNbIdOutFlag.get() = 0;
    m_NgeNbId = "";

    m_NgeNbIdFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_NgeNbIdOutFlag.reset(new unsigned);
    *m_NgeNbIdOutFlag.get() = 0;
    m_WagfId = "";

    m_WagfIdFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_WagfIdOutFlag.reset(new unsigned);
    *m_WagfIdOutFlag.get() = 0;
    m_TngfId = "";

    m_TngfIdFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_TngfIdOutFlag.reset(new unsigned);
    *m_TngfIdOutFlag.get() = 0;
    m_Nid = "";

    m_NidFlag = (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_NidOutFlag.reset(new unsigned);
    *m_NidOutFlag.get() = 0;
    m_ENbId = "";

    m_ENbIdFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_ENbIdOutFlag.reset(new unsigned);
    *m_ENbIdOutFlag.get() = 0;
  };
  virtual ~GlobalRanNodeId(){};

  void staticjson_init(staticjson::ObjectHandler *h) {

    // static json settings members vars : PlmnId N3IwfId GNbId NgeNbId WagfId
    // TngfId Nid ENbId
    h->add_property("plmnId", &this->m_PlmnId, m_PlmnIdFlag);
    h->add_optional_property("n3IwfId", &this->m_N3IwfId, m_N3IwfIdFlag,
                             m_N3IwfIdOutFlag);
    h->add_optional_property("gNbId", &this->m_GNbId, m_GNbIdFlag,
                             m_GNbIdOutFlag);
    h->add_optional_property("ngeNbId", &this->m_NgeNbId, m_NgeNbIdFlag,
                             m_NgeNbIdOutFlag);
    h->add_optional_property("wagfId", &this->m_WagfId, m_WagfIdFlag,
                             m_WagfIdOutFlag);
    h->add_optional_property("tngfId", &this->m_TngfId, m_TngfIdFlag,
                             m_TngfIdOutFlag);
    h->add_optional_property("nid", &this->m_Nid, m_NidFlag, m_NidOutFlag);
    h->add_optional_property("eNbId", &this->m_ENbId, m_ENbIdFlag,
                             m_ENbIdOutFlag);

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

  friend std::ostream &operator<<(std::ostream &o, const GlobalRanNodeId &obj) {

    o << "PlmnId : " << obj.m_PlmnId << std::endl;

    o << "N3IwfId, optional flag is : " << *m_N3IwfIdOutFlag
      << ", content is : " << obj.m_N3IwfId << std::endl;

    o << "GNbId, optional flag is : " << *m_GNbIdOutFlag
      << ", content is : " << obj.m_GNbId << std::endl;

    o << "NgeNbId, optional flag is : " << *m_NgeNbIdOutFlag
      << ", content is : " << obj.m_NgeNbId << std::endl;

    o << "WagfId, optional flag is : " << *m_WagfIdOutFlag
      << ", content is : " << obj.m_WagfId << std::endl;

    o << "TngfId, optional flag is : " << *m_TngfIdOutFlag
      << ", content is : " << obj.m_TngfId << std::endl;

    o << "Nid, optional flag is : " << *m_NidOutFlag
      << ", content is : " << obj.m_Nid << std::endl;

    o << "ENbId, optional flag is : " << *m_ENbIdOutFlag
      << ", content is : " << obj.m_ENbId << std::endl;

    return o;
  }

  /////////////////////////////////////////////
  /// GlobalRanNodeId members vars : PlmnId N3IwfId GNbId NgeNbId WagfId TngfId
  /// Nid ENbId

  PlmnId getPlmnId() const { return m_PlmnId; }
  void setPlmnId(PlmnId const &value) { m_PlmnId = value; }

  std::string getN3IwfId() const { return m_N3IwfId; }
  void setN3IwfId(std::string const &value) { m_N3IwfId = value; }

  GNbId getGNbId() const { return m_GNbId; }
  void setGNbId(GNbId const &value) { m_GNbId = value; }

  std::string getNgeNbId() const { return m_NgeNbId; }
  void setNgeNbId(std::string const &value) { m_NgeNbId = value; }

  std::string getWagfId() const { return m_WagfId; }
  void setWagfId(std::string const &value) { m_WagfId = value; }

  std::string getTngfId() const { return m_TngfId; }
  void setTngfId(std::string const &value) { m_TngfId = value; }

  std::string getNid() const { return m_Nid; }
  void setNid(std::string const &value) { m_Nid = value; }

  std::string getENbId() const { return m_ENbId; }
  void setENbId(std::string const &value) { m_ENbId = value; }

public:
  PlmnId m_PlmnId;

  unsigned m_PlmnIdFlag;
  shared_ptr<unsigned> m_PlmnIdOutFlag;
  std::string m_N3IwfId;

  unsigned m_N3IwfIdFlag;
  shared_ptr<unsigned> m_N3IwfIdOutFlag;
  GNbId m_GNbId;

  unsigned m_GNbIdFlag;
  shared_ptr<unsigned> m_GNbIdOutFlag;
  std::string m_NgeNbId;

  unsigned m_NgeNbIdFlag;
  shared_ptr<unsigned> m_NgeNbIdOutFlag;
  std::string m_WagfId;

  unsigned m_WagfIdFlag;
  shared_ptr<unsigned> m_WagfIdOutFlag;
  std::string m_TngfId;

  unsigned m_TngfIdFlag;
  shared_ptr<unsigned> m_TngfIdOutFlag;
  std::string m_Nid;

  unsigned m_NidFlag;
  shared_ptr<unsigned> m_NidOutFlag;
  std::string m_ENbId;

  unsigned m_ENbIdFlag;
  shared_ptr<unsigned> m_ENbIdOutFlag;
};
} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* GlobalRanNodeId_H_ */
