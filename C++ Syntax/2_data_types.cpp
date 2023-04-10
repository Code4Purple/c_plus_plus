#include <iostream>

using namespace std;

int main()
{
    /*
        Declaring Variables
            Syntax: type variableName = value;
        types of variables
            1. int    - stores numbers like "123" or "-123"
            2. float  - stores numbers like "-19.55" or "19.55" - up to 6-7 decimal digits
            3. double - stores numbers like "-19.55" or "19.55" - up to 15 decimals digits
            4. char   - stores single characters like 'A'
            5. string - stores text like "Hello World!"
            6. bool   - stores values states eaither as true or false
    */
    // int
    int myNum = 2;
    cout << "Int Data Type: ";
    cout << myNum << endl;
    ;

    // float
    float myNum3 = -200.1234567;
    cout << "Float Data Type: " << myNum3 << endl;

    // double
    double myNum2 = -200.123456789101112131415;
    cout << "Double Data Type: ";
    cout << myNum2 << endl;

    // char
    char myChar = 'A';
    cout << "Char Data Type: ";
    cout << myChar << endl;

    // string
    string myString = "string";
    cout << "String Data Type: ";
    cout << myString << endl;

    // bool
    bool myState = true;
    cout << "Bool Data Type: ";
    cout << myState;
    cout << " | 1 = true , 2 = false" << endl;

    // declaring many variables

    // different values but same type
    int x, y, z;
    x = 50;
    y = 51;
    z = 52;
    cout << "X = " << x;
    cout << " | Y = " << y;
    cout << " | Z = " << z << endl;
    ;

    // same value with same type
    int a, b, c;
    a = b = c = 10;
    cout << "A = " << a;
    cout << " | B = " << b;
    cout << " | C = " << c << endl;

    /*
        Const variables
            - can only be set once within the intail statement
                * const int d = 20; *
            - if try to change it like this
                * d = 21; *
            - you get an error like this
                * error: assignment of read-only variable 'd' *
    */
    const int d = 20;
    cout << "Const d value is: " << d << endl;
}