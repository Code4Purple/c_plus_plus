#include <iostream>

using namespace std;

int main(){
    
    string text;
    string *ptrToString;

    text = "Hello, World!";
    ptrToString = &text;

    cout << "The value of the text is: " << text << endl;
    return 0;
}