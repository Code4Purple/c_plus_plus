#include <iostream>

int main(){

    std::string name;

    // This will keep asking the user to put in a name into the system 
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin,name);
    }
    std::cout << "Hello, " << name << std::endl;
    
    
    return 0;
}
