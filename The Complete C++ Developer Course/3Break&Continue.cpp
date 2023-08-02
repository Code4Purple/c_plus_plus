#include "include.h"

int main(){
    printf("\n        Break & Continue Statements\n");
    printf("While Loop - Continue\n");
    
    printf("Before : ");
    int count = 0;
    while(count <= 10){
        std::cout << count << " ";
        count++;
    }    
    
    printf("\nAfter  : ");
    int count2 = 0;
    while(count2 <= 10){
        if ( count2 == 0){
            std::cout << "  " ;
            count2++;
            continue;
        }
        std::cout << count2 << " ";
        count2++;
    }    
    std::cout << std::endl;
    printf("\nWhile Loop - Break\n");

    printf("Before : ");
    int count3 = 0;
    while(count3 <= 10){
        std::cout << count3 << " ";
        count3++;
    }

    printf("\nAfter  : ");
    int count4 = 0;
    while(count4 <= 10){
        if (count4 == 6){
            break;
        }
        std::cout << count4 << " ";
        count4++;
    }
    
    printf("\n                          ** Note **\n");
    printf("This can work for any loop type for Continue or Break Statements.\n");
} 