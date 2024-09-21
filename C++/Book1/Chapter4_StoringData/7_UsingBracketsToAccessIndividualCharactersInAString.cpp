#include <iostream>

using namespace std;


int main(){
    string name;
    name = "John Doe";

    // Using Brackets to Access Individual Characters in a String
    cout << "The name is                         : " << name << endl;
    cout << "The first character of the name is  : " << name[0] << endl;
    cout << "The second character of the name is : " << name[1] << endl;
    cout << "The third character of the name is  : " << name[2] << endl;
    cout << endl;


    // Changing the value of a character in a string
    cout << "The name is                         : " << name << endl;
    name[0] = 'A';
    cout << "Changing the first character to 'A' : " << name << endl;
    cout << endl;

    // Adding onto a string
    cout << "The name is                         : " << name << endl;
    name = name + " Smith";
    cout << "Adding ' Smith' to the name         : " << name << endl;
    cout << endl;

    // Adding two strings together
    string firstName, lastName, fullName;
    firstName = "Johnny";
    lastName = "Smith";
    fullName = firstName + " " + lastName;

    cout << "The first name is  : " << firstName << endl;
    cout << "The last name is   : " << lastName << endl;
    cout << "The full name is   : " << fullName << endl;

    return 0;
}