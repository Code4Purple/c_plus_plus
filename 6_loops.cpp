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

    printf("Booleans when printed out will always be %d for True or %d for False.\n", isTrue, isFalse);

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

    // switchs
    int day = 1;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;

        break;

    default:
        break;
    }

    // while loops
    while (day < 5)
    {
        cout << day << endl;
        day++;
    }
}