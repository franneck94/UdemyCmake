#include <iostream>

#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>
#include <fmt/format.h>

#include "config.hpp"
#include "my_lib.h"

int main()
{
    spdlog::info(fmt::format("Welcome to {} v{}\n",
        project_name,
        project_version));
    spdlog::info(fmt::format("Using JSON Lib v{}.{}.{}\n",
        NLOHMANN_JSON_VERSION_MAJOR,
        NLOHMANN_JSON_VERSION_MINOR,
        NLOHMANN_JSON_VERSION_PATCH));

    print_hello_world();

    return 0;
}
