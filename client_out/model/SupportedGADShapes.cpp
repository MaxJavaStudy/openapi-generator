/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 2.1.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "SupportedGADShapes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




SupportedGADShapes::SupportedGADShapes()
{
}

SupportedGADShapes::~SupportedGADShapes()
{
}

void SupportedGADShapes::validate()
{
    // TODO: implement validation
}

web::json::value SupportedGADShapes::toJson() const
{

    web::json::value val = web::json::value::object();
    

    return val;
}

bool SupportedGADShapes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

void SupportedGADShapes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
}

bool SupportedGADShapes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    return ok;
}

}
}
}
}


