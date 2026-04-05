#include <iostream>
#include <conio.h>

using namespace std;

class Colors {
public:
    enum ColorEnum {
        RED,
        GREEN,
        BLUE 
    };
    Colors(Colors::ColorEnum color);
    string AsString();
protected:
    ColorEnum value;
};


Colors::Colors(Colors::ColorEnum init) {
    value = init;
}

string Colors::AsString() {
    switch (value) {
        case RED:
            return "Red";
        case GREEN:
            return "Green";
        case BLUE:
            return "Blue";
        default:
            return "Invalid color";
    }
}

int main() {
    /*
    Colors InkColor(Colors::RED);
    cout << InkColor.AsString() << endl;
    */

    cout << "Please select a color from the list below:" << endl;
    cout << "1. Red" << endl;
    cout << "2. Green" << endl;
    cout << "3. Blue" << endl;

    cout << "Enter your selection: ";
    char selection = _getch();

    while(selection < '1' || selection > '3') {
        cout << "\nInvalid selection. Please try again." << endl;
        cout << "Enter your selection: ";
        selection = _getch();
    }

    Colors::ColorEnum selectedColor;
    switch (selection) {
        case '1':
            selectedColor = Colors::RED;
            break;
        case '2':
            selectedColor = Colors::GREEN;
            break;
        case '3':
            selectedColor = Colors::BLUE;
            break;
    }
    Colors InkColor(selectedColor);
    cout << "\nYou selected: " << InkColor.AsString() << endl;
    

    return 0;
}