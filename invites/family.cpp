#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream> // stringstream

using namespace std;

// Global Defintions
ifstream DataStream3;
ofstream DataStream4;
string line2;

void familySort()
{
    char fileName[20];
    cout << "Enter the Name of the File that would like to sort from to make a family list: ";
    cin >> fileName;
    char fileName2[20] = "family.temp ";
    // Open data Streams to read and write // start of friends store 1st
    DataStream3.open(fileName, ios::in);
    DataStream4.open(fileName2, ios::out | ios::trunc);
    // Making sure thses are the stream are open to be able start store
    if (DataStream3.is_open())
    {
        printf("%s is open() \n", fileName);
        if (DataStream4.is_open())
        {
            printf("%s is open() \n", fileName2);

            while (getline(DataStream3, line2))
            {

                stringstream ss;
                ss.str(line2);
                string item;
                while (getline(ss, item, ':'))
                {
                    // if (line.length() > 0)
                    if (item == "family" || item == "fam")
                    {
                        cout << "Data -> " << line2 << endl;
                        DataStream4 << line2 << endl;
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
    DataStream4.close();
    if (DataStream4.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName2);
    }
    else
    {
        printf("%s.close() -> PASSED\n", fileName2);
    }
    DataStream3.close();
    if (DataStream3.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName);
    }
    else
    {
        printf("%s is close() -> PASSED", fileName);
    }
}
void familyLabel()
{
    // making the temp data into the human readable files
    char fileName[20] = "family.temp";
    char fileName2[20] = "family_list.temp";
    // Open data Streams to read and write // start of friends document creation
    DataStream3.open(fileName, ios::in);
    DataStream4.open(fileName2, ios::out | ios::trunc);
    // Making sure these are the stream are open to be able start store
    if (DataStream3.is_open())
    {
        printf("%s is open() -> PASSED \n", fileName);
        if (DataStream4.is_open())
        {
            printf("%s is open() -> PASSED \n", fileName2);
            while (getline(DataStream3, line2))
            {

                stringstream ss;
                ss.str(line2);
                string item;
                while (getline(ss, item, ':'))
                {
                    // if (line.length() > 0)
                    if (item == "family" || item == "fam")
                    {
                        // << line << endl;
                        // printf("Data -> %s \n", line);
                        continue;
                    }
                    if (item == "space")
                    {

                        DataStream4 << " " << endl;
                        continue;
                    }
                    cout << "Data -> " << item << endl;
                    DataStream4 << item << endl;
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
    DataStream4.close();
    if (DataStream4.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName2);
    }
    else
    {
        printf("%s is close() -> PASSED\n", fileName2);
    }
    DataStream3.close();
    if (DataStream3.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName);
    }
    else
    {
        printf("%s is close() -> PASSED \n", fileName);
    }
}
void familyDoc()
{
    char fileName[20] = "family_list.temp";
    char fileName2[20] = "family.txt";
    DataStream3.open(fileName, ios::in);
    DataStream4.open(fileName2, ios::out | ios::trunc);
    int count = 0;
    vector<string> list = {};
    // string *collection = new string[wordsCollection];
    if (DataStream3.is_open())
    {
        printf("%s is open() -> PASSED \n", fileName);
        if (DataStream4.is_open())
        {
            printf("%s is open() -> PASSED \n", fileName2);

            while (getline(DataStream3, line2))
            {
                list.push_back(line2);
            }
            cout << "size " << list.size() << endl;
            printf("printing %d lines -> %s \n", list.size(), fileName2);

            for (int i = 0; i < list.size(); i++)
            {
                DataStream4 << list[i] << "\n";
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
    DataStream4.close();
    if (DataStream4.is_open())
    {
        printf("Error -> %s.close() FAILED \n", fileName2);
    }
    else
    {
        printf("%s is close() -> PASSED\n", fileName2);
    }
    DataStream3.close();
    if (DataStream3.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName);
    }
    else
    {
        printf("%s is close() -> PASSED \n", fileName);
    }
}
void familyClean()
{
    int status;
    char fileName[20] = "family.temp";
    char fileName2[20] = "family_list.temp";
    DataStream3.open(fileName, ios::in);
    vector<string> list = {};
    // string *collection = new string[wordsCollection];
    if (DataStream3.is_open())
    {
        printf("%s is open() -> PASSED \n", fileName);

        printf("%s is open() -> PASSED \n", fileName2);

        while (getline(DataStream3, line2))
        {
            list.push_back(line2);
        }
        cout << fileName << " -> "
             << "size " << list.size() << endl;
    }
    else
    {
        printf("Error Data-stream %s -> FAILED", fileName);
    }
    DataStream3.close();
    if (DataStream3.is_open())
    {
        printf("Error -> %s is close() FAILED \n", fileName);
    }
    else
    {
        printf("%s is close() -> PASSED \n", fileName);
    }

    DataStream3.open(fileName2, ios::in);
    // string *collection = new string[wordsCollection];
    if (DataStream3.is_open())
    {
        printf("%s is open() -> PASSED \n", fileName);

        printf("%s is open() -> PASSED \n", fileName2);

        while (getline(DataStream3, line2))
        {
            list.push_back(line2);
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
    DataStream3.close();
    if (DataStream3.is_open())
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
