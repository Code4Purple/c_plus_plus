#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double z;

    z = std::max(x,y); 
    std::cout << "Max: " << z << '\n';
    z = std::min(x,y);
    std::cout << "Min: " << z << '\n';

    z = pow(2,3); // 2 to the power of 3
    std::cout << "pow: " << z << '\n';

    z = sqrt(y); // square root
    std::cout << "sqrt: " << z << '\n';

    z = abs(x-y); // absolute 
    std::cout << "abs: " << z << '\n';

    z = round(3.4); // round to nearest whole number
    std::cout << "round: " << z << '\n';

    z = ceil(3.4); // round up
    std::cout << "celi: " << z << '\n';

    z = floor(3.99); // round down 
    std::cout << "floor: " << z << '\n';

    return 0;
}