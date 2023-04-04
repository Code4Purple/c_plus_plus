#include <iostream>

using namespace std;

int main()
{

    /*
        Booleans - some word people switch between while coding in their minds to help them understand it
            YES / NO
            ON / OFF
            TRUE / FALSE
    */

    // Booleans
    bool isTrue = true;
    bool isFalse = false;

    printf("Booleans when printed out will always be %lu for True or %lu for False.\n", isTrue, isFalse);

    /*
        Conditions
            if
            else
            else if
            short hand of all of those

            Short handed : variable = (condition) ? expressionTrue : expressionFalse;
    */
    int x = 5;
    int y = 2;
    if (x > y)
    {
        cout << "x > y" << endl;
    }
    else if (x = y)
    {
        cout << "x = y" << endl;
    }
    else
    {
        cout << "x < y" << endl;
    }
    // https://www.w3schools.com/cpp/cpp_switch.asp
}