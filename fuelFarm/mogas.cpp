#include "include.h"

vector<vector<double>> mogas = {
    {0.000, 0},
    {0.125, 0},
    {0.250, 1},
    {0.375, 1},
    {0.500, 2},
    {0.625, 3},
    {0.750, 3},
    {0.875, 4},
    {1.000, 1}};

void print()
{
    cout << "Test Print of Mogas Data to the console!" << endl;
    await(715827882);
    cout << "Size of the Mogas Array -> " << mogas.size() << endl;
    for (int i = 0; i < mogas.size(); i++)
    {
        for (int j = 0; j < mogas[i].size(); j++)
        {
            cout << mogas[i][j] << endl;
            await(715827882);
        }
    }
}

void search(int x)
{
}

int main()
{
    print();
}