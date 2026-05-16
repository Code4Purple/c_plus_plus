#include <iostream>

// Another way to do the Global Variables for the print out
int myChar = 'A';
void printChar();

void printNum(int num);

int main(){

    /*
        Local variables  = declared inside a function or block {}
        Global variables = declared outside of all functions    
    */

    // Local Example
    int myNum = 1;
    std::cout << "Local Scope (main block): " << myNum << std::endl;

    // Global Example
    printNum(myNum);
    std::cout << "Global Scope (main block) for char: " << myChar << std::endl;
    printChar();

    return 0;
}


void printNum(int num){
    /*  The Print out will not work without pass the myNum variable from the main()
        block into the printNum() function or block {}
    */
    std::cout << "Global Scope (pass var into printNum block): " << num << std::endl;
}

void printChar(){
    std::cout << "Global Scope (printChar block): " << myChar << std::endl;
}