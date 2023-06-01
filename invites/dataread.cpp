#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // stringstream

using namespace std;

// Global Defintions
ifstream DataStream1;
ofstream DataStream2;
string line;

void friendsSort()
{
    char fileName[20] = "ID.txt";
    // cout << "Enter the Name of File that would like to sort from to make a friends list: ";
    // cin >> fileName;
    char fileName2[20] = "temp.friends";
    // Open data Streams to read and write // start of friends store 1st
    DataStream1.open(fileName, ios::in);
    DataStream2.open(fileName2, ios::out | ios::trunc);
    // Making sure thses are the stream are open to be able start store
    if (DataStream1.is_open())
    {
        printf("%s is open \n", fileName);
        if (DataStream2.is_open())
        {
            printf("%s is open \n", fileName2);

            while (getline(DataStream1, line))
            {

                stringstream ss;
                ss.str(line);
                string item;
                while (getline(ss, item, ':'))
                {
                    // if (line.length() > 0)
                    if (item == "friends")
                    {
                        DataStream2 << line << endl;
                        printf("Data -> %s \n", line);
                    }
                }
                // cout << item << endl;
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
        printf("Error -> %s.close() FAILED \n", fileName2);
    }
    else
    {
        printf("%s.close() -> PASSED\n", fileName2);
    }
    DataStream1.close();
    if (DataStream1.is_open())
    {
        printf("Error -> %s.close() FAILED \n", fileName);
    }
    else
    {
        printf("%s.close() -> PASSED", fileName);
    }
}

int main()
{

    // making the temp data into the human readable files
    char fileName[20] = "temp.friends";
    char fileName2[20] = "friends_list.temp";
    // Open data Streams to read and write // start of friends document creation
    DataStream1.open(fileName, ios::in);
    DataStream2.open(fileName2, ios::out | ios::trunc);
    // Making sure these are the stream are open to be able start store
    if (DataStream1.is_open())
    {
        printf("%s.is_open() -> PASSED \n", fileName);
        if (DataStream2.is_open())
        {
            printf("%s.is_open() -> PASSED \n", fileName2);
            while (getline(DataStream1, line))
            {

                stringstream ss;
                ss.str(line);
                string item;
                while (getline(ss, item, ':'))
                {
                    // if (line.length() > 0)
                    if (item == "friends")
                    {
                        // << line << endl;
                        // printf("Data -> %s \n", line);
                        continue;
                    }

                    // cout << "Line  -> " << line << endl;
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
        printf("Error -> %s.close() FAILED \n", fileName2);
    }
    else
    {
        printf("%s.close() -> PASSED\n", fileName2);
    }
    DataStream1.close();
    if (DataStream1.is_open())
    {
        printf("Error -> %s.close() FAILED \n", fileName);
    }
    else
    {
        printf("%s.close() -> PASSED", fileName);
    }
}
