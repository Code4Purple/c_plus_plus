#include <iostream>

int main(){

    /*
        loop(){
            loop(){

            }
        }
    */

    // This Counts to 10 on the Same line in the console
    for(int i = 1; i <= 10; i++){
        std::cout << i << ' ';
    }

    // This will print out 3 rows of 1-10 count out to the console
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    // using input for nested loops from the user
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows: ";
    std::cin >> rows;

    std::cout << "How many columns: ";
    std::cin >> columns;

    std::cout << "What is the symbol: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}
