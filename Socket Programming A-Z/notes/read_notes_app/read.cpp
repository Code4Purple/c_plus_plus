#include "read.h"


string line;
void await(){
    for (int i = 0; i < INT_MAX; i++){
            
    }

}
vector<string >   master_data = {};
vector<string >   file_data = {};

void data1() {
    ifstream readfile("SocketBasics.txt");
    if (readfile.is_open())
    {
        while (getline(readfile, line))
        {
            file_data.push_back(line);
        }
        cout << "SocketBasics.txt is " << file_data.size() << " lines Long." << endl;
        readfile.close();
        cout << "readfile closed" << endl;

        for(int i = 0; i < file_data.size(); i++ ){
            
        }
    }
    else
    {
        printf("Failed to read file (1)");
        exit(1);
    }
}

void data2(){
    ifstream readfile("TCP-IP Architecture1.txt");
    if (readfile.is_open())
    {
        while (getline(readfile, line))
        {
            file_data.push_back(line);
        }
        cout << "TCP-IP Architecture1.txt is " << file_data.size() << " lines Long." << endl;
        readfile.close();
        cout << "readfile closed" << endl;
    }
    else
    {
        printf("Failed to read file (2)");
        exit(1);
    }
}

void read()
{

}