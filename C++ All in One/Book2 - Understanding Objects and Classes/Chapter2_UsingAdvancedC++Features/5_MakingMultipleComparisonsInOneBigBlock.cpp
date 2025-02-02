#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    // Display a list of options
    cout << "Please select an option from the list below:" << endl;
    cout << "1. Apples" << endl;
    cout << "2. Bananas" << endl;
    cout << "3. Lobster" << endl;

    // Obtain the user's selection
    cout << "Enter your selection: ";
    char selection = _getch();


    // Continue getting user selections until a valid one is entered
    while (selection < '1' || selection > '3') {
        cout << "\nInvalid selection. Please try again." << endl;
        cout << "Enter your selection: ";
        selection = _getch();
    }

    // Display the user's selection
    cout << "\nYou have selected option " << selection << "." << endl;
    switch (selection) {
        case '1':
            cout << "You have selected Apples." << endl;
            break;
        case '2':
            cout << "You have selected Bananas." << endl;
            break;
        case '3':
            cout << "You have selected Lobster." << endl;
            break;
    }

    return 0;
}