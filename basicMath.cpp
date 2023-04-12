#include <iostream>

using namespace std;

void TimeTable(int x, int y)
{
    for (int i = 0; i < y + 1; i++)
    {
        printf("%d * %d = %d", x, i, x * i);
        cout << endl;
    }
};

void AddTable(int x, int y)
{
    for (int i = 0; i < y + 1; i++)
    {
        printf("%d + %d = %d", x, i, x + i);
        cout << endl;
    }
};

void SubTable(int x, int y)
{
    if (x == 0)
    {
        for (int i = 0; i < y + 1; i++)
        {
            printf("%d - %d = %d", i, x, i - x);
            cout << endl;
        }
    }
    else
    {
        for (int i = x; i < y + 1; i++)
        {
            printf("%d - %d = %d", i, x, i - x);
            cout << endl;
        }
    }
};

int main()
{
    string userInput;
    int userInputX;
    int userInputY;

    cin >> userInput;

    if (userInput == "Multiplication_Table" || userInput == "timesTable")
    {
        cout << "What multiplication table do want to make?" << endl;
        cin >> userInputX;
        cout << "How big do you want the multiplication table to be?" << endl;
        cin >> userInputY;
        TimeTable(userInputX, userInputY);
    }

    if (userInput == "Addition_Table" || userInput == "addTable")
    {
        cout << "What addition table do want to make?" << endl;
        cin >> userInputX;
        cout << "How big do you want to make the table?" << endl;
        cin >> userInputY;
        AddTable(userInputX, userInputY);
    }
    if (userInput == "Subtraction_Table" || userInput == "subTable")
    {
        cout << "What subtraction table do you want to make?" << endl;
        cin >> userInputX;
        cout << "How big do you want to make the table?" << endl;
        cin >> userInputY;
        SubTable(userInputX, userInputY);
    }
    return 0;
}