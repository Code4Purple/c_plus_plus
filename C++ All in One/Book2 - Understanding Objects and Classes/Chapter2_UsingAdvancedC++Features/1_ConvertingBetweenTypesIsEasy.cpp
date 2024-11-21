#include <iostream>
#include <sstream> // for istringstream, ostringstream

using namespace std;

int StringToNumber(string MyString){
    // Convert string to number
    istringstream converter(MyString);
    // Contains the operation results
    int Result;

    // Perform the conversion and return the result
    converter >> Result;
    return Result;
}

string NumberToString(int Number){
    // Convert number to string
    ostringstream converter;
    // Contains the operation results
    string Result;

    // Perform the conversion and return the result
    converter << Number;
    Result = converter.str();
    return Result;
}

int main(){
    // Contains the theoretical number of kids
    float NumberOfKids;
    // Contains the actual number of kids
    int ActualKids;

    /* You can theoretically have 225 kids, but in the real world, you can't.
       Convert the theoretical number of kids to a real number by truncating the 
       NumberOfKids and display the results. */

    NumberOfKids = 2.5;
    ActualKids = (int)NumberOfKids;
    cout << "Float to Integer" << "\tTruncated" << endl;
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    // Perform the same task as before but use a theoretical 2.1 kids this time
    NumberOfKids = 2.1;
    ActualKids = (int)NumberOfKids;
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    // This time we'll use 2.9 kids.
    NumberOfKids = 2.9;
    ActualKids = (int)NumberOfKids;
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    // This process rounds the number, instead of truncating it.
    // We do it using the same three numbers as before.
    NumberOfKids = 2.5;
    ActualKids = (int)(NumberOfKids + 0.5);
    cout << "Float to Integer" << "\tRounded" << endl;
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    NumberOfKids = 2.1;
    ActualKids = (int)(NumberOfKids + 0.5);
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    NumberOfKids = 2.9;
    ActualKids = (int)(NumberOfKids + 0.5);
    cout << NumberOfKids << "\t\t\t" << ActualKids << endl;

    // In this case, use the StringToNumber() function to perform the conversion.
    cout << "\nString to Number" << endl;
    int x = StringToNumber("12345") * 50;
    cout << x << endl;

    // In this case, use the NumberToString() function to perform the conversion.
    cout << "\nNumber to String" << endl;
    string myString = NumberToString(80525323);
    cout << myString << endl;
    return 0;
}