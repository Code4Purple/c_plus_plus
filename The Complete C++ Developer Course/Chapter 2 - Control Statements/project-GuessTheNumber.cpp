#include <iostream>
// Random Number Gen Requirements
#include <cstdlib>
#include <ctime>

int main(){

    int numberOfGuesses = 0;
    int numberToGuess;

    int userGuess;

    srand(time(nullptr));
    numberToGuess = rand() % 10 + 1; // Value will be ->  >=1 and <=100
    
    printf("Welcome to Guess the Number Game!\n");
    printf("Please Enter your Guess : ");
    std::cin >> userGuess;

    while(userGuess != numberToGuess){
        if (userGuess > 100 || userGuess < 1){
            printf("\nYou wasted a guess, it is only between 1 to 100.\n");
            printf("Try again: ");
            numberOfGuesses++;
            std::cin >> userGuess;
        }
        if (userGuess > numberToGuess){
            printf("\nYour Guess is too high!\n");
            printf("Try again: ");
            numberOfGuesses++;
            std::cin >> userGuess;
        }
        if (userGuess < numberToGuess){
            printf("\nYour Guess is too low!\n");
            printf("Try again: ");
            numberOfGuesses++;
            std::cin >> userGuess;
        }
        if (userGuess == numberToGuess){
            printf("\nCongratultions!\nYou Guessed the number %d correctly and with %d guesses.",numberToGuess,numberOfGuesses);
        }
    }


}
