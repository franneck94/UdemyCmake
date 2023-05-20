#include <iostream>

#include "config.hpp"
#include "my_lib.h"

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';

    print_hello_world();

    return 0;
}
