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
 * SorUpdateIndicator.h
 *
 *
 * if you need to add new attribure, please contact max.cong@nokia-sbell.com to
 * generate new code.
 */

#ifndef SorUpdateIndicator_H_
#define SorUpdateIndicator_H_

#include "CSB_JsonParser.h"
#include <type_traits>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class SorUpdateIndicator : public jsonParser::jsonParser<SorUpdateIndicator> {
public:
  explicit SorUpdateIndicator(){
      // constructor

  };
  virtual ~SorUpdateIndicator(){};

  std::pair<jsonRet, std::string> decode(const std::string &jsonBuffer,
                                         staticjson::ParseStatus &result) {
    std::pair<jsonRet, std::string> ret;
    m_SorUpdateIndicator = jsonBuffer;
    return ret;
  }

  void staticjson_init(staticjson::ObjectHandler *h) {

    // static json settings members vars :

    h->set_flags(staticjson::Flags::Default |
                 staticjson::Flags::DisallowUnknownKey);
  }
  friend std::ostream &operator<<(std::ostream &o,
                                  const SorUpdateIndicator &obj) {

    return o;
  }

public:
  std::string m_SorUpdateIndicator;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SorUpdateIndicator_H_ */
