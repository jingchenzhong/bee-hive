//
// Created by IntelliJ IDEA.
// User: AppleTree
// Date: 17/4/2
// Time: 下午4:57
// To change this template use File | Settings | File Templates.
//

#ifndef __hive__configloader__
#define __hive__configloader__

#include "core.h"

NS_HIVE_BEGIN

void parseConfig(const char* fileName, Token::TokenMap& config);
void loadConfig(Token::TokenMap& config);

NS_HIVE_END

#endif
