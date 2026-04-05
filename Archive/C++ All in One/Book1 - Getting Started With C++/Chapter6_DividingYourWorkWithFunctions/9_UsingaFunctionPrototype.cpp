#include <iostream>


using namespace std;

// Function prototype

void PrintName(string first, string last);

int main(){
    PrintName("Bruce", "Wanye");
    return 0;
}

void PrintName(string first, string last){
    string fullName = last + ", " + first;
    cout << "The result is: " << fullName << endl;
}