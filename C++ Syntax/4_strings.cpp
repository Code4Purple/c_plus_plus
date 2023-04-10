#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
        Strings
            needs the the #include <string> input

    */

    // Basic string
    string basic = "Hello World!";
    cout << endl;
    cout << "Basic String : " << basic << endl;

    // String Concatenation
    string sum = " Summoner!";
    string full = basic + sum;
    cout << "String Concatenation : " << full << endl;

    // Append a String
    string feel = " Feel the Evil Power!";
    string full2 = full.append(feel);
    cout << "String Append() Method : " << full2 << endl;

    // String Length - length()
    string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Using .length() -> How long are the ABCs? : " << abc.length() << endl;

    // String Length - size()
    cout << "Using .size()   -> How long are the ABCs? : " << abc.size() << endl;

    // Acessing the String
    string myHello = "Hello";
    cout << "Accessing the 1st Letter of " << myHello << ". 1st letter is " << myHello[0] << endl;

    // changing a letter within the string
    cout << "Changing the 1st Letter of " << myHello;
    myHello[0] = 'J';
    cout << ". Hello became " << myHello << "." << endl;

    // Escape Characters
    // \n - new line & \t - tab
    myHello[0] = 'H';
    cout << "Escape Character \" \" : "
         << "\"" << myHello << "\"" << endl; // Another use : cout << "\""Hello\"" << endl; = "Hello"
    cout << "Escape Character \' \' : "
         << "\'" << myHello << "\'" << endl; // Another Use : cout << "\'Hello\'" << endl; = 'Hello'
    cout << "Escape Character \\ \\ : "
         << "\\" << myHello << "\\" << endl; // Another Use : cout << "\\Hello\\" << endl; = \Hello

    // User input with Strings
    // Working without spaces
    /*string firstName;
    cout << "What is you first name : " << endl;
    cin >> firstName;
    cout << "Your first name is " << firstName << "." << endl;
    */

    // Working with spaces
    string fullName;
    cout << "What is your full name? ";
    getline(cin, fullName);
    cout << "Your full name is : " << fullName << endl;
}
