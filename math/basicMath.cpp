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
void HelpMenu(string userInput)
{
    cout << "help menu" << endl;
    cout << "type -> --exit <- to leave the help menu" << endl;
    while (userInput == "--help")
    {
        cin >> userInput;

        cout << "type -> --exit <- to leave the help menu" << endl;
        if (userInput == "exit" || userInput == "--exit")
        {
            break;
        }
    }
};
int main()
{
    string userInput;
    string startApp = "true";
    int userInputX;
    int userInputY;

    cout << "Welcome to the Math Tables Appliction" << endl;
    cout << "We Can provide you with Muliplication_Table, Addiction_Table , "
         << "and Subtraction_Table." << endl;
    cout << "We do provide a help table if you need with the command --help." << endl;

    while (userInput == "--exit" || userInput == "exit" || startApp == "true")
    {

        cout << "What table can we build for you today?" << endl;
        cin >> userInput;

        // Help Menu Funtion - if Statement
        if (userInput == "--help")
        {
            HelpMenu(userInput);
        }
        if (userInput == "Multiplication_Table" || userInput == "timesTable")
        {
            cout << "What multiplication table do want to make?" << endl;
            cin >> userInputX;
            cout << "How big do you want the multiplication table to be?" << endl;
            cin >> userInputY;
            if (userInputY < 0)
            {
                cout << "*Unable to fill request due to being a negative table size*" << endl;
            }
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
    }
    return 0;
}
