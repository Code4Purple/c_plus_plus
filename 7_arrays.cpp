#include <iostream>

using namespace std;

int main()
{
    /*
        7_arrays topics
            Arrays with Strings
            Arrays with numbers
            for each loop printing out the total array Vs for loops
            muiltidimensional arrays
    */

    // String Arrays
    string cars[4] = {"BMW, GMC, FORD, LAMBO"};
    // For each loop : is great when you are not changing data and just printing the array
    cout << endl;
    cout << "For-each Loop : "
         << "Just Prints out the entire Array." << endl;
    for (string i : cars)
    {
        cout << i << " ";
    }
    cout << endl;

    // Arrays with numbers
    int myList[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // For each loop
    cout << endl;
    cout << "For-each Loop : "
         << "Just Prints out the entire Array." << endl;
    for (int u : myList)
    {
        cout << u << " ";
    }
    cout << endl;
    // for loop
    cout << endl;
    cout << "For Loop :" << endl;
    for (int t = 0; t < sizeof(myList); t++)
    {
        cout << t << " ";
        if (t == 10)
        {
            break;
        }
    }
    cout << endl;

    // Multi-Dimensional Arrays
    // 2 by 4 Array
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    cout << endl;
    cout << "Printing out item [0][2] : " << letters[0][2] << endl;
    // 2 by 2 by 2
    string letter2[2][2][2]{
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};

    cout << endl;
    cout << "Printing out item [1][2][1] : " << letter2[1][2][1] << endl;

    // changing elements in the array
    letter2[1][2][1] = "Z";
    cout << endl;
    cout << "Printing out new item at [1][2][1] : " << letter2[1][2][1] << endl;
    letter2[1][2][1] = "B";

    // Looping thought Muilti-Dimensional Array
    // 2D Loop
    cout << endl;
    cout << "Looping though a 2-Dimensional Array (2D)" << endl;
    for (int q = 0; q < 2; q++)
    {
        for (int w = 0; w < 4; w++)
        {
            cout << letters[q][w] << " ";
        }
    }
    // 3D Loop
    cout << endl;
    cout << "Looping though a 3-Dimensional Array (3D)" << endl;
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            for (int c = 0; c < 2; c++)
            {
                cout << letter2[a][b][c] << " ";
            }
        }
    }
    cout << endl;
    cout << endl;
}
