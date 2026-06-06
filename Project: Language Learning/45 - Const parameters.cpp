#include <iostream>

void printInfo(std::string name, int age);

int main(){

    /*
        const parameter = parameter that is effectively read-only 
                            code is more secure & conveys intent
                            useful for references and pointers
    */

    std::sting name = "Batmam";
    int age = 35;

    printInfo(nmae, age);
    https://youtu.be/-TkoO8Z07hI?t=14853
    return 0;
}

void printInfo(std::string name, int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}
