#include "include.h"

/**
 *  Recursion -> is when a function calls itself 
 *  
 *  REQUIRED -> One Base case & One Recursive Case
 */

void countDownFrom(int num);
int sumValues(int num);

int main(){
    printf("\n      Recursion\n");
    std::cout << "Count down recursive call -> ";
    countDownFrom(10);
    std::cout << std::endl;

    int totalSum = sumValues(10);
    std::cout << "The Sum is " << totalSum << std::endl;

    return 0;
}

void countDownFrom(int num){
    
    if(num >= 0) // Base Case // A Condition in which the loop will end if not upheld
    {
        std::cout << num << " ";
        countDownFrom(num - 1); // Recursive Case // A Task in which a loop cycle 
    }
}

int sumValues(int num){
    
    if(num >= 1){
        return num + sumValues(num - 1);
    }

    return num;
}