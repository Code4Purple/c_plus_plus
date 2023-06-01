#include <iostream> // cout endl;
#include <fstream>  // file editor
// #include <stdio.h>
// #include <map>     // map
// #include <iomanip> // ws
// #include <sstream> // stringstream

using namespace std;

struct
{
    char name[1000];
    char address[1000];
    char tag[10];
} invites;

fstream MySaveFile;
fstream MyTextFile;

// int i = 0;
string userInput;

void add()
{
    int i = 0;
    char fileName[20];
    cout << "Enter the Name of File that would like to create or add to: ";
    cin >> fileName;
    MySaveFile.open(fileName, ios::out | ios::app);

    if (MySaveFile.is_open())
    {
        do
        {
            cin.ignore();
            cout << "What is the name of the recipient? " << endl;
            cin.getline(invites.name, sizeof(invites.name));
            cout << "What is the address of the recipient? " << endl;
            cin.getline(invites.address, sizeof(invites.address));
            cout << "Is the recipient under family or friends? " << endl;
            cin.getline(invites.tag, sizeof(invites.tag));
            MySaveFile << invites.tag << endl;
            MySaveFile << invites.name << endl;
            MySaveFile << invites.address << endl;
            MySaveFile << " " << endl;

            cout << "Do you have anymore Recipients to write down" << endl;
            cin >> userInput;
            if (userInput == "yes")
            {
                // cin.sync();
                i++;
            }
            if (userInput == "no")
            {
                // cin.ignore();
                MySaveFile.close();
                printf("FIle %s has been closed\n ", fileName);
                break;
            }
        } while (i < 151);
    }
    else
    {
        printf("/n Failed to open file %s", fileName);
    }
}

void read()
{
    char fileName[20];
    cout << "Enter the Name of File that would like to read from: ";
    cin >> fileName;
    string MyDataStream;
    MySaveFile.open(fileName, ios::in);
    if (MySaveFile.is_open())
    {
        while (getline(MySaveFile, MyDataStream))
        {
            cout << MyDataStream << endl;
        }
        void close();
        printf("Finished reading %s \n", fileName);
    }
    else
    {
        printf("Failed to read %s \n", fileName);
    }
}
void copy()
{
    string data;
    char fileName[20];
    cout << "Enter the Name of File you would like to copy from: ";
    cin >> fileName;
    ifstream MySaveFile{fileName};
    char fileName2[20];
    cout << "What file would you like to copy to: ";
    cin >> fileName2;
    ofstream MyTextFile{fileName2};
    if (MySaveFile && MyTextFile)
    {
        while (getline(MySaveFile, data))
        {
            MyTextFile << data << "\n";
        }
        // cout << "Done Text File Print..." << endl;
        printf("Copied %s to %s \n", fileName, fileName2);
    }
    else
    {
        printf("Cannot Copy File %s to %s", fileName, fileName2);
    }
    MySaveFile.close();
    MyTextFile.close();
    // printf("Copied %s to %s \n", fileName, fileName2);
}
void remove()
{
    int status;
    char fileName[20];
    cout << "Enter the Name of the file you would like to remove: ";
    cin >> fileName;
    status = remove(fileName);
    if (status == 0)
    {
        printf("\n %s Deleted Successfully! \n", fileName);
    }
    else
    {
        printf("\n Error : %s is invaild  \n", fileName);
    }
}
void splitInvites()
{
}
// User Functions
void list()
{
    cout << "Commands available to use are "
         << "remove, "
         << "add, "
         << "read, "
         << "copy, "
         << "exit" << endl;
}
int main()
{
    int main = 0;
    cout << "Welcome to the Wedding Invites App." << endl;
    cout << "You can use the functions of... "
         << "remove, "
         << "add, "
         << "read, "
         << "copy" << endl;
    while (main < 100)
    {
        cout << "What function would you like to use? ";
        cin >> userInput;
        if (userInput == "remove")
        {
            remove();
            main++;
        }
        if (userInput == "add")
        {
            add();
            main++;
        }
        if (userInput == "read")
        {
            read();
            main++;
        }
        if (userInput == "copy")
        {
            copy();
            main++;
        }
        if (userInput == "list")
        {
            list();
            main++;
        }
        if (userInput == "exit")
        {
            cout << "closing app" << endl;
            break;
        }
        if (userInput == "beta")
        {
            splitInvites();
            main++;
        }
    }
    return 0;
}