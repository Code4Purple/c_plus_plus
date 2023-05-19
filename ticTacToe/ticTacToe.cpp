#include <iostream>

using namespace std;

void player(int x, int y){

};

int main()
{
    string gameBoard[5][5] = {
        {"X", "|", " ", "|", " "},
        {"_________________"},
        {"O", "|", " ", "|", " "},
        {"_________________"},
        {" ", "|", " ", "|", " "}};

    for (string i : gameBoard)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}