#include <iostream>

#include "my_lib.h"

void print_hello_world()
{
    std::cout << "Hello World!\n" ;
}

unsigned int Factorial(unsigned int n)
{
    return n <= 1 ? 1 : Factorial(n - 1) * n;
}
