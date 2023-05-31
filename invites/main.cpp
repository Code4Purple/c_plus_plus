#include <iostream>
#include <fstream>
#include <array>
#include <stdio.h>

using namespace std;

struct
{
    char name[1000];
    char address[1000];
    char tag[10];
} invites;

fstream MySaveFile;
fstream MyTextFile;
int i = 0;
string userInput;

void add()
{
    MySaveFile.open("invites.data", ios::out | ios::app);
    do
    {
        cout << "What is the name of the recipient? " << endl;
        cin.getline(invites.name, sizeof(invites.name));
        cout << "What is the address of the recipient? " << endl;
        cin.getline(invites.address, sizeof(invites.address));
        cout << "Is the recipient under family or friends? " << endl;
        cin.getline(invites.tag, sizeof(invites.tag));
        MySaveFile << "Recipient's Name         : " << invites.name << endl;
        MySaveFile << "Recipient's Address      : " << invites.address << endl;
        MySaveFile << "Recipient's Relationship : " << invites.tag << endl;
        MySaveFile << " " << endl;

        cout << "Do you have anymore Recipients to write down" << endl;
        cin >> userInput;
        if (userInput != "yes" || userInput != "no")
        {
            cout << "yes or no" << endl;
            cin >> userInput;
        }
        if (userInput == "yes")
        {
            cin.sync();
            i++;
        }
        if (userInput == "no")
        {
            void close();
            break;
        }
    } while (i < 151);
}

void read()
{
    string MyDataStream;
    MySaveFile.open("invites.data", ios::in);
    while (getline(MySaveFile, MyDataStream))
    {
        cout << MyDataStream << endl;
    }
    void close();
}
void print()
{
    string data;
    ifstream MySaveFile{
        "invites.data"};
    ofstream MyTextFile{"printFile.text"};
    if (MySaveFile && MyTextFile)
    {
        while (getline(MySaveFile, data))
        {
            MyTextFile << data << "\n";
        }
        cout << "Done Text File Print..." << endl;
    }
    else
    {
        cout << "Cannot Read File" << endl;
    }
    MySaveFile.close();
    MyTextFile.close();
}
void remove()
{
    int status;
    char fileName[20];
    cout << "Enter the Name of File: ";
    cin >> fileName;
    status = remove(fileName);
    if (status == 0)
        cout << "\nFile Deleted Successfully!";
    else
        cout << "\nError Occurred!";
    cout << endl;
}
int main()
{
    // add();
    read();
    // remove();
    return 0;
}