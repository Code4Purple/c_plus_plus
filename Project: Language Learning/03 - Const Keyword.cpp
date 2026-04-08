#include <iostream>

int main() {

    /*
        The const keyword specifies that the variable's value is constant
        tells the compiler to prevent anything from modifying it (READ-ONLY)
    */

    const double PI = 3.14159; // All upper case for naming convention of const variables
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm" << std::endl;

    return 0;
}