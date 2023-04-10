#include <iostream>

using namespace std;

/*
    Structures.cpp topics
        Creating Structures
        Access Members
        One Structure with Multiple Variables
        Named Structures

*/

int main()
{
    // Creating Structure
    struct
    {                    // Structure declaration
        int myNum;       // Member (int variable)
        string myString; // Member (string variable)
    } myStructure;       // Structure variable

    // Access Structure Members

    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << endl;
    cout << "My Structure int value    :  " << myStructure.myNum << "\n";
    cout << "My Structure string value :  " << myStructure.myString << "\n";

    // Multiple Variables
    struct
    {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << endl;
    cout << "Printing out myCar1 values : " << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << "Printing out myCar2 values : " << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    // Named Structures
    // Declare a structure named "car"
    struct car // this can be outside of the main() and called within the main()
    {
        string brand;
        string model;
        int year;
    };

    // Create a car structure and store it in myCar1;
    car myCar3;
    myCar3.brand = "BMW";
    myCar3.model = "X5";
    myCar3.year = 1999;

    // Create another car structure and store it in myCar2;
    car myCar4;
    myCar4.brand = "Ford";
    myCar4.model = "Mustang";
    myCar4.year = 1969;

    // Print the structure members
    cout << endl;
    cout << "Printing out named struct car - > myCar3 outputs : " << myCar3.brand << " " << myCar3.model << " " << myCar3.year << "\n";
    cout << "Printing out named struct car - > myCar4 outputs : " << myCar4.brand << " " << myCar4.model << " " << myCar4.year << "\n";

    return 0;
}