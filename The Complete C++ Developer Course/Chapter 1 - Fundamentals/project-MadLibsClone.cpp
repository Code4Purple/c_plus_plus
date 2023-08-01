#include <iostream>
#include <string>
using namespace std;

int main(){
    printf("\n      Project: MadLibs Clone\n");
    // all Midlibs 
    string adjective1;
    string girlsName;
    string adjective2;
    string occupation1;
    string placeName;
    string clothing;
    string hobby;
    string adjective3;
    string occupation2;
    string boysName;
    string mansName;

    // UserInput
    cout << "Enter an adjective     : ";
    cin >> adjective1;
    cout << "Enter a girls name     : ";
    cin >> girlsName;
    cout << "Enter an adjective     : ";
    cin >> adjective2;
    cout << "Enter an occupation    : ";
    cin >> occupation1;
    cout << "Enter a name of a place: ";
    cin >> placeName;
    cout << "Enter a clothing item  : ";
    cin >> clothing;
    cout << "Enter a hobby          : ";
    cin >> hobby;
    cout << "Enter an adjective     : ";
    cin >> adjective3;
    cout << "Enter an occupation    : ";
    cin >> occupation2;
    cout << "Enter a boys name      : ";
    cin >> boysName;
    cout << "Enter a mans name      : ";
    cin >> mansName;

    // Output
    cout << endl;
    cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 << " " << occupation1 << "in the Kingdom of " << placeName << "." << endl;
    cout << "She loved to wear "<< clothing << " " << " and " << hobby << ". ";
    cout << "She wanted to marry the " << adjective3 << " " << occupation2 << " named " << boysName << " but her father, King " << mansName << " forbid her from seeing him.";
}