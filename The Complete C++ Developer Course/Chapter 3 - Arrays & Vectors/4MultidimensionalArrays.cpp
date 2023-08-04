#include "include.h"

int main(){

    printf("\n      Multidimensional Arrays\n");
    int twoD [2][3]{
        {1,2,3},
        {4,5,6}
    }; // 2D Array that is 2 by 3 (2 x 3)

    std::cout << twoD[0][2] << std::endl;


    return 0;
}