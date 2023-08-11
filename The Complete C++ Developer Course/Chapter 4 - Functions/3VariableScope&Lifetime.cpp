#include  "include.h"

void someFunction(int aParam);
void someFunction2(int aParam);

double myGlobalDouble = 3.14;

int main(){
    printf("\n      Scopes & Lifetimes of Variables\n");
    //Scope Example
    printf("\nMain Scope\n");
    int localToMain = 20;
    std::cout << "The local to main variable is " << localToMain << std::endl;
    std::cout << "The Global Double (in main) is " << myGlobalDouble << std::endl;
    someFunction(25);

    // Lifetime Example
    someFunction2(25);
    someFunction2(30);
    someFunction2(500);
    return 0;
}

void someFunction(int aParam){
    int myLocalNum = 100;
    printf("\n  someFunction Scope\n");
    std::cout << "My Local Number is " << myLocalNum << std::endl;
    std::cout << "The Parameter is " << aParam << std::endl;
    std::cout << "My Global double (in someFunction) is " << myGlobalDouble << std::endl;

}

void someFunction2(int aParam){
    int myLocalNum = 100;
    myLocalNum++; // This Variable only lives inside of here so it can only be created inside of the fucntion.
    myGlobalDouble++; // This Global Variable lives within the entire code that why this one can be changed permanently
    
    static int myStatic = 7; // Static can only be used in this declaration definiton
    myStatic++; // To Solve the Problem with the Local Vairable of creating and destoring itself 
                // Use can use static variable and that can only be accessed within the Scope of someFunction2

    printf("\nsomeFunction2 Scope\n");
    std::cout << "My Local Number is " << myLocalNum << std::endl;
    std::cout << "The Parameter is " << aParam << std::endl;
    std::cout << "My Global double (in some Function 2) is " << myGlobalDouble << std::endl;    
    std::cout << "My Static Variable is " << myStatic << std::endl;
}
