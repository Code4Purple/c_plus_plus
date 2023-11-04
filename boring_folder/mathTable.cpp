#include <iostream>
#include <vector>

int table_number;
int table_option;

void printTable(int print_option, int table_number);
void timeSpacing(int max_count);

void timeSpacing(int max_count){
    for(int i = 0; i < max_count; i++){
        // space
    }
}

void additionTable(int maxNumber){
    printTable(1, maxNumber);
    for(int i = 0; i < maxNumber; i++){
        printf("        %d + %d = %d\n", maxNumber, i , maxNumber + i);
    }
}

void multiplicationTable(int maxNumber){
    printTable(2, maxNumber);
    for(int i = 0; i < maxNumber; i++){
        printf("        %d * %d = %d\n", maxNumber, i , maxNumber * i);
    }
}

void printTable(int print_option, int table_number){
    // Reset Print out Statement
    if (print_option = 0){
        // Leave void for now
    }
    // Print for Addition Table Title
    if (print_option = 1){
        std::cout << "------------------------------" << std::endl;
        printf("|   Addition Table of %d    |\n", table_number);
        std::cout << "------------------------------" << std::endl;
    }
    if (print_option = 2){
        std::cout << "------------------------------" << std::endl;
        printf("|   Multiplication Table of %d    |\n", table_number);
        std::cout << "------------------------------" << std::endl;
    }
}

int main(){
   
}