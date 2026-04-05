#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


void readFile(string file)
{
    string filename = file;
    ifstream output;
    output.open(filename);

    if (output.is_open())
    {
        string line;
        while (getline(output, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "Could not open file: " << filename << endl;
    }

    output.close();
}

void writeFile(string file, vector<string> data){
    string filename = file;
    ofstream input;
    input.open(filename);

    if (input.is_open())
    {
        for (int i = 0; i < data.size(); i++)
        {
            input << data[i] << endl;
        }
    }
    else
    {
        cout << "Could not open file: " << filename << endl;
    }

    input.close();
}

vector<string> createVector(string textLine, int repeat)
{
    vector<string> repeatedData;
    //repeat = repeat - 1;
    for (int i = 0; i < repeat; i++)
    {
        repeatedData.push_back(textLine + "- " + to_string(i + 1));
    }
    return repeatedData;
}

int main()
{
    cout << "Welcome to Class Management System" << endl;
    cout << "We only add the Words to the file and count the number of lines in the file." << endl;
    cout << "Please enter the file name: ";
    string filename;
    cin >> filename;
    cin.ignore(); // Ignore the newline character left in the buffer

    cout << "\nPlease enter the text you want to add to the file: ";
    string textLine;
    getline(cin, textLine);

    cout << "\nPlease enter how many times you want the line to be repeated: ";
    int repeat;
    cin >> repeat;

    writeFile(filename, createVector(textLine, repeat));

    cout << "\nWould you like to read the file? (Y/N): ";
    char choice;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
        readFile(filename);
    }
    
    cout << "Thank you for using the Class Management System" << endl;
    return 0;
}


