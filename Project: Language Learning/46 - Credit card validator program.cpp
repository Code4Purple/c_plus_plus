#include <iostream>
#include <string>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){
    // Used the Luhn Algorithm
    std::string cardNumber;
    int result = 0;

    // Use a valid test card number ending in 4
    //cardNumber = "6011000990139424"; // test card # (should be vaild)

    std::cout << "Enter the card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    
    if(result % 10 == 0){
        std::cout << "Card # is valid!\n";    
    }
    else {
        std::cout << "Card # is not valid!\n";
    }
    
    return 0;
}

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}

int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    // FIXED: Changed i+2 to i -= 2 to prevent an infinite loop
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}
