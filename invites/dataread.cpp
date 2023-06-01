#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // stringstream

using namespace std;

int main()
{
    ifstream invitesData{"ID.txt"};

    string line;
    while (getline(invitesData, line))
    {
        stringstream ss;
        ss.str(line);
        string item;
        while (getline(ss, item, ':'))
        {
            // if (line.length() > 0)
            if (item == "family" || item == "friends")
            {
                continue;
            }
            cout << item << endl;
        }
    }
}