#include "include.h"

int main(){
    printf("\n      Built-in Array\n");
    // 1st Way of Array def
    //int array1[5];

    // 2nd way of array def
    const int ARRAY_SIZE = 5;
    int array2[ARRAY_SIZE];
    std::string names[4] = {"Bob", "Jimmy", "Johnny", "Timmy"};

    array2[0] = 15;
    array2[1] = 20;
    array2[2] = 13;
    array2[3] = 6;
    array2[4] = 55;

    
    std::cout << "Value of each cells of array2 : ";
    for(int i = 0; i < ARRAY_SIZE; i++){
        std::cout << array2[i] << " " ;
    }

    std::cout << std::endl;
    std::cout << "Value of each cells of array of names : ";
    for(std::string name: names){
        std::cout << name << " ";
    }

    return 0;

}