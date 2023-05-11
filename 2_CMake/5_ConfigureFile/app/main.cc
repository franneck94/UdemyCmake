#include <iostream>

#include "my_lib.h"
#include "config.hpp"

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';

    print_hello_world();

    return 0;
}
