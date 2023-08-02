#include "include.h"


/**
 *      Repetition Control Statements
 *              While Loops
 *              do-while loops
 *              for loops
 *  
 */



int main(){
    printf("\n      Repetition Control Statements");
    printf("\nWhile Loop\n");
    // Continuation Loop
    int count = 0;
    while(count <= 10){
        std::cout << count << " ";
        count++;
    }    

    // Post Test Loop // Execution is always one before checking it's continuation loop
    std::cout << std::endl;
    printf("\nDo-While Loop\n");
    double count2 = 0;
    do {
        std::cout << count2 << " " ;
        count2 = count2 + 0.1;
    }while (count2 <= 10);

    //
    std::cout << std::endl;
    printf("\nFor Loop\n");
    for(double i = 0; i <= 10; i = i + 0.20){
        std::cout << i << " ";
    }
    
    
    return 0;
}