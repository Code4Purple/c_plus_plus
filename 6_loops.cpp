#include <iostream>

using namespace std;

int main()
{

    /*
        6_loops topics:
            Booleans
            Conditions
            Switchs
            while loops
            do while loops
            for loops
            for - each loops
            breaks & continues
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

    // For loop
    cout << "Basic for loop" << endl;
    for (int k = 0; k < 10; k++)
    {
        cout << k << endl;
    }

    // Nested For loops
    cout << "Nested For Loop" << endl;
    for (int p = 0; p <= 2; p++)
    {
        cout << "Outer: " << p << "\n"; // executes 2 times

        for (int o = 0; o <= 3; o++)
        {
            cout << "Inner: " << o << "\n"; // excutes 6 times (2 * 3)
        }
    }

    // for-each loop
    int listNumbers[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "For each Loop" << endl;
    for (int t : listNumbers)
    {
        cout << t << "\n";
    }

    // Breaks and Continue
    cout << "Breaks & Continue" << endl;
    for (int t : listNumbers)
    {
        cout << "Normal Output : " << t << endl;
        if (t == 5)
        {
            cout << "Continues after : " << t << endl;
            continue;
        }
        if (t == 9)
        {
            cout << "Breaks after : " << t << endl;
            break;
        }
    }
}