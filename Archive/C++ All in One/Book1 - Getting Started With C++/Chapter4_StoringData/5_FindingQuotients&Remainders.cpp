#include <iostream>

using namespace std;


int main(){

    int firstNumber, secondNumber, quotient, remainder;
    cout << "Dividing 28 by 14." << endl;
    firstNumber = 28;
    secondNumber = 14;

    quotient = firstNumber / secondNumber;
    remainder = firstNumber % secondNumber;
    cout << "Quotient  : " << quotient << endl;
    cout << "Remainder : " << remainder << endl;
    cout << endl;

    cout << "Dividing 32 by 6." << endl;
    firstNumber = 32;
    secondNumber = 6;

    quotient = firstNumber / secondNumber;
    remainder = firstNumber % secondNumber;

    cout << "Quotient  : " << quotient << endl;
    cout << "Remainder : " << remainder << endl;

    return 0;
}