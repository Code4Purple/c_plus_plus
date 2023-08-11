#include <iostream>
#include <array>


int sumArray(std::array<int,10> theArray);

int main(){
    std::array<int,10> primaryArray{2,4,6,8,10,12,14,16,18,20};
    int resultSum = sumArray(primaryArray);

    std::cout << "Result of the Array Sum is " << resultSum <<std::endl;
}




int sumArray(std::array<int,10> theArray){
    int sum = 0;

    for(int item: theArray){
        sum += item;
    }
    return sum;

    //Bookmark // https://www.udemy.com/course/the-complete-cpp-developer-course/learn/lecture/19471670#overview
}