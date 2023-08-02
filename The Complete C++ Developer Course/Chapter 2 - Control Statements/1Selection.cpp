#include "include.h"

/**
 *  Selection Control Statements (3)
 *          if
 *          if-else
 *          switch
 */

int main(){
    
    printf("\n      Selection Control Statements\n");
    printf("\n                                      Using a If, else if & else Comparsion statements - int \n");
    
    int age;
    std::cout << "Welcome to the Pub and Grille!" << std::endl;
    std::cout << "Please enter your age " << std::endl;
    std::cin >> age;

    if (age >= 21){
        std::cout << "Here have a beer!" << std::endl;

    }
    else if (age >= 16){
        std::cout << "Here have a coke!" << std::endl;
        std::cout << "And, at least you can drive!" << std::endl;
    }
    else {
        std::cout << "Here have a coke!" << std::endl;
    }
    std::cout << "Thanks for coming to the Pub and Grille!" << std::endl;

    printf("\n                                        Using a Switch Comparsion - char\n");
    char grade;
    std::cout << "Please enter a letter grade" << std::endl;
    std::cin >> grade;

    switch(grade){
        case 'A': 
        case 'a':
            std::cout << "Great Job!" << std::endl;
            break;
        case 'B':
        case 'b':
            std::cout << "Great Job!" << std::endl;
            break;
        case 'C':
        case 'c':
            std::cout << "You can do better!" << std::endl;
            break;
        case 'D':
        case 'd': 
            std::cout << "You are getting close to failing!" << std::endl;
            break;
        case 'F':
        case 'f': 
            std::cout << "You are failing!" << std::endl;
            break;
        default: 
            std::cout << "You have entered an invalid grade." ;
            std::cout << "  Try again" << std::endl;
    }
    return 0;
}