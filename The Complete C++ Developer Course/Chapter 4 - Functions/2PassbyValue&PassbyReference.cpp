#include "include.h"

void valueChange1(int someNum);
void valueChange2(int& someNum);

int main(){
    printf("\n      Pass by Value & Pass by Reference\n");
    int myNumber = 20;
    printf("\n   Pass by Value Example\n");
    std::cout << "Before valueChange1 call myNumber is " << myNumber << std::endl;
    valueChange1(myNumber);
    std::cout << "After valueChange1 call, myNumber is " << myNumber << std::endl; 
    
    std::cout << std::endl;
    printf("    Pass by Reference example\n");

    std::cout << "myNumber is currently: " << myNumber << std::endl;
    valueChange2(myNumber);
    std::cout << "myNumber after valueChanged2 fucntion is: " << myNumber << std::endl;
}

void valueChange1(int someNum){
    someNum = 100;  
    std::cout << "someNum inside valueChange1 is " << someNum << std::endl;
}

void valueChange2(int& someNum){
    someNum = 200;
    std::cout << "Inside of valueChange2 function, someNum is " << someNum << std::endl;
}