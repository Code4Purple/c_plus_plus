#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // stringstream

using namespace std;

int main()
{
    ifstream invitesData;
    ofstream friendsData;
    ofstream familyData;

    invitesData.open("ID.txt", ios::in);
    friendsData.open("FD.txt", ios::out | ios::trunc);
    familyData.open("Fam.txt", ios::out | ios::trunc);

    string line;
    stringstream ss;
    ss.str(line);
    string item;
    while (getline(ss, item, ':'))
    {

        if (line.length() > 0)
        {
            if (item == "family")
            {
                if (friendsData)
                {
                    friendsData.close();
                }
                familyData.open("Fam.txt", ios::out | ios::trunc);
                continue;
            }
            if (item == "friends")
            {
                continue;
            }
            cout << item << endl;
        }
    }
}
