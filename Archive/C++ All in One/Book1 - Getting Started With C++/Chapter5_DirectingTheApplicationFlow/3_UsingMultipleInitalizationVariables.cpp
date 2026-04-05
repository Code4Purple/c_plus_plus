#include <iostream>

using namespace std;


int main(){

    string a = "Hello, World!";
    string b = "1234567890110";

    /*for (int i = 0, j = 0; i < a.length(), j < b.length(); i++, j++){
        cout << a[i] << " ,";
    }*/

    for (int i = 0, j = 0; i < 5; i++ , j += 2){
        cout << a[i] << b[j] << " ,";
    }

    return 0;
}