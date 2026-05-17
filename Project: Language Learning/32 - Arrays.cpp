#include <iostream>

int main(){

    /*
        array =  a data structure that can hold muliple values
                 values are accessed by an index number
                 "kind of like a variable that hold muliple values"
     */

    // basic variable
    std::string scar = "Corvette";
    // basic array
    std::string car[] = {"Corvette", "Mustang", "Camry"};

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    return 0;
}