#include <iostream>

void print_hello_world()
{
    std::cout << "Hello World" << std::endl;
}

unsigned int factorial(unsigned int number)
{
    return number <= 1 ? 1 : factorial(number - 1) * number;
}
