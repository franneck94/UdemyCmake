#include <iostream>

#include "config.hpp"
#include "my_lib.h"
#include "my_lib2.h"
#include "my_lib3.h"

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';

    std::cout << "project_version_major : "  << project_version_major << '\n';
    std::cout << "project_version_minor : "  << project_version_minor  << '\n';
    std::cout << "project_version_patch : "  << project_version_patch  << '\n';

    print_hello_world();
    print_hello_world2();
    print_hello_world3();

    return 0;
}
