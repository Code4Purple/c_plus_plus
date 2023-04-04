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
    cout << "while loop" << endl;
    while (day < 5)
    {
        cout << day << endl;
        day++;
    }

    // do while loops
    /* The example below uses a do/while loop.
    The loop will always be executed at least once, even if the condition is false,
    because the code block is executed before the condition is tested: */

    int i = 0;
    cout << "Do while Loop" << endl;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 6);

    // https://www.w3schools.com/cpp/cpp_for_loop.asp
}