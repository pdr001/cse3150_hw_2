#include "greeting_utils.h"
#include <string>
#include <algorithm>
namespace GreetingUtils{
    std::string create_message(const std::string& name) {
        return "Hello, " + name + "!";
        
    }

    char* c_string_formatter(const std::string& msg){
        // will find how many characters are going to be copied
        size_t n = msg.size();

        // allocating the space for the characters and null term
        char* b = new char[n + 1];

        // copying characters
        std::copy(msg.begin(), msg.end(), b);

        // adding null term
        b[n] = '\0';

        return b;
    }
}