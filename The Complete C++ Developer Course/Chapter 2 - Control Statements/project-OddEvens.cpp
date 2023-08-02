#include <iostream>

int main(){
    
    int count = 0;  
    int max;
    
    printf("\n      Project: Odd & Evens\n");
    printf("Enter a number you would like to sort the odds and even from: ");
    std::cin >> max;

    printf("\nSorting even and odds out of %d",max);
    do{
    
        if(count % 2 == 0){
            printf("\n%d is even.",count);
        }
        else {
            printf("\n%d is odd.", count);
        }
        count++;
    }while(count <= max);
} 