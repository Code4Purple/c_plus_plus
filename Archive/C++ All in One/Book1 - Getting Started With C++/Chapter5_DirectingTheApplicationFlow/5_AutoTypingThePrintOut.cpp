#include <iostream>

using namespace std;


int main(){

    string hello = "Hello, World!";
    int values[] = {1, 2, 3, 4, 5, 0};

    for (int i = 0; auto c = hello[i]; i++){
        cout << c << endl;
    }
    
    cout << endl;

    for (int i = 0; auto v = values[i]; i++){
        cout << v << endl;
    }
}