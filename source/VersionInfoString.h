#pragma once

#include "VersionInfo.h"
#define STRINGIZE2(s) #s
#define STRINGIZE(s) STRINGIZE2(s)

#define VER_FILE_VERSION            VERSION_MAJOR, VERSION_MINOR, REVISION_NUMBER, BUILD_NUMBER
#define VER_FILE_VERSION_STR        STRINGIZE(VERSION_MAJOR)       \
                                    "." STRINGIZE(VERSION_MINOR)   \
                                    "." STRINGIZE(REVISION_NUMBER)    \
                                    "." STRINGIZE(BUILD_NUMBER) \

#define VER_PRODUCT_VERSION         VER_FILE_VERSION
#define VER_PRODUCT_VERSION_STR     VER_FILE_VERSION_STR
