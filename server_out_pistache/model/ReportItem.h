/**
* Nudm_UECM
* Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.1.2
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ReportItem.h
 *
 * 
 */

#ifndef ReportItem_H_
#define ReportItem_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ReportItem
{
public:
    ReportItem();
    virtual ~ReportItem();

    void validate();

    /////////////////////////////////////////////
    /// ReportItem members

    /// <summary>
    /// 
    /// </summary>
    std::string getPath() const;
    void setPath(std::string const& value);

    friend void to_json(nlohmann::json& j, const ReportItem& o);
    friend void from_json(const nlohmann::json& j, ReportItem& o);
protected:
    std::string m_Path;

};

}
}
}
}

#endif /* ReportItem_H_ */
