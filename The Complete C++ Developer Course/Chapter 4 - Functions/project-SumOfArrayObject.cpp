#include <iostream>
#include <array>


int sumArray(std::array<int,10> theArray);
void sumArray2(std::array<int,10> theArray2, int& theSum);

int main(){
    printf("\n        Sum of Array Object\n");
    // Sum of Array with return value out of a function
    std::array<int,10> primaryArray{2,4,6,8,10,12,14,16,18,20};
    int resultSum = sumArray(primaryArray);
    std::cout << "Result of the Array Sum is " << resultSum << " <- By return value of a Function" << std::endl;

    // Sum of Array by reference value out of a function
    int resultByRef;
    sumArray2(primaryArray, resultByRef);
    std::cout << "Result of the Array Sum is " << resultByRef  << " <- By reference value of into a Function"<< std::endl;
}




int sumArray(std::array<int,10> theArray){
    int sum = 0;

    for(int item: theArray){
        sum += item;
    }
    return sum;

    
}

void sumArray2(std::array<int,10> theArray2, int& theSum){
    theSum = 0;

    for(int item: theArray2){
        theSum += item;
    }
}