#include <iostream>

int main(){
    /*
        cout << (insertion operator)
        cin  >> (extraction operator)   -- Good for inputs with no spaces in them
        getline(std::cin,variable name) -- Good for inputs with spaces in them

        getline(std::cin >> std::ws, variable name); -- this will prevent the buffer from cin and 
                                                        allow the getline to actually get the new input

    */

    std::string name;
    int age;
    
    std::cout << "What is your age?: ";
    std::cin >> age;
    
    
    std::cout << "What is your full name?: ";
    getline(std::cin >> std::ws, name);

    std::cout << "Hello, "<< name << std::endl;;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}