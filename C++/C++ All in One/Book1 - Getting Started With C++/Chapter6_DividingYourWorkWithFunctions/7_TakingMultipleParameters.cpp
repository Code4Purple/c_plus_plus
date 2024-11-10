#include <iostream>
#include <string>

using namespace std;

string lastToFirst(string first, string last){
    return last + ", " + first;
}

int main(){
    cout << "The result is: " << lastToFirst("John", "Doe") << endl;
    return 0;
}