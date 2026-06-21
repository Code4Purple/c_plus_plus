#include <iostream>

int main(){

    /* 
        pointers = variable that stores a memory address of another variable
                    sometimes it's easier to work with an address
        
        & = address-of operator
        * = dereference operator
    */

    std::string name = "Batman"
    std::string *pName = &name;
    std::cout << pName;

    std::cout << pName << "\n"; // This will give you an address for the memory 
    std::cout << *pName << "\n"; // This will give you what the memoery adress is 

    

    return 0;
}
