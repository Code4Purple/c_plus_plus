#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::ifstream;
using std::string;

int main()
{

    ifstream input("info.txt"); // open the text document
    string line;
    // int lineCounter;

    string mail;

    cout << "family or friends: ";
    cin >> mail;

    int compareResult;

    if (input.is_open())
    {

        while (getline(input, line)) // loop through input file line by line
        {

            if (line.length() > 0) // skip empty lines
            {
                compareResult = line.compare(mail);
                if (mail == "family")
                {
                    if (compareResult == 0)
                    {
                        if (line.length() >= 7)
                        {
                            cin.peek();
                            cout << line << endl;
                        }
                    }
                }
                if (mail == "friends")
                {
                    if (compareResult == 0)
                    {
                        cout << mail << "file " << endl;
                    };
                }
            }
        }

        input.close();
    }

    return 0;
}