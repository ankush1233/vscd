
// main.cpp
#include <iostream>
#include "API.h"

int main() {
    // Use the functions from the API
    int sum = addNumbers(5, 3);
    int product = multiplyNumbers(4, 2);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}