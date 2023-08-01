#include <iostream>
#include <string>
using namespace std;

int main(){
    
    printf("\n      Project: Average of Three\n");
    double average;
    double number1;
    double number2;
    double number3;

    string consoleText = "Please Enter a real number: ";
    string consoleText2 = "Now, Enter another real number: ";
    string consoleText3 = "Now, enter the final real number: ";

    string consoleOutText = "Average is ";

    cout << consoleText ;
    cin >> number1;
    cout << consoleText2;
    cin >> number2;
    cout << consoleText3;
    cin >> number3;

    average = (number1 + number2 + number3) / 3;

    cout << consoleOutText << average << endl;
}