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
 * FrameRouteInfo.h
 *
 *
 * if you need to add new attribure, please contact max.cong@nokia-sbell.com to
 * generate new code.
 */

#ifndef FrameRouteInfo_H_
#define FrameRouteInfo_H_

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
class FrameRouteInfo : public jsonParser::jsonParser<FrameRouteInfo> {
public:
  explicit FrameRouteInfo() {
    // constructor
    m_Ipv4Mask = "";

    m_Ipv4MaskFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_Ipv4MaskOutFlag.reset(new unsigned);
    *m_Ipv4MaskOutFlag.get() = 0;
    m_Ipv6Prefix = "";

    m_Ipv6PrefixFlag =
        (staticjson::Flags::Optional | staticjson::Flags::IgnoreWrite);
    m_Ipv6PrefixOutFlag.reset(new unsigned);
    *m_Ipv6PrefixOutFlag.get() = 0;
  };
  virtual ~FrameRouteInfo(){};

  void staticjson_init(staticjson::ObjectHandler *h) {

    // static json settings members vars : Ipv4Mask Ipv6Prefix
    h->add_optional_property("ipv4Mask", &this->m_Ipv4Mask, m_Ipv4MaskFlag,
                             m_Ipv4MaskOutFlag);
    h->add_optional_property("ipv6Prefix", &this->m_Ipv6Prefix,
                             m_Ipv6PrefixFlag, m_Ipv6PrefixOutFlag);

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

  friend std::ostream &operator<<(std::ostream &o, const FrameRouteInfo &obj) {

    o << "Ipv4Mask, optional flag is : " << *m_Ipv4MaskOutFlag
      << ", content is : " << obj.m_Ipv4Mask << std::endl;

    o << "Ipv6Prefix, optional flag is : " << *m_Ipv6PrefixOutFlag
      << ", content is : " << obj.m_Ipv6Prefix << std::endl;

    return o;
  }

  /////////////////////////////////////////////
  /// FrameRouteInfo members vars : Ipv4Mask Ipv6Prefix

  std::string getIpv4Mask() const { return m_Ipv4Mask; }
  void setIpv4Mask(std::string const &value) { m_Ipv4Mask = value; }

  std::string getIpv6Prefix() const { return m_Ipv6Prefix; }
  void setIpv6Prefix(std::string const &value) { m_Ipv6Prefix = value; }

public:
  std::string m_Ipv4Mask;

  unsigned m_Ipv4MaskFlag;
  shared_ptr<unsigned> m_Ipv4MaskOutFlag;
  std::string m_Ipv6Prefix;

  unsigned m_Ipv6PrefixFlag;
  shared_ptr<unsigned> m_Ipv6PrefixOutFlag;
};
} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* FrameRouteInfo_H_ */
