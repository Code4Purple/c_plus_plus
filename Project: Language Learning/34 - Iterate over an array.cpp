#include <iostream>

int main(){

    std::string heros[] = {"Batman", "Superman", "The Flash", "Green Arrow"};

    // Basic of going over an array to print out the array elements 
    // The bigest con is if the array becomes bigger then the 3 elements we have 
        //then the last element will not get printed out 
    for (int i = 0; i < 3; i++){
        std::cout << heros[i] << ", ";
    }
    
    std::cout << "\n"; // spacer

    // This way we can have every element printed out for array without worry if it changes size
    for (int j = 0; j < sizeof(heros)/sizeof(std::string); j++){
        std::cout << heros[j] << ", ";
    }

     std::cout << "\n"; // spacer
     
    return 0;
}