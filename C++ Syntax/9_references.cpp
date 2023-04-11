#include <iostream>

using namespace std;

/*
    References topics
        Creating References
        Memory Adresses
*/

int main()
{
    // Creating References
    string food = "Pizza";
    string &meal = food;

    cout << endl;
    cout << food << "\n"; // Outputs Pizza
    cout << meal << "\n"; // Outputs Pizza

    return 0;
}