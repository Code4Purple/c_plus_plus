#include <iostream>

int main(){

    /*
        memory address = a location in memory where the data is stored
        a memory address can accessed with & (address-of operator)
    */
    
    std::string name = "Ben 10";
    int age = 21; 
    bool alien = false;

    // This will show the hexadecimal address of the very examples above
    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &alien << "\n";

    return 0;
}
