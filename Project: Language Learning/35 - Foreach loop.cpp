#include <iostream>

int main(){
    /*
        foreach loop = loop that eases the traversal over an
                        iterable data set
    */

    std::string heros[] = {"Ben 10","Batman","Superman","The Flash"};

    // You can add mpre to the array and the for loop with print until the end of the array itself 
    for(std::string heros : heros){
        std::cout << heros << '\n';
    }
    
    return 0;
}


