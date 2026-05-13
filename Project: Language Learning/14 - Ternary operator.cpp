#include <iostream>

int main(){
    /*
        Ternary Operator ?: = replacement to an if/else statement
        condition ? expression1 : expression2; 
     */

    // Normal if/else statement 
    int grade = 75;

    if(grade >= 60){
        std::cout << "You Passed!" << std::endl;
    }
    else{
        std::cout << "You Failed!" << std::endl;
    }

    // Ternary Version of the Above if/else statement 
    grade = 45;
    grade >= 60 ? std::cout << "You Passed!\n"  : std::cout << "You Failed!" << std::endl;


    return 0;
}