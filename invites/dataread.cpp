#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // stringstream

using namespace std;

int main()
{
    ifstream genData{"ID.txt"};
    ofstream friData{"fri.text"};
    ofstream famData{"fam.txt"};

    string line;
    while (getline(genData, line))
    {
        stringstream ss;
        ss.str(line);
        string item;
        while (getline(ss, item, ':'))
        {
            // if (line.length() > 0)
            if (item == "friends")
            {
                friData << line << endl;
                // cout << line << endl;
            }
        }

        // cout << item << endl;
    }
    return 0;
}
