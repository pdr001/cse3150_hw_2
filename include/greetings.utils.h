#ifndef GREETINGS_UTIL_H
#define GREETINGS_UTIL_H

#include <string>

namespace GreetingUtils {
    
    std::string create_message(const std::string& name);

    char* c_string_formatter(const std::string& msg);
}

#endif