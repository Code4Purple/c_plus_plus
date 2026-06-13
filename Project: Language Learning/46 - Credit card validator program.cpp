#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){

    // Used the Luhn Alogorithm

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    
    
    return 0;
}

int getDigit(const int number){
    return 0;
}
int sumOddDigits(const std::string cardNumber){
    return 0;
}
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;

    // Bookmark :  https://youtu.be/-TkoO8Z07hI?t=15158
    
}
