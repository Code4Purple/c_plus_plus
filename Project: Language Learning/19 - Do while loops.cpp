#include <iostream>

int main(){
    /*
        do while loops - do a block of code first,
                                    THEN repeat again if condition is true
    */

    int number;

    // Basic Example of the While Loop 
    // This Keeps going until a postive number is reach for intake answer
    /*while(number < 0){
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }*/

    // do while loop -- version
    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while(number < 0)

    std::cout << "The # is: " << number;
    return 0;
}
