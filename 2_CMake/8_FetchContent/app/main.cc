#include <iostream>

#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>
#include <fmt/format.h>

#include "my_lib.h"
#include "config.hpp"

int main()
{
    auto welcome_message = fmt::format("Welcome to {} v{}\n",
        project_name,
        project_version);
    spdlog::info(welcome_message);

    auto json_message = fmt::format("Using JSON Lib v{}.{}.{}\n",
        NLOHMANN_JSON_VERSION_MAJOR,
        NLOHMANN_JSON_VERSION_MINOR,
        NLOHMANN_JSON_VERSION_PATCH);
    spdlog::info(json_message);

    print_hello_world();

    return 0;
}
