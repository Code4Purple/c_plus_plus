#include <iostream>
#include <vector>

int main(){

    printf("\n          Project - Vector Data\n");
    std::vector<int> storedValues;
    int userInput;
    


    do {
        std::cout << "Enter a positive integer to add to the vector, or negative integer to quit." << std::endl;
        std::cin >> userInput;
        if (userInput < 0){
            continue;
        }
        storedValues.push_back(userInput);
       
    }while(userInput > 0);

    std::cout << "Here are those values doubled: \n";
    for (int print : storedValues){
        std::cout << print * 2 << " ";
    }

    return 0;
}