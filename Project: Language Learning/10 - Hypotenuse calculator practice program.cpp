#include <iostream>
#include <cmath>

int main(){

    /*
        Finding a hypotenuse of Right Triangle
        c = square root of (a^2 + b^2)
    
    */

    double a;
    double b; 
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "side c: " << c << std::endl;

    return 0;
}