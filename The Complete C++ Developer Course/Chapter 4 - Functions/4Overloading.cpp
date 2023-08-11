#include "include.h"

int getResult(int num1, int num2);
std::string getResult(std::string str1, std::string str2);

int main(){

    printf("\n      Function Overloading\n");
    int resultNum = getResult(30,20);
    std::string resultName = getResult("Peter", "Parker");     

    std::cout << "Result Number is " << resultNum << std::endl;
    std::cout << "Result Name is " << resultName << std::endl;

    return 0;
}

int getResult(int num1, int num2){
    return num1 + num2;
}
std::string getResult(std::string str1, std::string str2){
    return str1 + " " + str2;
}