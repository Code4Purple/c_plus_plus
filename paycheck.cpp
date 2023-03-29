#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int i = 0;
    string userInput;

    while (i < 20)
    {
        cout << "What feature would you like to use?" << endl;
        cin >> userInput;

        if (userInput == "exit()" || userInput == "exit")
        {
            cout << endl;
            cout << "...Ending Application" << endl;
            break;
        }
        if (userInput == "--help" || userInput == "help")
        {
            cout << endl;
            cout << "Help menu place holder" << endl;
            cout << endl;
        }
        if (userInput == "pay_raise" || userInput == "payraise")
        {
            cout << endl;

            // Array to store data
            double pay_raise[17] = {};

            // User Data
            cout << "What is your current hourly rate" << endl;
            cin >> pay_raise[0];
            cout << "What is your pay raise %?" << endl;
            cin >> pay_raise[1];

            // Processing for Hourly Wage
            pay_raise[2] = pay_raise[1] / 100;          // getting the decimal value of the %
            pay_raise[3] = pay_raise[0] * pay_raise[2]; // getting the % of the current wage increase
            pay_raise[4] = pay_raise[0] + pay_raise[3]; // adding the % to the current wage

            // Output for Hourly Wage
            cout << "------------------------------------------------------------------------" << endl;
            cout << "                          Pay Raise Summary                             " << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "                   | Hourly Wage |              " << endl;
            printf("The Current Hourly Wage                          : $ %.2f\n", pay_raise[0]);
            printf("The Pay Raise %                                  :   %.0f\n", pay_raise[1]);
            printf("The Pay Raise Increase Dallor Amount             : $ %.2f\n", pay_raise[3]);
            printf("The Hourly Wage after the Pay Raise is           : $ %.2f\n", pay_raise[4]);
            cout << endl; // Spacing

            // Processing for Weekly Income
            pay_raise[5] = pay_raise[0] * 40;           // Base-line Original Hourly Rate
            pay_raise[6] = pay_raise[4] * 40;           // Base-line New Hourly Rate
            pay_raise[7] = pay_raise[6] - pay_raise[5]; // Difference Between the Two

            // Output for Weekly Income
            cout << "                   | Weekly Income |              " << endl;
            printf("The Current Weekly Income                        : $ %.2f\n", pay_raise[5]);
            printf("The Pay Raise Weekly Income                      : $ %.2f\n", pay_raise[6]);
            printf("The Difference between the two Weekly Incomes    : $ %.2f\n", pay_raise[7]);
            cout << endl; // Spacing

            // Processing for Bi-Weekly Income
            pay_raise[8] = pay_raise[5] * 2;             // Base-line Original BI- eekly Amount
            pay_raise[9] = pay_raise[6] * 2;             // Base-line New Bi-Weekly Amount
            pay_raise[10] = pay_raise[9] - pay_raise[8]; // Difference Between the two

            // Output for Bi-Weeklypa
            cout << "                   | Bi-Weekly Income |              " << endl;
            printf("The Current Bi-Weekly Income                     : $ %.2f\n", pay_raise[8]);
            printf("The Pay Raise Bi-Weekly Income                   : $ %.2f\n", pay_raise[9]);
            printf("The Difference between the two Weekly Incomes    : $ %.2f\n", pay_raise[10]);
            cout << endl; // Spacing

            // Processing for Monthly Income
            pay_raise[11] = pay_raise[5] * 4;              // Base-line Orignal Weekly Amount
            pay_raise[12] = pay_raise[6] * 4;              // Base-line New Weekly Amount
            pay_raise[13] = pay_raise[12] - pay_raise[11]; // Difference Between the two

            // Output for Monthly Income
            cout << "                   | Monthly Income |              " << endl;
            printf("The Current Monthly Income                       : $ %.2f\n", pay_raise[11]);
            printf("The Pay Raise Monthly Income                     : $ %.2f\n", pay_raise[12]);
            printf("The Difference between the two Monthly Incomes   : $ %.2f\n", pay_raise[13]);
            cout << endl; // Spacing

            // Processing for Annual Income
            pay_raise[14] = pay_raise[5] * 52;             // Annual Income - Orignal Weekly * 52 weeks
            pay_raise[15] = pay_raise[6] * 52;             // Annual Income - New Weekly * 52 weeks
            pay_raise[16] = pay_raise[15] - pay_raise[14]; // Difference Between the two

            // Output for Annual Income
            cout << "                   | Annual Income |              " << endl;
            printf("The Current Annual Income                     : $ %.2f\n", pay_raise[14]);
            printf("The Pay Raise Annual Income                   : $ %.2f\n", pay_raise[15]);
            printf("The Difference between the two Annual Incomes : $ %.2f\n", pay_raise[16]);
            cout << endl; // Spacing
        }
        if (userInput == "paycheck")
        {
            // Array to the store the Data
            double paycheck[12] = {};

            // User Data
            cout << "What is current hourly wage?" << endl;
            cin >> paycheck[0];
            cout << "How many hours did you work last paycheck?" << endl;
            cin >> paycheck[1];

            // Processing for Overtime
            if (paycheck[0] > 80)
            {
                paycheck[2] = paycheck[1] - 80;                          // getting the value of how many hours above the normal 80 hours
                paycheck[3] = paycheck[0] * 80;                          // normal wage * max of 80 hours
                paycheck[4] = (paycheck[0] * paycheck[2]) * 0.5;         // $ value of the half time  on the over time hours only
                paycheck[5] = (paycheck[0] * paycheck[2]) * 1.0;         // $ value time for over time
                paycheck[6] = paycheck[3] + (paycheck[4] + paycheck[5]); // paycheck with overtime include
                paycheck[7] = paycheck[6] / 4.5;                         // Taxes value "Roughly"
                paycheck[8] = paycheck[6] - paycheck[7];                 // Net Payment

                // Output for Overtime
                cout << "---------------------------------------------- " << endl;
                cout << "|             Overtime Paycheck              | " << endl;
                cout << "---------------------------------------------- " << endl;
                printf("       Gross Income                : $ %.2f\n", paycheck[6]);
                printf("       Taxes (Roughly @ 4.5)       : $ %.2f\n", paycheck[7]);
                printf("       Net Payment (Roughly)       : $ %.2f\n", paycheck[8]);
                cout << endl;
            }
            else
            {
                // Paycheck without Overtime
                paycheck[9] = paycheck[0] * paycheck[1];   // $ value of Wage * hours
                paycheck[10] = paycheck[9] / 4.5;          // Taxes  value "Roughly"
                paycheck[11] = paycheck[9] - paycheck[10]; // Net Payment

                // Output
                cout << "---------------------------------------------- " << endl;
                cout << "|                  Paycheck                  | " << endl;
                cout << "---------------------------------------------- " << endl;
                printf("     Gross Income            : $ %.2f\n", paycheck[9]);
                printf("     Taxes (Roughly @ 4.5)   : $ %.2f\n", paycheck[10]);
                printf("     Net Payment             : $ %.2f\n", paycheck[11]);
                cout << endl;
            }
        }
    }
}