#include <iostream>
#include <string>

using namespace std;

void SetUserName(string name){
    cout << "Setting username to: " << name << endl;
}   

int main(){
    SetUserName("Batman");
    return 0;
}