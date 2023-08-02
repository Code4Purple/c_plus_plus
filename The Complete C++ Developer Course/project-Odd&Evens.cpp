#include <iostream>

int main(){
    printf("\n      Project: Odd & Evens\n");

    int count = 0;  
    int max = 50;

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