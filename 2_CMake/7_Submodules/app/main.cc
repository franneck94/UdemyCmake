#include <iostream>

#include <nlohmann/json.hpp>

#include "config.hpp"
#include "my_lib.h"

int main()
{
    std::cout << project_name << ": " << project_version << std::endl;

    std::cout << "Json Lib Version: "
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << std::endl;

    print_hello_world();

    return 0;
}
