#include "include.h"

int main(){

    // Defined with in <cmath>
    int powResult = pow(2,3);
    int sqrtResult = sqrt(25);
    int ceilResult = ceil(4.2);
    int floorResult = floor(4.2);

    printf("\n      cmath Library\n");
    std::cout << "2 ^ 3 is " << powResult << std::endl;
    std::cout << "Square Root of 25 is " << sqrtResult << std::endl;
    std::cout << "Ceiling of 4.2 is " << ceilResult << std::endl;
    std::cout << "Floor of 4.2 is " << floorResult << std::endl;



    return 0;
}