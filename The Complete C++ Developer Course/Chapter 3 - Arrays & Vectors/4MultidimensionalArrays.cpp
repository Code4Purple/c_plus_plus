#include "include.h"

int main(){

    printf("\n          Multidimensional Arrays\n");
    int twoD [2][5]{
        {1,2,3,4,5},
        {6,7,8,9,10}
    }; // 2D Array that is 2 by 5 (2 x 5)

    printf("\nElement at [0][2] in the 2D-Array is: ");
    std::cout << twoD[0][2] << std::endl;

    //Print out the entire 2d array
    printf("Entire 2D Array Elements:         ");
    for (int row = 0; row < 2; row++){
        for(int col = 0; col < 5; col++){
            std::cout << twoD[row][col] << " ";
        }
    }
    std::cout << std::endl;

    //Changing Element within the array
    twoD [1][3] = 15;
    // Printing out changed array 
    printf("Entire Changed 2D Array Elements: ");
    for (int row = 0; row < 2; row++){
        for(int col = 0; col < 5; col++){
            std::cout << twoD[row][col] << " ";
        }
    }

    return 0;
}