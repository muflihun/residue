//
//  base64.cc
//  License++
//
//  Copyright © 2018-present Muflihun Labs
//

#include "deps/licensepp/src/external/Ripe.h"
#include "deps/licensepp/src/crypto/base64.h"

using namespace licensepp;

std::string Base64::decode(const std::string& encoded)
{
    return Ripe::base64Decode(encoded);
}

std::string Base64::encode(const std::string& raw)
{
    return Ripe::base64Encode(raw);
}
