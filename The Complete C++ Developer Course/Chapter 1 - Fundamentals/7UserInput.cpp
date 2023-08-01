#include "include.h"

int main(){
    

    int age;
    string fullName;

    printf("\n      User Input\n");


    cout << "Please Enter your name: " << endl;
    getline(cin, fullName); // allows you to get all the data including spaces within the input

    cout << "Please Enter your age: " << endl;
    cin >> age;
    

    cout << "Your name is " << fullName << " and you are " << age << " years old.\n";
    
    return 0;
}