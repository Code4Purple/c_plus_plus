#include <iostream>

void printInfo(std::string name, int age);

int main(){

    /*
        const parameter = parameter that is effectively read-only 
                            code is more secure & conveys intent
                            useful for references and pointers
    */


    std::string name = "Batmam";
    int age = 35;

    printInfo(name, age);
    return 0;
}

void printInfo(std::string name, int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}
