#include <iostream>

#include <nlohmann/json.hpp>

#include "config.hpp"
#include "my_lib.h"

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';

    std::cout << "JSON Lib Version:" << NLOHMANN_JSON_VERSION_MAJOR << "."
              << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";

    print_hello_world();

    return 0;
}
