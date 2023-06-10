#include <iostream> // cout endl;
#include <fstream>  // file editor
// #include <stdio.h>
// #include <map>     // map
// #include <iomanip> // ws
// #include <sstream> // stringstream
#include "friends.cpp"
#include "family.cpp"

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
            cout << "Is the recipient under family or friend? " << endl;
            cin.getline(invites.tag, sizeof(invites.tag));
            MySaveFile << invites.tag << ":";
            MySaveFile << invites.name << ":";
            MySaveFile << invites.address << ":";
            MySaveFile << "space" << endl;

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
    int i = 0;
    char fileName[20];
    while (i < 11)
    {
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
        cout << "Do you have anymore files to delete? ";
        cin >> userInput;
        if (userInput == "yes")
        {
            i++;
        }
        if (userInput == "no")
        {
            break;
        }
        else
        {
            printf("Error Max Loop");
        }
    }
}
// User Functions
void list()
{
    cout << "Commands available to use are... "
         << "remove, "
         << "add, "
         << "read, "
         << "copy, "
         << "sort, "
         << "exit" << endl;
}

void await()
{
    for (int wait = 0; wait < 2147483647; wait++)
    {
    }
}
int main()
{
    int main = 0;
    await();
    cout << "Welcome to the Wedding Invites App." << endl;
    await();
    await();
    list();
    await();
    while (main < 100)
    {
        cout << "What function would you like to use? ";
        await();
        cin >> userInput;
        await();
        if (userInput == "remove")
        {
            await();
            remove();
            await();
            main++;
        }
        if (userInput == "add")
        {
            await();
            add();
            await();
            main++;
        }
        if (userInput == "read")
        {
            await();
            read();
            await();
            main++;
        }
        if (userInput == "copy")
        {
            await();
            copy();
            await();
            main++;
        }
        if (userInput == "list")
        {
            await();
            list();
            await();
            main++;
        }
        if (userInput == "exit")
        {
            cout << "closing app" << endl;
            break;
        }
        if (userInput == "sort")
        {
            friendsSort();
            await();
            friendsLabel();
            await();
            friendsDoc();
            await();
            await();
            await();
            familySort();
            await();
            familyLabel();
            await();
            familyDoc();
            await();
            await();
            await();
            friendsClean();
            await();
            await();
            await();
            familyClean();
            await();
            await();
            await();
            main++;
        }
    }
    return 0;
}