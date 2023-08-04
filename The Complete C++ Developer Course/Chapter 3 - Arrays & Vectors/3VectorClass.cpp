#include "include.h"


int main(){
    
    printf("\n      Vector Class\n");

    std::vector<int> someVec;
    std::vector<std::string> anotherVec(3);
    int MAX_SIZE = 10;

    // Building numbers in a vector
    for (int i = 0; i <= MAX_SIZE; i++){
        someVec.push_back(i);
    }

    // Building names in a vector
    anotherVec[0] = "John";
    anotherVec[1] = "Lane";
    anotherVec[2] = "Sally";

    anotherVec.push_back("Shannon");

    printf("Vector of numbers: ");
    for(int val : someVec){
        std::cout << val << " ";
    }
    std::cout << "  <- Size of Array is " <<someVec.size();

    printf("\nVector of names: ");
    for(std::string val : anotherVec){
        std::cout << val << " ";
    }
    std::cout << "   <- Size of Array is " <<anotherVec.size();

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "      Front and Back -> Replacement Examples " << std::endl;
    std::cout << "Front: " << anotherVec.front() << ", ";
    std::cout << "Back : " << anotherVec.back() << std::endl;

    anotherVec.pop_back();
    anotherVec.insert(anotherVec.begin(), "Danny");

    std::cout << "New Front: " << anotherVec.front() << ", " ;
    std::cout << "New Back: " << anotherVec.back() << std::endl;
    std::cout << "The new names vector list: ";
    for(std::string val : anotherVec){
        std::cout << val << " ";
    }
    std::cout << "   <- Size of Array is " << anotherVec.size();

    return 0;
}