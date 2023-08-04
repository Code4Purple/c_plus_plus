#include <iostream>
#include <array>

int main(){

    printf("\n          Project - Array Data\n");
    std::array<int,5> storedValues{};

    
    // Storing Values
    int i = 0;
    while(i < 5){
        std::cout << "Enter an Integer: ";
        std::cin >> storedValues[i];
        i++;
    }

    // Printing Out Values Doubled
    printf("Now these are the numbers doubled: ");
    for (int print : storedValues){
        std::cout << print * 2 << " ";
    }
    

    
    return 0;
}