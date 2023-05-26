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
    string helpMenu[8] = {};
    helpMenu[0] = "---------------------------------------------------------------------";
    helpMenu[1] = "                             Help Menu";
    helpMenu[2] = "---------------------------------------------------------------------";
    helpMenu[3] = "--exit       ->  exits out of any menus or appliction";
    helpMenu[4] = "--help       ->  gives you the help menu";
    helpMenu[5] = "timesTable   ->  allows you to pull up the Muliplication Table menu";
    helpMenu[6] = "addTable     ->  allows you to pull up the Addiction Table menu";
    helpMenu[7] = "subTable     ->  allows you to pull up the Subtraction Table menu";
    while (userInput == "--help")
    {
        for (int h = 0; h < 8; h++)
        {
            cout << helpMenu[h] << endl;
        }

        cin >> userInput;

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

    string array[4] = {};
    array[0] = ("Welcome to the Math Tables Appliction.");
    array[1] = ("We Can provide you with Muliplication_Table, Addiction_Table , and Subtraction_Table.");

    cout << array[0] << endl;

    while (userInput == "--exit" || userInput == "exit" || startApp == "true")
    {

        cout << "What table can we build for you today?" << endl;
        cin >> userInput;

        // Help Menu Funtion - if Statement
        if (userInput == "--help")
        {
            HelpMenu(userInput);
        }
        if (userInput == "--exit")
        {
            cout << "...exited the Table Appliction" << endl;
            break;
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
