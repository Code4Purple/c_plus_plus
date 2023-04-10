#include <iostream>

using namespace std;

/*
    Functions Topics
        Basic Functions
    | Note | Functions can be defined after the main() loop but need to be declared before the main() loop.
*/

// Creat a function
void basicFunction() // void functions do not require a return in value
{
    cout << endl;
    cout << "basicFunction output -> "
         << "I just got executed!" << endl;
    cout << endl;
};
// Function declared
void myStringFunction(string firstName);

void countTo(int i)
{
    cout << "Counting Int Fucntion" << endl;
    for (int p = 0; p < i + 1; p++)
    {
        cout << p << " ";
    }
    cout << endl;
    printf("Counted to %d.\n", i);
    cout << endl;
};

// Defualt Function
void defaultFunction(string country = "USA")
{
    cout << country << " " << endl;
};

// Multiple Parameters
void muilipleFun(string name, int age)
{
    cout << endl;
    cout << "Muiliply Parameters Function ---> ";
    cout << name << " is " << age << "." << endl;
};

// return functions
int signalFunctions(int x)
{
    return x + 1;
};

int doubleFunction(int x, int y)
{
    return x + y;
};

int main()
{
    basicFunction();            // call the function -> basicFunction to get executed.
    myStringFunction("Bennie"); // call the fucntion with a pass value for the string
    countTo(100);               // Setting the int value3
    defaultFunction("Canada");  // Default Function with a call pass
    defaultFunction();          // defaulting to USA since no call was pass into it
    muilipleFun("Bennie", 24);  // Calling the muiliple input function
    cout << endl;
    cout << "Signal Input - Return Function --> " << signalFunctions(5) << endl;   // 5 + 1      Singal Input - Return Function
    cout << "Double Input - Return Fucntion --> " << doubleFunction(5, 1) << endl; // x + y = 6  Double Input - Return Function

    return 0;
}

// Defining the function
void myStringFunction(string firstName)
{
    cout << "Function passing a string value for it's parameter. ---> " << firstName << " Kowalski." << endl;
    cout << endl;
};

// https://www.w3schools.com/cpp/cpp_oop.asp