#include <iostream>
#include <string>

int main(){

    /*
        array =  a data structure that can hold muliple values
                 values are accessed by an index number
                 "kind of like a variable that hold muliple values"
     */

    // basic variable
    std::string scar = "camry";
    // basic array
    std::string car[] = {"Corvette", "Mustang", "Camry"};

    std::cout << "Cars (Array 1)" << "\n";
    std::cout << car[0] << ", ";
    std::cout << car[1] << ", ";
    std::cout << car[2] << '\n';

    // Another way to do due a basic array
    std::string dogNames[3]; 
    dogNames[0] = "Zues"; 
    dogNames[1] = "Mario"; 
    dogNames[2] = "Nemo"; 
    
    std::cout << "Dog Names (Array 2)\n"; 
    std::cout << dogNames[0] << ", ";
    std::cout << dogNames[1] << ", ";
    std::cout << dogNames[2] << '\n';

   
    return 0;
}