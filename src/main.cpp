#include <iostream>
#include <string>
#include "greeting_utils.h"

int main(){
    std::string name;

    std::cout << "Enter your name\n";
    std::getline(std::cin, name);

    // greeting
    std::string msg = GreetingUtils::create_message(name);

    // heap allocation for c string
    char* cmsg = GreetingUtils::c_string_formatter(msg);

    // greeting printed from char*
    std::cout << cmsg << "\n";

    // memory freed
    delete[] cmsg;

    return 0;
}