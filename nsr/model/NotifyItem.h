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
 * NotifyItem.h
 *
 *
 * if you need to add new attribure, please contact max.cong@nokia-sbell.com to
 * generate new code.
 */

#ifndef NotifyItem_H_
#define NotifyItem_H_

#include "CSB_JsonParser.h"
#include "ChangeItem.h"
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
class NotifyItem : public jsonParser::jsonParser<NotifyItem> {
public:
  explicit NotifyItem() {
    // constructor
    m_ResourceId = "";

    m_ResourceIdFlag = staticjson::Flags::Default;
    m_ResourceIdOutFlag.reset(new unsigned);
    *m_ResourceIdOutFlag.get() = 0;

    m_ChangesFlag = staticjson::Flags::Default;
    m_ChangesOutFlag.reset(new unsigned);
    *m_ChangesOutFlag.get() = 0;
  };
  virtual ~NotifyItem(){};

  void staticjson_init(staticjson::ObjectHandler *h) {

    // static json settings members vars : ResourceId Changes
    h->add_property("resourceId", &this->m_ResourceId, m_ResourceIdFlag);
    h->add_property("changes", &this->m_Changes, m_ChangesFlag);

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

  friend std::ostream &operator<<(std::ostream &o, const NotifyItem &obj) {

    o << "ResourceId : " << obj.m_ResourceId << std::endl;
    o << convert2string(std::string("Changes"), obj.m_Changes) << std::endl;

    return o;
  }

  /////////////////////////////////////////////
  /// NotifyItem members vars : ResourceId Changes

  std::string getResourceId() const { return m_ResourceId; }
  void setResourceId(std::string const &value) { m_ResourceId = value; }

  std::vector<ChangeItem> &getChanges() { return m_Changes; }
  void setChanges(std::vector<ChangeItem> const &value) { m_Changes = value; }

public:
  std::string m_ResourceId;

  unsigned m_ResourceIdFlag;
  shared_ptr<unsigned> m_ResourceIdOutFlag;
  std::vector<ChangeItem> m_Changes;

  unsigned m_ChangesFlag;
  shared_ptr<unsigned> m_ChangesOutFlag;
};
} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NotifyItem_H_ */
