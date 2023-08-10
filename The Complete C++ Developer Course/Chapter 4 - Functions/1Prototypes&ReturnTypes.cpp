#include "include.h"

// Basic Function Setup
void printSomthing(){
    std::cout << "Print Basic Function!" << std::endl;
}

// Prototyping
void printPrototype();

void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);

int main(){
    printf("\n      Fucntions & Definitions\n");
    
    // Basic Function
    std::cout << "Basic Function Definition -> ";
    printSomthing();
    // Print the Prototyping Function
    std::cout << "ProtoTyping an Fucntion Definition -> ";
    printPrototype();

    // Setting Numbers to use for the functions
    int num1 = 120;
    int num2 = 500;

    // function ran to print without return type
    std::cout << "No return type -> ";
    printHello();
    // funtion setting the value to print out
    std::cout << "Set Number within a function -> ";
    printNumber(100);
    // intager taking the return value from a function as it's own set value
    std::cout << "Using a return function value as a set value -> ";
    int someData = giveMe10();
    std::cout << someData << std::endl;
    // Using a function to run a Script -> in this case adding two numbers together
    std::cout << "Using the set values within the parameters of the fucntion to complete a task -> ";
    int totalValue = addThese(num1, num2);
    std::cout << totalValue << std::endl;    
    // Using Parameters of one function into another 
    std::cout << "Using a Funtion to define a paramter of another function -> ";
    printNumber(addThese(100,50));  

}

void printPrototype(){
    std::cout << "Print Proto-Typing Function!" << std::endl;
}

void printHello(){
    std::cout << "Hello!" << std::endl;
}

void printNumber(int a){
    std::cout << "The Number is " << a << std::endl;
}

int giveMe10(){
    return 10;
}

int addThese(int num1, int num2 ){
    return num1 + num2;
}