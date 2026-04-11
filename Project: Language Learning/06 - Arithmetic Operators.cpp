#include <iostream>

int main(){

    /*
        arithmetic operators =  return the result of a specific
                                arithmetic operation (+ - * /)

        Order of Operations for Arithmetic Operators
                    ()      - Parentheses
                    ^2      - Exponents
                    * or /  - Multiplication & Division
                    + or -  - Addition & Subtraction
            *** All follow the left to right priority for each step ***
    */

    int students = 20;

    // students = students + 1;
    // students = students+1;
    //students++;

    //students = students - 1;
    //students-=1;
    //students--;

    //students = students * 2;
    //students*=2;

    //students = students / 2;
    //students/=2;

    //std::cout << students << std::endl;

    // remainder of the int divison if it has a decimal place
    int remainder = students % 3;
    std::cout << remainder << std::endl;
    
    // we can use the same idea to see if a number is even or odd
    std::cout << students % 2 << std::endl; // if it is zero it is even
    students++;
    std::cout << students %2 << std::endl; // if it is 1 then it is odd

    return 0;
};