#include <iostream>

int main(){

    /*
    
        type conversion = conversion of a value of one data type to another
                          Implicit = automatic
                          Explicit = Precede value with a new data type (int)
    
    */

    // Implicit 
    char x = 100;   // this converts the 100 into a letter from the ASCII TABLE
    std::cout << x << std::endl;

    // Explicit
    std::cout << (char) 101 << std::endl; // ACII TABLE converts 101 to e

    // Working Example
    int correct = 9;
    int questions = 10;
    double score = correct/questions * 100; // So we can get a % from * 100
    std::cout << score << "%" << std::endl; // this print will not print 90% only 0% since int/int means there is no 0.90 only 0

    double score2 = correct/(double)questions * 100;
    std::cout << score2 << "%" << std::endl; // this will print 90% since now we have a int/double to make 0.90 before * 100 for 90%


    return 0;
}