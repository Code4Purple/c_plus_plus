#include <iostream>
#include <string>

using namespace std;

string UserName(){
    return "John Doe";
}

int main(){
    cout << "The UserName() = " << UserName() << endl;
    return 0;
}