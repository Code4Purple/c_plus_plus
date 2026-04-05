#include <iostream>

using namespace std;

void Combine(string first, string last){
    cout << first << " " << last << endl;
}

void Combine(int first, int last){
    int sum = first + last;
    cout << first << " + " << last << " = " << sum << endl;
}

int main(){
    Combine("John", "Doe");
    Combine(5, 10);
    return 0;
}