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
 * GroupIdentifiers.h
 *
 *
 * if you need to add new attribure, please contact max.cong@nokia-sbell.com to
 * generate new code.
 */

#ifndef GroupIdentifiers_H_
#define GroupIdentifiers_H_

#include "CSB_JsonParser.h"
#include "UeId.h"
#include <string>
#include <type_traits>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class GroupIdentifiers : public jsonParser::jsonParser<GroupIdentifiers> {
public:
  explicit GroupIdentifiers() {
    // constructor
    m_ExtGroupId = "";

    m_ExtGroupIdFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_ExtGroupIdOutFlag.reset(new unsigned);
    *m_ExtGroupIdOutFlag.get() = 0;
    m_IntGroupId = "";

    m_IntGroupIdFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_IntGroupIdOutFlag.reset(new unsigned);
    *m_IntGroupIdOutFlag.get() = 0;

    m_UeIdListFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_UeIdListOutFlag.reset(new unsigned);
    *m_UeIdListOutFlag.get() = 0;
  };
  virtual ~GroupIdentifiers(){};

  void staticjson_init(staticjson::ObjectHandler *h) {

    // static json settings members vars : ExtGroupId IntGroupId UeIdList
    h->add_optional_property("extGroupId", &this->m_ExtGroupId,
                             m_ExtGroupIdFlag, m_ExtGroupIdOutFlag);
    h->add_optional_property("intGroupId", &this->m_IntGroupId,
                             m_IntGroupIdFlag, m_IntGroupIdOutFlag);
    h->add_optional_property("ueIdList", &this->m_UeIdList, m_UeIdListFlag,
                             m_UeIdListOutFlag);

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
                                  const GroupIdentifiers &obj) {

    o << "ExtGroupId, optional flag is : " << *m_ExtGroupIdOutFlag
      << ", content is : " << obj.m_ExtGroupId << std::endl;

    o << "IntGroupId, optional flag is : " << *m_IntGroupIdOutFlag
      << ", content is : " << obj.m_IntGroupId << std::endl;
    o << "UeIdList, optional flag is : " << *m_UeIdListOutFlag << std::endl;
    o << convert2string(std::string("UeIdList"), obj.m_UeIdList) << std::endl;

    return o;
  }

  /////////////////////////////////////////////
  /// GroupIdentifiers members vars : ExtGroupId IntGroupId UeIdList

  std::string getExtGroupId() const { return m_ExtGroupId; }
  void setExtGroupId(std::string const &value) { m_ExtGroupId = value; }

  std::string getIntGroupId() const { return m_IntGroupId; }
  void setIntGroupId(std::string const &value) { m_IntGroupId = value; }

  std::vector<UeId> &getUeIdList() { return m_UeIdList; }
  void setUeIdList(std::vector<UeId> const &value) { m_UeIdList = value; }

public:
  std::string m_ExtGroupId;

  unsigned m_ExtGroupIdFlag;
  shared_ptr<unsigned> m_ExtGroupIdOutFlag;
  std::string m_IntGroupId;

  unsigned m_IntGroupIdFlag;
  shared_ptr<unsigned> m_IntGroupIdOutFlag;
  std::vector<UeId> m_UeIdList;

  unsigned m_UeIdListFlag;
  shared_ptr<unsigned> m_UeIdListOutFlag;
};
} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* GroupIdentifiers_H_ */
