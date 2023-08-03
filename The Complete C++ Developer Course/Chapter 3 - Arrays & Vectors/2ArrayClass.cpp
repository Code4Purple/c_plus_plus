#include "include.h"

int main(){
    printf("\n      Array Class\n");
    std::array<int,10> myIntArray{};

    printf("My Array zero-ed out: ");
    for(int a: myIntArray ){
        std::cout << a << " " ;
    }
    std::cout << "  <- Size of Array is " << myIntArray.size();

    // adding stuff to the array
    for(int i = 0 ; i < myIntArray.size(); i++){
        myIntArray[i] = i;
    }

    printf("\nMy Array with values: ");
    for(int a: myIntArray ){
        std::cout << a << " " ;
    }
    std::cout << "  <- Size of Array is " << myIntArray.size();

}