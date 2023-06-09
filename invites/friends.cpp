#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream> // stringstream

using namespace std;

// Global Defintions
ifstream DataStream1;
ofstream DataStream2;
string line;

void friendsSort()
{
    char fileName[20];
    cout << "Enter the Name of the File that would like to sort from to make a friends list: ";
    cin >> fileName;
    char fileName2[20] = "friends.temp ";
    // Open data Streams to read and write // start of friends store 1st
    DataStream1.open(fileName, ios::in);
    DataStream2.open(fileName2, ios::out | ios::trunc);
    // Making sure thses are the stream are open to be able start store
    if (DataStream1.is_open())
    {
        printf("%s is open() \n", fileName);
        if (DataStream2.is_open())
        {
            printf("%s is open() \n", fileName2);

            while (getline(DataStream1, line))
            {

                stringstream ss;
                ss.str(line);
                string item;
                while (getline(ss, item, ':'))
                {
                    // if (line.length() > 0)
                    if (item == "friend" || item == "friends")
                    {
                        cout << "Data -> " << line << endl;
                        DataStream2 << line << endl;
                    }
                }
            }
        }
        else
        {
            printf(" ERROR -> Data Stream %s FAILED \n", fileName2);
        }
    }
    else
    {
        printf(" ERROR -> Data Stream %s FAILED \n", fileName);
    }
    DataStream2.close();
    if (DataStream2.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName2);
    }
    else
    {
        printf("%s.close() -> PASSED\n", fileName2);
    }
    DataStream1.close();
    if (DataStream1.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName);
    }
    else
    {
        printf("%s is close() -> PASSED", fileName);
    }
}
void friendsLabel()
{
    // making the temp data into the human readable files
    char fileName[20] = "friends.temp";
    char fileName2[20] = "friends_list.temp";
    // Open data Streams to read and write // start of friends document creation
    DataStream1.open(fileName, ios::in);
    DataStream2.open(fileName2, ios::out | ios::trunc);
    // Making sure these are the stream are open to be able start store
    if (DataStream1.is_open())
    {
        printf("%s is open() -> PASSED \n", fileName);
        if (DataStream2.is_open())
        {
            printf("%s is open() -> PASSED \n", fileName2);
            while (getline(DataStream1, line))
            {

                stringstream ss;
                ss.str(line);
                string item;
                while (getline(ss, item, ':'))
                {
                    // if (line.length() > 0)
                    if (item == "friends" || item == "friend")
                    {
                        // << line << endl;
                        // printf("Data -> %s \n", line);
                        continue;
                    }
                    if (item == "space")
                    {

                        DataStream2 << " " << endl;
                        continue;
                    }
                    cout << "Data -> " << item << endl;
                    DataStream2 << item << endl;
                }
            }
        }
        else
        {
            printf(" ERROR -> Data Stream %s FAILED \n", fileName2);
        }
    }
    else
    {
        printf(" ERROR -> Data Stream %s FAILED \n", fileName);
    }
    DataStream2.close();
    if (DataStream2.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName2);
    }
    else
    {
        printf("%s is close() -> PASSED\n", fileName2);
    }
    DataStream1.close();
    if (DataStream1.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName);
    }
    else
    {
        printf("%s is close() -> PASSED \n", fileName);
    }
}
void friendsDoc()
{
    char fileName[20] = "friends_list.temp";
    char fileName2[20] = "friends.text";
    DataStream1.open(fileName, ios::in);
    DataStream2.open(fileName2, ios::out | ios::trunc);
    int count = 0;
    vector<string> list = {};
    // string *collection = new string[wordsCollection];
    if (DataStream1.is_open())
    {
        printf("%s is open() -> PASSED \n", fileName);
        if (DataStream2.is_open())
        {
            printf("%s is open() -> PASSED \n", fileName2);

            while (getline(DataStream1, line))
            {
                list.push_back(line);
            }
            cout << "size " << list.size() << endl;
            printf("printing %d lines -> %s \n", list.size(), fileName2);

            for (int i = 0; i < list.size(); i++)
            {
                DataStream2 << list[i] << "\n";
            }
        }
        else
        {
            printf("Error Data-stream 2 %s -> FAILED", fileName2);
        }
    }
    else
    {
        printf("Error Data-stream 1 %s -> FAILED", fileName);
    }
    DataStream2.close();
    if (DataStream2.is_open())
    {
        printf("Error -> %s.close() FAILED \n", fileName2);
    }
    else
    {
        printf("%s is close() -> PASSED\n", fileName2);
    }
    DataStream1.close();
    if (DataStream1.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName);
    }
    else
    {
        printf("%s is close() -> PASSED \n", fileName);
    }
}
void friendsClean()
{
    int status;
    char fileName[20] = "friends.temp";
    char fileName2[20] = "friends_list.temp";
    DataStream1.open(fileName, ios::in);
    vector<string> list = {};
    // string *collection = new string[wordsCollection];
    if (DataStream1.is_open())
    {
        printf("%s is open() -> PASSED \n", fileName);

        printf("%s is open() -> PASSED \n", fileName2);

        while (getline(DataStream1, line))
        {
            list.push_back(line);
        }
        cout << fileName << " -> "
             << "size " << list.size() << endl;
    }
    else
    {
        printf("Error Data-stream %s -> FAILED", fileName);
    }
    DataStream1.close();
    if (DataStream1.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName);
    }
    else
    {
        printf("%s is close() -> PASSED \n", fileName);
    }

    DataStream1.open(fileName2, ios::in);
    // string *collection = new string[wordsCollection];
    if (DataStream1.is_open())
    {
        printf("%s is open() -> PASSED \n", fileName);

        printf("%s is open() -> PASSED \n", fileName2);

        while (getline(DataStream1, line))
        {
            list.push_back(line);
        }
        cout << fileName << " -> "
             << "size " << list.size() << endl;
        printf("printing %d lines -> %s \n", list.size(), fileName);
        for (int i = 0; i < list.size(); i++)
        {
            cout << list[i] << "\n";
        }
    }
    else
    {
        printf("Error Data-stream %s -> FAILED", fileName);
    }
    DataStream1.close();
    if (DataStream1.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName);
    }
    else
    {
        printf("%s is close() -> PASSED \n", fileName);
    }
    status = remove(fileName);
    if (status == 0)
    {
        printf(" %s Deleted Successfully! \n", fileName);
    }
    else
    {
        printf(" Error : %s is invaild  \n", fileName);
    }
    status = remove(fileName2);
    if (status == 0)
    {
        printf(" %s Deleted Successfully! \n", fileName);
    }
    else
    {
        printf(" Error : %s is invaild  \n", fileName);
    }
}
