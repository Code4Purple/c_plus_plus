#include "include.h"

int main(){

    int myInt;
    myInt = 15;
    cout << "Data for myInt -> " << myInt << endl;
    

    double myDouble;
    myDouble = 3.1456;
    cout << "Data for myDouble -> " << myDouble << endl;
    

    char name[10];
    cout << "What is your first name? ";
    cin >> name;
    

    string lastName;
    cout << "What is your last name? ";
    cin >> lastName;
    

    cout << "Data for Char & String together -> " << name << " " << lastName << endl;
    cout << "                           * Note *                            " << endl; 
    cout << "You can also you the Char data type as an array of letters as well." << endl;
    cout << "For example -> First letter of the first name is ---> " << name[0] << endl;
   

    bool isRaining = true;
    cout << "  Bool DataTypes " << endl;
    cout << "  Without boolalpha --> "<< isRaining << endl;
    cout << "  With boolalpha    --> "<< boolalpha << isRaining << endl;


    return 0;
}