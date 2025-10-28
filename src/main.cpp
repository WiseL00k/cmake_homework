#include <iostream>
#include "calc.h"
#include "dynamicx_cmake.h"

int main() {
    int a = 10;
    int b = 3;

    print_dx(NUMBER);
    std::cout << "a + b = " << add(a, b) << std::endl;
    std::cout << "a - b = " << sub(a, b) << std::endl;
    std::cout << "a * b = " << mul(a, b) << std::endl;
    std::cout << "a / b = " << divide(a, b) << std::endl;

    return 0;
}

