#include <iostream>

using namespace std;

int main(){
    string OriginalString = "Hello, World!";
    const string &StringCopy(OriginalString);
    OriginalString = "Goodbye, World!";
    cout << OriginalString << endl;
    cout << StringCopy << endl;
    return 0;
}