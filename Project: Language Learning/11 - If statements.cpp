#include <iostream>

int main(){


    /*
        if statements = do something if a condition is true.
                        if not, then don't do it 
    
    */

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site!" << std::endl;
    }
    else if(age < 0){
        std::cout << "You havn't been born yet!" << std::endl;

    }
    else{
        std::cout << "You are not welcome to the site!" << std::endl;
    }

    return 0;
}