#include <cstdint>
#include <iostream>

#include <nlohmann/json.hpp>

#include "my_lib.h"

/**
 * @brief Prints out hello world and tests the JSON Lib.
 *
 */
void print_hello_world()
{
    std::cout << "Hello World!\n";

    std::cout << "JSON Lib Version:" << NLOHMANN_JSON_VERSION_MAJOR << "."
              << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";
}

std::uint32_t factorial(std::uint32_t number)
{
    return number <= 1 ? 1 : factorial(number - 1) * number;
}
