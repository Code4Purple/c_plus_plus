#include <iostream>
#include <sstream> // for istringstream, ostringstream
#include <conio.h> // for getch()

using namespace std;

int StringToNumber(string MyString){
    // Holds the string
    istringstream converter(MyString);
    // Holds the integer result
    int Result;

    // Perform the conversion and return the result
    converter >> Result;
    return Result;
}

string EnterOnlyNumbers() {
    string numAsString = ""; // Holds the numeric string
    char ch = getch(); // Obtains a single character.

    // Keep requesting characters until the user presses Enter.
    while(ch != '\r') { // \r is the enter key.
        // Add characters only if they are numbers.
        if(ch >= '0' && ch <= '9'){
            cout << ch;
            numAsString += ch;
        }

        // Get the next character from the user
        ch = getch();
    }
        return numAsString;
}

string EnterPassword() {
    // Holds the password string
    string numAsString = "";
    // Obtains a single character.
    char ch = getch();

    // Keep requesting characters until the user presses Enter.
    while(ch != '\r'){// \r is the enter key.
        // Display an asterisk instead of the actual character.
        cout << "*";
        // Add the character to the password string.
        numAsString += ch;
        // Get the next character from the user.
        ch = getch();
    }

    return numAsString;
}

int main(){
    // Just a basic name-entering 
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " << name << endl;

    // Now you are asked to enter a number,
    // but the computer allows you to enter anything!
    int x;
    cout << endl;
    cout << "Enter a number, any number! ";
    cin >> x;
    cout << "You chose " << x << endl;

    // This time you can only enter the number.
    cout << endl;
    cout << "This time you can only enter a number!" << endl;
    cout << "Enter a number, any number! ";
    string entered = EnterOnlyNumbers();
    int num = StringToNumber(entered);
    cout << endl << "You enterd " << num << endl;

    // Now enter a password!
    cout << endl;
    cout << "Enter a password: ";
    string password = EnterPassword();
    cout << endl << "Shhhh, it's " << password << endl;
    return 0;
}

