#include <iostream>

int main() {
    //-------------------------------------------------------------------
    //                     Basic Variables Example
    //-------------------------------------------------------------------
    
    int x; // declaration 
    x = 5; // assignment
    
    int y = 6;
    int sum = x + y;
    
    std::cout << x << " + " << y << " = " <<  sum << std::endl;;

    //-------------------------------------------------------------------
    //                     Basic Data Types Example
    //-------------------------------------------------------------------

        // Integers (Whole Number)
        int age = 21;
        int z = 7.5; // this will display : 7 not 7.5

        // double (number including decimal)
        double price = z;   // this will display the 7.5 data

        // single character
        char grade = 'A';

        // boolean (true or false)
        bool stundent = true;
        bool power = false;

        // string (objects that represents a sequence of text)
        std::string name = "Bro";



    return 0;
}