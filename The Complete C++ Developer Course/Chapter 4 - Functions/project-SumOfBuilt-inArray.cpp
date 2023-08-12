#include <iostream>

int sumArray(int myArray[], int arraySize);

int main(){
    printf("\n      Sum of Built-in Array\n");
    int myArray[]{2,4,6,8,10,12,14,16,18,20};
    int sum = sumArray(myArray, 10);

    std::cout << "Sum of the elements of myArray is " << sum << std::endl;
}


int sumArray(int myArray[], int arraySize){
    int sum  = 0;

    for(int i = 0; i < arraySize; i++){
        sum += myArray[i]; 
    }

    return sum;
}