#pragma once

#include <string>

class StringExtension {
 public:
    static void trimLeft(std::string* string);
    static void trimRight(std::string* string);
    static void trim(std::string* string);
};
